// Name: FUN_005066e0
// Address: 005066e0
// Address Range: [[005066e0, 005067dd]]
// Convention: unknown
// Signature: undefined4 FUN_005066e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005066e0(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  byte local_34 [12];
  byte local_28 [4];
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  byte local_10 [12];
  
  if (param_2 == 0) {
    return 0;
  }
  pfVar1 = (float *)FUN_0055a8b0(local_10,&DAT_02dd1184,_DAT_01e5721c * 0x30 + param_1 + 0xfd0);
  pfVar2 = (float *)FUN_0055a8b0(local_34,&DAT_02dd1184,_DAT_01e57220 * 0x30 + param_1 + 0xfd0);
  local_1c = (*pfVar2 + *pfVar1) * _DAT_00590095;
  local_18 = (pfVar2[1] + pfVar1[1]) * _DAT_00590095;
  local_14 = (pfVar2[2] + pfVar1[2]) * _DAT_00590095 + _DAT_00590099;
  FUN_0040a240(param_1,local_28,&local_1c);
  local_24 = local_24 + _DAT_0059009d;
  (**(code **)(*(int *)(param_2 + 0x14c) + 0x60))(param_2,local_28,param_2 + 0x30);
  return 1;
}
