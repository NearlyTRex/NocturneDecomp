// Name: core_lightgun.cpp_CLightGun_isVampireType_FUN_004fff70
// Address: 004fff70
// Address Range: [[004fff70, 004fffe9]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_isVampireType_FUN_004fff70(CLightGun *this_ptr)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_CLightGun_isVampireType_FUN_004fff70(CLightGun *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550((CDemonActor *)this_ptr,"CDraculaBride");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550((CDemonActor *)this_ptr,"CBatman");
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c550((CDemonActor *)this_ptr,"CBatCreature")
      ;
      if (iVar1 == 0) {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040c550((CDemonActor *)this_ptr,"CBride");
        if (iVar1 == 0) {
          iVar1 = core_actor_cpp_isOfClass_FUN_0040c550((CDemonActor *)this_ptr,"CShadow");
          if (iVar1 == 0) {
            iVar1 = core_actor_cpp_isOfClass_FUN_0040c550
                              ((CDemonActor *)this_ptr,"CShadowsc");
            if (iVar1 == 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}
