// Name: core_sentinel.cpp_CSentinel_ctor_FUN_00567db0
// Address: 00567db0
// Address Range: [[00567db0, 00567e15]]
// Convention: __cdecl
// Signature: CSentinel * core_sentinel.cpp_CSentinel_ctor_FUN_00567db0(CSentinel * this_ptr)
// Cross-references:
//   core_sentinel.cpp_FUN_00567d70 (00567d70) at 00567d8a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sentinel_dfm_00645719
//   undefined4 DAT_0066267c
//   undefined4 PTR_FUN_0066267d+3
//   CDemonActor_vtable PTR_core_sentinel.cpp_FUN_00662694
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00567db0(CSentinel *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CSentinel *pCVar4;
  
  pCVar4 = (CSentinel *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &PTR_core_sentinel_cpp_FUN_00662694;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model);
  uVar2 = _DAT_0066267c;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = -0x66;
  uVar3 = _PTR_FUN_0066267d_3;
  (pCVar1->base_character).cloth_data[0x345] = -0x67;
  (pCVar1->base_character).cloth_data[0x346] = '\x19';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = '\0';
  (pCVar1->base_character).cloth_data[0x34b] = '@';
  pCVar4->field1_0xbeb4[0xc] = '\0';
  pCVar4->field1_0xbeb4[0xd] = '\0';
  pCVar4->field1_0xbeb4[0xe] = '\0';
  pCVar4->field1_0xbeb4[0xf] = '\0';
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}


// Assembly code:
// 00567db0: PUSH EBX
//   Label: core_sentinel.cpp_CSentinel_ctor_FUN_00567db0
// 00567db1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00567db5: PUSH EDX
// 00567db6: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 00567dbb: ADD ESP,0x4
// 00567dbe: PUSH 0x645719
//   XREF to: 00645719 (DATA)
// 00567dc3: MOV EBX,EAX
// 00567dc5: ADD EAX,0x158
// 00567dca: PUSH EAX
// 00567dcb: MOV dword ptr [EAX + -0x4],0x662694
//   XREF to: 00662694 (DATA)
// 00567dd2: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00567dd7: FLD float ptr [0x0066267c]
//   XREF to: 0066267c (READ)
// 00567ddd: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 00567de7: FLD float ptr [0x00662680]
//   XREF to: 00662680 (READ)
// 00567ded: MOV dword ptr [EBX + 0x2de0],0x40000000
// 00567df7: ADD ESP,0x8
// 00567dfa: MOV dword ptr [EBX + 0xbec0],0x0
// 00567e04: MOV EAX,EBX
// 00567e06: FXCH
// 00567e08: FSTP float ptr [EBX + 0x2de4]
// 00567e0e: FSTP float ptr [EBX + 0x2de8]
// 00567e14: POP EBX
// 00567e15: RET
