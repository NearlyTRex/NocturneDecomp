// Name: unkafter_bird.cpp_FUN_004152c0
// Address: 004152c0
// Address Range: [[004152c0, 00415335]]
// Convention: unknown
// Signature: void unkafter_bird_cpp_FUN_004152c0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_bird_cpp_FUN_004152c0(CCharacter *param_1)

{
  int iVar1;
  CSkeleton *this_ptr;
  
  core_charactr_cpp_FUN_0042c510(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  DAT_007c3908 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr,"Bip01 L Foot",0);
  _DAT_007c390c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Foot",0);
  iVar1 = DAT_007c3908;
  *(int *)&param_1->field_0x2620 = _DAT_007c390c;
  *(int *)&param_1->field_0x25a8 = iVar1;
  if (*(int *)&param_1->field_0x27a8 == 0) {
    return;
  }
  *(uint *)&param_1->field_0xfc = 1;
  return;
}
