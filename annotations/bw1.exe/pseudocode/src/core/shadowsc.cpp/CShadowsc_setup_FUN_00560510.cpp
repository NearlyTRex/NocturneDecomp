// Name: core_shadowsc.cpp_CShadowsc_setup_FUN_00560510
// Address: 00560510
// Address Range: [[00560510, 0056060c]]
// Convention: __cdecl
// Signature: void __cdecl core_shadowsc_cpp_CShadowsc_setup_FUN_00560510(CShadowsc *this_ptr)

#include "nocturne.h"

void __cdecl core_shadowsc_cpp_CShadowsc_setup_FUN_00560510(CShadowsc *this_ptr)

{
  int iVar1;
  CSkeleton *this_ptr_00;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)&this_ptr->field_0xc288 = 0x3f400000;
  }
  else {
    *(uint *)&this_ptr->field_0xc288 = 0x3f800000;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine1",1);
  *(int *)&this_ptr->field_0xc268 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  *(int *)&this_ptr->field_0xc26c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 R Finger0",1);
  *(int *)&this_ptr->field_0xc270 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 L Finger0",1);
  *(int *)&this_ptr->field_0xc274 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Dummy05",1);
  *(uint *)&this_ptr->field_0xc28c = 0;
  *(uint *)&this_ptr->field_0xc290 = 0;
  *(uint *)&this_ptr->field_0xc294 = 0;
  *(uint *)&this_ptr->field_0xfc = 1;
  *(int *)&this_ptr->field_0xc278 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510((CEnemy *)this_ptr);
  return;
}
