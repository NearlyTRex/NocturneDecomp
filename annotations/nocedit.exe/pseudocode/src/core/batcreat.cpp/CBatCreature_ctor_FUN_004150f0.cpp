// Name: core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0
// Address: 004150f0
// Address Range: [[004150f0, 0041514b]]
// Convention: __cdecl
// Signature: CBatCreature * core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0(CBatCreature * this_ptr)
// Cross-references:
//   core_batcreat.cpp_constructor_FUN_004150b0 (004150b0) at 004150ca [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_batcreat_dfm_0061546b
//   undefined4 DAT_0065a5b0
//   undefined4 PTR_FUN_0065a5b1+3
//   CDemonActor_vtable g_CBatCreatureVTable
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_ctor_FUN_004150f0(CBatCreature *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CBatCreature *pCVar4;
  
  pCVar4 = (CBatCreature *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &g_CBatCreatureVTable;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model);
  uVar3 = _PTR_FUN_0065a5b1_3;
  uVar2 = _DAT_0065a5b0;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = -0x66;
  (pCVar1->base_character).cloth_data[0x345] = -0x67;
  (pCVar1->base_character).cloth_data[0x346] = '\x19';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = -0x40;
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}


// Assembly code:
// 004150f0: PUSH EBX
//   Label: core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0
// 004150f1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004150f5: PUSH EDX
// 004150f6: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 004150fb: ADD ESP,0x4
// 004150fe: PUSH 0x61546b
//   XREF to: 0061546b (DATA)
// 00415103: MOV EBX,EAX
// 00415105: ADD EAX,0x158
// 0041510a: PUSH EAX
// 0041510b: MOV dword ptr [EAX + -0x4],0x65a5c4
//   XREF to: 0065a5c4 (DATA)
// 00415112: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00415117: FLD float ptr [0x0065a5b0]
//   XREF to: 0065a5b0 (READ)
// 0041511d: FLD float ptr [0x0065a5b4]
//   XREF to: 0065a5b4 (READ)
// 00415123: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 0041512d: ADD ESP,0x8
// 00415130: MOV dword ptr [EBX + 0x2de0],0x3fc00000
// 0041513a: MOV EAX,EBX
// 0041513c: FXCH
// 0041513e: FSTP float ptr [EBX + 0x2de4]
// 00415144: FSTP float ptr [EBX + 0x2de8]
// 0041514a: POP EBX
// 0041514b: RET
