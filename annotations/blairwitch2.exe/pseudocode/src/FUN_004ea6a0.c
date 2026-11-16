// Name: FUN_004ea6a0
// Address: 004ea6a0
// Address Range: [[004ea6a0, 004ea72a]]
// Convention: unknown
// Signature: int FUN_004ea6a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ea6a0(int param_1)

{
  byte bVar1;
  double dVar2;
  int aiStackY_1038 [1017];
  CVector3i CStack_50;
  CVector3i aCStack_44 [3];
  int iStack_1c;
  int iStack_18;
  
  bVar1 = 0;
  CStack_50.y = param_1;
  CStack_50.x = 0;
  CStack_50.z = 0;
  engine_matrix_c_transformWorldToView_FUN_004e8d30(&CStack_50,aCStack_44);
  CStack_50.x = aCStack_44[0].x;
  *(uint *)((int)aCStack_44 + (uint)bVar1 * -8 + -8) =
       *(uint *)((int)aCStack_44 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)aCStack_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + -4) =
       *(uint *)((int)aCStack_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (0 < CStack_50.z) {
    iStack_1c = param_1;
    iStack_18 = CStack_50.z;
    dVar2 = round
                      (((-(double)param_1 * (double)_DAT_01c35e3c) / (double)CStack_50.z) /
                       (double)DAT_006141e4);
    return (int)ROUND(dVar2);
  }
  return -1;
}
