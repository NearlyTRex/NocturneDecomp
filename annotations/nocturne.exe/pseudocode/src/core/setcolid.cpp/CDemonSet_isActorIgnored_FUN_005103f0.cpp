// Name: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_005103f0
// Address: 005103f0
// Address Range: [[005103f0, 0051044d]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0(CDemonSet *this_ptr,CDemonActor *actor)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  if ((this_ptr->collision_flag != 0) &&
     (iVar1 = core_actor_cpp_isOfClassHash_FUN_0040d860
                        (actor,g_CCharacterActorType_00765a60.name_hash), iVar1 != 0)) {
    return 1;
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->ignore_list_count) {
    do {
      if (actor == pCVar2->ignore_list[0]) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (iVar1 < this_ptr->ignore_list_count);
  }
  return 0;
}
