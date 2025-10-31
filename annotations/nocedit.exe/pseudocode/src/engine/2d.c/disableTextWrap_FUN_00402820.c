// Name: engine_2d.c_disableTextWrap_FUN_00402820
// Address: 00402820
// Address Range: [[00402820, 0040282a]]
// Convention: __cdecl
// Signature: void engine_2d.c_disableTextWrap_FUN_00402820(void)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 004893bd [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_setTextWrapEnabled_FUN_00402800

#include "nocturne.h"

void __cdecl engine_2d_c_disableTextWrap_FUN_00402820(void)

{
  engine_2d_c_setTextWrapEnabled_FUN_00402800(0);
  return;
}


// Assembly code:
// 00402820: PUSH 0x0
//   Label: engine_2d.c_disableTextWrap_FUN_00402820
// 00402822: CALL engine_2d.c_setTextWrapEnabled_FUN_00402800
//   XREF to: 00402800 (UNCONDITIONAL_CALL)
// 00402827: ADD ESP,0x4
// 0040282a: RET
