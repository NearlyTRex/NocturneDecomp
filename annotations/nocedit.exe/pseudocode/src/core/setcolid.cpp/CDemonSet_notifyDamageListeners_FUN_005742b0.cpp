// Name: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
// Address: 005742b0
// Address Range: [[005742b0, 005743b4]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0 (CDemonSet *this_ptr,SDamageInfo *damage_info,CVector3f *actor_position, void *unknown_param)

#include "nocturne.h"

void __cdecl
core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
          (CDemonSet *this_ptr,SDamageInfo *damage_info,CVector3f *actor_position,
          void *unknown_param)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->damage_listener_count) {
    do {
      (**(code **)((int)pCVar2->damage_listeners[0x55] + 0x118))();
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (iVar1 < this_ptr->damage_listener_count);
  }
  return;
}
