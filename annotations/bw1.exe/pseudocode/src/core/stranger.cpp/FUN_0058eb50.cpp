// Name: core_stranger.cpp_FUN_0058eb50
// Address: 0058eb50
// Address Range: [[0058eb50, 0058f654]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_0058eb50(CStranger *this_ptr,int hand_index,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_0058eb50(CStranger *this_ptr,int hand_index,float delta_time)

{
  float fVar1;
  double dVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  byte *puVar9;
  byte bVar10;
  float afStackY_1160 [969];
  CVector3f *pCVar11;
  float fStack_21c;
  byte auStack_218 [120];
  CMatrix3x3f aCStack_1a0 [40];
  float fStack_178;
  float afStack_174 [2];
  CVector3f CStack_16c;
  float fStack_160;
  float afStack_15c [2];
  CVector3f CStack_154;
  float fStack_148;
  float afStack_144 [5];
  float fStack_130;
  float fStack_12c;
  uint uStack_128;
  float fStack_124;
  float afStack_120 [4];
  float fStack_110;
  float fStack_10c;
  float afStack_108 [4];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [6];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [5];
  float fStack_88;
  float fStack_84;
  CVector3f aCStack_7c [2];
  float fStack_60;
  uint local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int local_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  int iStack_2c;
  float *local_28;
  float fStack_24;
  CDemonActor *pCStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar10 = 0;
  local_28 = (float *)&this_ptr->field_0x1ffe0;
  if (hand_index == 1) {
    local_28 = (float *)&this_ptr->field_0x1ffc0;
  }
  if (*(int *)&this_ptr->field_0x20004 == 0) {
    local_28[3] = 0.0;
    local_28[1] = 0.0;
    iVar5 = *(int *)(&this_ptr->field_0x25b0 + hand_index * 0x78);
    uVar4 = 0;
    if (iVar5 != 0) {
      uVar4 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x74))(iVar5);
    }
    if ((uVar4 & 4) == 0) {
      local_28[2] = 0.0;
      *local_28 = 0.0;
      return;
    }
    local_4c = 3;
  }
  else {
    local_4c = *(int *)(*(int *)&this_ptr->field_0x20004 + 0x2e0);
  }
  if (hand_index == 0) {
    if ((*(int *)&this_ptr->field_0x1fae4 == 2) && (local_4c == 0)) {
      return;
    }
    local_5c = _DAT_02c83634;
    local_30 = -1.3089969;
    local_34 = 0.5235988;
    uVar8 = _DAT_02c8360c;
  }
  else {
    local_5c = _DAT_02c83638;
    uVar8 = _DAT_02c83610;
    if (local_4c == 0) {
      local_34 = 1.3089969;
      local_30 = -0.5235988;
    }
    else {
      local_34 = 0.5235988;
      local_30 = -0.5235988;
    }
  }
  fVar7 = *(float *)&this_ptr->field_0xc204 * _DAT_005f6ed9 * (float)_DAT_005f6ee1 * delta_time +
          *local_28;
  local_28[1] = 0.0;
  *local_28 = fVar7;
  if (fVar7 < 0xBF860A92) {
    *local_28 = 0xBF860A92;
  }
  if (0x3F9C61AA < *local_28) {
    *local_28 = 0x3F9C61AA;
  }
  if (local_28[3] < local_30) {
    local_28[3] = local_30;
  }
  if (local_34 < local_28[3]) {
    local_28[3] = local_34;
  }
  if (local_28[1] < local_30) {
    local_28[1] = local_30;
  }
  if (local_34 < local_28[1]) {
    local_28[1] = local_34;
  }
  local_28[7] = 0.0;
  fStack_38 = local_28[1];
  fStack_3c = *local_28;
  if ((local_4c == 3) || (fVar7 = *(float *)&this_ptr->field_0x1fae4, fVar7 != 0.0)) {
    local_28[3] = 0.0;
  }
  else {
    iVar5 = *(int *)&this_ptr->field_0x20004;
    afStack_120[2] = fVar7;
    afStack_120[3] = fVar7;
    fStack_110 = fVar7;
    if (iVar5 != 0) {
      (**(code **)(*(int *)(iVar5 + 0x154) + 0xe0))(iVar5);
      fStack_dc = afStack_9c[2];
      afStack_d8[(uint)bVar10 * -2] = afStack_9c[(uint)bVar10 * -2 + 3];
      afStack_d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      if (afStack_120 + 2 != &fStack_dc) {
        afStack_120[2] = fStack_dc;
        afStack_120[3] = afStack_d8[0];
        fStack_110 = afStack_d8[1];
      }
    }
    if (local_4c == 0) {
      core_skeleton_cpp_FUN_00569040(&this_ptr->field_0x158,uVar8);
      fStack_f4 = fStack_148;
      afStack_108[(uint)bVar10 * -2 + 6] = afStack_144[(uint)bVar10 * -2];
      afStack_108[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      if (afStack_c0 + 5 != afStack_108 + 5) {
        afStack_c0[5] = fStack_f4;
        fStack_a8 = fStack_f0;
        fStack_a4 = fStack_ec;
      }
    }
    else {
      core_skeleton_cpp_FUN_00569040(&this_ptr->field_0x158,local_5c);
      fStack_124 = fStack_10c;
      afStack_120[(uint)bVar10 * -2] = afStack_108[(uint)bVar10 * -2];
      afStack_120[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_108[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      if (afStack_c0 + 5 != &fStack_124) {
        afStack_c0[5] = fStack_124;
        fStack_a8 = afStack_120[0];
        fStack_a4 = afStack_120[1];
      }
    }
    core_actor_cpp_FUN_00408b40(this_ptr,afStack_c0 + 5);
    pfVar3 = local_28;
    CStack_154._0_4_ = CStack_d0._0_4_;
    *(uint *)((int)&CStack_154 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_d0 + (uint)bVar10 * -8 + 4);
    *(uint *)((int)&CStack_154 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)((int)&CStack_d0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    fStack_130 = *pfVar3;
    uStack_128 = 0;
    fStack_12c = local_28[1];
    core_dirmat_cpp_FUN_0045f3e0(aCStack_1a0,(CVector3f *)&fStack_130);
    afStack_c0[2] = 0.0;
    afStack_c0[3] = 0.0;
    afStack_c0[4] = 1.0;
    core_dirmat_cpp_FUN_0045f690(aCStack_1a0,afStack_c0 + 2);
    fStack_178 = fStack_c4;
    afStack_174[(uint)bVar10 * -2] = afStack_c0[(uint)bVar10 * -2];
    afStack_174[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    fStack_24 = 1e+30;
    iStack_40 = 0;
    for (iStack_44 = 0; iStack_44 < *(int *)&g_CDemonSetPtr->field_0x152f30;
        iStack_44 = iStack_44 + 1) {
      iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)(&g_CDemonSetPtr->field_0x152f34 + iStack_40),
                         g_CCharacterClassInfo.name_hash);
      if ((iVar5 == 0) ||
         ((iVar6 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), iVar6 == 0 &&
          (iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x70))(iVar5), iVar5 == 0)))) {
        pCStack_20 = *(CDemonActor **)(&g_CDemonSetPtr->field_0x152f34 + iStack_40);
        __arrinit(auStack_218,10,&g_CVectorTypeInfo);
        iStack_2c = (**(code **)(*(int *)&pCStack_20->field_0x154 + 0x54))(pCStack_20,auStack_218);
        if ((0 < iStack_2c) && (iStack_1c = 0, 0 < iStack_2c)) {
          puVar9 = auStack_218;
          do {
            core_actor_cpp_FUN_00408b40(pCStack_20,puVar9);
            pCVar11 = &CStack_16c;
            CStack_16c._0_4_ = aCStack_7c[0]._0_4_;
            *(uint *)((int)&CStack_16c + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)aCStack_7c + (uint)bVar10 * -8 + 4);
            *(uint *)((int)&CStack_16c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 *(uint *)((int)aCStack_7c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            core_actor_cpp_FUN_00408bb0(this_ptr,pCVar11);
            afStack_108[2] = fStack_160;
            afStack_108[(uint)bVar10 * -2 + 3] = afStack_15c[(uint)bVar10 * -2];
            afStack_108[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                 afStack_15c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            fStack_a0 = afStack_108[2] - afStack_c0[5];
            afStack_9c[0] = afStack_108[3] - fStack_a8;
            afStack_9c[1] = fStack_f8 - fStack_a4;
            fStack_e8 = afStack_108[2] - afStack_c0[5];
            afStack_108[(uint)bVar10 * -2 + 9] = afStack_9c[(uint)bVar10 * -2];
            afStack_108[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
                 afStack_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            if ((0.0 < (double)fStack_e0) && ((double)fStack_e0 <= _DAT_005f6f09)) {
              core_vecdir_cpp_FUN_005a7520(afStack_108 + 8);
              fVar7 = fStack_e0;
              fStack_21c = 0.5235988;
              fStack_88 = afStack_144[2];
              afStack_9c[(uint)bVar10 * -2 + 6] = afStack_144[(uint)bVar10 * -2 + 3];
              afStack_9c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
                   afStack_144[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
              if (fVar7 < (float)_DAT_005f6f11) {
                fStack_21c = 1.5707964;
              }
              if (((ABS(fStack_88) <= fStack_21c) && (local_30 <= fStack_84)) &&
                 (fStack_84 <= local_34)) {
                fVar7 = SQRT(fStack_e0 * fStack_e0 + fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4);
                fVar1 = 1.0 / fVar7;
                fStack_e4 = fStack_e4 * fVar1;
                fStack_e8 = fStack_e8 * fVar1;
                fStack_e0 = fStack_e0 * fVar1;
                fVar7 = fVar7 * (float)_DAT_005f6ee9 +
                        ((float)_DAT_005f6ee1 -
                        (fStack_e0 * afStack_174[1] +
                        fStack_e8 * fStack_178 + fStack_e4 * afStack_174[0]));
                if (fVar7 < fStack_24) {
                  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                  core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,2);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                            (g_CDemonSetPtr,(CDemonActor *)this_ptr);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCStack_20);
                  iVar5 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                                    (g_CDemonSetPtr,&CStack_154,&CStack_16c);
                  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                  if (iVar5 == 0) {
                    fStack_38 = fStack_84;
                    fStack_3c = fStack_88;
                    local_28[7] = 1.4013e-45;
                    fStack_24 = fVar7;
                  }
                }
              }
            }
            iStack_1c = iStack_1c + 1;
            puVar9 = puVar9 + 0xc;
          } while (iStack_1c < iStack_2c);
        }
      }
      iStack_40 = iStack_40 + 4;
    }
  }
  dVar2 = _DAT_005f6ef1;
  if (local_4c != 0) {
    dVar2 = _DAT_005f6ef9;
  }
  fStack_48 = delta_time * _DAT_005f6ed9 * (float)dVar2;
  fStack_54 = (float)core_actor_cpp_FUN_0040cd60(fStack_38 - local_28[3]);
  fStack_18 = fStack_54;
  fStack_18 = (float)core_actor_cpp_FUN_0040cd60(fStack_3c - local_28[2]);
  fStack_58 = -fStack_48;
  if (fStack_54 < fStack_58) {
    fStack_54 = fStack_58;
  }
  if (fStack_48 < fStack_54) {
    fStack_54 = fStack_48;
  }
  fStack_60 = -fStack_48;
  fStack_50 = fStack_18;
  if (fStack_18 < fStack_60) {
    fStack_50 = fStack_60;
  }
  if (fStack_48 < fStack_50) {
    fStack_50 = fStack_48;
  }
  fStack_18 = (float)core_actor_cpp_FUN_0040cd60(local_28[3] + fStack_54);
  local_28[3] = fStack_18;
  fVar7 = (float)core_actor_cpp_FUN_0040cd60(local_28[2] + fStack_50);
  local_28[2] = fVar7;
  local_28[5] = 1.0;
  if (((local_28[7] == 1.4013e-45) && (ABS(local_28[3] - fStack_38) < (float)_DAT_005f6f01)) &&
     (ABS(local_28[2] - fStack_3c) < (float)_DAT_005f6f01)) {
    local_28[7] = 2.8026e-45;
    return;
  }
  return;
}
