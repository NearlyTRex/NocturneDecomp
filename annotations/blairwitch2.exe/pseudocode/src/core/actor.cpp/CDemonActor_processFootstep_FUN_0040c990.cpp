// Name: core_actor.cpp_CDemonActor_processFootstep_FUN_0040c990
// Address: 0040c990
// Address Range: [[0040c990, 0040ca3d]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040c990(CDemonActor *this_ptr,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_actor_cpp_CDemonActor_processFootstep_FUN_0040c990(CDemonActor *this_ptr,float volume)

{
  byte *position;
  float fVar1;
  float fVar2;
  uint uVar3;
  
  position = &this_ptr->field_0x20;
  fVar2 = *(float *)&this_ptr->field_0x24 - g_CDemonCameraInstance.base.position.f.y;
  fVar1 = *(float *)&this_ptr->field_0x28 - g_CDemonCameraInstance.base.position.f.z;
  if (_DAT_005caed6 <
      fVar1 * fVar1 +
      fVar2 * fVar2 +
      (*(float *)position - g_CDemonCameraInstance.base.position.f.x) *
      (*(float *)position - g_CDemonCameraInstance.base.position.f.x)) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,this_ptr);
  core_setcolid_cpp_FUN_00534ea0(g_CDemonSetPtr,position,0);
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  uVar3 = (*((this_ptr->vtable)._ub)->handleFootstep)
                    (this_ptr,(CVector3f *)position,g_CDemonSetPtr->ground_type,volume);
  return uVar3;
}
