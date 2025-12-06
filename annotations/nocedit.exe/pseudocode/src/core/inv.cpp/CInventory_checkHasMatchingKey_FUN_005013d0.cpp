// Name: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0
// Address: 005013d0
// Address Range: [[005013d0, 00501497]]
// Convention: __cdecl
// Signature: int core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0(CInventory * this_ptr, uint key_mask, int show_message)

#include "nocturne.h"

int __cdecl
core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0
          (CInventory *this_ptr,uint key_mask,int show_message)

{
  CDemonActor *pCVar1;
  char *pcVar2;
  CInventory *pCVar3;
  float unaff_EBP;
  int iVar4;
  
  if (key_mask == 0) {
    return 1;
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (pCVar3->items[0],g_CKeyActorClassInfo.name_hash);
      if ((pCVar1 != (CDemonActor *)0x0) && (((uint)pCVar1[2].location.position.y & key_mask) != 0))
      {
        if (show_message == 0) {
          return 1;
        }
        pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You used a key.");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcVar2,unaff_EBP);
        pCVar1 = this_ptr->owner;
        if (pCVar1 == (CDemonActor *)0x0) {
          return 1;
        }
        (*pCVar1->vtable->playSound)(pCVar1,"key-unlock.wav");
        return 1;
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CInventory *)&pCVar3->owner;
    } while (iVar4 < this_ptr->item_count);
  }
  if (show_message != 0) {
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You need the right key");
    core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcVar2,unaff_EBP);
  }
  return 0;
}
