// Name: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_0053d770
// Address: 0053d770
// Address Range: [[0053d770, 0053d7cd]]
// Convention: __cdecl
// Signature: int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_0053d770(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_0053d770(CDemonSet *this_ptr,CDemonActor *actor)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  if ((*(int *)&this_ptr->field_0x15f6b0 != 0) &&
     (iVar1 = core_actor_cpp_isOfClassHash_FUN_0040c810(actor,g_CCharacterClassInfo.name_hash),
     iVar1 != 0)) {
    return 1;
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x15f6ac) {
    do {
      if (actor == *(CDemonActor **)&pCVar2->field_0x15f6b4) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->field_0x4;
    } while (iVar1 < *(int *)&this_ptr->field_0x15f6ac);
  }
  return 0;
}
