// Name: core_enemy.cpp_FUN_004a9880
// Address: 004a9880
// Address Range: [[004a9880, 004a9927]]
// Convention: unknown
// Signature: undefined core_enemy.cpp_FUN_004a9880()

#include "nocturne.h"

uint core_enemy_cpp_FUN_004a9880(void)

{
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar1;
  double dVar2;
  int in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_00000010;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  int iStack_14;
  
  if (*(int *)(in_stack_00000004 + 0xbe3c) != 0) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0xbe3c) + 0x154) + 0x114))();
    if (0.0 < *(float *)(in_stack_00000010 + 4)) {
      uStack_20 = *in_stack_00000008;
      fVar1 = (float10)*(float *)(in_stack_00000010 + 4) * (float10)1.2 *
              (float10)0.25;
      dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,in_stack_00000008[1]));
      uStack_1c = SUB84 /* extract 2-byte value */(dVar2,0);
      iStack_14 = (int)ROUND(fVar1);
      uStack_18 = in_stack_00000008[2];
      core_gore_cpp_FUN_004edbb0(&uStack_20,(int)((ulonglong)dVar2 >> 0x20));
      return 1;
    }
  }
  return 0;
}
