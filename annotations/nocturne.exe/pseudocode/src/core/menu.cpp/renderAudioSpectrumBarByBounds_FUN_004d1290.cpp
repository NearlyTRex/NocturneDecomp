// Name: core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_004d1290
// Address: 004d1290
// Address Range: [[004d1290, 004d12ae]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_renderAudioSpectrumBarByBounds_FUN_004d1290(int x_center,int y_bottom,int y_top)

#include "nocturne.h"

void __cdecl core_menu_cpp_renderAudioSpectrumBarByBounds_FUN_004d1290(int x_center,int y_bottom,int y_top)

{
  core_menu_cpp_renderAudioSpectrumBar_FUN_004cf2b0(x_center,y_top,(y_top - y_bottom) + 1);
  return;
}
