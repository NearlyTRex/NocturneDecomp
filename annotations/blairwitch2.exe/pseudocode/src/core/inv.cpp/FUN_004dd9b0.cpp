// Name: core_inv.cpp_FUN_004dd9b0
// Address: 004dd9b0
// Address Range: [[004dd9b0, 004dee69]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004dd9b0(float *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004dd9b0(float *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int bottom_y;
  int iVar7;
  CAlphaBitmap *this_ptr;
  char *pcVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_1178 [36];
  int aiStackY_10e8 [12];
  float afStackY_10b8 [482];
  char *pcVar11;
  CMatrix3x3f *this_ptr_00;
  int color;
  CVector3f *euler_angles;
  float local_908;
  float local_904;
  char local_900 [256];
  char local_800 [256];
  char local_700 [256];
  char local_600 [256];
  char local_500 [256];
  char local_400 [256];
  char local_300 [256];
  byte local_200 [112];
  float local_190;
  float local_18c [5];
  float local_178;
  float local_16c;
  float local_168 [4];
  uint local_158;
  float local_154;
  float local_148;
  float local_144;
  uint local_140;
  int local_13c;
  float afStack_138 [4];
  uint local_128;
  CVector3i local_124;
  float local_118;
  float afStack_114 [4];
  uint local_104;
  int local_100;
  int aiStack_fc [5];
  int local_e8;
  float local_dc;
  float local_d8;
  uint local_d4;
  float local_d0;
  float afStack_cc [4];
  uint local_bc;
  float local_b8;
  float local_b4 [2];
  CVector3f local_ac;
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  int local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  int local_64;
  float local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  CBitFont *local_44;
  CBitFont *local_40;
  int local_3c;
  int local_38;
  int local_34;
  CBitFont *local_30;
  CBitFont *local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  
  bVar9 = 0;
  if (g_CGamePtr->letterbox_mode != 0) {
    return;
  }
  if (param_1[1] != *(float *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    return;
  }
  if (DAT_006141bc != _DAT_01d02f40) {
    core_inv_cpp_loadAssets_FUN_004da990();
  }
  local_94 = _DAT_01c37788;
  local_30 = _DAT_01511cc4;
  _DAT_01c37788 = 0;
  if ((DAT_006141bc < 0x180) && (param_1[0x115] == 0.0)) {
    local_30 = _DAT_01511ccc;
  }
  if ((param_1[(int)param_1[0x11a] + 0x184] == 0.0) || (param_1[0xd0] <= 0.0)) goto LAB_004ddd00;
  local_68 = 0x000000D0;
  local_5c = 0x10;
  local_88 = 0x70;
  local_78 = 0x00000060;
  iVar7 = 0x24;
  if ((DAT_006141bc < 0x180) && (param_1[0x115] == 0.0)) {
    local_68 = 0x000000D0 / 2;
    local_78 = 0x00000060 / 2;
    iVar7 = 0x12;
    local_88 = 0x28;
    local_5c = 8;
  }
  local_8c = 0xffff;
  if (param_1[0xd0] < 1.0) {
    fVar10 = (float10)param_1[0xd0] * (float10)_DAT_005dbb06;
    round();
    local_8c = (int)ROUND(fVar10);
  }
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(param_1[(int)param_1[0x11a] + 0x184]);
  if (iVar3 == 0) {
    iVar3 = core_inv_cpp_FUN_004dd0a0(param_1,param_1[(int)param_1[0x11a] + 0x184]);
    if ((iVar3 == 0) &&
       (iVar3 = core_inv_cpp_FUN_004dd0a0(param_1,param_1[(int)param_1[0x11a] + 0x184]), iVar3 == 0)
       ) {
      local_90 = DAT_006141bc - iVar7;
      iVar7 = DAT_006141b8 - iVar7;
      this_ptr = (CAlphaBitmap *)0x0;
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c840
                        ((CDemonActor *)param_1[(int)param_1[0x11a] + 0x184],"CTommyGun");
      if (iVar3 != 0) {
        this_ptr = &CAlphaBitmap_01d02e44;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c840
                        ((CDemonActor *)param_1[(int)param_1[0x11a] + 0x184],"CShotgun");
      if (iVar3 != 0) {
        this_ptr = &CAlphaBitmap_01d02e94;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c840
                        ((CDemonActor *)param_1[(int)param_1[0x11a] + 0x184],"CElephantGun"
                        );
      if (iVar3 != 0) {
        this_ptr = &CAlphaBitmap_01d02e94;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c840
                        ((CDemonActor *)param_1[(int)param_1[0x11a] + 0x184],&DAT_005dbaaf);
      if (iVar3 != 0) {
        if (*(int *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c8) == 0) {
          this_ptr = &CAlphaBitmap_01d02e58;
        }
        if (*(int *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c8) == 3) {
          this_ptr = &CAlphaBitmap_01d02e6c;
        }
        if (*(int *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c8) == 7) {
          this_ptr = &CAlphaBitmap_01d02e80;
        }
        if (*(int *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c8) == 8) {
          this_ptr = &CAlphaBitmap_01d02ea8;
        }
        if (*(int *)((int)param_1[(int)param_1[0x11a] + 0x184] + 0x6c8) == 1) {
          this_ptr = &CAlphaBitmap_01d02ebc;
        }
      }
      if (this_ptr != (CAlphaBitmap *)0x0) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(this_ptr,iVar7,local_90,local_8c);
      }
      if ((param_1[0xd4] <= 0.0) || (param_1[0x115] != 0.0)) {
        pcVar11 = &DAT_005dbab4;
      }
      else {
        pcVar11 = "Bullets %d";
      }
      _sprintf(local_300,pcVar11);
      iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_30,0x58);
      iVar3 = engine_font_cpp_FUN_004aaf00(local_30);
      iVar7 = (DAT_006141bc - local_5c) - iVar7;
      iVar3 = (DAT_006141b8 - local_5c) - iVar3;
      pcVar11 = local_300;
      goto LAB_004ddb97;
    }
  }
  else {
    fVar10 = (float10)*(float *)(iVar3 + 0x6e0) * (float10)_DAT_005dbb0a;
    round();
    local_1c = (float)(int)ROUND(fVar10);
    _sprintf(local_700,&DAT_005dba8a);
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_30,0x58);
    iVar3 = engine_font_cpp_FUN_004aaf00(local_30);
    iVar7 = (DAT_006141bc - local_5c) - iVar7;
    iVar3 = (DAT_006141b8 - local_5c) - iVar3;
    pcVar11 = local_700;
LAB_004ddb97:
    engine_font_cpp_FUN_004a8df0(local_30,pcVar11,iVar3,iVar7,0xf8);
  }
  if (param_1[0x115] == 0.0) goto LAB_004ddd00;
  iVar7 = core_inv_cpp_FUN_004dd0a0(param_1,param_1[(int)param_1[0x11a] + 0x184]);
  if (iVar7 == 0) {
    iVar7 = core_inv_cpp_FUN_004dd0a0(param_1,param_1[(int)param_1[0x11a] + 0x184]);
    if ((iVar7 == 0) &&
       (iVar7 = core_inv_cpp_FUN_004dd0a0(param_1,param_1[(int)param_1[0x11a] + 0x184]), iVar7 == 0)
       ) {
      core_inv_cpp_getItemDescription_FUN_004d9f80();
      core_inv_cpp_getItemDisplayName_FUN_004d9f10(param_1[(int)param_1[0x11a] + 0x184]);
      pcVar11 = "%s\n\n%s";
      goto LAB_004ddc00;
    }
    core_inv_cpp_getItemDisplayName_FUN_004d9f10();
    uVar5 = core_inv_cpp_getItemDescription_FUN_004d9f80(param_1[(int)param_1[0x11a] + 0x184]);
    core_inv_cpp_getItemDisplayName_FUN_004d9f10(param_1[(int)param_1[0x11a] + 0x184],uVar5);
    _sprintf(local_900,"%s\n\n%s %s");
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(" are loaded.");
    iVar7 = -1;
    pcVar11 = local_900;
    do {
      pcVar8 = pcVar11;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar8 = pcVar11 + (uint)bVar9 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar8;
    } while (cVar2 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
  }
  else {
    core_inv_cpp_getItemDescription_FUN_004d9f80();
    core_inv_cpp_getItemDisplayName_FUN_004d9f10(param_1[(int)param_1[0x11a] + 0x184]);
    pcVar11 = "%s\n\n%s";
LAB_004ddc00:
    _sprintf(local_900,pcVar11);
  }
  local_40 = local_30;
  iVar7 = engine_font_cpp_FUN_004ab2b0(local_30,local_900,0x1cee3b0,10,0x100);
  local_4c = iVar7;
  local_58 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_30,0x58);
  iVar3 = (DAT_006141bc - local_78) + local_5c;
  local_50 = local_5c + (DAT_006141b8 - local_68);
  local_20 = 0;
  if (0 < iVar7) {
    iVar7 = 0x1cee3b0;
    do {
      engine_font_cpp_FUN_004a8df0(local_40,iVar7,local_50,iVar3,0xf8);
      iVar7 = iVar7 + 0x100;
      local_20 = local_20 + 1;
      iVar3 = iVar3 + local_58;
    } while (local_20 < local_4c);
  }
LAB_004ddd00:
  if ((param_1[(int)param_1[0x11a] + 0x17f] != 0.0) && (0.0 < param_1[0xd1])) {
    iVar3 = 0x10;
    local_84 = 0x70;
    local_64 = 0x000000D0;
    iVar7 = 0x00000060;
    if ((DAT_006141bc < 0x180) && (param_1[0x115] == 0.0)) {
      local_64 = 0x000000D0 / 2;
      iVar7 = 0x00000060 / 2;
      iVar3 = 8;
      local_84 = 0x28;
    }
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0(param_1[(int)param_1[0x11a] + 0x17f]);
    if (iVar4 != 0) {
      _sprintf(local_400,"%d x%3.0f%%");
      local_1c = (float)engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_30,0x58);
      iVar4 = engine_font_cpp_FUN_004aaf00(local_30);
      engine_font_cpp_FUN_004a8df0
                (local_30,local_400,(DAT_006141b8 - iVar3) - iVar4,
                 (DAT_006141bc - iVar3) - (int)local_1c,0xf8);
    }
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0(param_1[(int)param_1[0x11a] + 0x17f]);
    if (iVar4 != 0) {
      _sprintf(local_500,"%d x 6");
      local_1c = (float)engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_30,0x58);
      iVar4 = engine_font_cpp_FUN_004aaf00(local_30);
      engine_font_cpp_FUN_004a8df0
                (local_30,local_500,(DAT_006141b8 - iVar3) - iVar4,
                 (DAT_006141bc - iVar3) - (int)local_1c,0xf8);
    }
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0(param_1[(int)param_1[0x11a] + 0x17f]);
    if (iVar4 != 0) {
      core_inv_cpp_getItemDisplayName_FUN_004d9f10();
      _sprintf(local_600,&DAT_005dbafa);
      local_1c = (float)engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_30,0x58);
      iVar4 = engine_font_cpp_FUN_004aaf00(local_30);
      engine_font_cpp_FUN_004a8df0
                (local_30,local_600,(DAT_006141b8 - iVar3) - iVar4,
                 (DAT_006141bc - iVar3) - (int)local_1c,0xf8);
    }
    if (param_1[0x115] != 0.0) {
      core_inv_cpp_getItemDescription_FUN_004d9f80();
      core_inv_cpp_getItemDisplayName_FUN_004d9f10(param_1[(int)param_1[0x11a] + 0x17f]);
      _sprintf(local_800,"%s\n\n%s");
      local_44 = local_30;
      local_48 = engine_font_cpp_FUN_004ab2b0(local_30,local_800,0x1ceedb0,10,0x100);
      local_1c = (float)local_48;
      local_54 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_30,0x58);
      iVar7 = (DAT_006141bc - iVar7) + iVar3;
      local_38 = (DAT_006141b8 - local_64) + iVar3;
      local_24 = 0;
      if (0 < (int)local_1c) {
        iVar3 = 0x1ceedb0;
        do {
          engine_font_cpp_FUN_004a8df0(local_44,iVar3,local_38,iVar7,0xf8);
          iVar3 = iVar3 + 0x100;
          local_24 = local_24 + 1;
          iVar7 = iVar7 + local_54;
        } while (local_24 < local_48);
      }
    }
  }
  if ((g_CGamePtr->flashlight_active != 0) || (g_CGamePtr->goggles_active != 0)) {
    local_a0 = DAT_006141bc + -0x21;
    local_1c = (float)(DAT_006141bc + -6);
    color = 2;
    fVar10 = (float10)(int)local_1c +
             (float10)(local_a0 - (int)local_1c) * (float10)*param_1 * (float10)_DAT_005dbb12;
    iVar4 = 0x10;
    iVar3 = (int)local_1c;
    round();
    iVar7 = DAT_006141bc;
    local_a0 = (int)ROUND(fVar10);
    engine_2d_c_fillRectColor_FUN_004031c0(6,local_a0,iVar4,iVar3,color);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
              (&CAlphaBitmap_01d02e08,4,iVar7 + -0x24,0xffff);
  }
  if ((0.0 < param_1[0xd1]) || (0.0 < param_1[0xd2])) {
    local_908 = param_1[0xd2];
    if (local_908 < param_1[0xd1]) {
      local_908 = param_1[0xd1];
    }
    local_80 = 0xffff;
    if (local_908 < 1.0) {
      fVar10 = (float10)local_908 * (float10)_DAT_005dbb06;
      round();
      local_80 = (int)ROUND(fVar10);
    }
    local_904 = *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x25a8) * (float)_DAT_005dbb12;
    if (local_904 < 0.0) {
      local_904 = 0.0;
    }
    if (1.0 < local_904) {
      local_904 = 1.0;
    }
    local_1c = 8.82818e-44;
    iVar7 = 0x1b;
    if (DAT_006141bc < 0x180) {
      local_1c = 4.34403e-44;
      iVar7 = 0xd;
    }
    local_9c = (DAT_006141b8 + -4) - iVar7;
    iVar3 = local_80 / 2;
    fVar10 = (float10)(int)local_1c - (float10)(int)local_1c * (float10)local_904;
    iVar4 = round();
    local_98 = (int)ROUND(fVar10);
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040dab0
              (&CAlphaBitmap_01d02e1c,local_9c,local_98 + 4,0,local_98,iVar7 + -1,bottom_y,iVar3);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CAlphaBitmap_01d02e30,local_9c,4,iVar4);
  }
  fVar1 = param_1[0xd3];
  if (0.0 < fVar1) {
    local_7c = 0xffff;
    if (fVar1 < 1.0) {
      fVar10 = (float10)fVar1 * (float10)_DAT_005dbb1a;
      round();
      local_7c = (int)ROUND(fVar10);
    }
    engine_3d_c_setRenderAlpha_FUN_00406da0(local_7c);
    local_2c = _DAT_01511cc4;
    if (DAT_006141bc < 0x180) {
      local_2c = _DAT_01511ccc;
    }
    iVar7 = engine_font_cpp_FUN_004ab2b0(local_2c,param_1 + 0xd5,0x1cef7b0,10,0x100);
    local_34 = iVar7;
    local_3c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_2c,0x58);
    iVar7 = (DAT_006141bc + -4) - local_3c * iVar7;
    if (((_DAT_01511ccc != local_2c) || (_DAT_01d63250 == 0)) && (iVar3 = 0, 0 < local_34)) {
      local_28 = 0x1cef7b0;
      do {
        engine_font_cpp_FUN_004a8df0(local_2c,local_28,4,iVar7,0xf8);
        iVar3 = iVar3 + 1;
        local_28 = local_28 + 0x100;
        iVar7 = iVar7 + local_3c;
      } while (iVar3 < local_34);
    }
  }
  iVar7 = CAlphaBitmap_01d02ed0.width;
  if (param_1[2] != 0.0) {
    iVar3 = DAT_006141bc + -2;
    iVar4 = iVar3 - CAlphaBitmap_01d02ed0.height;
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CAlphaBitmap_01d02ed0,2,iVar4,0xffff);
    fVar1 = (float)_DAT_005dbb22;
    local_18 = iVar3 + iVar4;
    _DAT_01c37788 = 0;
    local_18c[2] = 0.0;
    local_18c[3] = 0.0;
    local_6c = (float)iVar7 * fVar1;
    local_1c = *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x34) -
               g_CDemonSetPtr->altitude_reference_y;
    local_70 = (float)(iVar7 + 4) * fVar1;
    local_18c[4] = local_1c;
    euler_angles = &local_ac;
    local_60 = (float)(iVar3 - iVar4) * fVar1;
    this_ptr_00 = (CMatrix3x3f *)(local_200 + 0x48);
    local_74 = (float)(iVar3 + iVar4) * fVar1;
    local_ac.x = 0.0;
    *(float *)((int)&local_ac + (uint)bVar9 * -8 + 4) = local_18c[(uint)bVar9 * -2 + 3];
    *(float *)((int)&local_ac + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(this_ptr_00,euler_angles);
    engine_matrix_c_invertTransformMatrix_FUN_004e8730();
    afStack_138[3] = -local_60;
    local_128 = 0;
    afStack_138[2] = -local_6c;
    local_1c = afStack_138[3];
    core_dirmat_cpp_FUN_00449530(local_200 + 0x48);
    local_168[2] = local_d0;
    local_168[(uint)bVar9 * -2 + 3] = afStack_cc[(uint)bVar9 * -2];
    local_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    if (afStack_114 + 2 != local_168 + 2) {
      afStack_114[2] = local_168[2];
      afStack_114[3] = local_168[3];
      local_104 = local_158;
    }
    core_inv_cpp_FUN_004d9ff0(local_70 + afStack_114[2]);
    local_124.x = local_e8;
    *(int *)((int)&local_124 + (uint)bVar9 * -8 + 4) = aiStack_fc[(uint)bVar9 * -2 + 6];
    *(int *)((int)&local_124 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         aiStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_124);
    local_d8 = -local_60;
    local_dc = local_6c;
    local_d4 = 0;
    local_1c = local_d8;
    core_dirmat_cpp_FUN_00449530(local_200 + 0x48);
    local_b8 = local_154;
    local_b4[(uint)bVar9 * -2] = local_168[(uint)bVar9 * -2 + 6];
    local_b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    if (afStack_114 + 2 != afStack_cc + 5) {
      afStack_114[2] = local_b8;
      afStack_114[3] = local_b4[0];
      local_104 = local_b4[1];
    }
    core_inv_cpp_FUN_004d9ff0(local_70 + afStack_114[2]);
    local_124.x = aiStack_fc[2];
    *(int *)((int)&local_124 + (uint)bVar9 * -8 + 4) = aiStack_fc[(uint)bVar9 * -2 + 3];
    *(int *)((int)&local_124 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         aiStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_124)
    ;
    local_148 = local_6c;
    local_144 = local_60;
    local_140 = 0;
    core_dirmat_cpp_FUN_00449530(local_200 + 0x48);
    local_190 = local_118;
    local_18c[(uint)bVar9 * -2] = afStack_114[(uint)bVar9 * -2];
    local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_114[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    if (afStack_114 + 2 != &local_190) {
      afStack_114[2] = local_190;
      afStack_114[3] = local_18c[0];
      local_104 = local_18c[1];
    }
    core_inv_cpp_FUN_004d9ff0(local_70 + afStack_114[2]);
    local_124.x = local_100;
    *(int *)((int)&local_124 + (uint)bVar9 * -8 + 4) = aiStack_fc[(uint)bVar9 * -2];
    *(int *)((int)&local_124 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         aiStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_124)
    ;
    afStack_cc[3] = local_60;
    afStack_cc[2] = -local_6c;
    local_bc = 0;
    core_dirmat_cpp_FUN_00449530(local_200 + 0x48);
    local_16c = local_178;
    local_168[(uint)bVar9 * -2] = local_18c[(uint)bVar9 * -2 + 6];
    local_168[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    if (afStack_114 + 2 != &local_16c) {
      afStack_114[2] = local_16c;
      afStack_114[3] = local_168[0];
      local_104 = local_168[1];
    }
    core_inv_cpp_FUN_004d9ff0(local_70 + afStack_114[2]);
    local_124.x = local_13c;
    *(float *)((int)&local_124 + (uint)bVar9 * -8 + 4) = afStack_138[(uint)bVar9 * -2];
    *(float *)((int)&local_124 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_138[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_124)
    ;
    local_200._4_4_ = 4;
    local_200._24_4_ = 0;
    local_200._28_4_ = 0;
    local_200._32_4_ = 0;
    local_200._36_4_ = 1;
    local_200._40_4_ = 0x1000000;
    local_200._44_4_ = 0;
    local_200._52_4_ = 0x1000000;
    local_200._56_4_ = 0x1000000;
    local_200._48_4_ = 2;
    local_200._68_4_ = 0x1000000;
    local_200._60_4_ = 3;
    local_200._64_4_ = 0;
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)0x1d02ee4);
    engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
              (DAT_0060b280,(SMRGLPrimitivePoly *)local_200,0x23);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,1);
  }
  _DAT_01c37788 = local_94;
  return;
}
