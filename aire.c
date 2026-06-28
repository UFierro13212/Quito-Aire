int main() {
    Zona zonas[ZONAS];

    printf("===== SISTEMA QUITOAIRE =====\n");

    ingresarDatos(zonas);
    calcularPrediccion(zonas);
    generarAlertas(zonas);
    mostrarResultados(zonas);
    guardarArchivo(zonas);

    printf("\nReporte guardado correctamente en reporte_quitoaire.txt\n");

    return 0;
}