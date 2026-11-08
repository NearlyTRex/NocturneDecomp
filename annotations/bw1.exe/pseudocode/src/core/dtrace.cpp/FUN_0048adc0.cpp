// Name: FUN_0048adc0
// Address: 0048adc0
// Address Range: [[0048adc0, 0048af97]]
// Convention: unknown
// Signature: void FUN_0048adc0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048adc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1014 [1014];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  bVar3 = 0;
  FUN_0048aab0(param_1);
  _DAT_01c3d420 = 0;
  FUN_005c0b10(&local_14,4,1,param_2);
  if (local_14 < 1) {
    _DAT_01d1d400 = "..\\core\\dtrace.cpp";
    _DAT_01d1d404 = 0x148;
    FUN_005030e0("CDemonRaytrace::loadBinary - invalid version");
  }
  if (0x00000004 < local_14) {
    _DAT_01d1d400 = "..\\core\\dtrace.cpp";
    _DAT_01d1d404 = 0x14b;
    FUN_005030e0("CDemonRaytrace::loadBinary - file is newer than .exe!");
  }
  FUN_005c0b10(param_1 + 0x40,4,1,param_2);
  FUN_005c0b10(param_1 + 0x44,4,1,param_2);
  FUN_005c0b10(param_1 + 0x48,4,1,param_2);
  FUN_005c0b10(param_1 + 0x10,0xc,1,param_2);
  FUN_005c0b10(param_1 + 0x1c,0xc,1,param_2);
  FUN_005c0b10((float *)(param_1 + 0x28),0xc,1,param_2);
  local_2c = *(float *)(param_1 + 0x28) * _DAT_005db940;
  local_28 = *(float *)(param_1 + 0x2c) * _DAT_005db940;
  local_24 = *(float *)(param_1 + 0x30) * _DAT_005db940;
  local_20 = local_2c;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((float *)(param_1 + 0x34) != &stack0xffffffe0) {
    *(float *)(param_1 + 0x34) = local_20;
    *(uint *)(param_1 + 0x38) = local_1c;
    *(uint *)(param_1 + 0x3c) = local_18;
  }
  if (local_14 < 4) {
    _DAT_01d1d400 = "..\\core\\dtrace.cpp";
    _DAT_01d1d404 = 0x1e2;
    FUN_005030e0("Release build doesn't support old geometry");
  }
  else {
    FUN_0048aa40(param_1);
    iVar2 = 0;
    for (iVar1 = 0;
        iVar1 < *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x48);
        iVar1 = iVar1 + 1) {
      FUN_00457e50(*(int *)(param_1 + 0x50) + iVar2,param_2);
      iVar2 = iVar2 + 0x34;
    }
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) == 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dtrace.cpp";
  _DAT_01d1d404 = 0x1ff;
  FUN_005030e0("CDemonRaytrace::loadBinary - error reading file");
  return;
}
