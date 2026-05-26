// Name: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
// Address: 005742b0
// MANUAL RECONSTRUCTION
// Address Range: [[005742b0, 005743b4]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0(CDemonSet *this_ptr,CVector3f *position,CVector3f *actor_position,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0(CDemonSet *this_ptr,CVector3f *position,CVector3f *actor_position,SDamageInfo *damage_info)

{
  int iVar1;
  SDamageInfo local_5c;

  iVar1 = 0;
  if (0 < this_ptr->character_count) {
    do {
      local_5c = *damage_info;
      (*(((this_ptr->characters[iVar1]->base).vtable._uc)->_uc).testDamageLine)
                (this_ptr->characters[iVar1],position,actor_position,&local_5c,(CVector3f *)0x0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->character_count);
  }
  return;
}
