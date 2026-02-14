// Name: core_manpuz.cpp_CMirrorHack_process_FUN_0050b1d0
// Address: 0050b1d0
// Address Range: [[0050b1d0, 0050b254]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_0050b1d0(CMirrorHack *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_0050b1d0(CMirrorHack *this_ptr,float delta_time)

{
  int iVar1;
  float local_10;
  
  local_10 = (delta_time * (float)6.2831853070000001) / (float)30;
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  if (iVar1 != 0) {
    local_10 = local_10 * (float)0.20000000000000001;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x33);
  if (iVar1 != 0) {
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.y - local_10;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x34);
  if (iVar1 != 0) {
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.y + local_10;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  return;
}
