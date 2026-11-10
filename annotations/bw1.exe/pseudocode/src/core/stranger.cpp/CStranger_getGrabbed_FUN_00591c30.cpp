// Name: core_stranger.cpp_CStranger_getGrabbed_FUN_00591c30
// Address: 00591c30
// Address Range: [[00591c30, 00591cd2]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_getGrabbed_FUN_00591c30(CStranger *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_getGrabbed_FUN_00591c30(CStranger *this_ptr,CDemonActor *grabber,int grab_type)

{
  int iVar1;
  
  if (((*(int *)&this_ptr->field_0x1ff78 == 0) && (*(int *)&this_ptr->field_0x1ff74 == 0)) &&
     ((*(int *)&this_ptr->field_0x1ff5c == 0 || (*(int *)&this_ptr->field_0x1ff5c == 3)))) {
    iVar1 = core_hero_cpp_CHero_getGrabbed_FUN_004eadf0((CHero *)this_ptr,grabber,grab_type);
    if (iVar1 != 0) {
      if (this_ptr->weapon != *(CWeapon **)&this_ptr->field_0x25b0) {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,0,0);
      }
      if (this_ptr->weapon != *(CWeapon **)&this_ptr->field_0x2628) {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,0);
      }
      this_ptr->grab_timer = 0.0;
    }
    return iVar1;
  }
  return 0;
}
