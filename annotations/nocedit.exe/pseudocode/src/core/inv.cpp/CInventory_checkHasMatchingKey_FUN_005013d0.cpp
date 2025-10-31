// Name: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0
// Address: 005013d0
// Address Range: [[005013d0, 00501497]]
// Convention: __cdecl
// Signature: int core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0(CInventory * this_ptr, uint key_mask, int show_message)
// Cross-references:
//   core_event.cpp_CEvent_EventReadingFromFile_FUN_004ae140 (004ae140) at 004aecfa [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2ed0 (004f2ed0) at 004f2ef9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_You_used_a_key_00630b9a
//   TerminatedCString s_key_unlock_wav_00630baa
//   TerminatedCString s_You_need_the_right_key_00630bb9
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CKeyActorClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

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
        (*((pCVar1->metadata).vtable)->playSound)(pCVar1,"key-unlock.wav");
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


// Assembly code:
// 005013d0: PUSH EBX
//   Label: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0
// 005013d1: PUSH ESI
// 005013d2: PUSH EDI
// 005013d3: PUSH EBP
// 005013d4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005013d8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005013dc: TEST EBP,EBP
// 005013de: JZ 0x00501453
//   XREF to: 00501453 (CONDITIONAL_JUMP)
// 005013e4: MOV EDX,dword ptr [EDI + 0x8]
// 005013e7: XOR ESI,ESI
// 005013e9: TEST EDX,EDX
// 005013eb: JLE 0x00501468
//   XREF to: 00501468 (CONDITIONAL_JUMP)
// 005013f1: MOV EBX,EDI
// 005013f3: MOV EAX,[0x02dcd7d0]
//   Label: LAB_005013f3
//   XREF to: 02dcd7d0 (READ)
// 005013f8: PUSH EAX
// 005013f9: MOV EDX,dword ptr [EBX + 0xc]
// 005013fc: PUSH EDX
// 005013fd: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00501402: ADD ESP,0x8
// 00501405: TEST EAX,EAX
// 00501407: JZ 0x0050145d
//   XREF to: 0050145d (CONDITIONAL_JUMP)
// 00501409: TEST dword ptr [EAX + 0x2d4],EBP
// 0050140f: JZ 0x0050145d
//   XREF to: 0050145d (CONDITIONAL_JUMP)
// 00501411: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 00501416: JZ 0x00501453
//   XREF to: 00501453 (CONDITIONAL_JUMP)
// 00501418: PUSH 0x40a00000
// 0050141d: PUSH 0x630b9a
//   XREF to: 00630b9a (DATA)
// 00501422: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00501427: ADD ESP,0x4
// 0050142a: PUSH EAX
// 0050142b: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00501431: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 00501432: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 00501437: MOV EBP,dword ptr [EDI + 0x4]
// 0050143a: ADD ESP,0xc
// 0050143d: TEST EBP,EBP
// 0050143f: JZ 0x00501453
//   XREF to: 00501453 (CONDITIONAL_JUMP)
// 00501441: PUSH 0x630baa
//   XREF to: 00630baa (DATA)
// 00501446: MOV EBX,dword ptr [EBP + 0x154]
// 0050144c: PUSH EBP
// 0050144d: CALL dword ptr [EBX + 0x24]
// 00501450: ADD ESP,0x8
// 00501453: MOV EAX,0x1
//   Label: LAB_00501453
// 00501458: POP EBP
// 00501459: POP EDI
// 0050145a: POP ESI
// 0050145b: POP EBX
// 0050145c: RET
// 0050145d: INC ESI
//   Label: LAB_0050145d
// 0050145e: MOV ECX,dword ptr [EDI + 0x8]
// 00501461: ADD EBX,0x4
// 00501464: CMP ESI,ECX
// 00501466: JL 0x005013f3
//   XREF to: 005013f3 (CONDITIONAL_JUMP)
// 00501468: CMP dword ptr [ESP + 0x1c],0x0
//   Label: LAB_00501468
//   XREF to: Stack[0xc] (READ)
// 0050146d: JZ 0x00501491
//   XREF to: 00501491 (CONDITIONAL_JUMP)
// 0050146f: PUSH 0x40a00000
// 00501474: PUSH 0x630bb9
//   XREF to: 00630bb9 (DATA)
// 00501479: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0050147e: ADD ESP,0x4
// 00501481: PUSH EAX
// 00501482: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00501488: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 00501489: CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20
//   XREF to: 004d7f20 (UNCONDITIONAL_CALL)
// 0050148e: ADD ESP,0xc
// 00501491: XOR EAX,EAX
//   Label: LAB_00501491
// 00501493: POP EBP
// 00501494: POP EDI
// 00501495: POP ESI
// 00501496: POP EBX
// 00501497: RET
