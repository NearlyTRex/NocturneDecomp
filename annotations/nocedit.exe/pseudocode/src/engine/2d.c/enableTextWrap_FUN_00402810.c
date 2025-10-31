// Name: engine_2d.c_enableTextWrap_FUN_00402810
// Address: 00402810
// Address Range: [[00402810, 0040281a]]
// Convention: __cdecl
// Signature: void engine_2d.c_enableTextWrap_FUN_00402810(void)
// Function calls:
//   engine_2d.c_setTextWrapEnabled_FUN_00402800

#include "nocturne.h"

void __cdecl engine_2d_c_enableTextWrap_FUN_00402810(void)

{
  engine_2d_c_setTextWrapEnabled_FUN_00402800(1);
  return;
}


// Assembly code:
// 00402810: PUSH 0x1
//   Label: engine_2d.c_enableTextWrap_FUN_00402810
// 00402812: CALL engine_2d.c_setTextWrapEnabled_FUN_00402800
//   XREF to: 00402800 (UNCONDITIONAL_CALL)
// 00402817: ADD ESP,0x4
// 0040281a: RET
