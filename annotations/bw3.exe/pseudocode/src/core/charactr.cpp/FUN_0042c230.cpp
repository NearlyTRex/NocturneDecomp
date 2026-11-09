// Name: core_charactr.cpp_FUN_0042c230
// Address: 0042c230
// Address Range: [[0042c230, 0042cce3]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042c230(CCharacter *this_ptr,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_0042c230(CCharacter *this_ptr,CVector3f *velocity)

{
  SMotion SVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint *puVar5;
  SMotion *str1;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  float *pfVar9;
  SMotion *pSVar10;
  int iVar11;
  byte bVar12;
  float afStackY_10e4 [1003];
  CDemonSet *pCVar13;
  CCharacter *actor;
  float *pfVar14;
  float local_104;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  uint local_e4;
  float fStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float afStack_bc [4];
  float local_ac;
  char local_a8 [4];
  float afStack_a4 [4];
  float local_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float local_80 [5];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  byte *local_5c;
  int local_58;
  float fStack_54;
  uint *local_50;
  uint *local_4c;
  byte *local_48;
  float fStack_44;
  float local_40;
  byte *local_3c;
  int local_38;
  float local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  float *local_20;
  float fStack_1c;
  float local_14;
  
  bVar12 = 0;
  DAT_007e2cf0 = 0;
  if (((((*(uint *)&velocity->field_0x8 & 0x7fffffff) == 0) &&
       ((*(uint *)velocity & 0x7fffffff) == 0)) && (*(float *)&velocity->field_0x4 <= 0.0)) &&
     ((*(int *)&this_ptr->field_0xdc == 0 &&
      (*(float *)&this_ptr->field_0x24 == *(float *)&this_ptr->field_0x2504)))) {
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    *(uint *)&this_ptr->field_0x2520 = 0;
    *(uint *)&this_ptr->field_0x251c = *(uint *)&this_ptr->field_0x2520;
    *(uint *)&this_ptr->field_0x2518 = *(uint *)&this_ptr->field_0x251c;
    return;
  }
  core_actor_cpp_FUN_00408b00(this_ptr,velocity);
  local_fc = local_80[2];
  *(float *)((int)&stack0xffffff08 + (uint)bVar12 * -8) = local_80[(uint)bVar12 * -2 + 3];
  *(float *)((int)&stack0xffffff0c + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
       local_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
  if (*(int *)&this_ptr->field_0x27a8 != 0) {
    *(uint *)&this_ptr->field_0xdc = 0;
    *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + local_80[2];
    *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + local_f8;
    *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + local_f4;
    *(uint *)&this_ptr->field_0x2520 = 0;
    *(uint *)&this_ptr->field_0x251c = *(uint *)&this_ptr->field_0x2520;
    *(uint *)&this_ptr->field_0x2518 = *(uint *)&this_ptr->field_0x251c;
    return;
  }
  if (this_ptr->field_0x24a8 != '\0') {
    str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&this_ptr->field_0x158);
    uVar6 = 0xffffffff;
    pSVar10 = str1;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      SVar1 = *pSVar10;
      pSVar10 = pSVar10 + (uint)bVar12 * -2 + 1;
    } while (SVar1 != (SMotion)0x0);
    iVar7 = ~uVar6 - 0xc;
    local_a8[0] = "noCollision"[0];
    local_a8[1] = "noCollision"[1];
    local_a8[2] = "noCollision"[2];
    local_a8[3] = "noCollision"[3];
    afStack_a4[(uint)bVar12 * -2] = *(float *)("noCollision" + (uint)bVar12 * -8 + 4);
    afStack_a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    iVar11 = 0;
    local_58 = iVar7;
    if (-1 < iVar7) {
      do {
        iVar7 = _strnicmp((char *)str1,local_a8,0xb);
        if (iVar7 == 0) {
          *(uint *)&this_ptr->field_0x2520 = 0;
          *(uint *)&this_ptr->field_0x251c = *(uint *)&this_ptr->field_0x2520;
          *(uint *)&this_ptr->field_0x2518 = *(uint *)&this_ptr->field_0x251c;
          return;
        }
        iVar11 = iVar11 + 1;
        str1 = str1 + 1;
      } while (iVar11 <= local_58);
    }
  }
  if (*(int *)&this_ptr->field_0xdc != 0) {
    local_fc = local_80[2] + *(float *)&this_ptr->field_0xe0;
    local_f4 = local_f4 + *(float *)&this_ptr->field_0xe8;
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
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
  }
  local_5c = &this_ptr->field_0x30d0;
  iVar7 = 0;
  local_50 = (uint *)&this_ptr->field_0x3184;
  local_4c = (uint *)&this_ptr->field_0x30f4;
  do {
    puVar5 = (uint *)(local_5c + iVar7 * 0x24);
    puVar8 = local_50;
    do {
      puVar5[2] = 0;
      puVar5[1] = puVar5[2];
      *puVar5 = puVar5[1];
      puVar8[2] = 0;
      puVar5 = puVar5 + 3;
      puVar8[1] = puVar8[2];
      *puVar8 = puVar8[1];
      puVar8 = puVar8 + 3;
    } while (puVar5 != local_4c);
    iVar7 = iVar7 + 1;
    local_50 = local_50 + 9;
    local_4c = local_4c + 9;
  } while (iVar7 < 5);
  puVar8 = (uint *)((int)this_ptr + (uint)bVar12 * -8 + 0x24);
  local_e4 = *(uint *)&this_ptr->field_0x20;
  (&stack0xffffff20)[(uint)bVar12 * 0xfffffffe] = (float)*puVar8;
  pCVar13 = g_CDemonSetPtr;
  actor = this_ptr;
  afStack_bc[(uint)bVar12 * 0xfffffffe + (uint)bVar12 * 0xfffffffe + 0xfffffff8] =
       (float)puVar8[(uint)bVar12 * -2 + 1];
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(pCVar13,(CDemonActor *)actor);
  local_60 = *(float *)&velocity->field_0x4;
  local_20 = (float *)&this_ptr->field_0x20;
  local_3c = &this_ptr->field_0x3184;
  local_48 = &this_ptr->field_0x30d0;
  local_28 = (uint *)&this_ptr->field_0x30dc;
  local_30 = (uint *)&this_ptr->field_0x30e8;
  local_24 = (uint *)&this_ptr->field_0x3190;
  local_2c = (uint *)&this_ptr->field_0x319c;
  local_38 = 0;
  do {
    local_34 = *(float *)&this_ptr->field_0x3280 * *(float *)&this_ptr->field_0x27b8;
    local_f8 = 0.0;
    if (local_34 < *(float *)&this_ptr->field_0x327c * *(float *)&this_ptr->field_0x27b8) {
      local_34 = *(float *)&this_ptr->field_0x2490;
    }
    fVar2 = *(float *)&this_ptr->field_0x327c * *(float *)&this_ptr->field_0x27b8;
    if (local_34 < fVar2) {
      local_34 = *(float *)&this_ptr->field_0x27b8 * (float)_DAT_005b822e + fVar2;
    }
    local_104 = (float)core_setcolid_cpp_FUN_0053de10
                                 (g_CDemonSetPtr,*(uint *)&this_ptr->field_0x20,
                                  *(uint *)&this_ptr->field_0x28,local_fc,local_f4,
                                  *(float *)&this_ptr->field_0x3270 *
                                  *(float *)&this_ptr->field_0x27b8,
                                  *(float *)&this_ptr->field_0x327c *
                                  *(float *)&this_ptr->field_0x27b8 +
                                  *(float *)&this_ptr->field_0x24,
                                  *(float *)&this_ptr->field_0x24 + local_34);
    pfVar14 = local_20;
    local_14 = local_104;
    if (DAT_007e2cf0 == 0) {
      DAT_007e2cf0 = *(int *)&g_CDemonSetPtr->field_0x14d144;
    }
    puVar8 = (uint *)(local_48 + local_38 * 0x24);
    if (puVar8 != (uint *)&DAT_01548b58) {
      *puVar8 = _DAT_01548b58;
      puVar8[1] = _DAT_01548b5c;
      puVar8[2] = _DAT_01548b60;
    }
    if (local_28 != (uint *)&DAT_01548b64) {
      *local_28 = _DAT_01548b64;
      local_28[1] = _DAT_01548b68;
      local_28[2] = _DAT_01548b6c;
    }
    if (local_30 != (uint *)&DAT_01548b70) {
      *local_30 = _DAT_01548b70;
      local_30[1] = _DAT_01548b74;
      local_30[2] = _DAT_01548b78;
    }
    pCVar13 = g_CDemonSetPtr;
    if (0.0 <= local_104) {
      if (1.0 < local_104) {
        local_104 = 1.0;
      }
      afStack_bc[2] = local_fc * local_104;
      afStack_bc[3] = local_f8 * local_104;
      local_ac = local_f4 * local_104;
      local_6c = local_fc * local_104;
      local_80[(uint)bVar12 * -2 + 6] = afStack_bc[(uint)bVar12 * -2 + 3];
      local_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
           afStack_bc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      *pfVar14 = *pfVar14 + local_6c;
      pfVar14[1] = pfVar14[1] + local_68;
      pfVar14[2] = pfVar14[2] + local_64;
      pfVar14 = &stack0xffffff10;
      pfVar9 = (float *)((int)pCVar13 + (uint)bVar12 * -8 + 0x14d12c);
      local_c0 = *(float *)&pCVar13->field_0x14d128;
      afStack_bc[(uint)bVar12 * -2] = *pfVar9;
      afStack_a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -5] = pfVar9[(uint)bVar12 * -2 + 1];
      local_14 = (float)(**(code **)(*(int *)&this_ptr->field_0x154 + 0x40))
                                  (this_ptr,*(uint *)&this_ptr->field_0x326c,pfVar14);
      bVar4 = false;
      puVar8 = (uint *)(local_3c + local_38 * 0x24);
      *(float *)&this_ptr->field_0x2504 = local_14;
      if (puVar8 != (uint *)&DAT_01548b58) {
        *puVar8 = _DAT_01548b58;
        puVar8[1] = _DAT_01548b5c;
        puVar8[2] = _DAT_01548b60;
      }
      if (local_24 != (uint *)&DAT_01548b64) {
        *local_24 = _DAT_01548b64;
        local_24[1] = _DAT_01548b68;
        local_24[2] = _DAT_01548b6c;
      }
      if (local_2c != (uint *)&DAT_01548b70) {
        *local_2c = _DAT_01548b70;
        local_2c[1] = _DAT_01548b74;
        local_2c[2] = _DAT_01548b78;
      }
      if (fStack_e0 < *(float *)&this_ptr->field_0x2504) {
        if (afStack_a4 + 5 != &stack0xffffff10) {
          fStack_90 = local_f0;
          fStack_8c = fStack_ec;
          fStack_88 = fStack_e8;
        }
        fStack_54 = SQRT(fStack_88 * fStack_88 + fStack_90 * fStack_90 + fStack_8c * fStack_8c);
        if (fStack_54 <= 0.0) {
          fStack_8c = 0.0;
          fStack_90 = 0.0;
          fStack_88 = 0.0;
        }
        else {
          fVar2 = 1.0 / fStack_54;
          fStack_90 = fStack_90 * fVar2;
          fStack_8c = fStack_8c * fVar2;
          fStack_88 = fStack_88 * fVar2;
        }
        if (fStack_8c < (float)_DAT_005b823e) {
          *(uint *)&this_ptr->field_0x20 = local_e4;
          *(float *)&this_ptr->field_0x24 = fStack_e0;
          *(uint *)&this_ptr->field_0x28 = uStack_dc;
          if (&local_c0 == &stack0xffffff10) {
            return;
          }
          return;
        }
      }
      if (*(float *)&this_ptr->field_0x24 < *(float *)&this_ptr->field_0x2504) {
        *(uint *)&this_ptr->field_0x24 = *(uint *)&this_ptr->field_0x2504;
        fStack_e0 = *(float *)&this_ptr->field_0x24;
      }
      if ((float)_DAT_005b8246 < local_104) break;
      fVar2 = SQRT(afStack_bc[1] * afStack_bc[1] + local_c0 * local_c0);
      afStack_bc[0] = 0.0;
      if (0.0 < fVar2) {
        fStack_1c = 1.0 / fVar2;
        local_c0 = local_c0 * fStack_1c;
        afStack_bc[0] = fStack_1c * 0.0;
        afStack_bc[1] = afStack_bc[1] * fStack_1c;
      }
      local_104 = (float)_DAT_005b8246 - local_104;
      fStack_44 = local_104;
      fVar2 = local_f8 * local_104;
      local_f8 = fVar2;
      local_f4 = local_f4 * local_104;
      fVar3 = afStack_bc[1] * local_f4 + local_c0 * local_fc * local_104 + afStack_bc[0] * fVar2;
      if (0.0 <= fVar3) break;
      fVar3 = fVar3 * (float)_DAT_005b8236;
      fStack_d8 = local_c0 * fVar3;
      fStack_d4 = afStack_bc[0] * fVar3;
      fStack_d0 = afStack_bc[1] * fVar3;
      fStack_cc = local_c0 * fVar3;
      *(float *)(local_a8 + (uint)bVar12 * -8 + -0x20) =
           afStack_bc[(uint)bVar12 * 0xfffffffe + 0xfffffffa];
      afStack_a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -8] =
           afStack_bc[(uint)bVar12 * 0xfffffffe + (uint)bVar12 * 0xfffffffe + 0xfffffffb];
      local_fc = local_fc * local_104 - fStack_cc;
      local_f8 = fVar2 - fStack_c8;
      local_f4 = local_f4 - fStack_c4;
    }
    else {
      local_40 = local_104 + (float)_DAT_005b824e;
      afStack_a4[2] = *(float *)&g_CDemonSetPtr->field_0x14d128 * local_40;
      afStack_a4[3] = *(float *)&g_CDemonSetPtr->field_0x14d12c * local_40;
      local_94 = *(float *)&g_CDemonSetPtr->field_0x14d130 * local_40;
      local_84 = afStack_a4[2];
      local_80[(uint)bVar12 * -2] = afStack_a4[(uint)bVar12 * -2 + 3];
      local_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
           afStack_a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
      bVar4 = true;
      *pfVar14 = *pfVar14 - local_84;
      pfVar14[1] = pfVar14[1] - local_80[0];
      pfVar14[2] = pfVar14[2] - local_80[1];
    }
    local_28 = local_28 + 9;
    local_30 = local_30 + 9;
    local_24 = local_24 + 9;
    local_2c = local_2c + 9;
    local_38 = local_38 + 1;
  } while (local_38 < 3);
  if (bVar4) {
    local_14 = (float)(**(code **)(*(int *)&this_ptr->field_0x154 + 0x40))
                                (this_ptr,*(uint *)&this_ptr->field_0x326c,0);
    *(float *)&this_ptr->field_0x2504 = local_14;
  }
  fVar2 = *(float *)&this_ptr->field_0x24 + local_60;
  *(float *)&this_ptr->field_0x24 = fVar2;
  if (*(float *)&this_ptr->field_0x2504 <= fVar2) {
    if ((*(int *)&this_ptr->field_0x2500 != 0) &&
       (*(float *)&this_ptr->field_0x24 < *(float *)&this_ptr->field_0x2504 + (float)_DAT_005b822e))
    {
      *(uint *)&this_ptr->field_0x24 = *(uint *)&this_ptr->field_0x2504;
      fStack_e0 = *(float *)&this_ptr->field_0x24;
    }
  }
  else {
    *(uint *)&this_ptr->field_0x24 = *(uint *)&this_ptr->field_0x2504;
  }
  *(uint *)&this_ptr->field_0x2520 = 0;
  *(uint *)&this_ptr->field_0x251c = *(uint *)&this_ptr->field_0x2520;
  *(uint *)&this_ptr->field_0x2518 = *(uint *)&this_ptr->field_0x251c;
  pCVar13 = g_CDemonSetPtr;
  *(float *)&this_ptr->field_0x251c =
       (*(float *)&this_ptr->field_0x24 - fStack_e0) / *(float *)&g_CGamePtr->field_0x314;
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(pCVar13);
  return;
}
