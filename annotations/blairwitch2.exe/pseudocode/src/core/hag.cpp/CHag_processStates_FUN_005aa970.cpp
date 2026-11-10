// Name: core_hag.cpp_CHag_processStates_FUN_005aa970
// Address: 005aa970
// Address Range: [[005aa970, 005aaa7d]]
// Convention: __cdecl
// Signature: void __cdecl core_hag_cpp_CHag_processStates_FUN_005aa970(CHag *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_hag_cpp_CHag_processStates_FUN_005aa970(CHag *this_ptr,float delta_time,int mode)

{
  int iVar1;
  
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&this_ptr->field_0x10af8,"HagAlert");
  }
  else {
    unkafter_basicene_cpp_FUN_0059e8c0(this_ptr,delta_time,mode);
    if ((mode == 1) &&
       (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->field_0x10af8,"HagAlert"),
       iVar1 != 0)) {
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x180))(this_ptr,delta_time);
      return;
    }
  }
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&this_ptr->field_0x10af8,"MeleeAttack");
  }
  else if ((mode == 1) &&
          (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0
                             (&this_ptr->field_0x10af8,"MeleeAttack"), iVar1 != 0)) {
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x184))(this_ptr,delta_time);
    return;
  }
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&this_ptr->field_0x10af8,"Healing");
    return;
  }
  if ((mode == 1) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->field_0x10af8,"Healing"),
     iVar1 != 0)) {
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x188))(this_ptr,delta_time);
    return;
  }
  return;
}
