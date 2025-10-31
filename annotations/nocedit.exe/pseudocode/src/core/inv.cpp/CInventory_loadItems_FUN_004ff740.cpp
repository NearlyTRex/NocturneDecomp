// Name: core_inv.cpp_CInventory_loadItems_FUN_004ff740
// Address: 004ff740
// Address Range: [[004ff740, 004ff77f]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_loadItems_FUN_004ff740(CInventory * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 005232be [UNCONDITIONAL_CALL]
// Globals:
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_loadItems_FUN_004ff740(CInventory *this_ptr)

{
  int iVar1;
  CInventory *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar1 = iVar1 + 1;
      core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0
                (g_CDemonMissionPtr,pCVar2->items[0]);
      pCVar2 = (CInventory *)&pCVar2->owner;
    } while (iVar1 < this_ptr->item_count);
  }
  this_ptr->preserve_items = 0;
  return;
}


// Assembly code:
// 004ff740: PUSH EBX
//   Label: core_inv.cpp_CInventory_loadItems_FUN_004ff740
// 004ff741: PUSH EDI
// 004ff742: PUSH EBP
// 004ff743: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004ff747: MOV EDX,dword ptr [EDI + 0x8]
// 004ff74a: XOR EBX,EBX
// 004ff74c: TEST EDX,EDX
// 004ff74e: JLE 0x004ff772
//   XREF to: 004ff772 (CONDITIONAL_JUMP)
// 004ff750: PUSH ESI
// 004ff751: MOV ESI,EDI
// 004ff753: MOV ECX,dword ptr [ESI + 0xc]
//   Label: LAB_004ff753
// 004ff756: PUSH ECX
// 004ff757: MOV EBP,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004ff75d: PUSH EBP
//   XREF to: 02f33740 (DATA)
// 004ff75e: ADD ESI,0x4
// 004ff761: INC EBX
// 004ff762: CALL core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
//   XREF to: 00523be0 (UNCONDITIONAL_CALL)
// 004ff767: MOV EAX,dword ptr [EDI + 0x8]
// 004ff76a: ADD ESP,0x8
// 004ff76d: CMP EBX,EAX
// 004ff76f: JL 0x004ff753
//   XREF to: 004ff753 (CONDITIONAL_JUMP)
// 004ff771: POP ESI
// 004ff772: MOV dword ptr [EDI + 0x450],0x0
//   Label: LAB_004ff772
// 004ff77c: POP EBP
// 004ff77d: POP EDI
// 004ff77e: POP EBX
// 004ff77f: RET
