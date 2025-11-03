// Name: core_inv.cpp_CInventory_setupItems_FUN_004ff780
// Address: 004ff780
// Address Range: [[004ff780, 004ff7f9]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_setupItems_FUN_004ff780(CInventory * this_ptr)
// Cross-references:
//   core_hero.cpp_CHero_FUN_004f2540 (004f2540) at 004f256e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_inv_cpp_006309a1
//   TerminatedCString s_CInventory_setupItems_we_006309b1
//   TerminatedCString s_core_inv_cpp_006309f1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_setupItems_FUN_004ff780(CInventory *this_ptr)

{
  CInventory *pCVar1;
  int iVar2;
  
  if (this_ptr->preserve_items != 0) {
    g_CurrentFilename = "..\\core\\inv.cpp";
    g_CurrentLineNumber = 0x56e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CInventory::setupItems - we should own the items at this point!");
  }
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (pCVar1->items[0],"..\\core\\inv.cpp",0x573);
      iVar2 = iVar2 + 1;
      (*pCVar1->items[0]->vtable->setup)(pCVar1->items[0]);
      pCVar1 = (CInventory *)&pCVar1->owner;
    } while (iVar2 < this_ptr->item_count);
  }
  return;
}


// Assembly code:
// 004ff780: PUSH EBX
//   Label: core_inv.cpp_CInventory_setupItems_FUN_004ff780
// 004ff781: PUSH ESI
// 004ff782: PUSH EDI
// 004ff783: PUSH EBP
// 004ff784: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ff788: CMP dword ptr [EDI + 0x450],0x0
// 004ff78f: JNZ 0x004ff7d5
//   XREF to: 004ff7d5 (CONDITIONAL_JUMP)
// 004ff791: MOV EBP,dword ptr [EDI + 0x8]
//   Label: LAB_004ff791
// 004ff794: XOR ESI,ESI
// 004ff796: TEST EBP,EBP
// 004ff798: JLE 0x004ff7d0
//   XREF to: 004ff7d0 (CONDITIONAL_JUMP)
// 004ff79a: MOV EBX,EDI
// 004ff79c: PUSH 0x573
//   Label: LAB_004ff79c
// 004ff7a1: PUSH 0x6309f1
//   XREF to: 006309f1 (DATA)
// 004ff7a6: MOV EAX,dword ptr [EBX + 0xc]
// 004ff7a9: PUSH EAX
// 004ff7aa: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 004ff7af: ADD ESP,0xc
// 004ff7b2: MOV EAX,dword ptr [EBX + 0xc]
// 004ff7b5: PUSH EAX
// 004ff7b6: MOV EDX,dword ptr [EAX + 0x154]
// 004ff7bc: ADD EBX,0x4
// 004ff7bf: INC ESI
// 004ff7c0: CALL dword ptr [EDX]
// 004ff7c2: MOV EDX,dword ptr [EDI + 0x8]
// 004ff7c5: ADD ESP,0x4
// 004ff7c8: CMP ESI,EDX
// 004ff7ca: JL 0x004ff79c
//   XREF to: 004ff79c (CONDITIONAL_JUMP)
// 004ff7cc: LEA EAX,[EAX]
// 004ff7d0: POP EBP
//   Label: LAB_004ff7d0
// 004ff7d1: POP EDI
// 004ff7d2: POP ESI
// 004ff7d3: POP EBX
// 004ff7d4: RET
// 004ff7d5: MOV ECX,0x6309a1
//   Label: LAB_004ff7d5
//   XREF to: 006309a1 (PARAM)
// 004ff7da: MOV EBX,0x56e
// 004ff7df: PUSH 0x6309b1
//   XREF to: 006309b1 (DATA)
// 004ff7e4: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004ff7ea: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004ff7f0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ff7f5: ADD ESP,0x4
// 004ff7f8: JMP 0x004ff791
//   XREF to: 004ff791 (UNCONDITIONAL_JUMP)
