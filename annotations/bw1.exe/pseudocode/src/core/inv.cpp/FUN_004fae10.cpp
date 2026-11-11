// Name: core_inv.cpp_FUN_004fae10
// Address: 004fae10
// Address Range: [[004fae10, 004fc23d]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004fae10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004fae10(int param_1)

{
  float fVar1;
  char cVar2;
  CBitFont *pCVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  CAlphaBitmap *this_ptr;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  float afStackY_1158 [530];
  char *pcVar13;
  CMatrix3x3f *this_ptr_00;
  int alpha;
  CVector3f *euler_angles;
  float local_8e8;
  float local_8e4;
  char local_8e0 [256];
  char local_7e0 [256];
  char local_6e0 [256];
  char local_5e0 [256];
  char local_4e0 [256];
  char local_3e0 [256];
  char local_2e0 [256];
  byte local_1e0 [112];
  int local_170;
  float afStack_16c [4];
  uint local_15c;
  float local_158;
  float local_14c;
  float local_148;
  uint local_144;
  CVector3f local_140;
  int local_134;
  float afStack_130 [4];
  uint local_120;
  int local_11c;
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
  CVector3i local_d4;
  float local_c8;
  float afStack_c4 [4];
  uint local_b4;
  float local_b0;
  float local_ac [2];
  int local_a4;
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
  
  bVar11 = 0;
  if (g_CGamePtr->letterbox_mode != 0) {
    return;
  }
  if (*(int *)(param_1 + 4) != *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    return;
  }
  if (g_CFieldNotesPtr->is_displayed != 0) {
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
  iVar9 = 0x30;
  local_54 = 0x000000D0;
  local_48 = 0x10;
  local_70 = 0x70;
  local_60 = 0x00000060;
  iVar8 = 0x24;
  if ((DAT_0061b49c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
    local_54 = 0x000000D0 / 2;
    local_60 = 0x00000060 / 2;
    iVar9 = 0x18;
    iVar8 = 0x12;
    local_70 = 0x28;
    local_48 = 8;
  }
  local_64 = 0xffff;
  if (*(float *)(param_1 + 0x340) < 1.0) {
    fVar12 = (float10)*(float *)(param_1 + 0x340) * (float10)_DAT_005e6914;
    round();
    local_64 = (int)ROUND(fVar12);
  }
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_1 + 0x338));
  if (iVar4 != 0) {
    fVar12 = (float10)*(float *)(iVar4 + 0x584) * (float10)_DAT_005e6918;
    round();
    local_14 = (float)(int)ROUND(fVar12);
    _sprintf(local_6e0,&DAT_005e6894);
    iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_1c,0x58);
    iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(local_1c,local_6e0);
    engine_font_cpp_FUN_004c1dd0
              (local_1c,local_6e0,(DAT_0061b498 - iVar9) - iVar5,(DAT_0061b49c - local_48) - iVar4,
               0xf8);
  }
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_1 + 0x338));
  if (iVar4 != 0) {
    fVar12 = (float10)*(float *)(iVar4 + 0x584) * (float10)_DAT_005e6918;
    round();
    local_14 = (float)(int)ROUND(fVar12);
    _sprintf(local_8e0,&DAT_005e6899);
    iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_1c,0x58);
    iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(local_1c,local_8e0);
    engine_font_cpp_FUN_004c1dd0
              (local_1c,local_8e0,(DAT_0061b498 - iVar9) - iVar5,(DAT_0061b49c - local_48) - iVar4,
               0xf8);
  }
  iVar9 = core_inv_cpp_FUN_004fa540(param_1,*(uint *)(param_1 + 0x338));
  if (iVar9 == 0) {
    iVar4 = DAT_0061b498 - iVar8;
    iVar8 = DAT_0061b49c - iVar8;
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c550
                      (*(CDemonActor **)(param_1 + 0x338),"CTommyGun");
    this_ptr = (CAlphaBitmap *)0x0;
    if (iVar9 != 0) {
      this_ptr = &CAlphaBitmap_01d1ba0c;
    }
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c550
                      (*(CDemonActor **)(param_1 + 0x338),"CShotgun");
    if (iVar9 != 0) {
      this_ptr = &CAlphaBitmap_01d1ba5c;
    }
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c550
                      (*(CDemonActor **)(param_1 + 0x338),"CElephantGun");
    if (iVar9 != 0) {
      this_ptr = &CAlphaBitmap_01d1ba5c;
    }
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c550(*(CDemonActor **)(param_1 + 0x338),&DAT_005e68be);
    if (iVar9 != 0) {
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
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(this_ptr,iVar4,iVar8,local_64);
    }
    iVar8 = core_actor_cpp_isOfClass_FUN_0040c550
                      (*(CDemonActor **)(param_1 + 0x338),"CFlashlight");
    if (iVar8 == 0) {
      if ((*(float *)(param_1 + 0x350) <= 0.0) || (*(int *)(param_1 + 0x454) != 0)) {
        _sprintf(local_5e0,&DAT_005e68cf);
      }
      else {
        core_inv_cpp_getItemDisplayName_FUN_004f62e0(*(uint *)(param_1 + 0x464));
        _sprintf(local_5e0,"%s %d");
      }
      iVar8 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_1c,0x58);
      pCVar3 = local_1c;
      iVar9 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(local_1c,local_5e0);
      engine_font_cpp_FUN_004c1dd0
                (pCVar3,local_5e0,(DAT_0061b498 - local_48) - iVar9,
                 (DAT_0061b49c - local_48) - iVar8,0xf8);
    }
  }
  if (*(int *)(param_1 + 0x454) == 0) goto LAB_004fb230;
  iVar8 = core_inv_cpp_FUN_004fa540(param_1,*(uint *)(param_1 + 0x338));
  if (iVar8 == 0) {
    iVar8 = core_inv_cpp_FUN_004fa540(param_1,*(uint *)(param_1 + 0x338));
    if ((iVar8 == 0) &&
       (iVar8 = core_inv_cpp_FUN_004fa540(param_1,*(uint *)(param_1 + 0x338)), iVar8 == 0)) {
      core_inv_cpp_getItemDescription_FUN_004f6350();
      core_inv_cpp_getItemDisplayName_FUN_004f62e0(*(uint *)(param_1 + 0x338));
      pcVar13 = "%s\n\n%s";
      goto LAB_004fb13d;
    }
    core_inv_cpp_getItemDisplayName_FUN_004f62e0();
    uVar6 = core_inv_cpp_getItemDescription_FUN_004f6350(*(uint *)(param_1 + 0x338));
    core_inv_cpp_getItemDisplayName_FUN_004f62e0(*(uint *)(param_1 + 0x338),uVar6);
    _sprintf(local_2e0,"%s\n\n%s %s");
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" are loaded.");
    iVar8 = -1;
    pcVar13 = local_2e0;
    do {
      pcVar10 = pcVar13;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar13 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar7;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
  }
  else {
    core_inv_cpp_getItemDescription_FUN_004f6350();
    core_inv_cpp_getItemDisplayName_FUN_004f62e0(*(uint *)(param_1 + 0x338));
    pcVar13 = "%s\n\n%s";
LAB_004fb13d:
    _sprintf(local_2e0,pcVar13);
  }
  pCVar3 = local_1c;
  local_2c = local_1c;
  iVar8 = engine_font_cpp_FUN_004c4260(local_1c,local_2e0,0x1d06f78,10,0x100);
  local_34 = iVar8;
  local_3c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(pCVar3,0x58);
  iVar9 = (DAT_0061b49c - local_60) + local_48;
  local_30 = local_48 + (DAT_0061b498 - local_54);
  iVar4 = 0;
  if (0 < iVar8) {
    iVar8 = 0x1d06f78;
    do {
      iVar4 = iVar4 + 1;
      engine_font_cpp_FUN_004c1dd0(local_2c,iVar8,local_30,iVar9,0xf8);
      iVar8 = iVar8 + 0x100;
      iVar9 = iVar9 + local_3c;
    } while (iVar4 < local_34);
  }
