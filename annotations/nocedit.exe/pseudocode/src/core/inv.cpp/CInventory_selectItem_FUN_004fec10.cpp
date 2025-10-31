// Name: core_inv.cpp_CInventory_selectItem_FUN_004fec10
// Address: 004fec10
// Address Range: [[004fec10, 004fed04]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_selectItem_FUN_004fec10(CInventory * this_ptr, int direction)
// Cross-references:
//   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0 (004dc3e0) at 004dc729 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CWeapon_00630822
//   TerminatedCString s_CAmmo_0063082a
//   TerminatedCString s_CWeapon_00630830
//   TerminatedCString s_CAmmo_00630838
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004fec10(CInventory *this_ptr,int direction)

{
  int iVar1;
  int iVar2;
  CInventory *pCVar3;
  int iVar4;
  int in_stack_0000000c;
  
  core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(this_ptr);
  if (this_ptr->selected_item == (CDemonActor *)0x0) {
    iVar4 = 0;
    pCVar3 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3->items[0],"CWeapon");
        if ((iVar1 == 0) &&
           (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3->items[0],"CAmmo"),
           iVar1 == 0)) {
          this_ptr->selected_item = pCVar3->items[0];
          return;
        }
        iVar4 = iVar4 + 1;
        pCVar3 = (CInventory *)&pCVar3->owner;
      } while (iVar4 < this_ptr->item_count);
    }
    return;
  }
  iVar4 = 0;
  pCVar3 = this_ptr;
  iVar1 = iVar4;
  if (0 < this_ptr->item_count) {
    do {
      iVar1 = iVar4;
      if (this_ptr->selected_item == pCVar3->items[0]) break;
      iVar4 = iVar4 + 1;
      pCVar3 = (CInventory *)&pCVar3->owner;
      iVar1 = iVar4;
    } while (iVar4 < this_ptr->item_count);
  }
  while( true ) {
    iVar4 = iVar4 + in_stack_0000000c;
    if (iVar4 < this_ptr->item_count) {
      if (iVar4 < 0) {
        iVar4 = this_ptr->item_count + -1;
      }
    }
    else {
      iVar4 = 0;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(this_ptr->items[iVar4],"CWeapon");
    if ((iVar2 == 0) &&
       (iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(this_ptr->items[iVar4],"CAmmo"),
       iVar2 == 0)) break;
    if (iVar4 == iVar1) {
      return;
    }
  }
  this_ptr->selected_item = this_ptr->items[iVar4];
  return;
}


