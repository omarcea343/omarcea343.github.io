/*El departamento de contaduria de desea calcular los datos del mex, se deben capturar los datos de N ciudades que tienen N tiendas con N trabajadores,
el sueldo semanal de los vendedores tiene los siguientes cargos de impuesto: se les descuenta 5% de su sueldo si ganan entre 0 y 150 pesos. Se les descuenta
7% si ganan mas de 150 pero menos de 300, y 9% si ganan mas de 300 pero menos de 450. Ademas ganan una prima del 25% sobre el total de lo que vendieron solo 
si fueron el vendedor que vendio mas en cantidad de dinero y del 10% si es el que vendio mas en numero de articulos, esta prima se calcula basada en
el sueldo bruto antes de impuesto.

El sueldo de los vendedores esta dado por: horas trabajadoas * sueldo por hora.
El sueldo por hora es el mismo para todos los vendedores se debe pedir.

NO SE DEBE DE PEDIR EL NUMERO DE CIUDADES, TIENDAS Y TRABAJADORES TAMPOCO SE DEBE DE PREDEFINIR. 
DETERMINE LA CONDICION DE TERMINO PARA LA PETICION DE ESTA INFORMACION SE DEBE DE ELEGIR MEDIANTE UN VALOR ENTERO Y ESCRIBALA EN UN COMENTARIO.

Se desea saber: 
- Ganancia total de la empresa 
- Ganancia total de la ciudad 
- Ganancia total por tienda 
- Sueldo de cada empleado 
- Vendedor (nombre) y prima pagada por mayor dinero obtenido 
- Vendedor (nombre) y prima pagada por cantidad de ventas
*/

#include <stdio.h>
#include <windows.h>

int main() {
	
	int sueldo_hora, ganacia_empresa, ganancia_ciudad, ganancia_tienda, sueldo_empleado, ventas_vendedor, impuestos1, impuestos2, impuestos3, sueldo;
	int id_ciudad, id_tienda, id_trabajador, horas_trabajadas, sueldo_neto, sueldo_bruto, contador_ventas;
	char vendedor[20];
	float bono1, bono2;
	
	bono1 = ventas_vendedor * 0.25;
	bono2 = sueldo_bruto * 0.10;
	
	impuestos1 = sueldo_bruto * 0.05;
	impuestos2 = sueldo_bruto * 0.07;
	impuestos3 = sueldo_bruto * 0.09;
	
	printf("Ingresa el Sueldo Hora \n");
	scanf("%d",&sueldo_hora);
	
	do{
		printf("Dame el codigo de la ciudad: \n");
		scanf("%d",&id_ciudad);
		do{
			printf("Dame el codigo de la tienda: \n");+
			scanf("%d",&id_tienda);
			do{
				printf("Dame el codigo del trabajador \n");
				scanf("%d",&id_trabajador);
				printf("¿Cuantas horas trabajo? \n");
				scanf("%d",&horas_trabajadas);
				sueldo = horas_trabajadas * sueldo_hora;
				if(sueldo <= 1500){
					sueldo_neto = sueldo - impuestos1;
				}
				else if(sueldo > 1500 && sueldo <= 3000){
					sueldo_neto = sueldo - impuestos2;
				}
				else if(sueldo > 3000 && sueldo <= 4500){
					sueldo_neto = sueldo - impuestos3;
				}
				printf("El sueldo del trabajador es: %d \n", sueldo_neto);
				do{
					printf("Ingresala venta del vendedor: \n");
					scanf("%d",&ventas_vendedor);
					contador_ventas++;
					ganancia_tienda = ganancia_tienda + ventas_vendedor;
					
				} while(ventas_vendedor !=0);
				printf("El trabajador vendio %d \n",&contador_ventas-1);
				printf("Ganancia total del vendedor es: %d \n",&ganancia_tienda);
			} while(id_trabajador !=0);
		} while(id_trabajador !=0);
	} while(id_ciudad !=0);
	
	system ("pause");
	return 0;
}
