// Name: core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c990
// Address: 0040c990
// Address Range: [[0040c990, 0040caa8]]
// Convention: __cdecl
// Signature: uint __cdecl core_actor_cpp_CDemonActor_processFootstepAtOffset_FUN_0040c990(CDemonActor *this_ptr,CVector3f *location,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_actor_cpp_CDemonActor_processFootstepAtOffset_FUN_0040c990(CDemonActor *this_ptr,CVector3f *location,float volume)

{
  uint uVar1;
  EGroundType ground_type;
  byte bVar2;
  float afStackY_103c [1014];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_10;
  
  bVar2 = 0;
  core_actor_cpp_FUN_00408b80(this_ptr,location);
  CStack_30.x = fStack_48;
  *(uint *)((int)&CStack_30 + (uint)bVar2 * -8 + 4) =
       *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8);
  *(uint *)((int)&CStack_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  fStack_3c = g_CDemonCameraInstance.base.position.f.x;
  *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8) =
       *(uint *)((int)&g_CDemonCameraInstance + (uint)bVar2 * -8 + 8);
  *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((uint)bVar2 * -8 + 0x2038f58 + (uint)bVar2 * -8);
  fStack_54 = fStack_3c;
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (_DAT_005b5e89 <
      (CStack_30.z - fStack_4c) * (CStack_30.z - fStack_4c) +
      (CStack_30.y - fStack_50) * (CStack_30.y - fStack_50) +
      (CStack_30.x - fStack_54) * (CStack_30.x - fStack_54)) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,this_ptr);
  fStack_24 = (float)core_setcolid_cpp_FUN_0053bc80(g_CDemonSetPtr,&CStack_30,0);
  ground_type = g_CDemonSetPtr->ground_type;
  fStack_10 = fStack_24;
  fStack_20 = (float)core_setcolid_cpp_FUN_0053bc80(g_CDemonSetPtr,&this_ptr->location,0);
  fStack_10 = fStack_20;
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  if (fStack_24 < fStack_20 + (float)_DAT_005b5e91) {
    ground_type = g_CDemonSetPtr->ground_type;
  }
  uVar1 = (*((this_ptr->vtable)._ub)->handleFootstep)(this_ptr,&CStack_30,ground_type,volume);
  return uVar1;
}