// Assembly code:
// 004fec10: PUSH EBX
//   Label: core_inv.cpp_CInventory_selectItem_FUN_004fec10
// 004fec11: PUSH ESI
// 004fec12: PUSH EDI
// 004fec13: PUSH EBP
// 004fec14: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004fec18: PUSH ESI
// 004fec19: CALL core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0
//   XREF to: 004ffff0 (UNCONDITIONAL_CALL)
// 004fec1e: MOV EDX,dword ptr [ESI + 0x334]
// 004fec24: ADD ESP,0x4
// 004fec27: TEST EDX,EDX
// 004fec29: JNZ 0x004fec7e
//   XREF to: 004fec7e (CONDITIONAL_JUMP)
// 004fec2b: MOV EBX,dword ptr [ESI + 0x8]
// 004fec2e: XOR EDI,EDI
// 004fec30: TEST EBX,EBX
// 004fec32: JLE 0x004fec56
//   XREF to: 004fec56 (CONDITIONAL_JUMP)
// 004fec34: MOV EBX,ESI
// 004fec36: PUSH 0x630822
//   Label: LAB_004fec36
//   XREF to: 00630822 (DATA)
// 004fec3b: MOV EBP,dword ptr [EBX + 0xc]
// 004fec3e: PUSH EBP
// 004fec3f: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fec44: ADD ESP,0x8
// 004fec47: TEST EAX,EAX
// 004fec49: JZ 0x004fec5b
//   XREF to: 004fec5b (CONDITIONAL_JUMP)
// 004fec4b: INC EDI
//   Label: LAB_004fec4b
// 004fec4c: MOV ECX,dword ptr [ESI + 0x8]
// 004fec4f: ADD EBX,0x4
// 004fec52: CMP EDI,ECX
// 004fec54: JL 0x004fec36
//   XREF to: 004fec36 (CONDITIONAL_JUMP)
// 004fec56: POP EBP
//   Label: LAB_004fec56
// 004fec57: POP EDI
// 004fec58: POP ESI
// 004fec59: POP EBX
// 004fec5a: RET
// 004fec5b: PUSH 0x63082a
//   Label: LAB_004fec5b
//   XREF to: 0063082a (DATA)
// 004fec60: MOV EAX,dword ptr [EBX + 0xc]
// 004fec63: PUSH EAX
// 004fec64: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fec69: ADD ESP,0x8
// 004fec6c: TEST EAX,EAX
// 004fec6e: JNZ 0x004fec4b
//   XREF to: 004fec4b (CONDITIONAL_JUMP)
// 004fec70: MOV EAX,dword ptr [EBX + 0xc]
// 004fec73: MOV dword ptr [ESI + 0x334],EAX
// 004fec79: POP EBP
// 004fec7a: POP EDI
// 004fec7b: POP ESI
// 004fec7c: POP EBX
// 004fec7d: RET
// 004fec7e: MOV ECX,dword ptr [ESI + 0x8]
//   Label: LAB_004fec7e
// 004fec81: XOR EDI,EDI
// 004fec83: TEST ECX,ECX
// 004fec85: JLE 0x004fec94
//   XREF to: 004fec94 (CONDITIONAL_JUMP)
// 004fec87: MOV EBX,ESI
// 004fec89: MOV EDX,dword ptr [ESI + 0x334]
//   Label: LAB_004fec89
// 004fec8f: CMP EDX,dword ptr [EBX + 0xc]
// 004fec92: JNZ 0x004feccc
//   XREF to: 004feccc (CONDITIONAL_JUMP)
// 004fec94: MOV EBX,EDI
//   Label: LAB_004fec94
// 004fec96: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_004fec96
//   XREF to: Stack[0x8] (READ)
// 004fec9a: MOV EBP,dword ptr [ESI + 0x8]
// 004fec9d: ADD EBX,ECX
// 004fec9f: CMP EBX,EBP
// 004feca1: JL 0x004fecd9
//   XREF to: 004fecd9 (CONDITIONAL_JUMP)
// 004feca3: XOR EBX,EBX
// 004feca5: LEA EBP,[EBX*0x4 + 0x0]
//   Label: LAB_004feca5
// 004fecac: ADD EBP,ESI
// 004fecae: PUSH 0x630830
//   XREF to: 00630830 (DATA)
// 004fecb3: MOV EAX,dword ptr [EBP + 0xc]
// 004fecb6: PUSH EAX
// 004fecb7: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fecbc: ADD ESP,0x8
// 004fecbf: TEST EAX,EAX
// 004fecc1: JZ 0x004fece2
//   XREF to: 004fece2 (CONDITIONAL_JUMP)
// 004fecc3: CMP EBX,EDI
//   Label: LAB_004fecc3
// 004fecc5: JNZ 0x004fec96
//   XREF to: 004fec96 (CONDITIONAL_JUMP)
// 004fecc7: POP EBP
// 004fecc8: POP EDI
// 004fecc9: POP ESI
// 004fecca: POP EBX
// 004feccb: RET
// 004feccc: INC EDI
//   Label: LAB_004feccc
// 004feccd: MOV EBP,dword ptr [ESI + 0x8]
// 004fecd0: ADD EBX,0x4
// 004fecd3: CMP EDI,EBP
// 004fecd5: JL 0x004fec89
//   XREF to: 004fec89 (CONDITIONAL_JUMP)
// 004fecd7: JMP 0x004fec94
//   XREF to: 004fec94 (UNCONDITIONAL_JUMP)
// 004fecd9: TEST EBX,EBX
//   Label: LAB_004fecd9
// 004fecdb: JGE 0x004feca5
//   XREF to: 004feca5 (CONDITIONAL_JUMP)
// 004fecdd: LEA EBX,[EBP + -0x1]
// 004fece0: JMP 0x004feca5
//   XREF to: 004feca5 (UNCONDITIONAL_JUMP)
// 004fece2: PUSH 0x630838
//   Label: LAB_004fece2
//   XREF to: 00630838 (DATA)
// 004fece7: MOV EDX,dword ptr [EBP + 0xc]
// 004fecea: PUSH EDX
// 004feceb: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fecf0: ADD ESP,0x8
// 004fecf3: TEST EAX,EAX
// 004fecf5: JNZ 0x004fecc3
//   XREF to: 004fecc3 (CONDITIONAL_JUMP)
// 004fecf7: MOV EAX,dword ptr [EBP + 0xc]
// 004fecfa: MOV dword ptr [ESI + 0x334],EAX
// 004fed00: POP EBP
// 004fed01: POP EDI
// 004fed02: POP ESI
// 004fed03: POP EBX
// 004fed04: RET
