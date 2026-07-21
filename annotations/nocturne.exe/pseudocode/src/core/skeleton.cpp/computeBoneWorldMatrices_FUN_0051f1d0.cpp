// Name: core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0
// Address: 0051f1d0
// Address Range: [[0051f1d0, 0051f3e0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_computeBoneWorldMatrices_FUN_0051f1d0(float *param_1,int param_2)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_computeBoneWorldMatrices_FUN_0051f1d0(float *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  float *local_28;
  int local_24;
  int local_20;
  float *local_1c;
  float *local_18;
  int local_14;
  
  local_2c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_2);
  local_14 = 0;
  if (0 < *(int *)(local_2c + 0x28558)) {
    local_28 = param_1 + 0x1f7;
    local_18 = param_1 + 3;
    local_30 = param_2 + 0x58;
    iVar2 = 0;
    pfVar1 = param_1;
    pfVar3 = param_1;
    local_20 = local_2c;
    local_1c = local_28;
    do {
      local_24 = local_14 * 0x30;
      core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70(local_1c,local_18);
      if (pfVar1[0x193] != 1.0) {
        *(float *)((int)param_1 + local_24 + 0x7dc) =
             pfVar1[0x193] * *(float *)((int)param_1 + local_24 + 0x7dc);
        *(float *)((int)param_1 + local_24 + 0x7e0) =
             pfVar1[0x193] * *(float *)((int)param_1 + local_24 + 0x7e0);
        *(float *)((int)param_1 + local_24 + 0x7e4) =
             pfVar1[0x193] * *(float *)((int)param_1 + local_24 + 0x7e4);
        *(float *)((int)param_1 + local_24 + 0x7ec) =
             pfVar1[0x193] * *(float *)((int)param_1 + local_24 + 0x7ec);
        *(float *)((int)param_1 + local_24 + 0x7f0) =
             pfVar1[0x193] * *(float *)((int)param_1 + local_24 + 0x7f0);
        *(float *)((int)param_1 + local_24 + 0x7f4) =
             pfVar1[0x193] * *(float *)((int)param_1 + local_24 + 0x7f4);
        *(float *)((int)param_1 + local_24 + 0x7fc) =
             pfVar1[0x193] * *(float *)((int)param_1 + local_24 + 0x7fc);
        *(float *)((int)param_1 + local_24 + 0x800) =
             pfVar1[0x193] * *(float *)((int)param_1 + local_24 + 0x800);
        *(float *)((int)param_1 + local_24 + 0x804) =
             pfVar1[0x193] * *(float *)((int)param_1 + local_24 + 0x804);
      }
      if (*(int *)(local_20 + 0x2857c) < 0) {
        pfVar3[0x1fa] = *(float *)(param_2 + 0x58 + iVar2) + *param_1;
        pfVar3[0x1fe] = *(float *)(param_2 + 0x5c + iVar2) + param_1[1];
        pfVar3[0x202] = *(float *)(param_2 + 0x60 + iVar2) + param_1[2];
      }
      else {
        core_xform_cpp_transformVector3x4_FUN_0055a8b0
                  (&local_3c,local_30 + iVar2,local_28 + *(int *)(local_20 + 0x2857c) * 0xc);
        pfVar3[0x1fa] = local_3c;
        pfVar3[0x1fe] = local_38;
        pfVar3[0x202] = local_34;
      }
      pfVar1 = pfVar1 + 1;
      pfVar3 = pfVar3 + 0xc;
      iVar2 = iVar2 + 0xc;
      local_1c = local_1c + 0xc;
      local_18 = local_18 + 4;
      local_20 = local_20 + 0x24;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(local_2c + 0x28558));
  }
  return;
}
