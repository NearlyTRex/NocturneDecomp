// Name: core_stranger.cpp_CStranger_getGrabbed_FUN_0056efe0
// Address: 0056efe0
// Address Range: [[0056efe0, 0056f082]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_getGrabbed_FUN_0056efe0(CStranger *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_getGrabbed_FUN_0056efe0(CStranger *this_ptr,CDemonActor *grabber,int grab_type)

{
  int iVar1;
  
  if (((*(int *)&this_ptr->field_0x25608 == 0) && (*(int *)&this_ptr->field_0x25604 == 0)) &&
     ((this_ptr->action_pending == 0 || (this_ptr->action_pending == 3)))) {
    iVar1 = core_hero_cpp_CHero_getGrabbed_FUN_004cea50((CHero *)this_ptr,grabber,grab_type);
    if (iVar1 != 0) {
      if (this_ptr->weapon != *(CWeapon **)&this_ptr->field_0x2620) {
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,0,0);
      }
      if (this_ptr->weapon != *(CWeapon **)&this_ptr->field_0x2698) {
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,1,0);
      }
      this_ptr->grab_timer = 0.0;
    }
    return iVar1;
  }
  return 0;
}
