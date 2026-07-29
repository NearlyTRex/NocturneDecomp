// Name: core_lightgun.cpp_CLightGun_isVampireType_FUN_004c6ef0
// Address: 004c6ef0
// Address Range: [[004c6ef0, 004c6f45]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_isVampireType_FUN_004c6ef0(CLightGun *this_ptr)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_CLightGun_isVampireType_FUN_004c6ef0(CLightGun *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0((CDemonActor *)this_ptr,"CDraculaBride");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0((CDemonActor *)this_ptr,"CBatman");
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0((CDemonActor *)this_ptr,"CBatCreature")
      ;
      if (iVar1 == 0) {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0((CDemonActor *)this_ptr,"CBride");
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}
