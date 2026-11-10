// Name: core_skeleton.cpp_CDeformableModel_renderParts_FUN_00541a60
// Address: 00541a60
// Address Range: [[00541a60, 00542408]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_00541a60(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_00541a60(CDeformableModel *this_ptr,int lod_index,int *part_visibility_flags,int *texture_set_indices,int render_flags,int skip_texture_capture)

{
  SRenderVertex *pSVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  SRenderVertex *pSVar7;
  int *piVar8;
  SRenderVertex *pSVar9;
  int green_component;
  int iVar10;
  SInputFace *pSVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float local_130;
  SMRGLPrimitivePoly local_12c [4];
  uint local_128;
  uint local_114;
  uint local_108;
  uint local_fc;
  float local_d0;
  byte *local_cc;
  SLod *local_c8;
  byte *local_c4;
  SLod *local_c0;
  int local_bc;
  int *local_b8;
  int local_b4;
  int local_b0;
  SLod *local_ac;
  SLod *local_a8;
  byte *local_a4;
  SLod *local_a0;
  int *local_9c;
  int *local_98;
  byte *local_94;
  SLod *local_90;
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
  
  local_84 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  local_80 = *(int *)(this_ptr->lod_info + lod_index * 8 + 4);
  if (local_80 != 0) {
    render_flags = render_flags & 0xfffffffe;
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  local_b0 = 0;
  local_bc = 0;
  if (0 < this_ptr->num_parts) {
    local_ac = this_ptr->lod_info + lod_index * 4 + -4;
    local_c8 = this_ptr->lod_info + lod_index * 4 + -4;
    local_94 = &this_ptr->field_0xc0;
    local_b8 = texture_set_indices;
    local_c4 = (byte *)part_visibility_flags;
    local_a8 = local_ac;
    local_a0 = local_ac;
    local_90 = local_ac;
    do {
      iVar12 = local_b0 + *(int *)(local_c8 + 0xc24);
      if ((*local_c4 & 1) != 0) {
        if ((local_84 == 0) && (local_80 != 0)) {
          engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
          if (local_b0 < iVar12) {
            local_44 = local_b0 * 0x12;
            local_8c = iVar12 * 0x12;
            do {
              pSVar11 = *(SInputFace **)(local_a8 + 0x7c) + local_44;
              pSVar7 = DAT_0060b280->vertex_buffer_ptr;
              pSVar9 = pSVar7 + (uint)*(ushort *)pSVar11 * 0x30;
              pSVar1 = pSVar7 + (uint)*(ushort *)(pSVar11 + 2) * 0x30;
              pSVar7 = pSVar7 + (uint)*(ushort *)(pSVar11 + 4) * 0x30;
              local_30 = *(int *)pSVar9 * _DAT_01d04fb8 + *(int *)(pSVar9 + 4) * _DAT_01d04fc4 +
                         *(int *)(pSVar9 + 8) * _DAT_01d04fd0;
              local_2c = *(int *)pSVar9 * _DAT_01d04fbc + *(int *)(pSVar9 + 4) * _DAT_01d04fc8 +
                         *(int *)(pSVar9 + 8) * _DAT_01d04fd4;
              local_28 = *(int *)(pSVar9 + 8) * _DAT_01d04fd8 +
                         *(int *)pSVar9 * _DAT_01d04fc0 + *(int *)(pSVar9 + 4) * _DAT_01d04fcc;
              local_24 = *(int *)(pSVar1 + 8) * _DAT_01d04fd0 +
                         *(int *)pSVar1 * _DAT_01d04fb8 + _DAT_01d04fc4 * *(int *)(pSVar1 + 4);
              local_20 = *(int *)(pSVar1 + 4) * _DAT_01d04fc8 + *(int *)pSVar1 * _DAT_01d04fbc +
                         *(int *)(pSVar1 + 8) * _DAT_01d04fd4;
              local_1c = *(int *)(pSVar1 + 8) * _DAT_01d04fd8 +
                         *(int *)pSVar1 * _DAT_01d04fc0 + *(int *)(pSVar1 + 4) * _DAT_01d04fcc;
              local_18 = *(int *)(pSVar7 + 8) * _DAT_01d04fd0 +
                         *(int *)pSVar7 * _DAT_01d04fb8 + *(int *)(pSVar7 + 4) * _DAT_01d04fc4;
              local_78 = (float)local_28;
              local_54 = (float)local_24;
              local_50 = local_54 - (float)local_30;
              local_60 = (float)local_20;
              local_58 = local_60 - (float)local_2c;
              local_5c = (float)local_1c;
              local_7c = (float)local_18;
              local_14 = *(int *)(pSVar7 + 4) * _DAT_01d04fcc + *(int *)pSVar7 * _DAT_01d04fc0 +
                         *(int *)(pSVar7 + 8) * _DAT_01d04fd8;
              local_74 = (float)(*(int *)(pSVar7 + 4) * _DAT_01d04fc8 +
                                 *(int *)pSVar7 * _DAT_01d04fbc +
                                *(int *)(pSVar7 + 8) * _DAT_01d04fd4);
              local_70 = (float)local_14;
              local_d0 = local_70 - local_5c;
              fVar3 = local_58 * local_d0 - (local_74 - local_60) * (local_5c - local_78);
              fVar4 = (local_7c - local_54) * (local_5c - local_78) - local_50 * local_d0;
              fVar6 = local_50 * (local_74 - local_60) - (local_7c - local_54) * local_58;
              fVar5 = fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4;
              if (fVar5 <= 0.0) {
                local_130 = 127.0;
              }
              else {
                local_130 = (float)_DAT_005e6e0f / SQRT(fVar5);
              }
              fVar13 = (float10)local_130;
              local_34 = (float)((float10)fVar3 * fVar13);
              local_3c = (float)((float10)fVar4 * fVar13);
              local_38 = (float)((float10)fVar6 * fVar13);
              fVar14 = (float10)_DAT_005e6e07;
              fVar13 = (float10)fVar6 * fVar13 + fVar14;
              fVar15 = (float10)local_3c + fVar14;
              fVar14 = (float10)local_34 + fVar14;
              round();
              round();
              iVar10 = (int)ROUND(fVar13);
              local_30 = (int)ROUND(fVar15);
              local_2c = iVar10;
              round();
              local_30 = (int)ROUND(fVar14);
              engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0
                        (DAT_0060b280,local_30,green_component,iVar10);
              local_128 = 3;
              local_114 = (uint)*(ushort *)pSVar11;
              local_108 = (uint)*(ushort *)(pSVar11 + 2);
              local_fc = (uint)*(ushort *)(pSVar11 + 4);
              engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0
                        (DAT_0060b280,local_12c);
              local_44 = local_44 + 0x12;
            } while (local_44 < local_8c);
          }
        }
        else if ((this_ptr->num_textures == 1) ||
                (((local_84 != 0 || (skip_texture_capture != 0)) || (local_80 != 0)))) {
          if (((local_84 == 0) && (skip_texture_capture == 0)) && (local_80 == 0)) {
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                      (DAT_0060b280,(SMRGLTextureBasic *)(local_94 + *local_b8 * 0x240));
          }
          core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040
                    (g_CDemonSetPtr,*(SInputFace **)(local_90 + 0x7c) + local_b0 * 0x12,
                     iVar12 - local_b0,render_flags);
        }
        else {
          local_68 = -1;
          local_40 = local_b0;
          if (local_b0 < iVar12) {
            local_98 = local_b8;
            do {
              iVar10 = local_40 + 1;
              iVar2 = (*(int **)(local_ac + 0x90))[local_40];
              if (iVar10 < iVar12) {
                piVar8 = *(int **)(local_a0 + 0x90) + iVar10;
                do {
                  if (iVar2 != *piVar8) break;
                  iVar10 = iVar10 + 1;
                  piVar8 = piVar8 + 1;
                } while (iVar10 < iVar12);
              }
              if (iVar2 != local_68) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                          (DAT_0060b280,
                           (SMRGLTextureBasic *)(local_94 + iVar2 * 0x48 + *local_98 * 0x240));
                local_68 = iVar2;
              }
              core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040
                        (g_CDemonSetPtr,*(SInputFace **)(local_90 + 0x7c) + local_40 * 0x12,
                         iVar10 - local_40,render_flags);
              local_40 = iVar10;
            } while (iVar10 < iVar12);
          }
        }
      }
      local_c4 = local_c4 + 4;
      local_c8 = local_c8 + 0x60;
      local_b8 = local_b8 + 1;
      local_bc = local_bc + 1;
      local_b0 = iVar12;
    } while (local_bc < this_ptr->num_parts);
  }
  local_b4 = 0;
  if (0 < this_ptr->num_parts) {
    local_a4 = &this_ptr->field_0xc0;
    local_c0 = this_ptr->lod_info + lod_index * 4 + -4;
    local_cc = (byte *)part_visibility_flags;
    do {
      local_88 = local_b0 + *(int *)(local_c0 + 0xc38);
      local_64 = -1;
      if (((*local_cc & 1) != 0) && (local_b0 < local_88)) {
        local_9c = texture_set_indices + local_b4;
        local_48 = local_b0 * 0x12;
        local_4c = local_b0 * 4;
        iVar12 = local_b0;
        do {
          local_6c = this_ptr->tri_data_ptr[lod_index] + local_48;
          if ((*(byte *)(part_visibility_flags +
                        this_ptr->cap_index_ptr[lod_index][iVar12 - this_ptr->tri_count[lod_index]])
              & 1) == 0) {
            if ((((local_84 == 0) && (skip_texture_capture == 0)) && (local_80 == 0)) &&
               (iVar10 = *(int *)((int)this_ptr->index_data_ptr[lod_index] + local_4c),
               iVar10 != local_64)) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                        (DAT_0060b280,
                         (SMRGLTextureBasic *)(local_a4 + iVar10 * 0x48 + *local_9c * 0x240));
              local_64 = iVar10;
            }
            core_set_cpp_CDemonSet_renderFaceListOrEnvMap_FUN_00534040
                      (g_CDemonSetPtr,local_6c,1,render_flags);
          }
          iVar12 = iVar12 + 1;
          local_48 = local_48 + 0x12;
          local_4c = local_4c + 4;
        } while (iVar12 < local_88);
      }
      local_b0 = local_88;
      local_cc = local_cc + 4;
      local_c0 = local_c0 + 0x60;
      local_b4 = local_b4 + 1;
    } while (local_b4 < this_ptr->num_parts);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  return;
}
