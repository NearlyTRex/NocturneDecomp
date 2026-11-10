// Name: core_shadow.cpp_CShadow_setup_FUN_0055dbf0
// Address: 0055dbf0
// Address Range: [[0055dbf0, 0055ddf1]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_setup_FUN_0055dbf0(CShadow *this_ptr)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_setup_FUN_0055dbf0(CShadow *this_ptr)

{
  int iVar1;
  CSkeleton *this_ptr_00;
  float fVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)&this_ptr->field_0xc310 = 0x3f400000;
  }
  else {
    *(uint *)&this_ptr->field_0xc310 = 0x3f800000;
  }
  *(uint *)&this_ptr->field_0xc2d4 = 0;
  *(uint *)&this_ptr->field_0xc2fc = 0;
  iVar1 = _stricmp(&this_ptr->field_0x24a8,"SHADOWBEAST.DFM");
  if ((iVar1 == 0) ||
     (iVar1 = _stricmp
                        (&this_ptr->field_0x24a8,"WERE_HEADLESS.DFM"), iVar1 == 0)) {
    *(uint *)&this_ptr->field_0xc2d4 = 1;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Pelvis",1);
  *(int *)&this_ptr->field_0xc284 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  *(int *)&this_ptr->field_0xc288 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  *(int *)&this_ptr->field_0xc28c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  *(int *)&this_ptr->field_0xc26c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 L Finger1",1);
  *(int *)&this_ptr->field_0xc270 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 R Finger1",1);
  *(int *)&this_ptr->field_0xc274 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  *(int *)&this_ptr->field_0xc278 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  *(int *)&this_ptr->field_0xc280 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  *(int *)&this_ptr->field_0xc27c = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510((CEnemy *)this_ptr);
  *(uint *)&this_ptr->field_0xfc = 1;
  *(uint *)&this_ptr->field_0xf8 = 0;
  if (*(int *)&this_ptr->field_0xc268 == 0) {
    *(uint *)&this_ptr->field_0x2ff0 = 0x3fc00000;
  }
  *(uint *)&this_ptr->field_0xc29c = 0;
  *(uint *)&this_ptr->field_0xc2a0 = 0;
  *(uint *)&this_ptr->field_0xc2a4 = 0;
  *(uint *)&this_ptr->field_0xc2a8 = 0;
  *(uint *)&this_ptr->field_0xc2b4 = 0;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,30.0);
  *(float *)&this_ptr->field_0xc298 = fVar2;
  return;
}
