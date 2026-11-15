// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00440000
// Address: 00440000
// Address Range: [[00440000, 00440367]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00440000(CDemonCamera *this_ptr,CDemonLight *light_source)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00440000(CDemonCamera *this_ptr,CDemonLight *light_source)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  CMatrix3x3f *pCVar7;
  byte bVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  int aiStackY_1050 [1016];
  int iStack_68;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint *local_2c;
  uint *local_28;
  CVector3i *local_24;
  int local_20;
  char *local_1c;
  
  bVar8 = 0;
  _DAT_013087d4 = light_source;
  pCVar7 = &(light_source->base).base.rotation_matrix;
  pfVar6 = (float *)&DAT_013087d8;
  for (iVar5 = 10; iVar4 = 0, iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar6 = pCVar7->m[0].x;
    pCVar7 = (CMatrix3x3f *)&pCVar7->m[0].y;
    pfVar6 = pfVar6 + 1;
  }
  do {
    iVar5 = iVar4 + 4;
    uVar3 = rand();
    *(uint *)(iVar4 + 0x13083d4) = uVar3 & 0xff;
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  iVar5 = 0;
  if (0 < this_ptr->display_height) {
    iVar4 = 0;
    do {
      *(int *)(iVar4 + 0x14c3550) = this_ptr->display_width;
      *(uint *)(iVar4 + 0x14c3910) = 0;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < this_ptr->display_height);
  }
  iStack_68 = 0x440089;
  core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60(light_source);
  fVar1 = (light_source->base).max_distance * (float)_DAT_005ce5be;
  fVar2 = (float)_DAT_005ce5c6;
  dVar10 = round((double)fVar1);
  iStack_68 = 0x4400b6;
  dVar11 = round((double)(fVar1 * 0.30103 * fVar2));
  local_38 = 0;
  _DAT_00b667a0 = (int)ROUND(dVar11);
  _DAT_00b6679c = (int)ROUND(dVar10);
  _DAT_00b667a0 = _DAT_00b667a0 + -1;
  if (0 < this_ptr->display_height) {
    local_34 = 0;
    local_40 = 0xa005d4;
    iStack_44 = 0x14c3cd0;
    iStack_48 = 0xaf5218;
    local_3c = 0x91e6d4;
    do {
      if (this_ptr->display_width != *(int *)(local_34 + 0x14c3550)) {
        local_20 = *(int *)(local_34 + 0x14c3550);
        local_30 = *(int *)(local_34 + 0x14c3910);
        local_24 = (CVector3i *)(local_3c + local_20 * 0xc);
        local_1c = (char *)(iStack_48 + local_20);
        local_2c = (uint *)(iStack_44 + local_20 * 4);
        local_28 = (uint *)(*(int *)(&DAT_01c2b64c + (local_38 << (DAT_01308800 & 0x1f)) * 4) +
                           (local_20 << (DAT_01308800 & 0x1f)) * 4);
        pfVar6 = (float *)(local_20 * 0xc + local_40);
        iVar5 = local_20 - local_30;
        bVar9 = SBORROW4(local_20,local_30);
        while (bVar9 != iVar5 < 0) {
          if ((*local_28 < *local_2c) &&
             (0.0 <= pfVar6[2] * _DAT_013087f8 + *pfVar6 * _DAT_013087e0 + pfVar6[1] * _DAT_013087ec
             )) {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0043cbe0
                      (&_DAT_013087d4->base,local_24,(CVector3i *)&stack0xffffff98);
            iStack_5c = iStack_68;
            *(uint *)((int)&stack0xffffffa8 + (uint)bVar8 * -8) =
                 *(uint *)(&stack0xffffff9c + (uint)bVar8 * -8);
            *(uint *)((int)&stack0xffffffac + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                 *(uint *)(&stack0xffffffa0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            if ((0 < local_54) &&
               ((uVar3 = (uint)_DAT_013087d4->shadow_depth_buffer
                               [(iStack_58 >> 0x10) * _DAT_013087d4->shadow_map_width +
                                (iStack_5c >> 0x10)], (int)uVar3 < _DAT_00b6679c &&
                (local_54 < (int)(uVar3 + 0x80))))) {
              *local_1c = *local_1c +
                          (char)((int)((_DAT_00b6679c - uVar3) *
                                      (uint)_DAT_013087d4->precomputed_lighting_textures
                                            [((_DAT_013087d4->texture_coord_mask &
                                              iStack_58 >>
                                              ((byte)_DAT_013087d4->shadow_y_shift & 0x1f)) <<
                                             ((byte)_DAT_013087d4->texture_row_shift & 0x1f)) +
                                             (iStack_5c >>
                                              ((byte)_DAT_013087d4->shadow_x_shift & 0x1f) &
                                             _DAT_013087d4->texture_coord_mask)]) >>
                                (DAT_00b667a0 & 0x1f));
            }
          }
          pfVar6 = pfVar6 + 3;
          local_2c = local_2c + 1;
          local_24 = local_24 + 1;
          local_20 = local_20 + 1;
          local_28 = local_28 + (1 << (DAT_01308800 & 0x1f));
          local_1c = local_1c + 1;
          iVar5 = local_20 - local_30;
          bVar9 = SBORROW4(local_20,local_30);
        }
      }
      local_34 = local_34 + 4;
      local_40 = local_40 + 0xf00;
      iStack_44 = iStack_44 + 0x500;
      iStack_48 = iStack_48 + 0x140;
      local_3c = local_3c + 0xf00;
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  _DAT_013083cc = 1;
  return;
}
