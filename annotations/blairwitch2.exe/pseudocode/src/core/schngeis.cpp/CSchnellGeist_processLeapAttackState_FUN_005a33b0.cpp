// Name: core_schngeis.cpp_CSchnellGeist_processLeapAttackState_FUN_005a33b0
// Address: 005a33b0
// Address Range: [[005a33b0, 005a33f3]]
// Convention: __cdecl
// Signature: void __cdecl core_schngeis_cpp_CSchnellGeist_processLeapAttackState_FUN_005a33b0(CSchnellGeist *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_schngeis_cpp_CSchnellGeist_processLeapAttackState_FUN_005a33b0(CSchnellGeist *this_ptr,float delta_time)

{
  int iVar1;
  
  iVar1 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  if (*(int *)(iVar1 + 0x24) != 0xb) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,5,1);
    return;
  }
  unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"Chasing");
  return;
}
