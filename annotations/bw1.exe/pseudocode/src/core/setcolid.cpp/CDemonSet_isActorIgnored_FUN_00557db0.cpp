// Name: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00557db0
// Address: 00557db0
// Address Range: [[00557db0, 00557e0d]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00557db0(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00557db0(CDemonSet *this_ptr,CDemonActor *actor)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  if ((this_ptr->collision_flag != 0) &&
     (iVar1 = core_actor_cpp_isOfClassHash_FUN_0040c5d0(actor,g_CCharacterClassInfo.name_hash),
     iVar1 != 0)) {
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
