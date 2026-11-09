// Name: core_charactr.cpp_FUN_0042d750
// Address: 0042d750
// Address Range: [[0042d750, 0042e11c]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042d750(CCharacter *this_ptr,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_0042d750(CCharacter *this_ptr,CVector3f *velocity)

{
  SMotion SVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  SMotion *str1;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  SMotion *pSVar11;
  int iVar12;
  byte bVar13;
  float afStackY_10d4 [1003];
  CDemonSet *pCVar14;
  CCharacter *actor;
  byte *puVar15;
  float local_f8;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  uint local_c8;
  float fStack_c4;
  byte local_bc [12];
  float local_b0;
  float afStack_ac [4];
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  char local_80 [4];
  float afStack_7c [4];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  byte *local_5c;
  uint *local_58;
  uint *local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  byte *local_44;
  float fStack_40;
  float local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  float *local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar13 = 0;
  DAT_007c6380 = 0;
  if (((((*(uint *)&velocity->field_0x8 & 0x7fffffff) == 0) &&
       ((*(uint *)velocity & 0x7fffffff) == 0)) && (*(float *)&velocity->field_0x4 <= 0.0)) &&
     ((*(int *)&this_ptr->field_0xdc == 0 &&
      (*(float *)&this_ptr->field_0x24 == *(float *)&this_ptr->field_0x2504)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    *(uint *)&this_ptr->field_0x2520 = 0;
    *(uint *)&this_ptr->field_0x251c = *(uint *)&this_ptr->field_0x2520;
    *(uint *)&this_ptr->field_0x2518 = *(uint *)&this_ptr->field_0x251c;
    return;
  }
  core_actor_cpp_FUN_00408ac0(this_ptr,velocity);
  local_68 = local_b0;
  afStack_7c[(uint)bVar13 * -2 + 6] = afStack_ac[(uint)bVar13 * -2];
  afStack_7c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
       afStack_ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
  if (*(int *)&this_ptr->field_0x27a8 != 0) {
    *(uint *)&this_ptr->field_0xdc = 0;
    *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + local_68;
    *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + local_64;
    *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + local_60;
    *(uint *)&this_ptr->field_0x2520 = 0;
    *(uint *)&this_ptr->field_0x251c = *(uint *)&this_ptr->field_0x2520;
    *(uint *)&this_ptr->field_0x2518 = *(uint *)&this_ptr->field_0x251c;
    return;
  }
  if (this_ptr->field_0x24a8 != '\0') {
    str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
    uVar8 = 0xffffffff;
    pSVar11 = str1;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      SVar1 = *pSVar11;
      pSVar11 = pSVar11 + (uint)bVar13 * -2 + 1;
    } while (SVar1 != (SMotion)0x0);
    iVar9 = ~uVar8 - 0xc;
    local_80[0] = "noCollision"[0];
    local_80[1] = "noCollision"[1];
    local_80[2] = "noCollision"[2];
    local_80[3] = "noCollision"[3];
    afStack_7c[(uint)bVar13 * -2] = *(float *)("noCollision" + (uint)bVar13 * -8 + 4);
    afStack_7c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    iVar12 = 0;
    local_20 = iVar9;
    if (-1 < iVar9) {
      do {
        iVar9 = _strnicmp((char *)str1,local_80,0xb);
        if (iVar9 == 0) {
          *(uint *)&this_ptr->field_0x2520 = 0;
          *(uint *)&this_ptr->field_0x251c = *(uint *)&this_ptr->field_0x2520;
          *(uint *)&this_ptr->field_0x2518 = *(uint *)&this_ptr->field_0x251c;
          return;
        }
        iVar12 = iVar12 + 1;
        str1 = str1 + 1;
      } while (iVar12 <= local_20);
    }
  }
  if (*(int *)&this_ptr->field_0xdc != 0) {
    local_68 = local_68 + *(float *)&this_ptr->field_0xe0;
    local_60 = local_60 + *(float *)&this_ptr->field_0xe8;
    *(float *)&this_ptr->field_0x24 =
         *(float *)&this_ptr->field_0xe4 + *(float *)&this_ptr->field_0x24;
    *(uint *)&this_ptr->field_0xe8 = 0;
    *(uint *)&this_ptr->field_0xe4 = *(uint *)&this_ptr->field_0xe8;
    *(uint *)&this_ptr->field_0xe0 = *(uint *)&this_ptr->field_0xe4;
    *(float *)&this_ptr->field_0x30 =
         *(float *)&this_ptr->field_0xec + *(float *)&this_ptr->field_0x30;
    *(float *)&this_ptr->field_0x34 =
         *(float *)&this_ptr->field_0xf0 + *(float *)&this_ptr->field_0x34;
    *(float *)&this_ptr->field_0x38 =
         *(float *)&this_ptr->field_0xf4 + *(float *)&this_ptr->field_0x38;
    *(uint *)&this_ptr->field_0xf4 = 0;
    *(uint *)&this_ptr->field_0xf0 = *(uint *)&this_ptr->field_0xf4;
    *(uint *)&this_ptr->field_0xec = *(uint *)&this_ptr->field_0xf0;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  }
  local_24 = &this_ptr->field_0x2e68;
  iVar9 = 0;
  local_54 = (uint *)&this_ptr->field_0x2f1c;
  local_58 = (uint *)&this_ptr->field_0x2e8c;
  do {
    puVar6 = (uint *)(local_24 + iVar9 * 0x24);
    puVar7 = local_54;
    do {
      puVar6[2] = 0;
      puVar6[1] = puVar6[2];
      *puVar6 = puVar6[1];
      puVar7[2] = 0;
      puVar6 = puVar6 + 3;
      puVar7[1] = puVar7[2];
      *puVar7 = puVar7[1];
      puVar7 = puVar7 + 3;
    } while (puVar6 != local_58);
    iVar9 = iVar9 + 1;
    local_54 = local_54 + 9;
    local_58 = local_58 + 9;
  } while (iVar9 < 5);
  pfVar10 = (float *)((int)this_ptr + (uint)bVar13 * -8 + 0x24);
  local_c8 = *(uint *)&this_ptr->field_0x20;
  afStack_ac[(uint)bVar13 * -2 + -6] = *pfVar10;
  pCVar14 = g_CDemonSetPtr;
  actor = this_ptr;
  *(float *)(&stack0xffffff40 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
       pfVar10[(uint)bVar13 * -2 + 1];
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(pCVar14,(CDemonActor *)actor);
  local_48 = *(float *)&velocity->field_0x4;
  local_28 = (float *)&this_ptr->field_0x20;
  local_5c = &this_ptr->field_0x2f1c;
  local_44 = &this_ptr->field_0x2e68;
  local_30 = (uint *)&this_ptr->field_0x2e74;
  local_34 = (uint *)&this_ptr->field_0x2e80;
  local_2c = (uint *)&this_ptr->field_0x2f28;
  local_38 = (uint *)&this_ptr->field_0x2f34;
  local_1c = 0;
  do {
    local_3c = *(float *)&this_ptr->field_0x3000 * *(float *)&this_ptr->field_0x27b8;
    local_64 = 0.0;
    if (local_3c < *(float *)&this_ptr->field_0x2ffc * *(float *)&this_ptr->field_0x27b8) {
      local_3c = *(float *)&this_ptr->field_0x2490;
    }
    fVar2 = *(float *)&this_ptr->field_0x2ffc * *(float *)&this_ptr->field_0x27b8;
    if (local_3c < fVar2) {
      local_3c = *(float *)&this_ptr->field_0x27b8 * (float)_DAT_005d590f + fVar2;
    }
    local_f8 = (float)core_setcolid_cpp_FUN_00558450
                                (g_CDemonSetPtr,*(uint *)&this_ptr->field_0x20,
                                 *(uint *)&this_ptr->field_0x28,local_68,local_60,
                                 *(float *)&this_ptr->field_0x2ff0 *
                                 *(float *)&this_ptr->field_0x27b8,
                                 *(float *)&this_ptr->field_0x2ffc *
                                 *(float *)&this_ptr->field_0x27b8 + *(float *)&this_ptr->field_0x24
                                 ,*(float *)&this_ptr->field_0x24 + local_3c);
    pfVar10 = local_28;
    local_18 = local_f8;
    if (DAT_007c6380 == 0) {
      DAT_007c6380 = *(int *)&g_CDemonSetPtr->field_0x14d144;
    }
    puVar7 = (uint *)(local_44 + local_1c * 0x24);
    if (puVar7 != (uint *)&DAT_0152c2a8) {
      *puVar7 = _DAT_0152c2a8;
      puVar7[1] = _DAT_0152c2ac;
      puVar7[2] = _DAT_0152c2b0;
    }
    if (local_30 != (uint *)&DAT_0152c2b4) {
      *local_30 = _DAT_0152c2b4;
      local_30[1] = _DAT_0152c2b8;
      local_30[2] = _DAT_0152c2bc;
    }
    if (local_34 != (uint *)&DAT_0152c2c0) {
      *local_34 = _DAT_0152c2c0;
      local_34[1] = _DAT_0152c2c4;
      local_34[2] = _DAT_0152c2c8;
    }
    pCVar14 = g_CDemonSetPtr;
    if (0.0 <= local_f8) {
      if (1.0 < local_f8) {
        local_f8 = 1.0;
      }
      local_e0 = local_68 * local_f8;
      local_dc = local_64 * local_f8;
      local_d8 = local_60 * local_f8;
      local_98 = local_68 * local_f8;
      afStack_ac[(uint)bVar13 * -2 + 6] = *(float *)((int)&stack0xffffff24 + (uint)bVar13 * -8);
      afStack_ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           *(float *)((int)&stack0xffffff28 + (uint)bVar13 * -8 + (uint)bVar13 * -8);
      *pfVar10 = *pfVar10 + local_98;
      pfVar10[1] = pfVar10[1] + local_94;
      pfVar10[2] = pfVar10[2] + local_90;
      puVar15 = local_bc;
      puVar7 = (uint *)((int)pCVar14 + (uint)bVar13 * -8 + 0x14d12c);
      local_d4 = *(float *)&pCVar14->field_0x14d128;
      *(uint *)((int)&stack0xffffff30 + (uint)bVar13 * -8) = *puVar7;
      *(uint *)((int)&stack0xffffff34 + (uint)bVar13 * -8 + (uint)bVar13 * -8) =
           puVar7[(uint)bVar13 * -2 + 1];
      local_18 = (float)(**(code **)(*(int *)&this_ptr->field_0x154 + 0x40))
                                  (this_ptr,*(uint *)&this_ptr->field_0x2fec,puVar15);
      bVar5 = false;
      puVar7 = (uint *)(local_5c + local_1c * 0x24);
      *(float *)&this_ptr->field_0x2504 = local_18;
      if (puVar7 != (uint *)&DAT_0152c2a8) {
        *puVar7 = _DAT_0152c2a8;
        puVar7[1] = _DAT_0152c2ac;
        puVar7[2] = _DAT_0152c2b0;
      }
      if (local_2c != (uint *)&DAT_0152c2b4) {
        *local_2c = _DAT_0152c2b4;
        local_2c[1] = _DAT_0152c2b8;
        local_2c[2] = _DAT_0152c2bc;
      }
      if (local_38 != (uint *)&DAT_0152c2c0) {
        *local_38 = _DAT_0152c2c0;
        local_38[1] = _DAT_0152c2c4;
        local_38[2] = _DAT_0152c2c8;
      }
      if (*(float *)&this_ptr->field_0x24 < *(float *)&this_ptr->field_0x2504) {
        *(uint *)&this_ptr->field_0x24 = *(uint *)&this_ptr->field_0x2504;
        fStack_c4 = *(float *)&this_ptr->field_0x24;
      }
      if ((float)_DAT_005d591f < local_f8) break;
      fVar2 = SQRT(fStack_cc * fStack_cc + local_d4 * local_d4);
      fStack_d0 = 0.0;
      if (0.0 < fVar2) {
        fStack_40 = 1.0 / fVar2;
        local_d4 = local_d4 * fStack_40;
        fStack_d0 = fStack_40 * 0.0;
        fStack_cc = fStack_cc * fStack_40;
      }
      fStack_4c = (float)_DAT_005d591f - local_f8;
      fVar2 = local_68 * fStack_4c;
      fVar3 = local_64 * fStack_4c;
      local_64 = fVar3;
      local_68 = fVar2;
      local_60 = local_60 * fStack_4c;
      fVar4 = fStack_cc * local_60 + local_d4 * fVar2 + fStack_d0 * fVar3;
      if (0.0 <= fVar4) break;
      fVar4 = fVar4 * (float)_DAT_005d5917;
      fStack_8c = local_d4 * fVar4;
      fStack_88 = fStack_d0 * fVar4;
      fStack_84 = fStack_cc * fVar4;
      afStack_ac[2] = local_d4 * fVar4;
      afStack_ac[(uint)bVar13 * -2 + 3] = afStack_ac[(uint)bVar13 * -2 + 9];
      afStack_ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      local_68 = fVar2 - afStack_ac[2];
      local_64 = fVar3 - afStack_ac[3];
      local_60 = local_60 - fStack_9c;
    }
    else {
      local_50 = local_f8 + (float)_DAT_005d5927;
      local_e8 = *(float *)&g_CDemonSetPtr->field_0x14d12c * local_50;
      local_e4 = *(float *)&g_CDemonSetPtr->field_0x14d130 * local_50;
      afStack_7c[2] = *(float *)&g_CDemonSetPtr->field_0x14d128 * local_50;
      afStack_7c[(uint)bVar13 * -2 + 3] = *(float *)((int)&stack0xffffff18 + (uint)bVar13 * -8);
      afStack_7c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           *(float *)((int)&stack0xffffff1c + (uint)bVar13 * -8 + (uint)bVar13 * -8);
      bVar5 = true;
      *pfVar10 = *pfVar10 - afStack_7c[2];
      pfVar10[1] = pfVar10[1] - afStack_7c[3];
      pfVar10[2] = pfVar10[2] - local_6c;
    }
    local_30 = local_30 + 9;
    local_34 = local_34 + 9;
    local_2c = local_2c + 9;
    local_38 = local_38 + 9;
    local_1c = local_1c + 1;
  } while (local_1c < 3);
  if (bVar5) {
    local_18 = (float)(**(code **)(*(int *)&this_ptr->field_0x154 + 0x40))
                                (this_ptr,*(uint *)&this_ptr->field_0x2fec,0);
    *(float *)&this_ptr->field_0x2504 = local_18;
  }
  fVar2 = *(float *)&this_ptr->field_0x24 + local_48;
  *(float *)&this_ptr->field_0x24 = fVar2;
  if (*(float *)&this_ptr->field_0x2504 <= fVar2) {
    if ((*(int *)&this_ptr->field_0x2500 != 0) &&
       (*(float *)&this_ptr->field_0x24 < *(float *)&this_ptr->field_0x2504 + (float)_DAT_005d590f))
    {
      *(uint *)&this_ptr->field_0x24 = *(uint *)&this_ptr->field_0x2504;
      fStack_c4 = *(float *)&this_ptr->field_0x24;
    }
  }
  else {
    *(uint *)&this_ptr->field_0x24 = *(uint *)&this_ptr->field_0x2504;
  }
  *(uint *)&this_ptr->field_0x2520 = 0;
  *(uint *)&this_ptr->field_0x251c = *(uint *)&this_ptr->field_0x2520;
  *(uint *)&this_ptr->field_0x2518 = *(uint *)&this_ptr->field_0x251c;
  pCVar14 = g_CDemonSetPtr;
  *(float *)&this_ptr->field_0x251c =
       (*(float *)&this_ptr->field_0x24 - fStack_c4) / *(float *)&g_CGamePtr->field_0x294;
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(pCVar14);
  return;
}
