// Name: cockpit_drawsurf.cpp_CDrawSurface_setColorGray_FUN_00487480
// Address: 00487480
// Address Range: [[00487480, 00487497]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_setColorGray_FUN_00487480(void)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorGray_FUN_00487480(void)

{
  cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0x80,0x80,0x80);
  return;
}


// Assembly code:
// 00487480: PUSH 0x80
//   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorGray_FUN_00487480
// 00487485: PUSH 0x80
// 0048748a: PUSH 0x80
// 0048748f: CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
//   XREF to: 00487220 (UNCONDITIONAL_CALL)
// 00487494: ADD ESP,0xc
// 00487497: RET
