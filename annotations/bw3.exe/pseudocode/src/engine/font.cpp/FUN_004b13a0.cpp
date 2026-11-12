// Name: engine_font.cpp_FUN_004b13a0
// Address: 004b13a0
// Address Range: [[004b13a0, 004b145a]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004b13a0(int param_1)

#include "nocturne.h"

void engine_font_cpp_FUN_004b13a0(int param_1)

{
  if (*(int *)(param_1 + 0x4210) == 0) {
    if ((0 < *(int *)(param_1 + 0x1dd8)) && (0 < *(int *)(param_1 + 0x1ddc))) {
      engine_mini3d_cpp_FUN_004ed980(param_1 + 0x1db4);
      engine_mini3d_cpp_FUN_004edad0(0);
      engine_mini3d_cpp_FUN_004f02b0();
      engine_mini3d_cpp_FUN_004edc90();
      engine_mini3d_cpp_FUN_004edca0();
      engine_mini3d_cpp_FUN_004ee5b0
                (*(uint *)(param_1 + 0x1dd0),*(uint *)(param_1 + 0x1dd8),
                 *(uint *)(param_1 + 0x1dd4),*(int *)(param_1 + 0x1ddc) / 3);
      engine_mini3d_cpp_FUN_004edcb0();
      engine_mini3d_cpp_FUN_004edad0(0xc0);
    }
    *(uint *)(param_1 + 0x1ddc) = 0;
    *(uint *)(param_1 + 0x1dd8) = 0;
    return;
  }
  engine_palette_cpp_FUN_00509d90(*(uint *)(param_1 + 0x4214));
  return;
}
