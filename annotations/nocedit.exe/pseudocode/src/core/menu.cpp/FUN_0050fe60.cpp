// Name: core_menu.cpp_FUN_0050fe60
// Address: 0050fe60
// Address Range: [[0050fe60, 0050fe69]]
// Convention: unknown
// Signature: undefined core_menu.cpp_FUN_0050fe60()
// Function calls:
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_texture.cpp_clearTextureCache_FUN_005dd8e0

#include "nocturne.h"

void core_menu_cpp_FUN_0050fe60(void)

{
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}


// Assembly code:
// 0050fe60: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: core_menu.cpp_FUN_0050fe60
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0050fe65: JMP 0x005dd8e0
//   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)
