// Name: core_inv.cpp_FUN_004fae10
// Address: 004fae10
// Address Range: [[004fae10, 004fc23d]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004fae10(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004fae10(int param_1)

{
  float fVar1;
  char cVar2;
  CBitFont *pCVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  CAlphaBitmap *this_ptr;
  int iVar10;
  char *pcVar11;
  byte bVar12;
  float10 fVar13;
  float afStackY_1158 [530];
  char *pcVar14;
  CMatrix3x3f *this_ptr_00;
  ulonglong uVar15;
  int alpha;
  CVector3f *euler_angles;
  float local_8e8;
  float local_8e4;
  char local_8e0 [256];
  char local_7e0 [256];
  char local_6e0 [256];
  char local_5e0 [256];
  char local_4e0 [256];
  byte local_3e0 [256];
  char local_2e0 [256];
  SMRGLPrimitivePoly local_1e0 [4];
  uint local_1dc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  CMatrix3x3f local_198 [40];
  uint local_170;
  float afStack_16c [4];
  uint local_15c;
  float local_158;
  float local_14c;
  float local_148;
  uint local_144;
  byte local_140 [8];
  float afStack_138 [4];
  float local_128;
  float local_124;
  uint local_120;
  uint local_11c;
  float afStack_118 [5];
  float local_104;
  float local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc;
  uint local_d8;
  uint local_d4;
  float afStack_d0 [5];
  float local_bc;
  float local_b8;
  uint local_b4;
  float local_b0;
  float local_ac [5];
  float local_98;
  float local_94;
  uint local_90;
  float local_8c;
  float local_88;
  uint local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  float local_5c;
  float local_58;
  int local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  CBitFont *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  CBitFont *local_2c;
  int local_28;
  int local_24;
  int local_20;
  CBitFont *local_1c;
  CBitFont *local_18;
  float local_14;
  
  bVar12 = 0;
  if (*(int *)&g_CGamePtr->field_0x244 != 0) {
    return;
  }
  if (*(int *)(param_1 + 4) != *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    return;
  }
  if (*(int *)&g_CFieldNotesPtr->field_0x40 != 0) {
    *(uint *)(param_1 + 0x344) = 0;
    *(uint *)(param_1 + 0x34c) = 0;
    *(uint *)(param_1 + 0x350) = 0;
    *(uint *)(param_1 + 0x340) = 0;
  }
  if (DAT_0061b49c != _DAT_01d1bc5c) {
    core_inv_cpp_FUN_004f70e0();
  }
  local_78 = _DAT_01c50948;
  local_1c = _DAT_0152d248;
  _DAT_01c50948 = 0;
  if ((DAT_0061b49c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
    local_1c = _DAT_0152d250;
  }
  if ((*(int *)(param_1 + 0x338) == 0) || (*(float *)(param_1 + 0x340) <= 0.0)) goto LAB_004fb230;
  iVar10 = 0x30;
  local_54 = 0x000000D0;
  local_48 = 0x10;
  local_70 = 0x70;
  local_60 = 0x00000060;
  iVar9 = 0x24;
  if ((DAT_0061b49c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
    local_54 = 0x000000D0 / 2;
    local_60 = 0x00000060 / 2;
    iVar10 = 0x18;
    iVar9 = 0x12;
    local_70 = 0x28;
    local_48 = 8;
  }
  local_64 = 0xffff;
  if (*(float *)(param_1 + 0x340) < 1.0) {
    fVar13 = (float10)*(float *)(param_1 + 0x340) * (float10)_DAT_005e6914;
    round();
    local_64 = (int)ROUND(fVar13);
  }
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_1 + 0x338));
  if (iVar4 != 0) {
    fVar13 = (float10)*(float *)(iVar4 + 0x584) * (float10)_DAT_005e6918;
    round();
    local_14 = (float)(int)ROUND(fVar13);
    FUN_005bfb40(local_6e0,&DAT_005e6894);
    iVar4 = engine_font_cpp_FUN_004c4510(local_1c,0x58);
    iVar5 = engine_font_cpp_FUN_004c3ea0(local_1c,local_6e0);
    engine_font_cpp_FUN_004c1dd0
              (local_1c,local_6e0,(DAT_0061b498 - iVar10) - iVar5,(DAT_0061b49c - local_48) - iVar4,
               0xf8);
  }
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_1 + 0x338));
  if (iVar4 != 0) {
    fVar13 = (float10)*(float *)(iVar4 + 0x584) * (float10)_DAT_005e6918;
    round();
    local_14 = (float)(int)ROUND(fVar13);
    FUN_005bfb40(local_8e0,&DAT_005e6899);
    iVar4 = engine_font_cpp_FUN_004c4510(local_1c,0x58);
    iVar5 = engine_font_cpp_FUN_004c3ea0(local_1c,local_8e0);
    engine_font_cpp_FUN_004c1dd0
              (local_1c,local_8e0,(DAT_0061b498 - iVar10) - iVar5,(DAT_0061b49c - local_48) - iVar4,
               0xf8);
  }
  iVar10 = core_inv_cpp_FUN_004fa540(param_1,*(uint *)(param_1 + 0x338));
  if (iVar10 == 0) {
    iVar4 = DAT_0061b498 - iVar9;
    iVar9 = DAT_0061b49c - iVar9;
    iVar10 = core_actor_cpp_FUN_0040c550(*(CDemonActor **)(param_1 + 0x338),"CTommyGun");
    this_ptr = (CAlphaBitmap *)0x0;
    if (iVar10 != 0) {
      this_ptr = &CAlphaBitmap_01d1ba0c;
    }
    iVar10 = core_actor_cpp_FUN_0040c550(*(CDemonActor **)(param_1 + 0x338),"CShotgun");
    if (iVar10 != 0) {
      this_ptr = &CAlphaBitmap_01d1ba5c;
    }
    iVar10 = core_actor_cpp_FUN_0040c550(*(CDemonActor **)(param_1 + 0x338),"CElephantGun")
    ;
    if (iVar10 != 0) {
      this_ptr = &CAlphaBitmap_01d1ba5c;
    }
    iVar10 = core_actor_cpp_FUN_0040c550(*(CDemonActor **)(param_1 + 0x338),&DAT_005e68be);
    if (iVar10 != 0) {
      if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 0) {
        this_ptr = &CAlphaBitmap_01d1ba20;
      }
      if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 3) {
        this_ptr = &CAlphaBitmap_01d1ba34;
      }
      if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 7) {
        this_ptr = &CAlphaBitmap_01d1ba48;
      }
      if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 8) {
        this_ptr = &CAlphaBitmap_01d1ba70;
      }
      if (*(int *)(*(int *)(param_1 + 0x338) + 0x56c) == 1) {
        this_ptr = &CAlphaBitmap_01d1ba84;
      }
    }
    if (this_ptr != (CAlphaBitmap *)0x0) {
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(this_ptr,iVar4,iVar9,local_64);
    }
    iVar9 = core_actor_cpp_FUN_0040c550(*(CDemonActor **)(param_1 + 0x338),"CFlashlight");
    if (iVar9 == 0) {
      if ((*(float *)(param_1 + 0x350) <= 0.0) || (*(int *)(param_1 + 0x454) != 0)) {
        FUN_005bfb40(local_5e0,&DAT_005e68cf);
      }
      else {
        uVar6 = core_inv_cpp_getItemDisplayName_FUN_004f62e0(*(uint *)(param_1 + 0x464));
        FUN_005bfb40(local_5e0,"%s %d",uVar6);
      }
      iVar9 = engine_font_cpp_FUN_004c4510(local_1c,0x58);
      pCVar3 = local_1c;
      iVar10 = engine_font_cpp_FUN_004c3ea0(local_1c,local_5e0);
      engine_font_cpp_FUN_004c1dd0
                (pCVar3,local_5e0,(DAT_0061b498 - local_48) - iVar10,
                 (DAT_0061b49c - local_48) - iVar9,0xf8);
    }
  }
  if (*(int *)(param_1 + 0x454) == 0) goto LAB_004fb230;
  iVar9 = core_inv_cpp_FUN_004fa540(param_1,*(uint *)(param_1 + 0x338));
  if (iVar9 == 0) {
    iVar9 = core_inv_cpp_FUN_004fa540(param_1,*(uint *)(param_1 + 0x338));
    if ((iVar9 == 0) &&
       (iVar9 = core_inv_cpp_FUN_004fa540(param_1,*(uint *)(param_1 + 0x338)), iVar9 == 0)) {
      uVar6 = core_inv_cpp_getItemDescription_FUN_004f6350();
      uVar7 = core_inv_cpp_getItemDisplayName_FUN_004f62e0(*(uint *)(param_1 + 0x338));
      uVar15 = CONCAT44(uVar6,uVar7);
      pcVar14 = "%s\n\n%s";
      goto LAB_004fb13d;
    }
    core_inv_cpp_getItemDisplayName_FUN_004f62e0();
    uVar6 = core_inv_cpp_getItemDescription_FUN_004f6350(*(uint *)(param_1 + 0x338));
    uVar6 = core_inv_cpp_getItemDisplayName_FUN_004f62e0(*(uint *)(param_1 + 0x338),uVar6);
    FUN_005bfb40(local_2e0,"%s\n\n%s %s",uVar6);
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" are loaded.");
    iVar9 = -1;
    pcVar14 = local_2e0;
    do {
      pcVar11 = pcVar14;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar11 = pcVar14 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
  }
  else {
    uVar6 = core_inv_cpp_getItemDescription_FUN_004f6350();
    uVar7 = core_inv_cpp_getItemDisplayName_FUN_004f62e0(*(uint *)(param_1 + 0x338));
    uVar15 = CONCAT44(uVar6,uVar7);
    pcVar14 = "%s\n\n%s";
LAB_004fb13d:
    FUN_005bfb40(local_2e0,pcVar14,uVar15);
  }
  pCVar3 = local_1c;
  local_2c = local_1c;
  iVar9 = engine_font_cpp_FUN_004c4260(local_1c,local_2e0,0x1d06f78,10,0x100);
  local_34 = iVar9;
  local_3c = engine_font_cpp_FUN_004c4510(pCVar3,0x58);
  iVar10 = (DAT_0061b49c - local_60) + local_48;
  local_30 = local_48 + (DAT_0061b498 - local_54);
  iVar4 = 0;
  if (0 < iVar9) {
    iVar9 = 0x1d06f78;
    do {
      iVar4 = iVar4 + 1;
      engine_font_cpp_FUN_004c1dd0(local_2c,iVar9,local_30,iVar10,0xf8);
      iVar9 = iVar9 + 0x100;
      iVar10 = iVar10 + local_3c;
    } while (iVar4 < local_34);
  }
