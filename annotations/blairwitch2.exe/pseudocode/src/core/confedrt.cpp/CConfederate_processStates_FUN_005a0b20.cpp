// Name: core_confedrt.cpp_CConfederate_processStates_FUN_005a0b20
// Address: 005a0b20
// Address Range: [[005a0b20, 005a0bc3]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_processStates_FUN_005a0b20(CConfederate *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_confedrt_cpp_CConfederate_processStates_FUN_005a0b20(CConfederate *this_ptr,float delta_time,int mode)

{
  int iVar1;
  
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&this_ptr->field_0x10af8,"RangeAttack");
  }
  else {
    unkafter_basicene_cpp_FUN_0059e8c0(this_ptr,delta_time,mode);
    if ((mode == 1) &&
       (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->field_0x10af8,"RangeAttack"),
       iVar1 != 0)) {
      core_confedrt_cpp_FUN_005a1030(this_ptr,delta_time);
      return;
    }
  }
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&this_ptr->field_0x10af8,"MeleeAttack");
    return;
  }
  if ((mode == 1) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->field_0x10af8,"MeleeAttack"),
     iVar1 != 0)) {
    core_confedrt_cpp_FUN_005a1180(this_ptr,delta_time);
    return;
  }
  return;
}
