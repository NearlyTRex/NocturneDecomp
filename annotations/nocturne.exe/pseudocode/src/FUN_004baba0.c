// Name: FUN_004baba0
// Address: 004baba0
// Address Range: [[004baba0, 004bb2a8]]
// Convention: unknown
// Signature: void FUN_004baba0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004baba0(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  float fStack_98;
  float fStack_8c;
  byte auStack_84 [12];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  byte auStack_54 [12];
  byte auStack_48 [4];
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_28;
  float local_24;
  int iStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = false;
  local_1c = 0.25;
  local_24 = 0.7853982;
  iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  memset(param_1 + 0xbc94,0,0x2c);
  if (*(int *)(param_1 + 0x1fa38) != 0) {
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    local_6c = *(float *)(param_1 + 0x20) - *(float *)(iVar4 + 0x20);
    local_68 = *(float *)(param_1 + 0x24) - *(float *)(iVar4 + 0x24);
    local_64 = *(float *)(param_1 + 0x28) - *(float *)(iVar4 + 0x28);
    local_30 = SQRT(local_64 * local_64 + local_6c * local_6c + local_68 * local_68);
    if (*(int *)(param_1 + 0x1fa38) == 3) {
      local_30 = 0.0;
    }
    local_28 = 20.0;
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x140))(iVar4);
    if (iVar4 != 0) {
      local_28 = 30.0;
    }
    if ((local_30 < local_28) &&
       ((*(int *)(param_1 + 0x1fa38) == 2 || (*(int *)(param_1 + 0x1fa38) == 3)))) {
      fStack_3c = 9999.9;
      iVar4 = core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(param_1,&fStack_3c);
      if ((iVar4 == 0) || (local_28 <= fStack_3c)) {
        if (*(int *)(param_1 + 0x1fa3c) != 0) {
          *(uint *)(param_1 + 0xbcac) = 1;
        }
      }
      else {
        bVar2 = true;
        iVar7 = iVar4;
      }
    }
    fStack_78 = *(float *)(iVar7 + 0x20) - *(float *)(param_1 + 0x20);
    fStack_74 = *(float *)(iVar7 + 0x24) - *(float *)(param_1 + 0x24);
    fStack_70 = *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x28);
    if (&local_6c != &fStack_78) {
      local_6c = fStack_78;
      local_68 = fStack_74;
      local_64 = fStack_70;
    }
    fVar1 = SQRT(local_64 * local_64 + local_6c * local_6c + local_68 * local_68);
    *(uint *)(param_1 + 0x2410) = 0;
    fStack_18 = fVar1;
    if ((float)6 <= fVar1) {
      iStack_20 = 0;
      if (bVar2) {
        *(uint *)(param_1 + 0x2dbc) = 0;
      }
      else {
        iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        iStack_20 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xbc))(iVar4);
        iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x140))(iVar4);
        if ((iVar4 == 0) && (uVar6 = core_charactr_cpp_FUN_0042af70(param_1,param_2), uVar6 != 0)) {
          if (uVar6 < 2) {
            *(uint *)(param_1 + 0xbc94) = 1;
          }
          else if (uVar6 == 2) {
            *(uint *)(param_1 + 0xbc9c) = 1;
            *(uint *)(param_1 + 0xbc94) = 1;
          }
        }
      }
      if (iStack_20 == 0) {
        iStack_20 = core_path_cpp_getPathMap_FUN_004f1e00(iVar7 + 0x20);
      }
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                        (iStack_20,param_1 + 0x20,auStack_48,*(uint *)(param_1 + 0x6c));
      if (iVar4 != 0) {
        fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                     (fStack_44 - *(float *)(param_1 + 0x34));
        fVar3 = fStack_14 * (float)0.31830988619288902 * (float)4;
        fStack_38 = -local_1c;
        *(float *)(param_1 + 0xbcb8) = fVar3;
        if (fVar3 < fStack_38) {
          *(float *)(param_1 + 0xbcb8) = fStack_38;
        }
        if (local_1c < *(float *)(param_1 + 0xbcb8)) {
          *(float *)(param_1 + 0xbcb8) = local_1c;
        }
        if (((float)10 <= fVar1) || (bVar2)) {
          *(uint *)(param_1 + 0xbc9c) = 1;
          *(uint *)(param_1 + 0xbc94) = 1;
        }
        else {
          *(uint *)(param_1 + 0xbc94) = 1;
        }
      }
    }
    else {
      if (bVar2) {
        if (*(int *)(param_1 + 0x1fa3c) == 0) {
          *(uint *)(param_1 + 0xbcac) = 1;
        }
        else {
          iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
          if ((*(int *)(iVar4 + 0x24) != 2) && (*(int *)(iVar4 + 0x24) != 1)) {
            *(uint *)(param_1 + 0xbca0) = 1;
          }
        }
        *(uint *)(param_1 + 0x2dbc) = 0;
      }
      else {
        iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
        if ((*(int *)(iVar4 + 0x24) == 10) && (*(int *)(param_1 + 0x1fa3c) != 0)) {
          *(uint *)(param_1 + 0xbcac) = 1;
        }
        iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x140))(iVar4);
        if ((iVar4 == 0) && (uVar6 = core_charactr_cpp_FUN_0042af70(param_1,param_2), uVar6 != 0)) {
          if (uVar6 < 2) {
            *(uint *)(param_1 + 0xbc94) = 1;
          }
          else if (uVar6 == 2) {
            *(uint *)(param_1 + 0xbc9c) = 1;
            *(uint *)(param_1 + 0xbc94) = 1;
          }
        }
      }
      if (bVar2) {
        iVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                          (auStack_54,&local_6c);
        fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                     (*(float *)(iVar4 + 4) - *(float *)(param_1 + 0x34));
        fVar1 = fStack_14 * (float)0.31830988619288902 * (float)4;
        fStack_34 = -local_1c;
        *(float *)(param_1 + 0xbcb8) = fVar1;
        if (fVar1 < fStack_34) {
          *(float *)(param_1 + 0xbcb8) = fStack_34;
        }
        if (local_1c < *(float *)(param_1 + 0xbcb8)) {
          *(float *)(param_1 + 0xbcb8) = local_1c;
        }
        if ((((float)-0.25 < *(float *)(param_1 + 0xbcb8)) &&
            ((double)*(float *)(param_1 + 0xbcb8) < 0.25)) &&
           (*(int *)(param_1 + 0xbca0) != 0)) {
          *(uint *)(param_1 + 0xbcb8) = 0;
        }
      }
    }
    if (*(float *)(param_1 + 0x2410) <= 0.0) {
      if (*(float *)(param_1 + 0x2410) < 0.0) {
        *(uint *)(param_1 + 0x2410) = 0;
        *(float *)(param_1 + 0xbcb8) = -local_1c;
      }
    }
    else {
      *(uint *)(param_1 + 0x2410) = 0;
      *(float *)(param_1 + 0xbcb8) = local_1c;
    }
    fStack_60 = *(float *)(iVar7 + 0x20) - *(float *)(param_1 + 0x20);
    fStack_5c = *(float *)(iVar7 + 0x24) - *(float *)(param_1 + 0x24);
    fStack_58 = *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x28);
    if (&local_6c != &fStack_60) {
      local_6c = fStack_60;
      local_68 = fStack_5c;
      local_64 = fStack_58;
    }
    pfVar5 = (float *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (auStack_84,&local_6c);
    if (&local_6c != pfVar5) {
      local_6c = *pfVar5;
      local_68 = pfVar5[1];
      local_64 = pfVar5[2];
    }
    fStack_8c = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_68 - *(float *)(param_1 + 0x34));
    if (local_24 < fStack_8c) {
      fStack_8c = local_24;
    }
    if (fStack_8c < -local_24) {
      fStack_8c = -local_24;
    }
    fStack_98 = fStack_8c - *(float *)(param_1 + 0x1fa50);
    if (param_2 * (float)3.1415926535000001 < fStack_98) {
      fStack_98 = param_2 * (float)3.1415926535000001;
    }
    if (fStack_98 < param_2 * (float)-3.1415926535000001) {
      fStack_98 = param_2 * (float)-3.1415926535000001;
    }
    *(float *)(param_1 + 0x1fa50) = *(float *)(param_1 + 0x1fa50) + fStack_98;
  }
  return;
}