LAB_004fb230:
  if ((*(int *)(param_1 + 0x33c) != 0) && (0.0 < *(float *)(param_1 + 0x344))) {
    iVar4 = 0x10;
    local_6c = 0x70;
    iVar8 = 0x00000060;
    iVar9 = 0x000000D0;
    if ((DAT_0061b49c < 0x180) && (*(int *)(param_1 + 0x454) == 0)) {
      iVar9 = 0x000000D0 / 2;
      iVar8 = 0x00000060 / 2;
      iVar4 = 8;
      local_6c = 0x28;
    }
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_1 + 0x33c));
    if (iVar5 != 0) {
      _sprintf(local_4e0,"%d x%3.0f%%");
      local_14 = (float)engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_1c,0x58);
      iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(local_1c,local_4e0);
      engine_font_cpp_FUN_004c1dd0
                (local_1c,local_4e0,(DAT_0061b498 - iVar4) - iVar5,
                 (DAT_0061b49c - iVar4) - (int)local_14,0xf8);
    }
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_1 + 0x33c));
    if (iVar5 != 0) {
      core_inv_cpp_getItemDisplayName_FUN_004f62e0();
      _sprintf(local_7e0,&DAT_005e6909);
      local_14 = (float)engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_1c,0x58);
      iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(local_1c,local_7e0);
      engine_font_cpp_FUN_004c1dd0
                (local_1c,local_7e0,(DAT_0061b498 - iVar4) - iVar5,
                 (DAT_0061b49c - iVar4) - (int)local_14,0xf8);
    }
    if (*(int *)(param_1 + 0x454) != 0) {
      core_inv_cpp_getItemDescription_FUN_004f6350();
      core_inv_cpp_getItemDisplayName_FUN_004f62e0(*(uint *)(param_1 + 0x33c));
      _sprintf(local_3e0,"%s\n\n%s");
      local_40 = local_1c;
      local_24 = engine_font_cpp_FUN_004c4260(local_1c,local_3e0,0x1d07978,10,0x100);
      local_14 = (float)local_24;
      local_38 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_1c,0x58);
      iVar8 = (DAT_0061b49c - iVar8) + iVar4;
      local_28 = (DAT_0061b498 - iVar9) + iVar4;
      iVar9 = 0;
      if (0 < (int)local_14) {
        iVar4 = 0x1d07978;
        do {
          iVar9 = iVar9 + 1;
          engine_font_cpp_FUN_004c1dd0(local_40,iVar4,local_28,iVar8,0xf8);
          iVar4 = iVar4 + 0x100;
          iVar8 = iVar8 + local_38;
        } while (iVar9 < local_24);
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
      fVar12 = (float10)local_8e8 * (float10)_DAT_005e6914;
      round();
      local_68 = (int)ROUND(fVar12);
    }
    local_8e4 = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2538) * (float)_DAT_005e6920;
    if (local_8e4 < 0.0) {
      local_8e4 = 0.0;
    }
    if (1.0 < local_8e4) {
      local_8e4 = 1.0;
    }
    local_14 = 8.82818e-44;
    iVar8 = 0x1b;
    if (DAT_0061b49c < 0x180) {
      local_14 = 4.34403e-44;
      iVar8 = 0xd;
    }
    local_80 = (DAT_0061b498 + -4) - iVar8;
    fVar12 = (float10)(int)local_14 - (float10)(int)local_14 * (float10)local_8e4;
    iVar9 = round(local_14);
    local_7c = (int)ROUND(fVar12);
    engine_alphabit_cpp_FUN_0040d660
              (&CAlphaBitmap_01d1b9e4,local_80,local_7c + 4,0,local_7c,iVar8 + -1);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01d1b9f8,local_80,4,iVar9);
  }
  fVar1 = *(float *)(param_1 + 0x34c);
  if (0.0 < fVar1) {
    local_74 = 0xffff;
    if (fVar1 < 1.0) {
      fVar12 = (float10)fVar1 * (float10)_DAT_005e6928;
      round();
      local_74 = (int)ROUND(fVar12);
    }
    engine_3d_c_setRenderAlpha_FUN_00406bd0(local_74);
    local_18 = _DAT_0152d248;
    if (DAT_0061b49c < 0x180) {
      local_18 = _DAT_0152d250;
    }
    iVar8 = engine_font_cpp_FUN_004c4260(local_18,param_1 + 0x354,0x1d08378,10,0x100);
    local_20 = iVar8;
    local_44 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_18,0x58);
    iVar8 = (DAT_0061b49c + -4) - local_44 * iVar8;
    if (((_DAT_0152d250 != local_18) || (_DAT_01d7f1b8 == 0)) && (iVar9 = 0, 0 < local_20)) {
      iVar4 = 0x1d08378;
      do {
        iVar9 = iVar9 + 1;
        engine_font_cpp_FUN_004c1dd0(local_18,iVar4,4,iVar8,0xf8);
        iVar4 = iVar4 + 0x100;
        iVar8 = iVar8 + local_44;
      } while (iVar9 < local_20);
    }
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01d1baf4,2,2,0xffff),
     iVar8 = _DAT_01d1bc48, _DAT_01d1bc48 != -1)) {
    alpha = 0xffff;
    iVar5 = 7;
    iVar4 = 0x20;
    iVar9 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
              (CAlphaBitmap_ARRAY_01d1bb08 + iVar8 * 4 + iVar9,iVar4,iVar5,alpha);
  }
  iVar8 = CAlphaBitmap_01d1ba98.width;
  if (*(int *)(param_1 + 8) != 0) {
    iVar4 = DAT_0061b49c + -2;
    iVar9 = iVar4 - CAlphaBitmap_01d1ba98.height;
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01d1ba98,2,iVar9,0xffff);
    fVar1 = (float)_DAT_005e6930;
    _DAT_01c50948 = 0;
    local_f8 = 0;
    local_f4 = 0;
    local_50 = (float)iVar8 * fVar1;
    local_14 = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x34) -
               g_CDemonSetPtr->altitude_reference_y;
    local_5c = (float)(iVar8 + 4) * fVar1;
    local_f0 = local_14;
    euler_angles = &local_140;
    local_58 = (float)(iVar4 - iVar9) * fVar1;
    this_ptr_00 = (CMatrix3x3f *)(local_1e0 + 0x48);
    local_4c = (float)(iVar9 + iVar4) * fVar1;
    local_140.x = 0.0;
    *(float *)((int)&local_140 + (uint)bVar11 * -8 + 4) = afStack_118[(uint)bVar11 * -2 + 9];
    *(float *)((int)&local_140 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(this_ptr_00,euler_angles);
    engine_matrix_c_invertTransformMatrix_FUN_005073d0();
    afStack_c4[3] = -local_58;
    local_b4 = 0;
    afStack_c4[2] = -local_50;
    local_14 = afStack_c4[3];
    core_dirmat_cpp_FUN_0045f690(local_1e0 + 0x48);
    local_104 = afStack_118[2];
    afStack_118[(uint)bVar11 * -2 + 6] = afStack_118[(uint)bVar11 * -2 + 3];
    afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    if (afStack_130 + 2 != afStack_118 + 5) {
      afStack_130[2] = local_104;
      afStack_130[3] = local_100;
      local_120 = local_fc;
    }
    core_inv_cpp_FUN_004f63c0(local_5c + afStack_130[2]);
    local_d4.x = local_134;
    *(float *)((int)&local_d4 + (uint)bVar11 * -8 + 4) = afStack_130[(uint)bVar11 * -2];
    *(float *)((int)&local_d4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_130[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&local_d4);
    local_94 = -local_58;
    local_98 = local_50;
    local_90 = 0;
    local_14 = local_94;
    core_dirmat_cpp_FUN_0045f690(local_1e0 + 0x48);
    afStack_16c[2] = local_c8;
    afStack_16c[(uint)bVar11 * -2 + 3] = afStack_c4[(uint)bVar11 * -2];
    afStack_16c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    if (afStack_130 + 2 != afStack_16c + 2) {
      afStack_130[2] = afStack_16c[2];
      afStack_130[3] = afStack_16c[3];
      local_120 = local_15c;
    }
    core_inv_cpp_FUN_004f63c0(local_5c + afStack_130[2]);
    local_d4.x = local_11c;
    *(float *)((int)&local_d4 + (uint)bVar11 * -8 + 4) = afStack_118[(uint)bVar11 * -2];
    *(float *)((int)&local_d4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&local_d4);
    local_14c = local_50;
    local_148 = local_58;
    local_144 = 0;
    core_dirmat_cpp_FUN_0045f690(local_1e0 + 0x48);
    local_b0 = local_ec;
    local_ac[(uint)bVar11 * -2] = afStack_118[(uint)bVar11 * -2 + 0xc];
    local_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    if (afStack_130 + 2 != afStack_c4 + 5) {
      afStack_130[2] = local_b0;
      afStack_130[3] = local_ac[0];
      local_120 = local_ac[1];
    }
    core_inv_cpp_FUN_004f63c0(local_5c + afStack_130[2]);
    local_d4.x = local_170;
    *(float *)((int)&local_d4 + (uint)bVar11 * -8 + 4) = afStack_16c[(uint)bVar11 * -2];
    *(float *)((int)&local_d4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_16c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_d4);
    local_88 = local_58;
    local_8c = -local_50;
    local_84 = 0;
    core_dirmat_cpp_FUN_0045f690(local_1e0 + 0x48);
    local_e0 = local_158;
    afStack_118[(uint)bVar11 * -2 + 0xf] = afStack_16c[(uint)bVar11 * -2 + 6];
    afStack_118[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
         afStack_16c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    if (afStack_130 + 2 != afStack_118 + 0xe) {
      afStack_130[2] = local_e0;
      afStack_130[3] = local_dc;
      local_120 = local_d8;
    }
    core_inv_cpp_FUN_004f63c0(local_5c + afStack_130[2]);
    local_d4.x = local_a4;
    *(float *)((int)&local_d4 + (uint)bVar11 * -8 + 4) = local_ac[(uint)bVar11 * -2 + 3];
    *(float *)((int)&local_d4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         local_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&local_d4);
    local_1e0._4_4_ = 4;
    local_1e0._24_4_ = 0;
    local_1e0._28_4_ = 0;
    local_1e0._32_4_ = 0;
    local_1e0._36_4_ = 1;
    local_1e0._40_4_ = 0x1000000;
    local_1e0._44_4_ = 0;
    local_1e0._52_4_ = 0x1000000;
    local_1e0._56_4_ = 0x1000000;
    local_1e0._48_4_ = 2;
    local_1e0._68_4_ = 0x1000000;
    local_1e0._60_4_ = 3;
    local_1e0._64_4_ = 0;
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)0x1d1baac);
    engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
              (DAT_00612560,(SMRGLPrimitivePoly *)local_1e0,0x23);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,1);
  }
  _DAT_01c50948 = local_78;
  return;
}
