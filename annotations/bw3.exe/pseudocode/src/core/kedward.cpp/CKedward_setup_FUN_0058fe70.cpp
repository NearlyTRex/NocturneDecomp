// Name: core_kedward.cpp_CKedward_setup_FUN_0058fe70
// Address: 0058fe70
// Address Range: [[0058fe70, 0058ff63]]
// Convention: __cdecl
// Signature: void __cdecl core_kedward_cpp_CKedward_setup_FUN_0058fe70(CKedward *this_ptr)

#include "nocturne.h"

void __cdecl core_kedward_cpp_CKedward_setup_FUN_0058fe70(CKedward *this_ptr)

{
  byte *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  SMotion *pSVar2;
  char *model_name;
  
  if (*(int *)&this_ptr->field_0x3268 == 0) {
    *(uint *)&this_ptr->field_0xce5c = 0x41a00000;
    *(uint *)&this_ptr->field_0xce60 = 0x41a00000;
    *(uint *)&this_ptr->field_0x2538 = 0x43160000;
  }
  if (*(int *)&this_ptr->field_0xd094 == 0) {
    model_name = "bwp3_keddem.dfm";
  }
  else {
    model_name = "bwp3_keddem_invis.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)&this_ptr->field_0x158,model_name);
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  *(uint *)&this_ptr->field_0xce5c = 0;
  *(int *)&this_ptr->field_0xd074 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110((CEnemy *)this_ptr);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)this_ptr_00);
  if ((*(int *)(pSVar2 + 0x24) == 8) || (*(int *)&this_ptr->field_0xd094 != 0)) {
    *(uint *)&this_ptr->field_0x2540 = 0;
  }
  else {
    *(uint *)&this_ptr->field_0x2540 = 2;
  }
  *(uint *)&this_ptr->field_0xd05c = 0;
  *(uint *)&this_ptr->field_0xcdcc = 0x3fc00000;
  *(uint *)&this_ptr->field_0xd058 = 0;
  return;
}
