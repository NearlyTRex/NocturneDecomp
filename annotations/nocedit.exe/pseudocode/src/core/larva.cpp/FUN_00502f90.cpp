// Name: core_larva.cpp_FUN_00502f90
// Address: 00502f90
// Address Range: [[00502f90, 00503013]]
// Convention: __cdecl
// Signature: CLarva * core_larva.cpp_FUN_00502f90(CLarva * this_ptr)
// Cross-references:
//   core_larva.cpp_FUN_00502f50 (00502f50) at 00502f6a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_worm_dfm_00630edc
//   undefined4 DAT_00660720
//   undefined4 DAT_00660724
//   CDemonActor_vtable PTR_core_larva.cpp_FUN_00660734
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CLarva * __cdecl core_larva_cpp_FUN_00502f90(CLarva *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CLarva *pCVar4;
  
  pCVar4 = (CLarva *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.metadata.vtable = &PTR_core_larva_cpp_FUN_00660734;
  core_skeleton_cpp_FUN_005a0840();
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = -0x80;
  (pCVar1->base_character).cloth_data[0x347] = '>';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = '\0';
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).field11_0x25a0[0x70] = '\x01';
  uVar2 = _DAT_00660720;
  (pCVar1->base_character).field11_0x25a0[0x71] = '\0';
  (pCVar1->base_character).field11_0x25a0[0x72] = '\0';
  (pCVar1->base_character).field11_0x25a0[0x73] = '\0';
  (pCVar4->base_enemy).base_character.hit_points = 15.0;
  uVar3 = _DAT_00660724;
  pCVar4->field1_0xbeb4[0xc] = '\0';
  pCVar4->field1_0xbeb4[0xd] = '\0';
  pCVar4->field1_0xbeb4[0xe] = '\0';
  pCVar4->field1_0xbeb4[0xf] = '\0';
  pCVar4->field1_0xbeb4[0x10] = '\0';
  pCVar4->field1_0xbeb4[0x11] = '\0';
  pCVar4->field1_0xbeb4[0x12] = '\0';
  pCVar4->field1_0xbeb4[0x13] = '\0';
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}


// Assembly code:
// 00502f90: PUSH EBX
//   Label: core_larva.cpp_FUN_00502f90
// 00502f91: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00502f95: PUSH EDX
// 00502f96: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 00502f9b: ADD ESP,0x4
// 00502f9e: PUSH 0x630edc
//   XREF to: 00630edc (DATA)
// 00502fa3: MOV EBX,EAX
// 00502fa5: ADD EAX,0x158
// 00502faa: PUSH EAX
// 00502fab: MOV dword ptr [EAX + -0x4],0x660734
//   XREF to: 00660734 (DATA)
// 00502fb2: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00502fb7: MOV dword ptr [EBX + 0x2ddc],0x3e800000
// 00502fc1: MOV dword ptr [EBX + 0x2de0],0x3f000000
// 00502fcb: MOV dword ptr [EBX + 0x2610],0x1
// 00502fd5: FLD float ptr [0x00660720]
//   XREF to: 00660720 (READ)
// 00502fdb: MOV dword ptr [EBX + 0x243c],0x41700000
// 00502fe5: FLD float ptr [0x00660724]
//   XREF to: 00660724 (READ)
// 00502feb: MOV dword ptr [EBX + 0xbec0],0x0
// 00502ff5: ADD ESP,0x8
// 00502ff8: MOV dword ptr [EBX + 0xbec4],0x0
// 00503002: MOV EAX,EBX
// 00503004: FXCH
// 00503006: FSTP float ptr [EBX + 0x2de4]
// 0050300c: FSTP float ptr [EBX + 0x2de8]
// 00503012: POP EBX
// 00503013: RET
