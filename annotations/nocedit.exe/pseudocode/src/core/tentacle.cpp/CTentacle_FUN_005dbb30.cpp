// Name: core_tentacle.cpp_CTentacle_FUN_005dbb30
// Address: 005dbb30
// Address Range: [[005dbb30, 005dbb6a]]
// Convention: __cdecl
// Signature: int core_tentacle.cpp_CTentacle_FUN_005dbb30(CTentacle * this_ptr)

#include "nocturne.h"

int __cdecl core_tentacle_cpp_CTentacle_FUN_005dbb30(CTentacle *this_ptr)

{
  SMotion *str1;
  int iVar1;
  char *str2;
  
  str2 = "wait";
  str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                   (&(this_ptr->base).base.model.motion_controller);
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1->motion_name,str2);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c720((CDemonActor *)this_ptr);
  return iVar1;
}
