// Name: core_charactr.cpp_CCharacter_FUN_0042c580
// Address: 0042c580
// Address Range: [[0042c580, 0042c5e0]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042c580(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c580(CCharacter *this_ptr)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  if ((this_ptr->base_actor).was_created == 2) {
    return 2;
  }
  iVar3 = 3;
  pcVar2 = "DIE";
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
                     (&(this_ptr->model).motion_controller);
  iVar3 = crt_string_c_strnicmp_FUN_005ff070(pcVar1,pcVar2,iVar3);
  if (iVar3 == 0) {
    return 1;
  }
  pcVar2 = "DEAD";
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
                     (&(this_ptr->model).motion_controller);
  iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar1,pcVar2);
  if (iVar3 == 0) {
    return 2;
  }
  return 0;
}
