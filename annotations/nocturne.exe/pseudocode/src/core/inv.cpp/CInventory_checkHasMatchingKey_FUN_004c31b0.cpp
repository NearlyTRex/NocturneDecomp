// Name: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004c31b0
// Address: 004c31b0
// Address Range: [[004c31b0, 004c3277]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004c31b0(CInventory *this_ptr,uint key_mask,int show_message)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004c31b0(CInventory *this_ptr,uint key_mask,int show_message)

{
  CDemonActor *pCVar1;
  char *pcVar2;
  CInventory *pCVar3;
  int iVar4;
  float fVar5;
  
  if (key_mask == 0) {
    return 1;
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                         (pCVar3->items[0],g_CKeyActorActorType_01cc30a8.name_hash);
      if ((pCVar1 != (CDemonActor *)0x0) && ((pCVar1[2].location.area_id & key_mask) != 0)) {
        if (show_message == 0) {
          return 1;
        }
        fVar5 = 5.0;
        pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You used a key.");
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,pcVar2,fVar5);
        pCVar1 = this_ptr->owner;
        if (pCVar1 == (CDemonActor *)0x0) {
          return 1;
        }
        (*((pCVar1->vtable)._ub)->playSound)(pCVar1,"key-unlock.wav");
        return 1;
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CInventory *)&pCVar3->owner;
    } while (iVar4 < this_ptr->item_count);
  }
  if (show_message != 0) {
    fVar5 = 5.0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You need the right key");
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,pcVar2,fVar5);
  }
  return 0;
}
