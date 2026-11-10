// Name: core_icepick.cpp_CIcePick_setup_FUN_004d4a20
// Address: 004d4a20
// Address Range: [[004d4a20, 004d4c34]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004d4a20(CIcePick *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_CIcePick_setup_FUN_004d4a20(CIcePick *this_ptr)

{
  CIcePick *pCVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  
  core_hero_cpp_CHero_setup_FUN_004ce4a0((CHero *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
  _DAT_01cee0b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 head",1);
  _DAT_01cee0b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_01cee0bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_01cee0c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01cee0c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01cee0c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01cee0cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01cee0d0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01cee0d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01cee0d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_01cee0dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_01cee0e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Calf",1);
  _DAT_01cee0e4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Calf",1);
  _DAT_01cee0e8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01cee0ec =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01cee0f0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01cee0f4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01cee0f8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  *(uint *)&this_ptr->field_0x261c = 0;
  *(uint *)&this_ptr->field_0x2694 = 0;
  this_ptr->guns_drawn = 0;
  *(int *)&this_ptr->field_0x2618 = _DAT_01cee0e8;
  *(int *)&this_ptr->field_0x2690 = _DAT_01cee0ec;
  iVar2 = _DAT_01cedef4;
  this_ptr->pending_pickup_target = (CDemonActor *)0x0;
  pCVar1 = *(CIcePick **)(iVar2 * 4 + 0x1cedee4);
  if (this_ptr == pCVar1) {
    *(uint *)&pCVar1->field_0x3434 = 0x3fc00000;
  }
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[0] = 0;
  this_ptr->aim_pitch = 0.0;
  return;
}
