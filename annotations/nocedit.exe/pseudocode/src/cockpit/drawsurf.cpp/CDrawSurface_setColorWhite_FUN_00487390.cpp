// Name: cockpit_drawsurf.cpp_CDrawSurface_setColorWhite_FUN_00487390
// Address: 00487390
// Address Range: [[00487390, 004873a7]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_setColorWhite_FUN_00487390(void)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_setColorWhite_FUN_00487390(void)

{
  cockpit_drawsurf_cpp_CDrawSurface_setColorRGB_FUN_00487220(0xff,0xff,0xff);
  return;
}


// Assembly code:
// 00487390: PUSH 0xff
//   Label: cockpit_drawsurf.cpp_CDrawSurface_setColorWhite_FUN_00487390
// 00487395: PUSH 0xff
// 0048739a: PUSH 0xff
// 0048739f: CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220
//   XREF to: 00487220 (UNCONDITIONAL_CALL)
// 004873a4: ADD ESP,0xc
// 004873a7: RET
