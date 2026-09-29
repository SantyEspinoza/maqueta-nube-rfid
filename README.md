# La Nube RFID

Maqueta educativa para niños de primaria que simula el uso de la nube y el almacenamiento seguro en la nube mediante RFID.

## Descripción

Los alumnos guardan un papel dentro de una caja ("La Nube") protegida con RFID. Solo el llavero autorizado puede desbloquearla, enseñando de forma tangible cómo funciona el acceso seguro a la nube.

## Tecnologías

- Arduino Uno
- Lector RFID RC522
- Servomotor Hitec HS-311
- Cajas MDF (kits de robótica)

## Estructura

- `codigo/la_nube_rfid.ino` — Código de Arduino
- `media/fotos/` — Fotos de la maqueta
- `media/video-demo.mp4` — Video demostrativo

## Funcionamiento

1. El usuario acerca el llavero RFID al lector.
2. El Arduino valida el UID.
3. Si es autorizado, el servo gira y abre la puerta.
4. Al volver a acercar, se cierra.

## Estado

Funcional (con laptop vía USB)

**No conectar a corriente de pared:** el servo consume más corriente de la que el Arduino puede regular y daña la comunicación SPI.

## Aprendizajes

- Diagnóstico de fallos eléctricos (caída de voltaje, puerto COM bloqueado).
- Corrección de código en librería MFRC522.
- Protección de hardware en sistemas embebidos.
- Diseño de actividad pedagógica para niños.


## Videos

- [Demostración 1](https://youtube.com/shorts/_DwTXYbzKS8)
- [Demostración 2](https://youtube.com/shorts/dPAWhla2VqM)

## Fotos

Las fotos de la maqueta están en `media/fotos/`.




