// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00444920
// Address: 00444920
// Address Range: [[00444920, 00444c87]]
// Convention: unknown
// Signature: void core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920(int param_1,CDemonLight *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920(int param_1,CDemonLight *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  char *pcVar7;
  uint *puVar8;
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
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint *local_2c;
  uint *local_28;
  int local_24;
  int local_20;
  char *local_1c;
  
  bVar9 = 0;
  _DAT_012b0634 = param_2;
  pcVar7 = (param_2->base).camera_name + 0xd0;
  puVar8 = (uint *)&DAT_012b0638;
  for (iVar5 = 10; iVar4 = 0, iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *(uint *)pcVar7;
    pcVar7 = pcVar7 + 4;
    puVar8 = puVar8 + 1;
  }
  do {
    iVar5 = iVar4 + 4;
    uVar3 = rand();
    *(uint *)(iVar4 + 0x12b0234) = uVar3 & 0xff;
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    iVar4 = 0;
    do {
      *(uint *)(iVar4 + 0x146b290) = *(uint *)(param_1 + 0x150);
      *(uint *)(iVar4 + 0x146b650) = 0;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x154));
  }
  iStack_68 = 0x4449a9;
  core_dlight_cpp_FUN_0044f0b0(param_2);
  fVar1 = *(float *)((param_2->base).camera_name + 0xc0) * (float)256;
  fVar2 = (float)3.3219280948900001;
  dVar11 = round((double)fVar1);
  iStack_68 = 0x4449d6;
  dVar12 = round((double)(fVar1 * 0.30103 * fVar2));
  local_38 = 0;
  _DAT_00b0e600 = (int)ROUND(dVar12);
  _DAT_00b0e5fc = (int)ROUND(dVar11);
  _DAT_00b0e600 = _DAT_00b0e600 + -1;
  if (0 < *(int *)(param_1 + 0x154)) {
    local_34 = 0;
    local_40 = 0x9bb178;
    iStack_44 = 0x146ba10;
    iStack_48 = 0xa9d078;
    local_3c = 0x8d9278;
    do {
      if (*(int *)(param_1 + 0x150) != *(int *)(local_34 + 0x146b290)) {
        local_20 = *(int *)(local_34 + 0x146b290);
        local_30 = *(int *)(local_34 + 0x146b650);
        local_24 = local_3c + local_20 * 0xc;
        local_1c = (char *)(iStack_48 + local_20);
        local_2c = (uint *)(iStack_44 + local_20 * 4);
        local_28 = (uint *)(*(int *)(&DAT_01bd4260 + (local_38 << (DAT_012b0660 & 0x1f)) * 4) +
                           (local_20 << (DAT_012b0660 & 0x1f)) * 4);
        pfVar6 = (float *)(local_20 * 0xc + local_40);
        iVar5 = local_20 - local_30;
        bVar10 = SBORROW4(local_20,local_30);
        while (bVar10 != iVar5 < 0) {
          if ((*local_28 < *local_2c) &&
             (0.0 <= pfVar6[2] * _DAT_012b0658 + *pfVar6 * _DAT_012b0640 + pfVar6[1] * _DAT_012b064c
             )) {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
                      (_DAT_012b0634,local_24);
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
          pfVar6 = pfVar6 + 3;
          local_2c = local_2c + 1;
          local_24 = local_24 + 0xc;
          local_20 = local_20 + 1;
          local_28 = local_28 + (1 << (DAT_012b0660 & 0x1f));
          local_1c = local_1c + 1;
          iVar5 = local_20 - local_30;
          bVar10 = SBORROW4(local_20,local_30);
        }
      }
      local_34 = local_34 + 4;
      local_40 = local_40 + 0xf00;
      iStack_44 = iStack_44 + 0x500;
      iStack_48 = iStack_48 + 0x140;
      local_3c = local_3c + 0xf00;
      local_38 = local_38 + 1;
    } while (local_38 < *(int *)(param_1 + 0x154));
  }
  _DAT_012b022c = 1;
  return;
}
