// Name: core_inv.cpp_CInventory_removeItem_FUN_004fea70
// Address: 004fea70
// Address Range: [[004fea70, 004feb06]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_removeItem_FUN_004fea70(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
// Cross-references:
//   core_inv.cpp_CInventory_clear_FUN_004fd0e0 (004fd0e0) at 004fd103 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0 (005014a0) at 005014dc [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_select_FUN_004ff800 (004ff800) at 004ff9fe [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055e45a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c5457 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e7030 (005e7030) at 005e71ee [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_deleteActor_FUN_00408820
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_removeItem_FUN_004fea70
          (CInventory *this_ptr,CDemonActor *item_to_remove,int should_delete_actor)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  int in_stack_00000010;
  
  if ((CWeapon *)item_to_remove == this_ptr->selected_weapon) {
    this_ptr->selected_weapon = (CWeapon *)0x0;
  }
  if (item_to_remove == this_ptr->selected_item) {
    this_ptr->selected_item = (CDemonActor *)0x0;
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      this_ptr_00 = pCVar2->items[0];
      if (item_to_remove == this_ptr_00) {
        iVar3 = this_ptr->item_count + -1;
        this_ptr->item_count = iVar3;
        crt_string_c_memmove_FUN_005fe5e0
                  (this_ptr->items + iVar1,this_ptr->items + iVar1 + 1,(iVar3 - iVar1) * 4);
        if (in_stack_00000010 == 0) {
          return;
        }
        core_actor_cpp_CDemonActor_deleteActor_FUN_00408820(this_ptr_00);
        return;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar1 < this_ptr->item_count);
  }
  return;
}


// Assembly code:
// 004fea70: PUSH EBX
//   Label: core_inv.cpp_CInventory_removeItem_FUN_004fea70
// 004fea71: PUSH ESI
// 004fea72: PUSH EDI
// 004fea73: PUSH EBP
// 004fea74: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004fea78: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004fea7c: CMP EBX,dword ptr [ECX + 0x330]
// 004fea82: JZ 0x004feabf
//   XREF to: 004feabf (CONDITIONAL_JUMP)
// 004fea84: CMP EBX,dword ptr [ECX + 0x334]
//   Label: LAB_004fea84
// 004fea8a: JNZ 0x004fea96
//   XREF to: 004fea96 (CONDITIONAL_JUMP)
// 004fea8c: MOV dword ptr [ECX + 0x334],0x0
// 004fea96: MOV EDI,dword ptr [ECX + 0x8]
//   Label: LAB_004fea96
// 004fea99: XOR EAX,EAX
// 004fea9b: TEST EDI,EDI
// 004fea9d: JLE 0x004feaba
//   XREF to: 004feaba (CONDITIONAL_JUMP)
// 004fea9f: MOV EDX,ECX
// 004feaa1: MOV EDI,dword ptr [EDX + 0xc]
//   Label: LAB_004feaa1
// 004feaa4: LEA ESI,[EAX*0x4 + 0x0]
// 004feaab: CMP EBX,EDI
// 004feaad: JZ 0x004feacb
//   XREF to: 004feacb (CONDITIONAL_JUMP)
// 004feaaf: INC EAX
// 004feab0: MOV EBP,dword ptr [ECX + 0x8]
// 004feab3: ADD EDX,0x4
// 004feab6: CMP EAX,EBP
// 004feab8: JL 0x004feaa1
//   XREF to: 004feaa1 (CONDITIONAL_JUMP)
// 004feaba: POP EBP
//   Label: LAB_004feaba
// 004feabb: POP EDI
// 004feabc: POP ESI
// 004feabd: POP EBX
// 004feabe: RET
// 004feabf: MOV dword ptr [ECX + 0x330],0x0
//   Label: LAB_004feabf
// 004feac9: JMP 0x004fea84
//   XREF to: 004fea84 (UNCONDITIONAL_JUMP)
// 004feacb: MOV EBP,dword ptr [ECX + 0x8]
//   Label: LAB_004feacb
// 004feace: DEC EBP
// 004feacf: MOV EDX,EBP
// 004fead1: SUB EDX,EAX
// 004fead3: LEA EAX,[EDX*0x4 + 0x0]
// 004feada: ADD ECX,0xc
// 004feadd: PUSH EAX
// 004feade: LEA EAX,[ESI + 0x4]
// 004feae1: ADD EAX,ECX
// 004feae3: PUSH EAX
// 004feae4: MOV dword ptr [ECX + -0x4],EBP
// 004feae7: ADD ECX,ESI
// 004feae9: PUSH ECX
// 004feaea: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004feaef: ADD ESP,0xc
// 004feaf2: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 004feaf7: JZ 0x004feaba
//   XREF to: 004feaba (CONDITIONAL_JUMP)
// 004feaf9: PUSH EDI
// 004feafa: CALL core_actor.cpp_CDemonActor_deleteActor_FUN_00408820
//   XREF to: 00408820 (UNCONDITIONAL_CALL)
// 004feaff: ADD ESP,0x4
// 004feb02: POP EBP
// 004feb03: POP EDI
// 004feb04: POP ESI
// 004feb05: POP EBX
// 004feb06: RET
