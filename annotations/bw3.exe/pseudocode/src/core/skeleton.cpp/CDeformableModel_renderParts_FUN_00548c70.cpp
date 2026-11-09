// Name: core_skeleton.cpp_CDeformableModel_renderParts_FUN_00548c70
// Address: 00548c70
// Address Range: [[00548c70, 00549618]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_00548c70(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_00548c70(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int green_component;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_130;
  SMRGLPrimitivePoly local_12c [4];
  uint local_128;
  uint local_114;
  uint local_108;
  uint local_fc;
  float local_d0;
  byte *local_cc;
  byte *local_c8;
  byte *local_c4;
  byte *local_c0;
  int local_bc;
  int *local_b8;
  int local_b4;
  int local_b0;
  byte *local_ac;
  byte *local_a8;
  byte *local_a4;
  byte *local_a0;
  int *local_9c;
  int *local_98;
  byte *local_94;
  byte *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  SInputFace *local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_84 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  local_80 = *(int *)(&this_ptr->field_0x8 + lod_index * 8);
  if (local_80 != 0) {
    render_flags = render_flags & 0xfffffffe;
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
  local_b0 = 0;
  local_bc = 0;
  if (0 < *(int *)&this_ptr->field_0xc00) {
    local_ac = &this_ptr->field_0x0 + lod_index * 4;
    local_c8 = &this_ptr->field_0x0 + lod_index * 4;
    local_94 = &this_ptr->field_0xc0;
    local_b8 = texture_set_indices;
    local_c4 = (byte *)part_visibility_flags;
    local_a8 = local_ac;
    local_a0 = local_ac;
    local_90 = local_ac;
    do {
      iVar11 = local_b0 + *(int *)(local_c8 + 0xc24);
      if ((*local_c4 & 1) != 0) {
        if ((local_84 == 0) && (local_80 != 0)) {
          engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
          if (local_b0 < iVar11) {
            local_44 = local_b0 * 0x12;
            local_8c = iVar11 * 0x12;
            do {
              puVar10 = (ushort *)(*(int *)(local_a8 + 0x7c) + local_44);
              iVar9 = *(int *)DAT_005f2afc;
              piVar8 = (int *)((uint)*puVar10 * 0x30 + iVar9);
              piVar7 = (int *)(iVar9 + (uint)puVar10[1] * 0x30);
              piVar6 = (int *)(iVar9 + (uint)puVar10[2] * 0x30);
              local_30 = *piVar8 * _DAT_01d72644 + piVar8[1] * _DAT_01d72650 +
                         piVar8[2] * _DAT_01d7265c;
              local_2c = *piVar8 * _DAT_01d72648 + piVar8[1] * _DAT_01d72654 +
                         piVar8[2] * _DAT_01d72660;
              local_28 = piVar8[2] * _DAT_01d72664 +
                         *piVar8 * _DAT_01d7264c + piVar8[1] * _DAT_01d72658;
              local_24 = piVar7[2] * _DAT_01d7265c +
                         *piVar7 * _DAT_01d72644 + _DAT_01d72650 * piVar7[1];
              local_20 = piVar7[1] * _DAT_01d72654 + *piVar7 * _DAT_01d72648 +
                         piVar7[2] * _DAT_01d72660;
              local_1c = piVar7[2] * _DAT_01d72664 +
                         *piVar7 * _DAT_01d7264c + piVar7[1] * _DAT_01d72658;
              local_18 = piVar6[2] * _DAT_01d7265c +
                         *piVar6 * _DAT_01d72644 + piVar6[1] * _DAT_01d72650;
              local_78 = (float)local_28;
              local_54 = (float)local_24;
              local_50 = local_54 - (float)local_30;
              local_60 = (float)local_20;
              local_58 = local_60 - (float)local_2c;
              local_5c = (float)local_1c;
              local_7c = (float)local_18;
              local_14 = piVar6[1] * _DAT_01d72658 + *piVar6 * _DAT_01d7264c +
                         piVar6[2] * _DAT_01d72664;
              local_74 = (float)(piVar6[1] * _DAT_01d72654 + *piVar6 * _DAT_01d72648 +
                                piVar6[2] * _DAT_01d72660);
              local_70 = (float)local_14;
              local_d0 = local_70 - local_5c;
              fVar2 = local_58 * local_d0 - (local_74 - local_60) * (local_5c - local_78);
              fVar3 = (local_7c - local_54) * (local_5c - local_78) - local_50 * local_d0;
              fVar5 = local_50 * (local_74 - local_60) - (local_7c - local_54) * local_58;
              fVar4 = fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3;
              if (fVar4 <= 0.0) {
                local_130 = 127.0;
              }
              else {
                local_130 = (float)_DAT_005d1b0c / SQRT(fVar4);
              }
              fVar12 = (float10)local_130;
              local_34 = (float)((float10)fVar2 * fVar12);
              local_3c = (float)((float10)fVar3 * fVar12);
              local_38 = (float)((float10)fVar5 * fVar12);
              fVar13 = (float10)_DAT_005d1b04;
              fVar12 = (float10)fVar5 * fVar12 + fVar13;
              fVar14 = (float10)local_3c + fVar13;
              fVar13 = (float10)local_34 + fVar13;
              round();
              round();
              iVar9 = (int)ROUND(fVar12);
              local_30 = (int)ROUND(fVar14);
              local_2c = iVar9;
              round();
              local_30 = (int)ROUND(fVar13);
              engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0
                        (DAT_005f2afc,local_30,green_component,iVar9);
              local_128 = 3;
              local_114 = (uint)*puVar10;
              local_108 = (uint)puVar10[1];
              local_fc = (uint)puVar10[2];
              engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
                        (DAT_005f2afc,local_12c);
              local_44 = local_44 + 0x12;
            } while (local_44 < local_8c);
          }
        }
        else if ((*(int *)&this_ptr->field_0xbc == 1) ||
                (((local_84 != 0 || (skip_texture_capture != 0)) || (local_80 != 0)))) {
          if (((local_84 == 0) && (skip_texture_capture == 0)) && (local_80 == 0)) {
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                      (DAT_005f2afc,(SMRGLTextureBasic *)(local_94 + *local_b8 * 0x240));
          }
          core_set_cpp_FUN_0053ac80
                    (g_CDemonSetPtr,(SInputFace *)(local_b0 * 0x12 + *(int *)(local_90 + 0x7c)),
                     iVar11 - local_b0,render_flags);
        }
        else {
          local_68 = -1;
          local_40 = local_b0;
          if (local_b0 < iVar11) {
            local_98 = local_b8;
            do {
              iVar9 = local_40 + 1;
              iVar1 = *(int *)(*(int *)(local_ac + 0x90) + local_40 * 4);
              if (iVar9 < iVar11) {
                piVar7 = (int *)(iVar9 * 4 + *(int *)(local_a0 + 0x90));
                do {
                  if (iVar1 != *piVar7) break;
                  iVar9 = iVar9 + 1;
                  piVar7 = piVar7 + 1;
                } while (iVar9 < iVar11);
              }
              if (iVar1 != local_68) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                          (DAT_005f2afc,
                           (SMRGLTextureBasic *)(local_94 + iVar1 * 0x48 + *local_98 * 0x240));
                local_68 = iVar1;
              }
              core_set_cpp_FUN_0053ac80
                        (g_CDemonSetPtr,(SInputFace *)(local_40 * 0x12 + *(int *)(local_90 + 0x7c)),
                         iVar9 - local_40,render_flags);
              local_40 = iVar9;
            } while (iVar9 < iVar11);
          }
        }
      }
      local_c4 = local_c4 + 4;
      local_c8 = local_c8 + 0x60;
      local_b8 = local_b8 + 1;
      local_bc = local_bc + 1;
      local_b0 = iVar11;
    } while (local_bc < *(int *)&this_ptr->field_0xc00);
  }
  local_b4 = 0;
  if (0 < *(int *)&this_ptr->field_0xc00) {
    local_a4 = &this_ptr->field_0xc0;
    iVar11 = lod_index * 4;
    local_c0 = &this_ptr->field_0x0 + iVar11;
    local_cc = (byte *)part_visibility_flags;
    do {
      local_88 = local_b0 + *(int *)(local_c0 + 0xc38);
      local_64 = -1;
      if (((*local_cc & 1) != 0) && (local_b0 < local_88)) {
        local_9c = texture_set_indices + local_b4;
        local_48 = local_b0 * 0x12;
        local_4c = local_b0 * 4;
        iVar9 = local_b0;
        do {
          local_6c = (SInputFace *)(local_48 + *(int *)(&this_ptr->field_0x7c + iVar11));
          if ((*(byte *)(part_visibility_flags +
                        *(int *)(*(int *)(&this_ptr->field_0xa4 + iVar11) +
                                (iVar9 - *(int *)(&this_ptr->field_0x54 + iVar11)) * 4)) & 1) == 0)
          {
            if ((((local_84 == 0) && (skip_texture_capture == 0)) && (local_80 == 0)) &&
               (iVar1 = *(int *)(*(int *)(&this_ptr->field_0x90 + iVar11) + local_4c),
               iVar1 != local_64)) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                        (DAT_005f2afc,
                         (SMRGLTextureBasic *)(local_a4 + iVar1 * 0x48 + *local_9c * 0x240));
              local_64 = iVar1;
            }
            core_set_cpp_FUN_0053ac80(g_CDemonSetPtr,local_6c,1,render_flags);
          }
          iVar9 = iVar9 + 1;
          local_48 = local_48 + 0x12;
          local_4c = local_4c + 4;
        } while (iVar9 < local_88);
      }
      local_b0 = local_88;
      local_cc = local_cc + 4;
      local_c0 = local_c0 + 0x60;
      local_b4 = local_b4 + 1;
    } while (local_b4 < *(int *)&this_ptr->field_0xc00);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  return;
}
