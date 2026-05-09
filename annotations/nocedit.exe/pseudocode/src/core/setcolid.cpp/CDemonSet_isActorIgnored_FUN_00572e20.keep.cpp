// Name: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
// Address: 00572e20
// MANUAL RECONSTRUCTION
// Address Range: [[00572e20, 00572e7d]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(CDemonSet *this_ptr,CDemonActor *actor)

{
  int iVar1;

  if ((this_ptr->collision_flag != 0) &&
     (iVar1 = core_actor_cpp_isOfClassHash_FUN_0040c760(actor,g_CCharacterClassInfo.name_hash),
     iVar1 != 0)) {
    return 1;
  }
  iVar1 = 0;
  if (0 < this_ptr->ignore_list_count) {
    do {
      if (actor == this_ptr->ignore_list[iVar1]) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->ignore_list_count);
  }
  return 0;
}
