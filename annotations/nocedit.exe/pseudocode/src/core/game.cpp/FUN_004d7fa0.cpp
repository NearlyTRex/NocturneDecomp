// Name: core_game.cpp_FUN_004d7fa0
// Address: 004d7fa0
// Address Range: [[004d7fa0, 004d8039]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004d7fa0()

#include "nocturne.h"

double core_game_cpp_FUN_004d7fa0(void)

{
  int iVar1;
  uint extraout_EAX;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int color;
  float10 fVar2;
  double dVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  
  color = 2;
  if (in_stack_00000014 < (float)0.59999999999999998) {
    color = 0xfb;
  }
  if (in_stack_00000014 < (float)0.34999999999999998) {
    color = 1;
  }
  engine_2d_c_fillRectWithBorder_FUN_00403200
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010,0,0);
  iVar1 = (in_stack_00000010 - in_stack_00000004) + 1;
  fVar2 = (float10)iVar1 * (float10)in_stack_00000018;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,iVar1));
  if ((int)ROUND(fVar2) < 1) {
    return dVar3;
  }
  engine_2d_c_fillRectColor_FUN_00403170
            (in_stack_00000004,in_stack_00000008,in_stack_00000004 + (int)ROUND(fVar2),
             (int)in_stack_00000018,color);
  return (double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX);
}
