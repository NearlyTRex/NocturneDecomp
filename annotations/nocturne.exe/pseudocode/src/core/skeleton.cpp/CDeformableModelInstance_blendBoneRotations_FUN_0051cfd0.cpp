// Name: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
// Address: 0051cfd0
// Address Range: [[0051cfd0, 0051d09b]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(int param_1,undefined4 param_2,float param_3,undefined4 param_4,code *param_5)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(int param_1,uint param_2,float param_3,uint param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int aiStackY_1808 [1522];
  uint uStack_2c;
  int local_1c;
  int local_18;
  uint uStack_14;
  
  bVar6 = 0;
  if ((float)0.001 < param_3) {
    iVar2 = 0;
    local_1c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
    if (0 < *(int *)(local_1c + 0x28558)) {
      local_18 = param_1;
      iVar3 = param_1 + 0x6b0;
      do {
        iVar1 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                          (local_1c,iVar2,param_4);
        if (-1 < iVar1) {
          uStack_14 = (*param_5)(iVar2,param_4,param_3,iVar1,param_1);
          core_xform_cpp_slerpQuaternion_FUN_0055d2d0(iVar3,param_2,uStack_14);
          puVar4 = (uint *)(local_18 + 0x6b4 + (uint)bVar6 * -8);
          *(uint *)(local_18 + 0x6b0) = uStack_2c;
          puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
          *puVar4 = *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8);
          *puVar5 = *(uint *)(&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          puVar5[(uint)bVar6 * -2 + 1] =
               *(uint *)
                ((int)(&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                ((uint)bVar6 * -2 + 1) * 4);
        }
        iVar3 = iVar3 + 0x10;
        iVar2 = iVar2 + 1;
        local_18 = local_18 + 0x10;
      } while (iVar2 < *(int *)(local_1c + 0x28558));
    }
  }
  return;
}
