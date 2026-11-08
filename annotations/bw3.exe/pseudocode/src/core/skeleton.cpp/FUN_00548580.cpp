// Name: FUN_00548580
// Address: 00548580
// Address Range: [[00548580, 00548709]]
// Convention: unknown
// Signature: void FUN_00548580(int *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00548580(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x29a;
    FUN_004e4330("CDeformableModel::allocLOD - invalid lod number %d",param_2);
  }
  FUN_005a30b6(param_1[param_2 + 0x10]);
  FUN_005a30b6(param_1[param_2 + 0x1f]);
  FUN_005a30b6(param_1[param_2 + 0x24]);
  FUN_005a30b6(param_1[param_2 + 0x29]);
  param_1[param_2 + 0xb] = param_3;
  param_1[param_2 + 0x15] = param_4;
  param_1[param_2 + 0x1a] = param_5;
  uVar1 = FUN_005a40df(param_1[param_2 + 0xb] * 0x34,param_1[param_2 + 0xb],&DAT_005e4790);
  iVar2 = FUN_005a556a(uVar1);
  param_1[param_2 + 0x10] = iVar2;
  iVar2 = FUN_005a40df((param_1[param_2 + 0x15] + param_1[param_2 + 0x1a]) * 0x12);
  param_1[param_2 + 0x1f] = iVar2;
  iVar2 = FUN_005a40df((param_1[param_2 + 0x15] + param_1[param_2 + 0x1a]) * 4);
  param_1[param_2 + 0x24] = iVar2;
  if (param_1[param_2 + 0x1a] < 1) {
    param_1[param_2 + 0x29] = 0;
  }
  else {
    iVar2 = FUN_005a40df(param_1[param_2 + 0x1a] * 4);
    param_1[param_2 + 0x29] = iVar2;
  }
  if ((((param_1[param_2 + 0x10] != 0) && (param_1[param_2 + 0x1f] != 0)) &&
      (param_1[param_2 + 0x24] != 0)) &&
     ((param_1[param_2 + 0x1a] < 1 || (param_1[param_2 + 0x29] != 0)))) {
    return;
  }
  FUN_00548370(param_1);
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x2be;
  FUN_004e4330("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d",param_1 + 0xb,param_1 + 0x15,param_1 + 0x1a);
  return;
}
