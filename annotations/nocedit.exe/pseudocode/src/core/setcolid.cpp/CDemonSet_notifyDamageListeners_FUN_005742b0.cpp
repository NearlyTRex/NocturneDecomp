// Name: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
// Address: 005742b0
// Address Range: [[005742b0, 005743b4]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0(CDemonSet *this_ptr,SDamageInfo *damage_info,CVector3f *actor_position,void *unknown_param)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0(CDemonSet *this_ptr,SDamageInfo *damage_info,CVector3f *actor_position,void *unknown_param)

{
  int iVar1;
  CDemonSet *pCVar2;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  
  iVar1 = 0;
  if (0 < this_ptr->damage_listener_count) {
    local_14 = (uint *)((int)unknown_param + 0xc);
    local_10 = (uint *)((int)unknown_param + 0x10);
    local_1c = (uint *)((int)unknown_param + 0x1c);
    local_18 = (uint *)((int)unknown_param + 0x20);
    local_20 = (uint *)((int)unknown_param + 0x24);
    pCVar2 = this_ptr;
    do {
      local_5c = *(uint *)unknown_param;
      local_58 = *(uint *)((int)unknown_param + 4);
      local_54 = *(uint *)((int)unknown_param + 8);
      local_50 = *local_14;
      local_4c = *local_10;
      local_48 = *(uint *)((int)unknown_param + 0x14);
      local_44 = *(uint *)((int)unknown_param + 0x18);
      local_40 = *local_1c;
      local_3c = *local_18;
      local_38 = *local_20;
      local_34 = *(uint *)((int)unknown_param + 0x28);
      local_30 = *(uint *)((int)unknown_param + 0x2c);
      local_2c = *(uint *)((int)unknown_param + 0x30);
      local_28 = *(uint *)((int)unknown_param + 0x34);
      local_24 = *(uint *)((int)unknown_param + 0x38);
      (**(code **)((int)pCVar2->damage_listeners[0x55] + 0x118))
                (pCVar2->damage_listeners,damage_info,actor_position,&local_5c,0);
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (iVar1 < this_ptr->damage_listener_count);
  }
  return;
}
