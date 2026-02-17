// Name: core_game.cpp_drawHealthBar_FUN_004d7fa0
// Address: 004d7fa0
// Address Range: [[004d7fa0, 004d8039]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_drawHealthBar_FUN_004d7fa0(void)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_game_cpp_drawHealthBar_FUN_004d7fa0(void)

{
  int iVar1;
  int color;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  float in_stack_00000014;
  
  color = 2;
  if (in_stack_00000014 < (float)0.59999999999999998) {
    color = 0xfb;
  }
  if (in_stack_00000014 < (float)0.34999999999999998) {
    color = 1;
  }
  engine_2d_c_fillRectWithBorder_FUN_00403200
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010,0,0);
  iVar1 = (int)ROUND(ROUND((float)((in_stack_0000000c - in_stack_00000004) + 1) * in_stack_00000014)
                    );
  if (iVar1 < 1) {
    return;
  }
  engine_2d_c_fillRectColor_FUN_00403170
            (in_stack_00000004,in_stack_00000008,in_stack_00000004 + iVar1,in_stack_00000010,color);
  return;
}
