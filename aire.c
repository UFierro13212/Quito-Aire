void mostrarResultados(Zona zonas[]) {
    int i;

    printf("\n========== REPORTE QUITOAIRE ==========\n");

    for (i = 0; i < ZONAS; i++) {
        printf("\nZona: %s\n", zonas[i].nombre);
        printf("PM2.5: %.2f\n", zonas[i].pm25);
        printf("CO2: %.2f\n", zonas[i].co2);
        printf("Temperatura: %.2f\n", zonas[i].temperatura);
        printf("Humedad: %.2f\n", zonas[i].humedad);
        printf("Viento: %.2f\n", zonas[i].viento);
        printf("Prediccion 24h: %.2f\n", zonas[i].prediccion);
        printf("Alerta: %s\n", zonas[i].alerta);
        printf("Medida: %s\n", zonas[i].medida);
    }
}

void guardarArchivo(Zona zonas[]) {
    FILE *archivo;
    int i;

    archivo = fopen("reporte_quitoaire.txt", "w");

    if (archivo == NULL) {
        printf("Error al crear el archivo.\n");
        return;
    }

    fprintf(archivo, "========== REPORTE QUITOAIRE ==========\n");

    for (i = 0; i < ZONAS; i++) {
        fprintf(archivo, "\nZona: %s\n", zonas[i].nombre);
        fprintf(archivo, "PM2.5: %.2f\n", zonas[i].pm25);
        fprintf(archivo, "CO2: %.2f\n", zonas[i].co2);
        fprintf(archivo, "Temperatura: %.2f\n", zonas[i].temperatura);
        fprintf(archivo, "Humedad: %.2f\n", zonas[i].humedad);
        fprintf(archivo, "Viento: %.2f\n", zonas[i].viento);
        fprintf(archivo, "Prediccion 24h: %.2f\n", zonas[i].prediccion);
        fprintf(archivo, "Alerta: %s\n", zonas[i].alerta);
        fprintf(archivo, "Medida: %s\n", zonas[i].medida);
    }

    fclose(archivo);
}