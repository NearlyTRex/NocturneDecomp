// Name: core_tentacle.cpp_CTentacle_shouldIgnoreForTargeting_FUN_00544720
// Address: 00544720
// Address Range: [[00544720, 0054475a]]
// Convention: __cdecl
// Signature: int __cdecl core_tentacle_cpp_CTentacle_shouldIgnoreForTargeting_FUN_00544720(CTentacle *this_ptr)

#include "nocturne.h"

int __cdecl core_tentacle_cpp_CTentacle_shouldIgnoreForTargeting_FUN_00544720(CTentacle *this_ptr)

{
  SMotion *str1;
  int iVar1;
  char *str2;
  
  str2 = "wait";
  str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                   (&(this_ptr->base).base.model.motion_controller);
  iVar1 = _stricmp(str1->motion_name,str2);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = core_actor_cpp_FUN_0040d830((CDemonActor *)this_ptr);
  return iVar1;
}
