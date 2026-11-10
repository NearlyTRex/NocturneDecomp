// Name: core_manpuz.cpp_CMirrorHack_process_FUN_00506510
// Address: 00506510
// Address Range: [[00506510, 00506594]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_00506510(CMirrorHack *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_00506510(CMirrorHack *this_ptr,float delta_time)

{
  int iVar1;
  float fStack_10;
  
  fStack_10 = (delta_time * _DAT_005e767d) / _DAT_005e7681;
  iVar1 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x38);
  if (iVar1 != 0) {
    fStack_10 = fStack_10 * (float)_DAT_005e7685;
  }
  iVar1 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x33);
  if (iVar1 != 0) {
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.y - fStack_10;
  }
  iVar1 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x34);
  if (iVar1 != 0) {
    (this_ptr->base).orient.vec.y = (this_ptr->base).orient.vec.y + fStack_10;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(&this_ptr->base);
  return;
}
