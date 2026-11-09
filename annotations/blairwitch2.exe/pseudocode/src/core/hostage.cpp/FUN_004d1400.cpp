// Name: core_hostage.cpp_FUN_004d1400
// Address: 004d1400
// Address Range: [[004d1400, 004d15c8]]
// Convention: unknown
// Signature: void core_hostage_cpp_FUN_004d1400(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hostage_cpp_FUN_004d1400(int param_1)

{
  char *str1;
  int iVar1;
  CSkeleton *this_ptr;
  CMotionList *this_ptr_00;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)(param_1 + 0x2b4));
  str1 = (char *)(param_1 + 0x2514);
  *(uint *)(param_1 + 0x246f8) = 6;
  iVar1 = _stricmp(str1,"hickboy.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x246f8) = 0;
  }
  iVar1 = _stricmp(str1,"depute.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x246f8) = 1;
  }
  iVar1 = _stricmp(str1,"hickho.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x246f8) = 2;
  }
  iVar1 = _stricmp(str1,"hickgirl.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x246f8) = 4;
  }
  iVar1 = _stricmp(str1,"hickdad.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x246f8) = 5;
  }
  iVar1 = _stricmp(str1,"preacher.dfm");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x246f8) = 3;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)(param_1 + 0x2b4));
  this_ptr_00 = core_motion_cpp_FUN_00503860((CMotionController *)(param_1 + 0x2b4));
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R UpperArm",1);
  *(int *)(param_1 + 0x24710) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Head",1);
  *(int *)(param_1 + 0x2470c) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Foot",1);
  *(int *)(param_1 + 0x24714) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Foot",1);
  *(int *)(param_1 + 0x24718) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Hand",1);
  *(int *)(param_1 + 0x2690) = iVar1;
  if (*(int *)(param_1 + 0x246f8) != 1) {
    iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Hand",1);
    *(int *)(param_1 + 0x2618) = iVar1;
  }
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine1",1);
  *(int *)(param_1 + 0x27c0) = iVar1;
  if (*(int *)(param_1 + 0x246f8) == 1) {
    _DAT_01cedfcc = core_motion_cpp_FUN_00502f10(this_ptr_00,"gunup",1);
  }
  core_npc_cpp_FUN_00510510(param_1);
  *(uint *)(param_1 + 0x246f0) = 0;
  return;
}
