// Name: core_bride.cpp_CBride_ctor_FUN_004237a0
// Address: 004237a0
// Address Range: [[004237a0, 00423805]]
// Convention: __cdecl
// Signature: CBride * core_bride.cpp_CBride_ctor_FUN_004237a0(CBride * this_ptr)
// Cross-references:
//   core_bride.cpp_FUN_00423760 (00423760) at 0042377a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_bride_dfm_00616ab6
//   undefined4 DAT_0065b410
//   undefined4 PTR_FUN_0065b411+3
//   CDemonActor_vtable g_CBrideVTable
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBride * __cdecl core_bride_cpp_CBride_ctor_FUN_004237a0(CBride *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CBride *pCVar4;
  
  pCVar4 = (CBride *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &g_CBrideVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"bride.dfm");
  uVar2 = _DAT_0065b410;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  uVar3 = _PTR_FUN_0065b411_3;
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = '@';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = -0x40;
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar4->field1_0xbeb4[0x2c] = '\0';
  pCVar4->field1_0xbeb4[0x2d] = '\0';
  pCVar4->field1_0xbeb4[0x2e] = '\0';
  pCVar4->field1_0xbeb4[0x2f] = '\0';
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}


// Assembly code:
// 004237a0: PUSH EBX
//   Label: core_bride.cpp_CBride_ctor_FUN_004237a0
// 004237a1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004237a5: PUSH EDX
// 004237a6: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 004237ab: ADD ESP,0x4
// 004237ae: PUSH 0x616ab6
//   XREF to: 00616ab6 (DATA)
// 004237b3: MOV EBX,EAX
// 004237b5: ADD EAX,0x158
// 004237ba: PUSH EAX
// 004237bb: MOV dword ptr [EAX + -0x4],0x65b424
//   XREF to: 0065b424 (DATA)
// 004237c2: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004237c7: FLD float ptr [0x0065b410]
//   XREF to: 0065b410 (READ)
// 004237cd: MOV dword ptr [EBX + 0x2ddc],0x3f400000
// 004237d7: FLD float ptr [0x0065b414]
//   XREF to: 0065b414 (READ)
// 004237dd: MOV dword ptr [EBX + 0x2de0],0x3fc00000
// 004237e7: ADD ESP,0x8
// 004237ea: MOV dword ptr [EBX + 0xbee0],0x0
// 004237f4: MOV EAX,EBX
// 004237f6: FXCH
// 004237f8: FSTP float ptr [EBX + 0x2de4]
// 004237fe: FSTP float ptr [EBX + 0x2de8]
// 00423804: POP EBX
// 00423805: RET
