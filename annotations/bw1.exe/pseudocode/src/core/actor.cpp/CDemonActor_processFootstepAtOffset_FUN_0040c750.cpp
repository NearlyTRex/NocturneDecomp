// Name: core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c750
// Address: 0040c750
// Address Range: [[0040c750, 0040c868]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_processFootstepAtOffset_FUN_0040c750(CDemonActor *this_ptr,CVector3f *location,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_actor_cpp_CDemonActor_processFootstepAtOffset_FUN_0040c750(CDemonActor *this_ptr,CVector3f *location,float volume)

{
  uint uVar1;
  EGroundType ground_type;
  byte bVar2;
  float afStackY_103c [1014];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_48;
  float fStack_3c;
  float afStack_38 [2];
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_10;
  
  bVar2 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(this_ptr,location,&CStack_48);
  CStack_30.x = CStack_48.x;
  *(uint *)((int)&CStack_30 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_48 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&CStack_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_48 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  fStack_3c = g_CDemonCameraInstance.base.position.f.x;
  afStack_38[(uint)bVar2 * -2] = *(float *)((int)&g_CDemonCameraInstance + (uint)bVar2 * -8 + 8);
  afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((uint)bVar2 * -8 + 0x1fe37f8 + (uint)bVar2 * -8);
  fStack_54 = fStack_3c;
  *(float *)((int)&stack0xffffffb0 + (uint)bVar2 * -8) = afStack_38[(uint)bVar2 * -2];
  *(float *)((int)&stack0xffffffb4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if (_DAT_005d2e3d <
      (CStack_30.z - fStack_4c) * (CStack_30.z - fStack_4c) +
      (CStack_30.y - fStack_50) * (CStack_30.y - fStack_50) +
      (CStack_30.x - fStack_54) * (CStack_30.x - fStack_54)) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,this_ptr);
  fStack_24 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005562c0
                        (g_CDemonSetPtr,&CStack_30,0.0);
  ground_type = g_CDemonSetPtr->ground_type;
  fStack_10 = fStack_24;
  fStack_20 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005562c0
                        (g_CDemonSetPtr,&(this_ptr->location).position,0.0);
  fStack_10 = fStack_20;
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  if (fStack_24 < fStack_20 + (float)_DAT_005d2e41) {
    ground_type = g_CDemonSetPtr->ground_type;
  }
  uVar1 = (*((this_ptr->vtable)._ub)->handleFootstep)(this_ptr,&CStack_30,ground_type,volume);
  return uVar1;
}
