// Name: FUN_005660c0
// Address: 005660c0
// Address Range: [[005660c0, 00566375]]
// Convention: unknown
// Signature: float FUN_005660c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,byte *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_005660c0(int param_1,int param_2,uint param_3,uint param_4,int *param_5,byte *param_6)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1034 [997];
  byte local_84 [36];
  float local_60;
  float local_5c;
  float local_58;
  float local_4c;
  float local_48 [4];
  uint local_38;
  int local_34;
  byte *local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  float local_18;
  
  bVar4 = 0;
  if ((DAT_026af5fc & 1) == 0) {
    DAT_026af5fc = DAT_026af5fc | 1;
    FUN_005c0357();
  }
  if (5000 < *(int *)(param_2 * 4 + param_1 + 0x2c)) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x6eb;
    FUN_005030e0();
  }
  iVar3 = param_2 * 4 + param_1;
  pfVar1 = (float *)&DAT_026a0b9c;
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0x2c)) {
    do {
      *pfVar1 = (float)*param_5 * _DAT_00605890;
      pfVar1[1] = (float)param_5[1] * _DAT_00605890;
      pfVar1[2] = (float)param_5[2] * _DAT_00605890;
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 3;
      param_5 = param_5 + 3;
    } while (iVar2 < *(int *)(iVar3 + 0x2c));
  }
  local_20 = 1.01;
  local_28 = 0;
  local_24 = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    local_2c = param_1 + param_2 * 4;
    local_34 = param_2 * 4 + param_1;
    local_30 = param_6;
    do {
      iVar2 = *(int *)(local_34 + 0xc24) + local_28;
      if (((*local_30 & 1) != 0) && (local_28 < iVar2)) {
        local_1c = local_28 * 0x12;
        iVar3 = local_28;
        local_28 = iVar2;
        do {
          FUN_0048fed0(local_84);
          local_18 = (float)FUN_0048ff40();
          if (((local_18 < local_20) && (0.0 <= local_18)) && (local_18 <= 1.0)) {
            local_4c = -local_60;
            local_48[0] = -local_5c;
            local_48[1] = -local_58;
            local_20 = local_18;
            local_48[2] = -local_60;
            local_48[(uint)bVar4 * -2 + 3] = local_48[(uint)bVar4 * -2];
            local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
                 local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
            if (&stack0x00000000 != (byte *)0x26b82e8) {
              _DAT_026b82a8 = local_48[2];
              _DAT_026b82ac = local_48[3];
              _DAT_026b82b0 = local_38;
            }
            _DAT_026b82a4 = local_24;
            _DAT_026b82b4 = param_2;
            _DAT_026b82b8 = iVar3;
          }
          local_1c = local_1c + 0x12;
          iVar3 = iVar3 + 1;
          iVar2 = local_28;
        } while (iVar3 < local_28);
      }
      local_28 = iVar2;
      local_30 = local_30 + 4;
      local_34 = local_34 + 0x60;
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(param_1 + 0xc00));
  }
  return local_20;
}
