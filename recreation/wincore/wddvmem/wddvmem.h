#pragma once

namespace nocturne::wincore {

void convertPaletteToDirectColor();
int initializeGraphicsSystem(int width, int height);
void cleanupGraphicsSystem();
int setScreenResolution(int width, int height, int bits_per_pixel);
void resetGraphicsSystem();
void reinitializeGraphicsSystem();
void openScreenDevice();
void closeScreenDevice();
void setupColorPalette();
void swapBuffers();

} // namespace nocturne::wincore
