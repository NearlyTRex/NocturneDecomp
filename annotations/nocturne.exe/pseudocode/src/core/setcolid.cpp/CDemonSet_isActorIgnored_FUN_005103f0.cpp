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
  
  if ((this_ptr->vdir_boxes[0xeb].rotation_matrix.m[2].x != 0.0) &&
     (iVar1 = core_actor_cpp_isOfClassHash_FUN_0040d860
                        (actor,g_CCharacterActorType_00765a60.name_hash), iVar1 != 0)) {
    return 1;
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].z) {
    do {
      if (actor == (CDemonActor *)pCVar2->vdir_boxes[0xeb].rotation_matrix.m[2].y) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (iVar1 < (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].z);
  }
  return 0;
}