LAB_004fb230:
  if ((*(int *)(param_1 + 0x33c) != 0) && (0.0 < *(float *)(param_1 + 0x344))) {
    iVar4 = 0x10;
    local_6c = 0x70;
    iVar9 = 0x00000060;
    iVar10 = 0x000000D0;
    if ((DAT_0061b49c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
      iVar10 = 0x000000D0 / 2;
      iVar9 = 0x00000060 / 2;
      iVar4 = 8;
      local_6c = 0x28;
    }
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_1 + 0x33c));
    if (iVar5 != 0) {
      FUN_005bfb40
                (local_4e0,"%d x%3.0f%%",*(uint *)(iVar5 + 0x2d4),
                 (double)*(float *)(iVar5 + 0x2d8));
      local_14 = (float)engine_font_cpp_FUN_004c4510(local_1c,0x58);
      iVar5 = engine_font_cpp_FUN_004c3ea0(local_1c,local_4e0);
      engine_font_cpp_FUN_004c1dd0
                (local_1c,local_4e0,(DAT_0061b498 - iVar4) - iVar5,
                 (DAT_0061b49c - iVar4) - (int)local_14,0xf8);
    }
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_1 + 0x33c));
    if (iVar5 != 0) {
      core_inv_cpp_getItemDisplayName_FUN_004f62e0();
      FUN_005bfb40(local_7e0,&DAT_005e6909);
      local_14 = (float)engine_font_cpp_FUN_004c4510(local_1c,0x58);
      iVar5 = engine_font_cpp_FUN_004c3ea0(local_1c,local_7e0);
      engine_font_cpp_FUN_004c1dd0
                (local_1c,local_7e0,(DAT_0061b498 - iVar4) - iVar5,
                 (DAT_0061b49c - iVar4) - (int)local_14,0xf8);
    }
    if (*(int *)(param_1 + 0x454) != 0) {
      core_inv_cpp_getItemDescription_FUN_004f6350();
      uVar6 = core_inv_cpp_getItemDisplayName_FUN_004f62e0(*(uint *)(param_1 + 0x33c));
      FUN_005bfb40(local_3e0,"%s\n\n%s",uVar6);
      local_40 = local_1c;
      local_24 = engine_font_cpp_FUN_004c4260(local_1c,local_3e0,0x1d07978,10,0x100);
      local_14 = (float)local_24;
      local_38 = engine_font_cpp_FUN_004c4510(local_1c,0x58);
      iVar9 = (DAT_0061b49c - iVar9) + iVar4;
      local_28 = (DAT_0061b498 - iVar10) + iVar4;
      iVar10 = 0;
      if (0 < (int)local_14) {
        iVar4 = 0x1d07978;
        do {
          iVar10 = iVar10 + 1;
          engine_font_cpp_FUN_004c1dd0(local_40,iVar4,local_28,iVar9,0xf8);
          iVar4 = iVar4 + 0x100;
          iVar9 = iVar9 + local_38;
        } while (iVar10 < local_24);
      }
    }
  }
  if ((0.0 < *(float *)(param_1 + 0x344)) || (0.0 < *(float *)(param_1 + 0x348))) {
    local_8e8 = *(float *)(param_1 + 0x348);
    if (local_8e8 < *(float *)(param_1 + 0x344)) {
      local_8e8 = *(float *)(param_1 + 0x344);
    }
    local_68 = 0xffff;
    if (local_8e8 < 1.0) {
      fVar13 = (float10)local_8e8 * (float10)_DAT_005e6914;
      round();
      local_68 = (int)ROUND(fVar13);
    }
    local_8e4 = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2538) * (float)_DAT_005e6920;
    if (local_8e4 < 0.0) {
      local_8e4 = 0.0;
    }
    if (1.0 < local_8e4) {
      local_8e4 = 1.0;
    }
    local_14 = 8.82818e-44;
    iVar9 = 0x1b;
    if (DAT_0061b49c < 0x180) {
      local_14 = 4.34403e-44;
      iVar9 = 0xd;
    }
    local_80 = (DAT_0061b498 + -4) - iVar9;
    fVar13 = (float10)(int)local_14 - (float10)(int)local_14 * (float10)local_8e4;
    iVar10 = round(local_14);
    local_7c = (int)ROUND(fVar13);
    engine_alphabit_cpp_FUN_0040d660
              (&CAlphaBitmap_01d1b9e4,local_80,local_7c + 4,0,local_7c,iVar9 + -1);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01d1b9f8,local_80,4,iVar10);
  }
  fVar1 = *(float *)(param_1 + 0x34c);
  if (0.0 < fVar1) {
    local_74 = 0xffff;
    if (fVar1 < 1.0) {
      fVar13 = (float10)fVar1 * (float10)_DAT_005e6928;
      round();
      local_74 = (int)ROUND(fVar13);
    }
    engine_3d_c_setRenderAlpha_FUN_00406bd0(local_74);
    local_18 = _DAT_0152d248;
    if (DAT_0061b49c < 0x180) {
      local_18 = _DAT_0152d250;
    }
    iVar9 = engine_font_cpp_FUN_004c4260(local_18,param_1 + 0x354,0x1d08378,10,0x100);
    local_20 = iVar9;
    local_44 = engine_font_cpp_FUN_004c4510(local_18,0x58);
    iVar9 = (DAT_0061b49c + -4) - local_44 * iVar9;
    if (((_DAT_0152d250 != local_18) || (_DAT_01d7f1b8 == 0)) && (iVar10 = 0, 0 < local_20)) {
      iVar4 = 0x1d08378;
      do {
        iVar10 = iVar10 + 1;
        engine_font_cpp_FUN_004c1dd0(local_18,iVar4,4,iVar9,0xf8);
        iVar4 = iVar4 + 0x100;
        iVar9 = iVar9 + local_44;
      } while (iVar10 < local_20);
    }
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01d1baf4,2,2,0xffff),
     iVar9 = _DAT_01d1bc48, _DAT_01d1bc48 != -1)) {
    alpha = 0xffff;
    iVar5 = 7;
    iVar4 = 0x20;
    iVar10 = core_actor_cpp_FUN_0040cc60(0,3);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
              (CAlphaBitmap_ARRAY_01d1bb08 + iVar9 * 4 + iVar10,iVar4,iVar5,alpha);
  }
  uVar6 = CAlphaBitmap_01d1ba98._12_4_;
  if (*(int *)(param_1 + 8) != 0) {
    iVar10 = DAT_0061b49c + -2;
    iVar9 = iVar10 - CAlphaBitmap_01d1ba98._16_4_;
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01d1ba98,2,iVar9,0xffff);
    fVar1 = (float)_DAT_005e6930;
    _DAT_01c50948 = 0;
    local_f8 = 0;
    local_f4 = 0;
    local_50 = (float)(int)uVar6 * fVar1;
    local_14 = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x34) -
               *(float *)&g_CDemonSetPtr->field_0x15acbc;
    local_5c = (float)(uVar6 + 4) * fVar1;
    local_f0 = local_14;
    euler_angles = (CVector3f *)local_140;
    local_58 = (float)(iVar10 - iVar9) * fVar1;
    this_ptr_00 = local_198;
    local_4c = (float)(iVar9 + iVar10) * fVar1;
    local_140._0_4_ = 0;
    *(float *)(local_140 + (uint)bVar12 * -8 + 4) = afStack_118[(uint)bVar12 * -2 + 9];
    *(float *)(local_140 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         afStack_118[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
    core_dirmat_cpp_FUN_0045f3e0(this_ptr_00,euler_angles);
    engine_matrix_c_invertTransformMatrix_FUN_005073d0();
    local_b8 = -local_58;
    local_b4 = 0;
    local_bc = -local_50;
    local_14 = local_b8;
    core_dirmat_cpp_FUN_0045f690(local_198);
    local_104 = afStack_118[2];
    afStack_118[(uint)bVar12 * -2 + 6] = afStack_118[(uint)bVar12 * -2 + 3];
    afStack_118[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
         afStack_118[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    if (afStack_138 + 4 != afStack_118 + 5) {
      local_128 = local_104;
      local_124 = local_100;
      local_120 = local_fc;
    }
    core_inv_cpp_FUN_004f63c0(local_5c + local_128);
    local_d4 = afStack_138[1];
    afStack_d0[(uint)bVar12 * -2] = afStack_138[(uint)bVar12 * -2 + 2];
    afStack_d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_138[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 3];
    engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_d4);
    local_94 = -local_58;
    local_98 = local_50;
    local_90 = 0;
    local_14 = local_94;
    core_dirmat_cpp_FUN_0045f690(local_198);
    afStack_16c[2] = afStack_d0[2];
    afStack_16c[(uint)bVar12 * -2 + 3] = afStack_d0[(uint)bVar12 * -2 + 3];
    afStack_16c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
         afStack_d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    if (afStack_138 + 4 != afStack_16c + 2) {
      local_128 = afStack_16c[2];
      local_124 = afStack_16c[3];
      local_120 = local_15c;
    }
    core_inv_cpp_FUN_004f63c0(local_5c + local_128);
    local_d4 = local_11c;
    afStack_d0[(uint)bVar12 * -2] = afStack_118[(uint)bVar12 * -2];
    afStack_d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_118[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_d4);
    local_14c = local_50;
    local_148 = local_58;
    local_144 = 0;
    core_dirmat_cpp_FUN_0045f690(local_198);
    local_b0 = local_ec;
    local_ac[(uint)bVar12 * -2] = afStack_118[(uint)bVar12 * -2 + 0xc];
    local_ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_118[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
    if (afStack_138 + 4 != afStack_d0 + 8) {
      local_128 = local_b0;
      local_124 = local_ac[0];
      local_120 = local_ac[1];
    }
    core_inv_cpp_FUN_004f63c0(local_5c + local_128);
    local_d4 = local_170;
    afStack_d0[(uint)bVar12 * -2] = afStack_16c[(uint)bVar12 * -2];
    afStack_d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_16c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_d4);
    local_88 = local_58;
    local_8c = -local_50;
    local_84 = 0;
    core_dirmat_cpp_FUN_0045f690(local_198);
    local_e0 = local_158;
    afStack_118[(uint)bVar12 * -2 + 0xf] = afStack_16c[(uint)bVar12 * -2 + 6];
    afStack_118[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
         afStack_16c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
    if (afStack_138 + 4 != afStack_118 + 0xe) {
      local_128 = local_e0;
      local_124 = local_dc;
      local_120 = local_d8;
    }
    core_inv_cpp_FUN_004f63c0(local_5c + local_128);
    local_d4 = local_ac[2];
    afStack_d0[(uint)bVar12 * -2] = local_ac[(uint)bVar12 * -2 + 3];
    afStack_d0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         local_ac[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&local_d4);
    local_1dc = 4;
    local_1c8 = 0;
    local_1c4 = 0;
    local_1c0 = 0;
    local_1bc = 1;
    local_1b8 = 0x1000000;
    local_1b4 = 0;
    local_1ac = 0x1000000;
    local_1a8 = 0x1000000;
    local_1b0 = 2;
    local_19c = 0x1000000;
    local_1a4 = 3;
    local_1a0 = 0;
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)0x1d1baac);
    engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(DAT_00612560,local_1e0,0x23);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,1);
  }
  _DAT_01c50948 = local_78;
  return;
}
