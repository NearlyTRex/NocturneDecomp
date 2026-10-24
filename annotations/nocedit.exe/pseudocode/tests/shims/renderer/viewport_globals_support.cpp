// =============================================================================
// VIEWPORT GLOBALS SUPPORT — the engine's projection scale and viewport stack
// =============================================================================
//
// As src/globals defines them, with the engine's initial values: the files that
// do pull in most of the game behind them.

#include "nocturne.h"

int g_ProjectionScale = 0x10000;
int g_ViewportStackIndex = {};
int g_ViewportStack_ProjectionScale[10] = {};
