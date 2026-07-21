// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
// Address: 0051d3c0
// Address Range: [[0051d3c0, 0051d5dd]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(int param_1)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_2c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
  iVar2 = 0;
  if (0 < *(int *)(local_2c + 0x28558)) {
    local_24 = param_1 + 0xe80;
    local_18 = 0;
    local_30 = param_1 + 0x58;
    local_1c = param_1 + 0x6b0;
    iVar1 = param_1;
    iVar3 = param_1;
    local_20 = local_2c;
    local_14 = local_24;
    do {
      local_28 = iVar2 * 0x30;
      core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70(local_24,local_1c);
      if (*(int *)(iVar1 + 0xcf0) != 0x3f800000) {
        *(float *)(param_1 + 0xe80 + local_28) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(param_1 + 0xe80 + local_28);
        *(float *)(param_1 + 0xe84 + local_28) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(param_1 + 0xe84 + local_28);
        *(float *)(param_1 + 0xe88 + local_28) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(param_1 + 0xe88 + local_28);
        *(float *)(param_1 + 0xe90 + local_28) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(param_1 + 0xe90 + local_28);
        *(float *)(param_1 + 0xe94 + local_28) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(param_1 + 0xe94 + local_28);
        *(float *)(param_1 + 0xe98 + local_28) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(param_1 + 0xe98 + local_28);
        *(float *)(param_1 + 0xea0 + local_28) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(param_1 + 0xea0 + local_28);
        *(float *)(param_1 + 0xea4 + local_28) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(param_1 + 0xea4 + local_28);
        *(float *)(param_1 + 0xea8 + local_28) =
             *(float *)(iVar1 + 0xcf0) * *(float *)(param_1 + 0xea8 + local_28);
      }
      if (*(int *)(local_20 + 0x2857c) < 0) {
        *(float *)(iVar3 + 0xe8c) =
             *(float *)(param_1 + 0x58 + local_18) + *(float *)(param_1 + 0x6a4);
        *(float *)(iVar3 + 0xe9c) =
             *(float *)(param_1 + 0x5c + local_18) + *(float *)(param_1 + 0x6a8);
        *(float *)(iVar3 + 0xeac) =
             *(float *)(param_1 + 0x60 + local_18) + *(float *)(param_1 + 0x6ac);
      }
      else {
        core_xform_cpp_transformVector3x4_FUN_0055a8b0
                  (&local_3c,local_30 + local_18,*(int *)(local_20 + 0x2857c) * 0x30 + local_14);
        *(uint *)(iVar3 + 0xe8c) = local_3c;
        *(uint *)(iVar3 + 0xe9c) = local_38;
        *(uint *)(iVar3 + 0xeac) = local_34;
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 0x30;
      iVar2 = iVar2 + 1;
      local_24 = local_24 + 0x30;
      local_1c = local_1c + 0x10;
      local_18 = local_18 + 0xc;
      local_20 = local_20 + 0x24;
    } while (iVar2 < *(int *)(local_2c + 0x28558));
  }
  *(uint *)(param_1 + 0x2230) = 0xffffffff;
  return;
}
