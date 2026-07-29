// Name: engine_matrix.c_projectToScreen_FUN_004cea50
// Address: 004cea50
// Address Range: [[004cea50, 004ceada]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_projectToScreen_FUN_004cea50(int input_value)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_matrix_c_projectToScreen_FUN_004cea50(int input_value)

{
  byte bVar1;
  double dVar2;
  int aiStackY_1038 [1017];
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  uint uStack_44;
  int iStack_1c;
  int iStack_18;
  
  bVar1 = 0;
  iStack_4c = input_value;
  uStack_50 = 0;
  iStack_48 = 0;
  engine_matrix_c_transformWorldToView_FUN_004cd0e0(&stack0xffffffb0);
  uStack_50 = uStack_44;
  (&stack0xffffffb4)[(uint)bVar1 * 0xfffffffe] =
       *(uint *)(&stack0xffffffc0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (0 < iStack_48) {
    iStack_1c = input_value;
    iStack_18 = iStack_48;
    dVar2 = round
                      (((-(double)input_value * (double)_DAT_01c00c4c) / (double)iStack_48) /
                       (double)DAT_005b7648);
    return (int)ROUND(dVar2);
  }
  return -1;
}
