// Name: core_inv.cpp_CInventory_saveItems_FUN_004ff3b0
// Address: 004ff3b0
// Address Range: [[004ff3b0, 004ff3f7]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_saveItems_FUN_004ff3b0(CInventory * this_ptr, FILE * file_handle)
// Cross-references:
//   core_inv.cpp_CInventory_save_FUN_004ff210 (004ff210) at 004ff328 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 (00523600) at 00523983 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_s_s_0063093f
//   char* g_PropertyNamePrefix = 00000000
// Function calls:
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_saveItems_FUN_004ff3b0(CInventory *this_ptr,FILE *file_handle)

{
  char *pcVar1;
  CInventory *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      pcVar1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar2->items[0]);
      iVar3 = iVar3 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%s \"%s\"\n",&g_PropertyNamePrefix,pcVar1);
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar3 < this_ptr->item_count);
  }
  return;
}


// Assembly code:
// 004ff3b0: PUSH ESI
//   Label: core_inv.cpp_CInventory_saveItems_FUN_004ff3b0
// 004ff3b1: PUSH EDI
// 004ff3b2: PUSH EBP
// 004ff3b3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004ff3b7: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004ff3bb: MOV EDX,dword ptr [EDI + 0x8]
// 004ff3be: XOR ESI,ESI
// 004ff3c0: TEST EDX,EDX
// 004ff3c2: JLE 0x004ff3f4
//   XREF to: 004ff3f4 (CONDITIONAL_JUMP)
// 004ff3c4: PUSH EBX
// 004ff3c5: MOV EBX,EDI
// 004ff3c7: MOV ECX,dword ptr [EBX + 0xc]
//   Label: LAB_004ff3c7
// 004ff3ca: PUSH ECX
// 004ff3cb: PUSH ECX
// 004ff3cc: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004ff3d1: ADD ESP,0x4
// 004ff3d4: PUSH EAX
// 004ff3d5: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 004ff3da: PUSH 0x63093f
//   XREF to: 0063093f (DATA)
// 004ff3df: PUSH EBP
// 004ff3e0: ADD EBX,0x4
// 004ff3e3: INC ESI
// 004ff3e4: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ff3e9: MOV EDX,dword ptr [EDI + 0x8]
// 004ff3ec: ADD ESP,0x14
// 004ff3ef: CMP ESI,EDX
// 004ff3f1: JL 0x004ff3c7
//   XREF to: 004ff3c7 (CONDITIONAL_JUMP)
// 004ff3f3: POP EBX
// 004ff3f4: POP EBP
//   Label: LAB_004ff3f4
// 004ff3f5: POP EDI
// 004ff3f6: POP ESI
// 004ff3f7: RET
