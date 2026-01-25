// Name: core_manpuz.cpp_CMirrorHack_process_FUN_0050b1d0
// Address: 0050b1d0
// Address Range: [[0050b1d0, 0050b254]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMirrorHack_process_FUN_0050b1d0(CMirrorHack * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl
core_manpuz_cpp_CMirrorHack_process_FUN_0050b1d0(CMirrorHack *this_ptr,float delta_time)

{
  int iVar1;
  float unaff_retaddr;
  
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x33);
  if (iVar1 != 0) {
    (this_ptr->base_actor).orient.bank = (this_ptr->base_actor).orient.bank - unaff_retaddr;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x34);
  if (iVar1 != 0) {
    (this_ptr->base_actor).orient.bank = (this_ptr->base_actor).orient.bank + delta_time;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
  return;
}
