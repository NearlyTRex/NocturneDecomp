// Name: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004dee70
// Address: 004dee70
// Address Range: [[004dee70, 004def37]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004dee70(CInventory *this_ptr,uint key_mask,int show_message)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004dee70(CInventory *this_ptr,uint key_mask,int show_message)

{
  int iVar1;
  char *pcVar2;
  CInventory *pCVar3;
  int iVar4;
  float fVar5;
  
  if (key_mask == 0) {
    return 1;
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)(pCVar3 + 0x14),g_CKeyActorClassInfo.name_hash);
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x430) & key_mask) != 0)) {
        if (show_message == 0) {
          return 1;
        }
        fVar5 = 5.0;
        pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("?You used a key." + 1);
        core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,pcVar2,fVar5);
        iVar4 = *(int *)(this_ptr + 4);
        if (iVar4 == 0) {
          return 1;
        }
        (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x34))(iVar4,"key-unlock.wav");
        return 1;
      }
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 4;
    } while (iVar4 < *(int *)(this_ptr + 0x10));
  }
  if (show_message != 0) {
    fVar5 = 5.0;
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("This door will not open");
    core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,pcVar2,fVar5);
  }
  return 0;
}
