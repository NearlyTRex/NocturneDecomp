// Name: core_smiley.cpp_CSmiley_ctor_FUN_005a2430
// Address: 005a2430
// Address Range: [[005a2430, 005a24c7]]
// Convention: __cdecl
// Signature: CSmiley * core_smiley.cpp_CSmiley_ctor_FUN_005a2430(CSmiley * this_ptr)
// Cross-references:
//   core_smiley.cpp_FUN_005a23f0 (005a23f0) at 005a240a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_smiley_dfm_0064f165
//   undefined4 DAT_00662f6c
//   undefined4 PTR_FUN_00662f6d+3
//   CDemonActor_vtable g_CSmileyVTable
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_005a2430(CSmiley *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CSmiley *pCVar4;
  
  pCVar4 = (CSmiley *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.metadata.vtable = &g_CSmileyVTable;
  core_skeleton_cpp_FUN_005a0840();
  pCVar4->field1_0xbeb4[8] = '\0';
  pCVar4->field1_0xbeb4[9] = '\0';
  pCVar4->field1_0xbeb4[10] = '\0';
  pCVar4->field1_0xbeb4[0xb] = '\0';
  pCVar4->field1_0xbeb4[0xc] = '\0';
  pCVar4->field1_0xbeb4[0xd] = '\0';
  pCVar4->field1_0xbeb4[0xe] = -0x38;
  pCVar4->field1_0xbeb4[0xf] = 'B';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = -0x66;
  (pCVar1->base_character).cloth_data[0x345] = -0x67;
  (pCVar1->base_character).cloth_data[0x346] = '\x19';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = 'f';
  (pCVar1->base_character).cloth_data[0x349] = 'f';
  (pCVar1->base_character).cloth_data[0x34a] = 'f';
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar4->field1_0xbeb4[0x3c] = '\0';
  uVar2 = _DAT_00662f6c;
  pCVar4->field1_0xbeb4[0x3d] = '\0';
  pCVar4->field1_0xbeb4[0x3e] = '\0';
  pCVar4->field1_0xbeb4[0x3f] = '\0';
  pCVar4->field1_0xbeb4[0x40] = '\0';
  uVar3 = _PTR_FUN_00662f6d_3;
  pCVar4->field1_0xbeb4[0x41] = '\0';
  pCVar4->field1_0xbeb4[0x42] = '\0';
  pCVar4->field1_0xbeb4[0x43] = '\0';
  pCVar4->field1_0xbeb4[0x44] = '\0';
  pCVar4->field1_0xbeb4[0x45] = '\0';
  pCVar4->field1_0xbeb4[0x46] = '\0';
  pCVar4->field1_0xbeb4[0x47] = '\0';
  pCVar4->field1_0xbeb4[0x48] = '\x01';
  pCVar4->field1_0xbeb4[0x49] = '\0';
  pCVar4->field1_0xbeb4[0x4a] = '\0';
  pCVar4->field1_0xbeb4[0x4b] = '\0';
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}


// Assembly code:
// 005a2430: PUSH EBX
//   Label: core_smiley.cpp_CSmiley_ctor_FUN_005a2430
// 005a2431: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a2435: PUSH EDX
// 005a2436: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 005a243b: ADD ESP,0x4
// 005a243e: PUSH 0x64f165
//   XREF to: 0064f165 (DATA)
// 005a2443: MOV EBX,EAX
// 005a2445: ADD EAX,0x158
// 005a244a: PUSH EAX
// 005a244b: MOV dword ptr [EAX + -0x4],0x662f84
//   XREF to: 00662f84 (DATA)
// 005a2452: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005a2457: MOV dword ptr [EBX + 0xbebc],0x0
// 005a2461: MOV dword ptr [EBX + 0xbec0],0x42c80000
// 005a246b: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 005a2475: MOV dword ptr [EBX + 0x2de0],0x3f666666
// 005a247f: MOV dword ptr [EBX + 0xbef0],0x0
// 005a2489: FLD float ptr [0x00662f6c]
//   XREF to: 00662f6c (READ)
// 005a248f: MOV dword ptr [EBX + 0xbef4],0x0
// 005a2499: FLD float ptr [0x00662f70]
//   XREF to: 00662f70 (READ)
// 005a249f: MOV dword ptr [EBX + 0xbef8],0x0
// 005a24a9: ADD ESP,0x8
// 005a24ac: MOV dword ptr [EBX + 0xbefc],0x1
// 005a24b6: MOV EAX,EBX
// 005a24b8: FXCH
// 005a24ba: FSTP float ptr [EBX + 0x2de4]
// 005a24c0: FSTP float ptr [EBX + 0x2de8]
// 005a24c6: POP EBX
// 005a24c7: RET
