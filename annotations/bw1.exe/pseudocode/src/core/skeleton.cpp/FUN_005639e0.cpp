// Name: FUN_005639e0
// Address: 005639e0
// Address Range: [[005639e0, 00563b69]]
// Convention: unknown
// Signature: void FUN_005639e0(int *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005639e0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x2a3;
    FUN_005030e0("CDeformableModel::allocLOD - invalid lod number %d",param_2);
  }
  FUN_005c0336(param_1[param_2 + 0x10]);
  FUN_005c0336(param_1[param_2 + 0x1f]);
  FUN_005c0336(param_1[param_2 + 0x24]);
  FUN_005c0336(param_1[param_2 + 0x29]);
  param_1[param_2 + 0xb] = param_3;
  param_1[param_2 + 0x15] = param_4;
  param_1[param_2 + 0x1a] = param_5;
  uVar1 = FUN_005c1268(param_1[param_2 + 0xb] * 0x34,param_1[param_2 + 0xb],&DAT_006058c0);
  iVar2 = FUN_005c267a(uVar1);
  param_1[param_2 + 0x10] = iVar2;
  iVar2 = FUN_005c1268((param_1[param_2 + 0x15] + param_1[param_2 + 0x1a]) * 0x12);
  param_1[param_2 + 0x1f] = iVar2;
  iVar2 = FUN_005c1268((param_1[param_2 + 0x15] + param_1[param_2 + 0x1a]) * 4);
  param_1[param_2 + 0x24] = iVar2;
  if (param_1[param_2 + 0x1a] < 1) {
    param_1[param_2 + 0x29] = 0;
  }
  else {
    iVar2 = FUN_005c1268(param_1[param_2 + 0x1a] * 4);
    param_1[param_2 + 0x29] = iVar2;
  }
  if ((((param_1[param_2 + 0x10] != 0) && (param_1[param_2 + 0x1f] != 0)) &&
      (param_1[param_2 + 0x24] != 0)) &&
     ((param_1[param_2 + 0x1a] < 1 || (param_1[param_2 + 0x29] != 0)))) {
    return;
  }
  FUN_005637d0(param_1);
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x2c7;
  FUN_005030e0("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d",param_1 + 0xb,param_1 + 0x15,param_1 + 0x1a);
  return;
}
