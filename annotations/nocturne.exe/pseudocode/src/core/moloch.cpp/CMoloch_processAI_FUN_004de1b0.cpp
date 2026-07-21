// Name: core_moloch.cpp_CMoloch_processAI_FUN_004de1b0
// Address: 004de1b0
// Address Range: [[004de1b0, 004de54a]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_004de1b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_004de1b0(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  float fStack_78;
  float local_74;
  float local_70;
  float local_6c;
  byte auStack_68 [4];
  float fStack_64;
  float fStack_58;
  byte auStack_50 [12];
  float local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  float local_24;
  float local_20;
  float fStack_18;
  
  local_20 = 0.25;
  local_24 = 0.7853982;
  iVar1 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  memset(param_1 + 0xbc94,0,0x2c);
  if ((*(int *)(param_1 + 0x1fa38) != 0) && (*(int *)(param_1 + 0x1fa38) == 1)) {
    iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    local_44 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    local_40 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    local_3c = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    local_74 = *(float *)(param_1 + 0x20) - *(float *)(iVar6 + 0x20);
    local_70 = *(float *)(param_1 + 0x24) - *(float *)(iVar6 + 0x24);
    local_6c = *(float *)(param_1 + 0x28) - *(float *)(iVar6 + 0x28);
    if (&local_74 != &local_44) {
      local_74 = local_44;
      local_70 = local_40;
      local_6c = local_3c;
    }
    iVar6 = _DAT_01cae0e8 * 4;
    *(uint *)(param_1 + 0x2410) = 0;
    if (SQRT(local_6c * local_6c + local_74 * local_74 + local_70 * local_70) <=
        (float)_DAT_0058a812) {
      iVar6 = *(int *)(iVar6 + 0x1cae0d8);
      iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x140))(iVar6);
      if ((iVar6 == 0) && (uVar5 = FUN_0042af70(param_1,param_2), uVar5 != 0)) {
        if (uVar5 < 2) {
          *(uint *)(param_1 + 0xbc94) = 1;
        }
        else if (uVar5 == 2) {
          *(uint *)(param_1 + 0xbc9c) = 1;
          *(uint *)(param_1 + 0xbc94) = 1;
        }
      }
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x1cae0d8);
      uVar3 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0xbc))(iVar6);
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                        (uVar3,param_1 + 0x20,auStack_68,*(uint *)(param_1 + 0x6c));
      if (iVar6 != 0) {
        fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                     (fStack_64 - *(float *)(param_1 + 0x34));
        fVar2 = fStack_18 * (float)_DAT_0058a81a * (float)_DAT_0058a822;
        fStack_28 = -local_20;
        *(float *)(param_1 + 0xbcb8) = fVar2;
        if (fVar2 < fStack_28) {
          *(float *)(param_1 + 0xbcb8) = fStack_28;
        }
        if (local_20 < *(float *)(param_1 + 0xbcb8)) {
          *(float *)(param_1 + 0xbcb8) = local_20;
        }
        *(uint *)(param_1 + 0xbc94) = 1;
      }
      *(uint *)(param_1 + 0x2dbc) = 0;
    }
    if (*(float *)(param_1 + 0x2410) <= 0.0) {
      if (*(float *)(param_1 + 0x2410) < 0.0) {
        *(uint *)(param_1 + 0x2410) = 0;
        *(float *)(param_1 + 0xbcb8) = -local_20;
      }
    }
    else {
      *(uint *)(param_1 + 0x2410) = 0;
      *(float *)(param_1 + 0xbcb8) = local_20;
    }
    fStack_38 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    fStack_34 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    fStack_30 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    if (&local_74 != &fStack_38) {
      local_74 = fStack_38;
      local_70 = fStack_34;
      local_6c = fStack_30;
    }
    pfVar4 = (float *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (auStack_50,&local_74);
    if (&local_74 != pfVar4) {
      local_74 = *pfVar4;
      local_70 = pfVar4[1];
      local_6c = pfVar4[2];
    }
    fStack_58 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_70 - *(float *)(param_1 + 0x34));
    if (local_24 < fStack_58) {
      fStack_58 = local_24;
    }
    if (fStack_58 < -local_24) {
      fStack_58 = -local_24;
    }
    fStack_78 = fStack_58 - *(float *)(param_1 + 0x229f4);
    if (param_2 * (float)_DAT_0058a82a < fStack_78) {
      fStack_78 = param_2 * (float)_DAT_0058a82a;
    }
    if (fStack_78 < param_2 * (float)_DAT_0058a832) {
      fStack_78 = param_2 * (float)_DAT_0058a832;
    }
    *(float *)(param_1 + 0x229f4) = *(float *)(param_1 + 0x229f4) + fStack_78;
  }
  return;
}
