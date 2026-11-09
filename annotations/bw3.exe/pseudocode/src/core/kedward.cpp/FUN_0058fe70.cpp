// Name: core_kedward.cpp_FUN_0058fe70
// Address: 0058fe70
// Address Range: [[0058fe70, 0058ff63]]
// Convention: unknown
// Signature: void core_kedward_cpp_FUN_0058fe70(CEnemy *param_1)

#include "nocturne.h"

void core_kedward_cpp_FUN_0058fe70(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  SMotion *pSVar2;
  char *pcVar3;
  
  if (*(int *)&param_1->field_0x3268 == 0) {
    *(uint *)&param_1->field_0xce5c = 0x41a00000;
    *(uint *)&param_1->field_0xce60 = 0x41a00000;
    *(uint *)&param_1->field_0x2538 = 0x43160000;
  }
  if (*(int *)&param_1[1].field_0x40 == 0) {
    pcVar3 = "bwp3_keddem.dfm";
  }
  else {
    pcVar3 = "bwp3_keddem_invis.dfm";
  }
  core_skeleton_cpp_FUN_0054eae0(&param_1->field_0x158,pcVar3);
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  *(uint *)&param_1->field_0xce5c = 0;
  *(int *)&param_1[1].field_0x20 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)this_ptr);
  if ((*(int *)(pSVar2 + 0x24) == 8) || (*(int *)&param_1[1].field_0x40 != 0)) {
    *(uint *)&param_1->field_0x2540 = 0;
  }
  else {
    *(uint *)&param_1->field_0x2540 = 2;
  }
  *(uint *)&param_1[1].field_0x8 = 0;
  *(uint *)&param_1->field_0xcdcc = 0x3fc00000;
  *(uint *)&param_1[1].field_0x4 = 0;
  return;
}
