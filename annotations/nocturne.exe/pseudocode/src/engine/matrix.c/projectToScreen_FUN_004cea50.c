// Name: engine_matrix.c_projectToScreen_FUN_004cea50
// Address: 004cea50
// Address Range: [[004cea50, 004ceada]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_projectToScreen_FUN_004cea50(int input_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_matrix_c_projectToScreen_FUN_004cea50(int input_value)

{
  byte bVar1;
  double dVar2;
  int aiStackY_1038 [1017];
  CVector3i CStack_50;
  CVector3i aCStack_44 [3];
  int iStack_1c;
  int iStack_18;
  
  bVar1 = 0;
  CStack_50.y = input_value;
  CStack_50.x = 0;
  CStack_50.z = 0;
  engine_matrix_c_transformWorldToView_FUN_004cd0e0(&CStack_50,aCStack_44);
  CStack_50.x = aCStack_44[0].x;
  *(uint *)((int)aCStack_44 + (uint)bVar1 * -8 + -8) =
       *(uint *)((int)aCStack_44 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)aCStack_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + -4) =
       *(uint *)((int)aCStack_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (0 < CStack_50.z) {
    iStack_1c = input_value;
    iStack_18 = CStack_50.z;
    dVar2 = round
                      (((-(double)input_value * (double)_DAT_01c00c4c) / (double)CStack_50.z) /
                       (double)DAT_005b7648);
    return (int)ROUND(dVar2);
  }
  return -1;
}
