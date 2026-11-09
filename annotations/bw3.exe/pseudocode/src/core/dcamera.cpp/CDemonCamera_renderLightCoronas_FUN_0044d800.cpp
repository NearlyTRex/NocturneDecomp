// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_0044d800
// Address: 0044d800
// Address Range: [[0044d800, 0044db67]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_0044d800(CDemonCamera *this_ptr,CDemonLight *light_source)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_0044d800(CDemonCamera *this_ptr,CDemonLight *light_source)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  int aiStackY_1048 [1016];
  int local_60;
  int local_54;
  int local_50;
  int local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
  int local_1c;
  int local_18;
  char *local_14;
  
  bVar7 = 0;
  _DAT_01340584 = light_source;
  puVar5 = (uint *)&light_source->field_0x10;
  puVar6 = (uint *)&DAT_01340588;
  for (iVar3 = 10; iVar2 = 0, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  do {
    iVar3 = iVar2 + 4;
    uVar1 = rand();
    *(uint *)(iVar2 + 0x1340184) = uVar1 & 0xff;
    iVar2 = iVar3;
  } while (iVar3 != 0x400);
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x154) {
    iVar2 = 0;
    do {
      *(uint *)(iVar2 + 0x14fb300) = *(uint *)&this_ptr->field_0x150;
      *(uint *)(iVar2 + 0x14fb6c0) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)&this_ptr->field_0x154);
  }
  core_dlight_cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170(light_source);
  fVar9 = (float10)*(float *)&light_source->field_0x140 * (float10)_DAT_005b9eee;
  fVar10 = (float10)0.3010299956639812 * fVar9 * (float10)_DAT_005b9ef6;
  round();
  local_30 = round();
  _DAT_00b9e550 = (int)ROUND(fVar10);
  _DAT_00b9e54c = (int)ROUND(fVar9);
  _DAT_00b9e550 = _DAT_00b9e550 + -1;
  if (0 < *(int *)&this_ptr->field_0x154) {
    local_2c = 0;
    local_38 = 0xa38388;
    local_3c = 0x14fba80;
    local_40 = 0xb2cfc8;
    local_34 = 0x956488;
    do {
      if (*(int *)&this_ptr->field_0x150 != *(int *)(local_2c + 0x14fb300)) {
        local_18 = *(int *)(local_2c + 0x14fb300);
        local_28 = *(int *)(local_2c + 0x14fb6c0);
        local_1c = local_34 + local_18 * 0xc;
        local_14 = (char *)(local_40 + local_18);
        local_24 = (uint *)(local_3c + local_18 * 4);
        local_20 = (uint *)(*(int *)(&DAT_01c60dac + (local_30 << (DAT_013405b0 & 0x1f)) * 4) +
                           (local_18 << (DAT_013405b0 & 0x1f)) * 4);
        pfVar4 = (float *)(local_18 * 0xc + local_38);
        iVar3 = local_18 - local_28;
        bVar8 = SBORROW4(local_18,local_28);
        while (bVar8 != iVar3 < 0) {
          if ((*local_20 < *local_24) &&
             (0.0 <= pfVar4[2] * _DAT_013405a8 + *pfVar4 * _DAT_01340590 + pfVar4[1] * _DAT_0134059c
             )) {
            core_dcamera_cpp_FUN_0044a3e0(_DAT_01340584,local_1c);
            local_54 = local_60;
            *(uint *)((int)&stack0xffffffb0 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffffa4 + (uint)bVar7 * -8);
            *(uint *)((int)&stack0xffffffb4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffffa8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            if ((0 < local_4c) &&
               ((uVar1 = (uint)*(ushort *)
                                (*(int *)&_DAT_01340584->field_0x2f94 +
                                ((local_50 >> 0x10) * *(int *)&_DAT_01340584->field_0x1cc0 +
                                (local_54 >> 0x10)) * 2), (int)uVar1 < _DAT_00b9e54c &&
                (local_4c < (int)(uVar1 + 0x80))))) {
              *local_14 = *local_14 +
                          (char)((int)((_DAT_00b9e54c - uVar1) *
                                      (uint)*(byte *)(*(int *)&_DAT_01340584->field_0x1c54 +
                                                     ((*(uint *)&_DAT_01340584->field_0x1c68 &
                                                      local_50 >>
                                                      (_DAT_01340584->field_0x1ccc & 0x1f)) <<
                                                     (_DAT_01340584->field_0x1c60 & 0x1f)) +
                                                     (local_54 >>
                                                      (_DAT_01340584->field_0x1cc8 & 0x1f) &
                                                     *(uint *)&_DAT_01340584->field_0x1c68))) >>
                                (DAT_00b9e550 & 0x1f));
            }
          }
          pfVar4 = pfVar4 + 3;
          local_24 = local_24 + 1;
          local_1c = local_1c + 0xc;
          local_18 = local_18 + 1;
          local_20 = local_20 + (1 << (DAT_013405b0 & 0x1f));
          local_14 = local_14 + 1;
          iVar3 = local_18 - local_28;
          bVar8 = SBORROW4(local_18,local_28);
        }
      }
      local_2c = local_2c + 4;
      local_38 = local_38 + 0xf00;
      local_3c = local_3c + 0x500;
      local_40 = local_40 + 0x140;
      local_34 = local_34 + 0xf00;
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)&this_ptr->field_0x154);
  }
  _DAT_0134017c = 1;
  return;
}
