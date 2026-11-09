// Name: core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043fa20
// Address: 0043fa20
// Address Range: [[0043fa20, 0043fbcb]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043fa20(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_0043fa20(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  CCloth *bone_name;
  float *pfVar2;
  uint *puVar3;
  CCloth *pCVar4;
  byte bVar5;
  uint auStackY_101c [988];
  CVector3f *euler_angles;
  CMatrix3x4f local_a0 [48];
  uint local_70 [12];
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CSkeleton *local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(model_ptr);
  bone_name = this_ptr + bone_index * 0xac + 0x37b50;
  local_1c = this_ptr_00;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,(char *)bone_name,1);
  *(uint *)(bone_name + 0x44) = 0;
  local_18 = -1;
  *(int *)(bone_name + 0x40) = iVar1;
  iVar1 = 0;
  if (0 < *(int *)&this_ptr_00->field_0x1de78) {
    pfVar2 = (float *)&model_ptr->field_0x58;
    do {
      if ((*(int *)(bone_name + 0x40) == *(int *)&this_ptr_00->field_0x1de9c) &&
         (local_14 = SQRT(pfVar2[2] * pfVar2[2] + *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1]),
         *(float *)(bone_name + 0x44) < local_14)) {
        *(float *)(bone_name + 0x44) = local_14;
        local_18 = iVar1;
      }
      this_ptr_00 = (CSkeleton *)&this_ptr_00->field_0x24;
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 3;
    } while (iVar1 < *(int *)&local_1c->field_0x1de78);
  }
  if (local_18 < 0) {
    _DAT_01d1d400 = "..\\core\\cloth.cpp";
    _DAT_01d1d404 = 0x2bf;
    core_main_c_FUN_005030e0("Can't orient bone with no children!");
  }
  core_vecdir_cpp_FUN_005a7520(&model_ptr->field_0x58 + local_18 * 0xc);
  euler_angles = &local_28;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_40._8_4_ = 0;
  local_28._0_4_ = local_34._0_4_;
  *(uint *)((int)&local_28 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&local_34 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&local_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  core_xform_cpp_FUN_005b5620((CMatrix3x4f *)(bone_name + 0x48),&local_40,euler_angles);
  core_xform_cpp_FUN_005b5620
            (local_a0,(CVector3f *)(bone_name + 0x1c),(CVector3f *)(bone_name + 0x28));
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200((CMatrix3x4f *)(bone_name + 0x48),local_a0);
  puVar3 = local_70;
  pCVar4 = bone_name + 0x48;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pCVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    pCVar4 = pCVar4 + (uint)bVar5 * -8 + 4;
  }
  *(float *)(bone_name + 0x38) = 1.0 / *(float *)(bone_name + 0x14);
  *(float *)(bone_name + 0x3c) = 1.0 / *(float *)(bone_name + 0x18);
  if (*(float *)(bone_name + 0x34) <= 0.0) {
    return;
  }
  *(uint *)(bone_name + 0x44) = *(uint *)(bone_name + 0x34);
  return;
}
