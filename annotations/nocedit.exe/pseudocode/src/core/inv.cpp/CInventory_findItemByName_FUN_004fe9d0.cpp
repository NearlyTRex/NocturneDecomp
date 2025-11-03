// Name: core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0
// Address: 004fe9d0
// Address Range: [[004fe9d0, 004fea11]]
// Convention: __cdecl
// Signature: CDemonActor * core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory * this_ptr, char * item_name)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004aea3d [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004de559 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055e440 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e7030 (005e7030) at 005e71de [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

CDemonActor * __cdecl
core_inv_cpp_CInventory_findItemByName_FUN_004fe9d0(CInventory *this_ptr,char *item_name)

{
  int iVar1;
  CInventory *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(pCVar2->items[0]->actor_name,item_name);
      if (iVar1 == 0) {
        return pCVar2->items[0];
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar3 < this_ptr->item_count);
  }
  return (CDemonActor *)0x0;
}


// Assembly code:
// 004fe9d0: PUSH EBX
//   Label: core_inv.cpp_CInventory_findItemByName_FUN_004fe9d0
// 004fe9d1: PUSH ESI
// 004fe9d2: PUSH EDI
// 004fe9d3: PUSH EBP
// 004fe9d4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004fe9d8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004fe9dc: MOV EDX,dword ptr [EDI + 0x8]
// 004fe9df: XOR ESI,ESI
// 004fe9e1: TEST EDX,EDX
// 004fe9e3: JLE 0x004fea03
//   XREF to: 004fea03 (CONDITIONAL_JUMP)
// 004fe9e5: MOV EBX,EDI
// 004fe9e7: PUSH EBP
//   Label: LAB_004fe9e7
// 004fe9e8: MOV EAX,dword ptr [EBX + 0xc]
// 004fe9eb: PUSH EAX
// 004fe9ec: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004fe9f1: ADD ESP,0x8
// 004fe9f4: TEST EAX,EAX
// 004fe9f6: JZ 0x004fea0a
//   XREF to: 004fea0a (CONDITIONAL_JUMP)
// 004fe9f8: INC ESI
// 004fe9f9: MOV ECX,dword ptr [EDI + 0x8]
// 004fe9fc: ADD EBX,0x4
// 004fe9ff: CMP ESI,ECX
// 004fea01: JL 0x004fe9e7
//   XREF to: 004fe9e7 (CONDITIONAL_JUMP)
// 004fea03: XOR EAX,EAX
//   Label: LAB_004fea03
// 004fea05: POP EBP
// 004fea06: POP EDI
// 004fea07: POP ESI
// 004fea08: POP EBX
// 004fea09: RET
// 004fea0a: MOV EAX,dword ptr [EBX + 0xc]
//   Label: LAB_004fea0a
// 004fea0d: POP EBP
// 004fea0e: POP EDI
// 004fea0f: POP ESI
// 004fea10: POP EBX
// 004fea11: RET
