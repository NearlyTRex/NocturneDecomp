// Name: core_enemy.cpp_FUN_004a9930
// Address: 004a9930
// Address Range: [[004a9930, 004a99c7]]
// Convention: unknown
// Signature: undefined core_enemy.cpp_FUN_004a9930()

#include "nocturne.h"

uint core_enemy_cpp_FUN_004a9930(void)

{
  float fVar1;
  uint extraout_EDX;
  double dVar2;
  int in_stack_00000004;
  int in_stack_00000010;
  
  if (*(int *)(in_stack_00000004 + 0xbe3c) != 0) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0xbe3c) + 0x154) + 0x118))();
    fVar1 = *(float *)(in_stack_00000010 + 4);
    if (0.0 < fVar1) {
      dVar2 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,
                                          CONCAT22 /* combine 2-byte values */((short)((uint)in_stack_00000010 >> 0x10),
                                                   (ushort)(0.0 < fVar1) << 8 |
                                                   (ushort)NAN(fVar1) << 10 |
                                                   (ushort)(fVar1 == 0.0) << 0xe)));
      core_gore_cpp_FUN_004edbb0(g_CGorePtr,(int)((ulonglong)dVar2 >> 0x20));
      return 1;
    }
  }
  return 0;
}
