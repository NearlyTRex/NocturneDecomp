// Name: cockpit_drawsurf.cpp_CDrawSurface_setColorMagenta_FUN_00487430
// Address: 00487430
// Address Range: [[00487430, 00487444]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_setColorMagenta_FUN_00487430(void)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorMagenta_FUN_00487430(void)

{
  cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0xff,0,0xff);
  return;
}


// Assembly code:
// 00487430: PUSH 0xff
//   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorMagenta_FUN_00487430
// 00487435: PUSH 0x0
// 00487437: PUSH 0xff
// 0048743c: CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
//   XREF to: 00487220 (UNCONDITIONAL_CALL)
// 00487441: ADD ESP,0xc
// 00487444: RET
