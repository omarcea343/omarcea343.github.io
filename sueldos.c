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
	char vendedor[20];
	float bono1, bono2;
	
	bono1 = ventas_vendedor * 0.25;
	bono2 = sueldo_bruto * 0.10;
	
	impuestos1 = sueldo_bruto * 0.05;
	impuestos2 = sueldo_bruto * 0.07;
	impuestos3 = sueldo_bruto * 0.09;
	
	printf("Ingresa el Sueldo Hora");
	scanf("%d",&sueldo_hora);
	
	
	if(sueldo >= 0 && sueldo <= 1500){
		descuento1 = sueldo - impuestos1;
	}
	else if(sueldo > 1500 && sueldo <= 3000){
		descuento2 = sueldo - impuestos2;
	}
	else if(sueldo > 3000 && sueldo < 4500){
		descuento3 = sueldo - impuestos3;
	}
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
