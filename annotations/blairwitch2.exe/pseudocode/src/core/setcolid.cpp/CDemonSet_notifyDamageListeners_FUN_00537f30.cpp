// Name: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_00537f30
// Address: 00537f30
// Address Range: [[00537f30, 00537f98]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00537f30(CDemonSet *this_ptr,CVector3f *position,CVector3f *actor_position,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_00537f30(CDemonSet *this_ptr,CVector3f *position,CVector3f *actor_position,SDamageInfo *damage_info)

{
  CCharacter *this_ptr_00;
  int iVar1;
  int iVar2;
  CDemonSet *pCVar3;
  SDamageInfo *pSVar4;
  SDamageInfo *pSVar5;
  byte bVar6;
  SDamageInfo local_44;
  
  bVar6 = 0;
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->character_count) {
    do {
      this_ptr_00 = pCVar3->characters[0];
      pSVar4 = damage_info;
      pSVar5 = &local_44;
      for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
        pSVar5->hit_part_index = pSVar4->hit_part_index;
        pSVar4 = (SDamageInfo *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
        pSVar5 = (SDamageInfo *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      (*(((this_ptr_00->base).vtable._uc)->_uc).testDamageLine)
                (this_ptr_00,position,actor_position,&local_44,(CVector3f *)0x0);
      iVar2 = iVar2 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar2 < this_ptr->character_count);
  }
  return;
}
