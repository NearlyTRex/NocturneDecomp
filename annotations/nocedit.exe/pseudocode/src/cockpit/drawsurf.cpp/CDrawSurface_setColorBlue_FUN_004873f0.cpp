// Name: cockpit_drawsurf.cpp_CDrawSurface_setColorBlue_FUN_004873f0
// Address: 004873f0
// Address Range: [[004873f0, 00487401]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_setColorBlue_FUN_004873f0(void)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorBlue_FUN_004873f0(void)

{
  cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0,0,0xff);
  return;
}


// Assembly code:
// 004873f0: PUSH 0xff
//   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorBlue_FUN_004873f0
// 004873f5: PUSH 0x0
// 004873f7: PUSH 0x0
// 004873f9: CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
//   XREF to: 00487220 (UNCONDITIONAL_CALL)
// 004873fe: ADD ESP,0xc
// 00487401: RET
