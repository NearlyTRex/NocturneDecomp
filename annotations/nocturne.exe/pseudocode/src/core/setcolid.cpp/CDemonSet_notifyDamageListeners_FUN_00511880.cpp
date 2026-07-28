// Name: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_00511880
// Address: 00511880
// Address Range: [[00511880, 00511984]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00511880(CDemonSet *this_ptr,CVector3f *position,CVector3f *actor_position,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00511880(CDemonSet *this_ptr,CVector3f *position,CVector3f *actor_position,SDamageInfo *damage_info)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < (int)this_ptr->actors[0x6d6]) {
    do {
      (*(((((CCharacter *)pCVar2->actors[0x6d7])->base).vtable._uc)->_uc).canBeGrabbed)
                ((CCharacter *)pCVar2->actors[0x6d7],(CDemonActor *)position,(int)actor_position);
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (iVar1 < (int)this_ptr->actors[0x6d6]);
  }
  return;
}
