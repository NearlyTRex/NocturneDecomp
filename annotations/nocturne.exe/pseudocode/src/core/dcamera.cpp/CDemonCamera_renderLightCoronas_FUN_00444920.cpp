// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00444920
// Address: 00444920
// Address Range: [[00444920, 00444c87]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920(CDemonCamera *this_ptr,CDemonLight *light_source)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920(CDemonCamera *this_ptr,CDemonLight *light_source)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  CVector3f *pCVar6;
  CMatrix3x3f *pCVar7;
  float *pfVar8;
  byte bVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  int aiStackY_1050 [1016];
  int iStack_68;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_48;
  int iStack_44;
  CVector3f *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint *local_2c;
  uint *local_28;
  CVector3i *local_24;
  int local_20;
  char *local_1c;
  
  bVar9 = 0;
  _DAT_012b0634 = light_source;
  pCVar7 = &(light_source->base).rotation_matrix;
  pfVar8 = (float *)&DAT_012b0638;
  for (iVar5 = 10; iVar4 = 0, iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar8 = pCVar7->m[0].x;
    pCVar7 = (CMatrix3x3f *)&pCVar7->m[0].y;
    pfVar8 = pfVar8 + 1;
  }
  do {
    iVar5 = iVar4 + 4;
    uVar3 = rand();
    *(uint *)(iVar4 + 0x12b0234) = uVar3 & 0xff;
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  iVar5 = 0;
  if (0 < this_ptr->display_height) {
    iVar4 = 0;
    do {
      *(int *)(iVar4 + 0x146b290) = this_ptr->display_width;
      *(uint *)(iVar4 + 0x146b650) = 0;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < this_ptr->display_height);
  }
  iStack_68 = 0x4449a9;
  core_dlight_cpp_CDemonLight_FUN_0044f0b0(light_source);
  fVar1 = (light_source->base).fixed_point_scale * (float)256;
  fVar2 = (float)3.3219280948900001;
  dVar11 = round((double)fVar1);
  iStack_68 = 0x4449d6;
  dVar12 = round((double)(fVar1 * 0.30103 * fVar2));
  local_38 = 0;
  _DAT_00b0e600 = (int)ROUND(dVar12);
  _DAT_00b0e5fc = (int)ROUND(dVar11);
  _DAT_00b0e600 = _DAT_00b0e600 + -1;
  if (0 < this_ptr->display_height) {
    local_34 = 0;
    local_40 = g_CVector3f_ARRAY_009bb178;
    iStack_44 = 0x146ba10;
    iStack_48 = 0xa9d078;
    local_3c = 0x8d9278;
    do {
      if (this_ptr->display_width != *(int *)(local_34 + 0x146b290)) {
        local_20 = *(int *)(local_34 + 0x146b290);
        local_30 = *(int *)(local_34 + 0x146b650);
        local_24 = (CVector3i *)(local_3c + local_20 * 0xc);
        local_1c = (char *)(iStack_48 + local_20);
        local_2c = (uint *)(iStack_44 + local_20 * 4);
        local_28 = g_ZBufferScanlineArray[local_38 << (DAT_012b0660 & 0x1f)] +
                   (local_20 << (DAT_012b0660 & 0x1f));
        pCVar6 = local_40 + local_20;
        iVar5 = local_20 - local_30;
        bVar10 = SBORROW4(local_20,local_30);
        while (bVar10 != iVar5 < 0) {
          if ((*local_28 < *local_2c) &&
             (0.0 <= pCVar6->z * _DAT_012b0658 +
                     pCVar6->x * _DAT_012b0640 + pCVar6->y * _DAT_012b064c)) {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
                      (&_DAT_012b0634->base,local_24,(CVector3i *)&stack0xffffff98);
            iStack_5c = iStack_68;
            *(uint *)((int)&stack0xffffffa8 + (uint)bVar9 * -8) =
                 *(uint *)(&stack0xffffff9c + (uint)bVar9 * -8);
            *(uint *)((int)&stack0xffffffac + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
                 *(uint *)(&stack0xffffffa0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
            if ((0 < local_54) &&
               ((uVar3 = (uint)_DAT_012b0634->shadow_depth_buffer
                               [(iStack_58 >> 0x10) * _DAT_012b0634->shadow_map_width +
                                (iStack_5c >> 0x10)], (int)uVar3 < _DAT_00b0e5fc &&
                (local_54 < (int)(uVar3 + 0x80))))) {
              *local_1c = *local_1c +
                          (char)((int)((_DAT_00b0e5fc - uVar3) *
                                      (uint)_DAT_012b0634->precomputed_lighting_textures
                                            [((_DAT_012b0634->texture_coord_mask &
                                              iStack_58 >>
                                              ((byte)_DAT_012b0634->shadow_y_shift & 0x1f)) <<
                                             ((byte)_DAT_012b0634->texture_row_shift & 0x1f)) +
                                             (iStack_5c >>
                                              ((byte)_DAT_012b0634->shadow_x_shift & 0x1f) &
                                             _DAT_012b0634->texture_coord_mask)]) >>
                                (DAT_00b0e600 & 0x1f));
            }
          }
          pCVar6 = pCVar6 + 1;
          local_2c = local_2c + 1;
          local_24 = local_24 + 1;
          local_20 = local_20 + 1;
          local_28 = local_28 + (1 << (DAT_012b0660 & 0x1f));
          local_1c = local_1c + 1;
          iVar5 = local_20 - local_30;
          bVar10 = SBORROW4(local_20,local_30);
        }
      }
      local_34 = local_34 + 4;
      local_40 = local_40 + 0x140;
      iStack_44 = iStack_44 + 0x500;
      iStack_48 = iStack_48 + 0x140;
      local_3c = local_3c + 0xf00;
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  _DAT_012b022c = 1;
  return;
}
