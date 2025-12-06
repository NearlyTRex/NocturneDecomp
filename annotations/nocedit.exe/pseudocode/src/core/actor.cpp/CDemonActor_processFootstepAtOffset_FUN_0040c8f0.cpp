// Name: core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0
// Address: 0040c8f0
// Address Range: [[0040c8f0, 0040ca08]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0(CDemonActor * this_ptr, CVector3f * u1, float offset)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0
          (CDemonActor *this_ptr,CVector3f *u1,float offset)

{
  int iVar1;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float in_stack_00000020;
  float in_stack_ffffffd0;
  float in_stack_ffffffd4;
  float local_28;
  CVector3f local_20;
  float fStack_10;
  float local_8;
  
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (this_ptr,(CVector3f *)&stack0xffffffcc,u1);
  local_20.x = (float)g_CDemonCameraInstance.base.position.y;
  local_20.y = (float)g_CDemonCameraInstance.base.position.z;
  if (10000f <
      (local_28 - (float)g_CDemonCameraInstance.base.position.z) *
      (local_28 - (float)g_CDemonCameraInstance.base.position.z) +
      (in_stack_ffffffd4 - (float)g_CDemonCameraInstance.base.position.y) *
      (in_stack_ffffffd4 - (float)g_CDemonCameraInstance.base.position.y) +
      (in_stack_ffffffd0 - (float)g_CDemonCameraInstance.base.position.x) *
      (in_stack_ffffffd0 - (float)g_CDemonCameraInstance.base.position.x)) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
  fStack_10 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                        (g_CDemonSetPtr,(CVector3f *)&stack0xffffffd4,0.0);
  iVar1 = g_CDemonSetPtr->ground_type;
  local_8 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                      (g_CDemonSetPtr,&(this_ptr->location).position,0.0);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  if (local_8 < unaff_EBX + (float)-1) {
    iVar1 = g_CDemonSetPtr->ground_type;
  }
  iVar1 = (*this_ptr->vtable->handleFootstep)(this_ptr,&local_20,iVar1,in_stack_00000020);
  return iVar1;
}
