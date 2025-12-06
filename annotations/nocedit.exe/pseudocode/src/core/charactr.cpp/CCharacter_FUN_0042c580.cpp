// Name: core_charactr.cpp_CCharacter_FUN_0042c580
// Address: 0042c580
// Address Range: [[0042c580, 0042c5e0]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042c580(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c580(CCharacter *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int unaff_EBX;
  char *str2;
  
  if ((this_ptr->base_actor).was_created == 2) {
    return 2;
  }
  str2 = (char *)0x3;
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
                     (&(this_ptr->model).motion_controller);
  iVar2 = crt_string_c_strnicmp_FUN_005ff070(pcVar1,str2,unaff_EBX);
  if (iVar2 == 0) {
    return 1;
  }
  pcVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
                     (&(this_ptr->model).motion_controller);
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar1,(char *)this_ptr);
  if (iVar2 == 0) {
    return 2;
  }
  return 0;
}
