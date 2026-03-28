// Name: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0
// Address: 005013d0
// Address Range: [[005013d0, 00501497]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0(CInventory *this_ptr,uint key_mask,int show_message)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_005013d0(CInventory *this_ptr,uint key_mask,int show_message)

{
  CDemonActor *this_ptr_00;
  CKeyActor *pCVar1;
  char *pcVar1;
  CInventory *pCVar2;
  int iVar3;
  float fVar4;
  
  if (key_mask == 0) {
    return 1;
  }
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      pCVar1 = (CKeyActor *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (pCVar2->items[0],g_CKeyActorClassInfo.name_hash);
      if ((pCVar1 != (CKeyActor *)0x0) && ((pCVar1->key_mask & key_mask) != 0)) {
        if (show_message == 0) {
          return 1;
        }
        fVar4 = 5.0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You used a key.");
        core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcVar1,fVar4);
        this_ptr_00 = this_ptr->owner;
        if (this_ptr_00 == (CDemonActor *)0x0) {
          return 1;
        }
        (*((this_ptr_00->vtable)._ub)->playSound)(this_ptr_00,"key-unlock.wav");
        return 1;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar3 < this_ptr->item_count);
  }
  if (show_message != 0) {
    fVar4 = 5.0;
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("You need the right key");
    core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,pcVar1,fVar4);
  }
  return 0;
}
