#pragma once

#include "engine/fwd.h"

namespace nocturne::wincore {

engine::CTextureCache *initTextureCache();
void freeTextureCache();
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
void restoreVideoAndMinimizeWindow();
void videoRestore();
void stubFunction();

} // namespace nocturne::wincore
