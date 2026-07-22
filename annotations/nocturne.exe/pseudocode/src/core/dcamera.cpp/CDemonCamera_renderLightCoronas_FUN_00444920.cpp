// Name: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00444920
// Address: 00444920
// Address Range: [[00444920, 00444c87]]
// Convention: unknown
// Signature: void core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920(int param_1,int param_2)

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
  float10 fVar11;
  int aiStackY_1050 [1016];
  int iStack_68;
  int iStack_64;
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
  
  bVar7 = 0;
  _DAT_012b0634 = param_2;
  puVar5 = (uint *)(param_2 + 0x110);
  puVar6 = (uint *)&DAT_012b0638;
  for (iVar3 = 10; iVar2 = 0, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  do {
    iVar3 = iVar2 + 4;
    iStack_64 = 0x444952;
    uVar1 = rand();
    *(uint *)(iVar2 + 0x12b0234) = uVar1 & 0xff;
    iVar2 = iVar3;
  } while (iVar3 != 0x400);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    iVar2 = 0;
    do {
      *(uint *)(iVar2 + 0x146b290) = *(uint *)(param_1 + 0x150);
      *(uint *)(iVar2 + 0x146b650) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x154));
  }
  iStack_64 = param_2;
  iStack_68 = 0x4449a9;
  core_dlight_cpp_FUN_0044f0b0();
  fVar9 = (float10)*(float *)(param_2 + 0x100) * (float10)256;
  fVar11 = (float10)3.3219280948900001;
  iStack_64 = 0x4449cd;
  fVar10 = (float10)round(fVar9);
  iStack_68 = 0x4449d6;
  fVar11 = (float10)round((float10)0.3010299956639812 * fVar9 * fVar11);
  local_38 = 0;
  _DAT_00b0e600 = (int)ROUND(fVar11);
  _DAT_00b0e5fc = (int)ROUND(fVar10);
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
        pfVar4 = (float *)(local_20 * 0xc + local_40);
        iVar3 = local_20 - local_30;
        bVar8 = SBORROW4(local_20,local_30);
        while (bVar8 != iVar3 < 0) {
          if ((*local_28 < *local_2c) &&
             (0.0 <= pfVar4[2] * _DAT_012b0658 + *pfVar4 * _DAT_012b0640 + pfVar4[1] * _DAT_012b064c
             )) {
            core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
                      (_DAT_012b0634,local_24);
            iStack_5c = iStack_68;
            *(uint *)((int)&stack0xffffffa8 + (uint)bVar7 * -8) =
                 *(uint *)((int)&stack0xffffff9c + (uint)bVar7 * -8);
            *(uint *)((int)&stack0xffffffac + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                 *(uint *)(&stack0xffffffa0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            if ((0 < local_54) &&
               ((uVar1 = (uint)*(ushort *)
                                (*(int *)(_DAT_012b0634 + 0x2f94) +
                                ((iStack_58 >> 0x10) * *(int *)(_DAT_012b0634 + 0x1cc0) +
                                (iStack_5c >> 0x10)) * 2), (int)uVar1 < _DAT_00b0e5fc &&
                (local_54 < (int)(uVar1 + 0x80))))) {
              *local_1c = *local_1c +
                          (char)((int)((_DAT_00b0e5fc - uVar1) *
                                      (uint)*(byte *)(*(int *)(_DAT_012b0634 + 0x1c54) +
                                                     ((*(uint *)(_DAT_012b0634 + 0x1c68) &
                                                      iStack_58 >>
                                                      (*(byte *)(_DAT_012b0634 + 0x1ccc) & 0x1f)) <<
                                                     (*(byte *)(_DAT_012b0634 + 0x1c60) & 0x1f)) +
                                                     (iStack_5c >>
                                                      (*(byte *)(_DAT_012b0634 + 0x1cc8) & 0x1f) &
                                                     *(uint *)(_DAT_012b0634 + 0x1c68)))) >>
                                (DAT_00b0e600 & 0x1f));
            }
          }
          pfVar4 = pfVar4 + 3;
          local_2c = local_2c + 1;
          local_24 = local_24 + 0xc;
          local_20 = local_20 + 1;
          local_28 = local_28 + (1 << (DAT_012b0660 & 0x1f));
          local_1c = local_1c + 1;
          iVar3 = local_20 - local_30;
          bVar8 = SBORROW4(local_20,local_30);
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
