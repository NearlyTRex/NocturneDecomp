// Name: core_manpuz.cpp_CMirrorHack_process_FUN_004cbbc0
// Address: 004cbbc0
// Address Range: [[004cbbc0, 004cbc44]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_004cbbc0(CMirrorHack *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_004cbbc0(CMirrorHack *this_ptr,float delta_time)

{
  int iVar1;
  float local_10;
  
  local_10 = (delta_time * (float)6.2831853070000001) / (float)30;
  iVar1 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x38);
  if (iVar1 != 0) {
    local_10 = local_10 * (float)0.20000000000000001;
  }
  iVar1 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x33);
  if (iVar1 != 0) {
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.y - local_10;
  }
  iVar1 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x34);
  if (iVar1 != 0) {
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.y + local_10;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
  return;
}
