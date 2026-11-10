// Name: core_manpuz.cpp_CMirrorHack_process_FUN_004e7870
// Address: 004e7870
// Address Range: [[004e7870, 004e78f4]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_004e7870(CMirrorHack *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_004e7870(CMirrorHack *this_ptr,float delta_time)

{
  int iVar1;
  float fStack_10;
  
  fStack_10 = (delta_time * _DAT_005dc72d) / _DAT_005dc731;
  iVar1 = (**(code **)*0x01D02F84)(0x01D02F84,0x38);
  if (iVar1 != 0) {
    fStack_10 = fStack_10 * (float)_DAT_005dc735;
  }
  iVar1 = (**(code **)*0x01D02F84)(0x01D02F84,0x33);
  if (iVar1 != 0) {
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.y - fStack_10;
  }
  iVar1 = (**(code **)*0x01D02F84)(0x01D02F84,0x34);
  if (iVar1 != 0) {
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.y + fStack_10;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(&this_ptr->base);
  return;
}
