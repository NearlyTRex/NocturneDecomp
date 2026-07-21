// Name: core_skeleton.cpp_CDeformableModel_skinVertices_FUN_005181a0
// Address: 005181a0
// Address Range: [[005181a0, 00518315]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_skinVertices_FUN_005181a0(int param_1,int param_2,int param_3,int *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_skinVertices_FUN_005181a0(int param_1,int param_2,int param_3,int *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  byte local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  byte local_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  float *local_14;
  
  local_18 = param_4;
  local_24 = param_2 << 2;
  local_1c = 0;
  for (local_20 = 0; local_20 < *(int *)(param_1 + local_24 + 0x2c); local_20 = local_20 + 1) {
    pfVar3 = (float *)(local_1c + *(int *)(param_1 + local_24 + 0x40));
    pfVar2 = pfVar3 + 4;
    local_14 = pfVar3;
    if (*(char *)pfVar3 == '\x01') {
      pfVar2 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                  (local_3c,pfVar2,(uint)*(byte *)((int)pfVar3 + 1) * 0x30 + param_3
                                  );
      if (&local_30 != pfVar2) {
        local_30 = *pfVar2;
        local_2c = pfVar2[1];
        local_28 = pfVar2[2];
      }
    }
    else {
      local_2c = 0.0;
      local_30 = 0.0;
      local_28 = 0.0;
      pfVar4 = pfVar3;
      for (iVar5 = 0; pfVar4 = pfVar4 + 1, iVar5 < (int)(uint)*(byte *)local_14; iVar5 = iVar5 + 1)
      {
        pfVar1 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                    (local_54,pfVar2,
                                     (uint)*(byte *)((int)pfVar3 + 1) * 0x30 + param_3);
        local_48 = *pfVar1 * *pfVar4;
        local_44 = pfVar1[1] * *pfVar4;
        local_40 = pfVar1[2] * *pfVar4;
        pfVar3 = (float *)((int)pfVar3 + 1);
        pfVar2 = pfVar2 + 3;
        local_30 = local_30 + local_48;
        local_2c = local_2c + local_44;
        local_28 = local_28 + local_40;
      }
    }
    *local_18 = (int)ROUND(local_30 * _DAT_005a1ea8);
    local_18[1] = (int)ROUND(local_2c * _DAT_005a1ea8);
    local_18[2] = (int)ROUND(local_28 * _DAT_005a1ea8);
    local_18 = local_18 + 3;
    local_1c = local_1c + 0x34;
  }
  return;
}
