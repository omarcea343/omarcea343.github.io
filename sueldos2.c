#include <stdio.h>
#include <string.h>

int main() {
	/*
	El departamento de contaduria desea calcular los datos del mes,
	se deben de capturar los datos de N ciudades que tienen N tiendas
	con N trabajadores, el sueldo semanal de los vendedores tiene
	los siguientes cargos de impuesto: se les descuenta 5% de su
	sueldo si ganan entre 0 y 1500 pesos. Se les descuenta 7% si ganan
	más de 1500 pero menos de 3000, y 9% si ganan más de 3000. Ademas
	ganan una prima del 25% sobre el sueldo bruto[el total de lo que vendieron] solo si
	fueron el vendedor que vendió mas en cantidad de dinero y del 10%
	si es el que vendió mas en numero de articulos, esta prima se
	calcula basada en el sueldo bruto antes de impuesto.
	
	El sueldo de los vendedores esta dado por: horas trabajadas * sueldo por hora.
	El sueldo por hora es el mismo para todos los vendedores se debe de pedir.
	
	Se desea saber:
	[ ]Ganancia total de la empresa
	[ ]Ganancia total de la ciudad
	[ ]Ganancia total por tienda
	[ ]Sueldo de cada empleado
	[ ]Vendedor (nombre) y prima pagada por mayor dinero obtenido
	[ ]Vendedor (nombre) y prima pagada por cantidad de ventas
	*/
	
	// Empresa - INICIO
	int id_ciudad = -1, id_tienda = -1, salario_hora, ganancia_empresa, ganancia_ciudad,
		ganancia_tienda, venta, num_empleados;
	// Empresa - FIN
	
	// Informacion del Empleado - INICIO
	char nombre_empleado[20];
	int id_empleado = -1, horas_trabajadas, num_ventas, tot_ventas_empleado;
	float sueldo_empleado;
	// Informacion del Empleado - FIN
	
	// Ventas Maximas - INICIO
	char nombre_empleado_max_ventas[20];
	char nombre_empleado_max_articulos[20];
	int ventas_maximas, articulos_maximos;
	int id_empleado_max_ventas, id_empleado_max_articulos;
	int horas_trabajadas_max_ventas, horas_trabajadas_max_articulos;
	float prima_empleado_max_ventas, prima_empleado_max_articulos;
	// Ventas Maximas - FIN
	
	printf("Dame el salario por hora pagado a los trabajadores: \n");
	scanf("%d", &salario_hora);
	
	while (id_ciudad != 0) {
		printf("Dame el codigo de la ciudad \n");
		scanf("%d", &id_ciudad);
		
		while (id_tienda != 0) {
			printf("Dame el codigo de la tienda \n");
			scanf("%d", &id_tienda);
			
			while (id_empleado != 0) {
				
				printf("Dame el codigo del empleado \n");
				scanf("%d", &id_empleado);
				
				printf("Provee el nombre del trabajador: \n");
				scanf("%s", nombre_empleado);
				
				printf("Dame el numero de horas que trabajo \n");
				scanf("%d", &horas_trabajadas);
				num_empleados++;
				
				do {
					printf("Ingresa el valor de la venta: \n");
					scanf("%d", &venta);
					tot_ventas_empleado += venta;
					num_ventas++;
				} while (venta != 0);
				
				if (tot_ventas_empleado > ventas_maximas) {
					horas_trabajadas_max_ventas = horas_trabajadas;
					ventas_maximas = tot_ventas_empleado;
					strcpy(nombre_empleado_max_ventas, nombre_empleado);
					id_empleado_max_ventas = id_empleado;
				}
				
				if (num_ventas > articulos_maximos) {
					horas_trabajadas_max_articulos = horas_trabajadas;
					articulos_maximos = num_ventas;
					strcpy(nombre_empleado_max_articulos, nombre_empleado);
					id_empleado_max_articulos = id_empleado;
				}
				//Calcular el sueldo del empleado
				sueldo_empleado = (float) horas_trabajadas * salario_hora;
				if (sueldo_empleado <= 1500) {
					sueldo_empleado = sueldo_empleado
						- (sueldo_empleado * 0.05);
				} else if (sueldo_empleado > 1500 && sueldo_empleado <= 3000) {
					sueldo_empleado = sueldo_empleado
						- (sueldo_empleado * 0.07);
				} else if (sueldo_empleado > 3000) {
					sueldo_empleado = sueldo_empleado
						- (sueldo_empleado * 0.09);
				}
				printf("El sueldo del empleado es: %f \n", sueldo_empleado);
				ganancia_tienda += tot_ventas_empleado;
			}
			printf("La ganancia de la tienda %i es: %i \n", id_tienda,
				   ganancia_tienda);
			ganancia_ciudad += ganancia_tienda;
		}
		printf("La ganancia de la ciudad %i es: %i \n", id_ciudad,
			   ganancia_ciudad);
		ganancia_empresa += ganancia_ciudad;
	}
	printf("La ganancia de la empresa es: %i \n", ganancia_empresa);
	
	prima_empleado_max_ventas = 0.25 * horas_trabajadas_max_ventas
		* salario_hora;
	prima_empleado_max_articulos = 0.1 * horas_trabajadas_max_articulos
		* salario_hora;
	
	printf(
		   "El vendedor %s con el ID: %i , tuvo la mayor cantidad de dinero en ventas ganando una prima de: %f \n",
		   nombre_empleado_max_ventas, id_empleado_max_ventas,
		   prima_empleado_max_ventas);
	printf(
		   "El vendedor %s con el ID: %i , tuvo el mayor numero de articulosvendidos ganando una prima de: %f \n",
		   nombre_empleado_max_articulos, id_empleado_max_articulos,
		   prima_empleado_max_articulos);
	
	return 0;
}
