// Name: core_npc.cpp_FUN_005447e0
// Address: 005447e0
// Address Range: [[005447e0, 00544869]]
// Convention: __cdecl
// Signature: CNPC * core_npc.cpp_FUN_005447e0(CNPC * this_ptr)
// Cross-references:
//   core_hiram.cpp_FUN_004f43f0 (004f43f0) at 004f43f8 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f4840 (004f4840) at 004f4848 [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_FUN_004f7b70 (004f7b70) at 004f7b78 [UNCONDITIONAL_CALL]
//   core_npc.cpp_FUN_005447a0 (005447a0) at 005447ba [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_ctor_FUN_00545b30 (00545b30) at 00545b38 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060 (005da060) at 005da066 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0 (005da2c0) at 005da2c6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_priest_dfm_0063e309
//   CDemonActor_vtable PTR_core_npc.cpp_FUN_00661d94
// Function calls:
//   core_charactr.cpp_CCharacter_ctor_FUN_00427e20
//   core_path.cpp_CPathMap_ctor_FUN_00546450
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

CNPC * __cdecl core_npc_cpp_FUN_005447e0(CNPC *this_ptr)

{
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00427e20(&this_ptr->base_character);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00546450((CPathMap *)(pCVar1 + 1));
  pCVar2[-1].height_cache[0x4f][0x1b] = (int)&PTR_core_npc_cpp_FUN_00661d94;
  pCVar2[-1].height_cache_tags[7][0x4d] = 0x3f19999a;
  pCVar2[-1].height_cache_tags[7][0x4e] = 0x3f666666;
  pCVar2[-1].height_cache_tags[7][0x51] = 0x3fcccccd;
  pCVar2[-1].height_cache_tags[7][0x52] = -0x3b864000;
  core_skeleton_cpp_FUN_005a0840();
  pCVar2[-1].height_cache_tags[2][0x53] = 0;
  pCVar2[1].current_position.x = 0.0;
  pCVar2[1].current_position.y = 0.0;
  return (CNPC *)(pCVar2[-1].height_cache[0x4e] + 0x2a);
}


// Assembly code:
// 005447e0: PUSH EBX
//   Label: core_npc.cpp_FUN_005447e0
// 005447e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005447e5: PUSH EBX
// 005447e6: CALL core_charactr.cpp_CCharacter_ctor_FUN_00427e20
//   XREF to: 00427e20 (UNCONDITIONAL_CALL)
// 005447eb: ADD ESP,0x4
// 005447ee: ADD EAX,0xbe24
// 005447f3: PUSH EAX
// 005447f4: CALL core_path.cpp_CPathMap_ctor_FUN_00546450
//   XREF to: 00546450 (UNCONDITIONAL_CALL)
// 005447f9: LEA EBX,[EAX + 0xffff41dc]
// 005447ff: MOV dword ptr [EBX + 0x154],0x661d94
//   XREF to: 00661d94 (DATA)
// 00544809: ADD ESP,0x4
// 0054480c: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 00544816: PUSH 0x63e309
//   XREF to: 0063e309 (DATA)
// 0054481b: MOV dword ptr [EBX + 0x2de0],0x3f666666
// 00544825: LEA EAX,[EBX + 0x158]
// 0054482b: MOV dword ptr [EBX + 0x2dec],0x3fcccccd
// 00544835: PUSH EAX
// 00544836: MOV dword ptr [EBX + 0x2df0],0xc479c000
// 00544840: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00544845: MOV dword ptr [EBX + 0x2624],0x0
// 0054484f: ADD ESP,0x8
// 00544852: MOV dword ptr [EBX + 0x1f700],0x0
// 0054485c: MOV EAX,EBX
// 0054485e: MOV dword ptr [EBX + 0x1f704],0x0
// 00544868: POP EBX
// 00544869: RET
