// Name: core_charactr.cpp_FUN_0042e8c0
// Address: 0042e8c0
// Address Range: [[0042e8c0, 0042f009]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042e8c0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042e8c0(CCharacter *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  CSkeleton *pCVar4;
  CDeformableModel *pCVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  CCharacter *pCVar11;
  byte bVar12;
  float afStackY_106c [999];
  float *pfVar13;
  SDamageInfo aSStack_c0 [4];
  float fStack_bc;
  uint uStack_90;
  uint local_84;
  float local_80 [5];
  uint local_6c;
  uint local_60;
  float local_50;
  byte *local_4c;
  byte *local_48;
  CDeformableModelInstance *local_44;
  float fStack_40;
  CSkeleton *local_3c;
  CDeformableModel *local_38;
  int local_34;
  int iStack_30;
  int local_2c;
  CCharacter *local_28;
  uint *local_24;
  int *local_20;
  int *piStack_1c;
  int *piStack_18;
  CSkeleton *local_14;
  
  bVar12 = 0;
  puVar1 = &param_1->field_0x158;
  local_14 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)puVar1);
  if (*(int *)&param_1->field_0xbc68 == 0) {
    if (0 < *(int *)&param_1->field_0x33a0) {
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                         ((CDeformableModelInstance *)puVar1);
      local_3c = pCVar4;
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                         ((CDeformableModelInstance *)puVar1);
      iVar6 = 0;
      if (0 < *(int *)&pCVar4->field_0x1de78) {
        iVar10 = 0;
        do {
          *(uint *)((int)&DAT_007e2cf4 + iVar10) = 0;
          iVar6 = iVar6 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar6 < *(int *)&local_3c->field_0x1de78);
      }
      fVar2 = 0x40400000;
      iVar6 = 0;
      if (0 < *(int *)&param_1->field_0x33a0) {
        fVar3 = (float)_DAT_005b833e;
        pCVar11 = param_1;
        do {
          iVar6 = iVar6 + 1;
          (&DAT_007e2cf4)[*(int *)&pCVar11->field_0x33b0] =
               (float)(&DAT_007e2cf4)[*(int *)&pCVar11->field_0x33b0] +
               (*(float *)&pCVar11->field_0x33c0 * fVar3) / fVar2;
          pCVar11 = (CCharacter *)&pCVar11->field_0x18;
        } while (iVar6 < *(int *)&param_1->field_0x33a0);
      }
      iVar6 = 0;
      local_34 = 0;
      if (0 < *(int *)&local_3c->field_0x1de78) {
        local_44 = (CDeformableModelInstance *)&param_1->field_0x158;
        iVar10 = 0;
        local_38 = pCVar5;
        do {
          if ((float)_DAT_005b833e <= *(float *)((int)&DAT_007e2cf4 + iVar10)) {
            iVar6 = iVar6 + 1;
          }
          if (*(int *)&local_38->field_0x33cc == -1) {
            iVar6 = iVar6 + 1;
          }
          pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(local_44);
          if (*(int *)(&param_1->field_0x2298 + *(int *)(&pCVar5->field_0x323c + iVar10) * 4) == 0)
          {
            iVar6 = iVar6 + 1;
          }
          iVar10 = iVar10 + 4;
          local_38 = (CDeformableModel *)&local_38->field_0x4;
          local_34 = local_34 + 1;
        } while (local_34 < *(int *)&local_3c->field_0x1de78);
      }
      if ((iVar6 == *(int *)&local_3c->field_0x1de78) &&
         (*(int *)&param_1->field_0x2538 < 0x40a00000)) {
        *(uint *)&param_1->field_0xbc6c = 0x3f800000;
        *(uint *)&param_1->field_0xbc68 = 1;
      }
      local_50 = (float)*(int *)&param_1->field_0x33a0 * (float)_DAT_005b8346 * (float)_DAT_005b834e
                 + (float)_DAT_005b8356;
      iVar6 = sound_sndmain_cpp_FUN_00556ab0(*(uint *)&param_1->field_0xbc64,local_50);
      if (iVar6 == 0) {
        sound_sndmain_cpp_FUN_00555fd0();
        sound_sndmain_cpp_FUN_00555df0(local_50);
        uVar7 = (**(code **)(*(int *)&param_1->field_0x154 + 0x30))
                          (param_1,"character-onfire-loop.wav");
        *(uint *)&param_1->field_0xbc64 = uVar7;
        sound_sndmain_cpp_FUN_00556050();
      }
    }
  }
  else {
    fVar2 = *(float *)&param_1->field_0xbc6c - param_2;
    *(float *)&param_1->field_0xbc6c = fVar2;
    if (fVar2 < 0.0) {
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xbc64);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                (param_1,"?character-onfire-fallapart.wav" + 1);
      core_charactr_cpp_FUN_004300e0(param_1,0,0xbf800000,1);
    }
  }
  local_2c = 0;
  if (0 < *(int *)&param_1->field_0x33a0) {
    local_48 = &param_1->field_0xfd8;
    local_4c = &param_1->field_0x385c;
    local_20 = (int *)&param_1->field_0x33ac;
    local_28 = param_1;
    local_24 = (uint *)&param_1->field_0x387c;
    do {
      if (*(int *)(&param_1->field_0x2298 + *local_20 * 4) != 0) {
        *(uint *)&param_1->field_0xfc = 1;
        core_xform_cpp_FUN_00583260(local_20 + 2,local_48 + local_20[1] * 0x30);
        pfVar13 = local_80 + 2;
        local_80[2] = (float)local_60;
        local_80[(uint)bVar12 * -2 + 3] = local_80[(uint)bVar12 * -2 + 9];
        local_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
             local_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
        core_actor_cpp_FUN_00408b80(param_1,pfVar13);
        puVar1 = local_4c;
        iVar6 = local_2c * 0x2a4;
        local_84 = local_6c;
        local_80[(uint)bVar12 * -2] = local_80[(uint)bVar12 * -2 + 6];
        local_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             local_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
        *local_24 = local_84;
        local_24[1] = local_80[0];
        local_24[2] = local_80[1];
        fVar2 = (float)_DAT_005b835e;
        *(float *)&local_28->field_0x39b4 = (float)local_20[5] * fVar2;
        *(int *)&local_28->field_0x39b8 = local_20[5];
        *(float *)&local_28->field_0x39bc = fVar2 * (float)local_20[5];
        (**(code **)(*(int *)(puVar1 + iVar6 + 0x154) + 0xc))(puVar1 + iVar6,param_2);
      }
      local_20 = local_20 + 6;
      local_28 = (CCharacter *)&local_28->field_0x2a4;
      local_24 = local_24 + 0xa9;
      local_2c = local_2c + 1;
    } while (local_2c < *(int *)&param_1->field_0x33a0);
  }
  if ((*(int *)&param_1->field_0x27a4 == 0) && (iStack_30 = 0, 0 < *(int *)&param_1->field_0x33a0))
  {
    piStack_1c = (int *)&param_1->field_0x33ac;
    fStack_40 = param_2 * _DAT_005dd22c;
    iStack_30 = 0;
    do {
      piStack_18 = piStack_1c;
      if (*(int *)(&param_1->field_0x2298 + *piStack_1c * 4) != 0) {
        if ((*(uint *)&param_1->field_0x3260 & 0x7fffffff) == 0) {
          fVar2 = (float)piStack_1c[5] - fStack_40 * *(float *)&param_1->field_0x33a8;
        }
        else {
          fVar2 = fStack_40 * *(float *)&param_1->field_0x33a8 + (float)piStack_1c[5];
        }
        piStack_1c[5] = (int)fVar2;
        if ((float)piStack_1c[5] <= 0.0) {
          piStack_1c[5] = 0;
        }
        if (0x40400000 < (float)piStack_1c[5]) {
          piStack_1c[5] = (int)0x40400000;
          iVar6 = 0;
          pCVar4 = local_14;
          if (0 < *(int *)&local_14->field_0x1de78) {
            do {
              if (*(uint *)&pCVar4->field_0x1de9c == piStack_18[1]) {
                uVar8 = *(uint *)&pCVar4->field_0x1de9c ^ piStack_18[1];
                pCVar11 = param_1;
                if (0 < *(int *)&param_1->field_0x33a0) {
                  do {
                    if (iVar6 == *(int *)&pCVar11->field_0x33b0) break;
                    uVar8 = uVar8 + 1;
                    pCVar11 = (CCharacter *)&pCVar11->field_0x18;
                  } while ((int)uVar8 < *(int *)&param_1->field_0x33a0);
                }
                if (uVar8 == *(uint *)&param_1->field_0x33a0) {
                  core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0(param_1,local_14,iVar6);
                }
              }
              iVar6 = iVar6 + 1;
              pCVar4 = (CSkeleton *)&pCVar4->field_0x24;
            } while (iVar6 < *(int *)&local_14->field_0x1de78);
          }
          iVar6 = 0;
          if (0 < *(int *)&param_1->field_0x33a0) {
            pCVar11 = param_1;
            do {
              if (*(int *)(&local_14->field_0x1de9c + piStack_18[1] * 0x24) ==
                  *(int *)&pCVar11->field_0x33b0) break;
              iVar6 = iVar6 + 1;
              pCVar11 = (CCharacter *)&pCVar11->field_0x18;
            } while (iVar6 < *(int *)&param_1->field_0x33a0);
          }
          if (iVar6 == *(int *)&param_1->field_0x33a0) {
            core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0
                      (param_1,local_14,*(int *)(&local_14->field_0x1de9c + piStack_18[1] * 0x24));
          }
        }
      }
      piStack_1c = piStack_1c + 6;
      iStack_30 = iStack_30 + 1;
    } while (iStack_30 < *(int *)&param_1->field_0x33a0);
  }
  if (((*(uint *)&param_1->field_0x3260 & 0x7fffffff) == 0) &&
     (iVar6 = *(int *)&param_1->field_0x33a0 + -1, -1 < iVar6)) {
    iVar10 = iVar6 * 0x18 + (int)param_1;
    do {
      while (((*(uint *)(iVar10 + 0x33c0) & 0x7fffffff) != 0 ||
             (iVar9 = *(int *)&param_1->field_0x33a0 + -1, *(int *)&param_1->field_0x33a0 = iVar9,
             iVar9 != 0))) {
        iVar6 = iVar6 + -1;
        iVar10 = iVar10 + -0x18;
        if (iVar6 < 0) goto LAB_0042ec67;
      }
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xbc64);
      iVar6 = iVar6 + -1;
      iVar10 = iVar10 + -0x18;
    } while (-1 < iVar6);
  }
LAB_0042ec67:
  if ((0.0 < *(float *)&param_1->field_0x3260) &&
     ((0x40a00000 < *(int *)&param_1->field_0x2538 || (*(float *)&param_1->field_0x2538 <= 0.0)))) {
    *(float *)&param_1->field_0x3260 = *(float *)&param_1->field_0x3260 - param_2;
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_c0);
    fStack_bc = param_2 * (float)_DAT_005b8366;
    uStack_90 = 0x66;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1,aSStack_c0);
    if (*(float *)&param_1->field_0x3260 < 0.0) {
      *(uint *)&param_1->field_0x3260 = 0;
      return;
    }
  }
  return;
}
