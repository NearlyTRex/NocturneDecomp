// Name: core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_00511e00
// Address: 00511e00
// Address Range: [[00511e00, 00511e1e]]
// Convention: __cdecl
// Signature: void core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_00511e00(int x_center, int y_bottom, int y_top)

#include "nocturne.h"

void __cdecl
core_menu_cpp_renderAudioSpectrumBarByBounds_FUN_00511e00(int x_center,int y_bottom,int y_top)

{
  core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70(x_center,y_top,(y_top - y_bottom) + 1);
  return;
}
