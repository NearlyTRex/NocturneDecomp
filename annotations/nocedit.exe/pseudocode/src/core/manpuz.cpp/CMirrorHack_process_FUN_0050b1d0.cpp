// Name: core_manpuz.cpp_CMirrorHack_process_FUN_0050b1d0
// Address: 0050b1d0
// Address Range: [[0050b1d0, 0050b254]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_0050b1d0(CMirrorHack *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl
core_manpuz_cpp_CMirrorHack_process_FUN_0050b1d0(CMirrorHack *this_ptr,float delta_time)

{
  int iVar1;
  float unaff_retaddr;
  
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x33);
  if (iVar1 != 0) {
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.y - unaff_retaddr;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x34);
  if (iVar1 != 0) {
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.y + delta_time;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  return;
}
