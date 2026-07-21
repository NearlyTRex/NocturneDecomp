// Name: core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0
// Address: 004537d0
// Address Range: [[004537d0, 00453947]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0(int param_1)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  float *local_14;
  
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    local_14 = (float *)(param_1 + 0x338);
    local_1c = 0;
    do {
      pfVar4 = (float *)(*(int *)(param_1 + 0x350) + local_1c);
      piVar2 = (int *)(*(int *)(param_1 + 0x10c) + local_18 * *(int *)(param_1 + 0x104) * 0xc);
      local_20 = (float)_DAT_0057ccee;
      local_28 = (float)*piVar2 * local_20;
      local_24 = (float)piVar2[1] * local_20;
      local_20 = (float)piVar2[2] * local_20;
      if (pfVar4 != &local_28) {
        *pfVar4 = local_28;
        pfVar4[1] = local_24;
        pfVar4[2] = local_20;
      }
      if (pfVar4 + 3 != &local_28) {
        pfVar4[3] = local_28;
        pfVar4[4] = local_24;
        pfVar4[5] = local_20;
      }
      iVar3 = 1;
      if (1 < *(int *)(param_1 + 0x104)) {
        do {
          local_28 = (float)piVar2[3] * (float)_DAT_0057ccee;
          local_24 = (float)piVar2[4] * (float)_DAT_0057ccee;
          local_20 = (float)piVar2[5] * (float)_DAT_0057ccee;
          piVar2 = piVar2 + 3;
          iVar3 = iVar3 + 1;
          core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(pfVar4,&local_28);
        } while (iVar3 < *(int *)(param_1 + 0x104));
      }
      pfVar1 = local_14;
      if (local_18 == 0) {
        if (pfVar4 != local_14) {
          *local_14 = *pfVar4;
          local_14[1] = pfVar4[1];
          local_14[2] = pfVar4[2];
        }
        if (local_14 + 3 != pfVar4) {
          local_14[3] = *pfVar4;
          local_14[4] = pfVar4[1];
          local_14[5] = pfVar4[2];
        }
      }
      core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(local_14,pfVar4);
      core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(pfVar1,pfVar4 + 3);
      local_1c = local_1c + 0x18;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x100));
  }
  return;
}
