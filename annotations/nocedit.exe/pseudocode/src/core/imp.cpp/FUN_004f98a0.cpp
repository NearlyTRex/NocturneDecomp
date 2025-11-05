// Name: core_imp.cpp_FUN_004f98a0
// Address: 004f98a0
// Address Range: [[004f98a0, 004f9905]]
// Convention: __cdecl
// Signature: CImp * core_imp.cpp_FUN_004f98a0(CImp * this_ptr)
// Cross-references:
//   core_imp.cpp_FUN_004f9860 (004f9860) at 004f987a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_imp_dfm_0062f833
//   undefined4 DAT_006601e0
//   undefined4 PTR_FUN_006601e1+3
//   CDemonActor_vtable PTR_core_imp.cpp_FUN_006601f4
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CImp * __cdecl core_imp_cpp_FUN_004f98a0(CImp *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CImp *pCVar4;
  
  pCVar4 = (CImp *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &PTR_core_imp_cpp_FUN_006601f4;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"imp.dfm");
  uVar2 = _DAT_006601e0;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = -0x66;
  uVar3 = _PTR_FUN_006601e1_3;
  (pCVar1->base_character).cloth_data[0x345] = -0x67;
  (pCVar1->base_character).cloth_data[0x346] = '\x19';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = '\0';
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).field13_0x2620[4] = '\0';
  (pCVar1->base_character).field13_0x2620[5] = '\0';
  (pCVar1->base_character).field13_0x2620[6] = '\0';
  (pCVar1->base_character).field13_0x2620[7] = '\0';
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}


// Assembly code:
// 004f98a0: PUSH EBX
//   Label: core_imp.cpp_FUN_004f98a0
// 004f98a1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f98a5: PUSH EDX
// 004f98a6: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 004f98ab: ADD ESP,0x4
// 004f98ae: PUSH 0x62f833
//   XREF to: 0062f833 (DATA)
// 004f98b3: MOV EBX,EAX
// 004f98b5: ADD EAX,0x158
// 004f98ba: PUSH EAX
// 004f98bb: MOV dword ptr [EAX + -0x4],0x6601f4
//   XREF to: 006601f4 (DATA)
// 004f98c2: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004f98c7: FLD float ptr [0x006601e0]
//   XREF to: 006601e0 (READ)
// 004f98cd: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 004f98d7: FLD float ptr [0x006601e4]
//   XREF to: 006601e4 (READ)
// 004f98dd: MOV dword ptr [EBX + 0x2de0],0x3f000000
// 004f98e7: ADD ESP,0x8
// 004f98ea: MOV dword ptr [EBX + 0x2624],0x0
// 004f98f4: MOV EAX,EBX
// 004f98f6: FXCH
// 004f98f8: FSTP float ptr [EBX + 0x2de4]
// 004f98fe: FSTP float ptr [EBX + 0x2de8]
// 004f9904: POP EBX
// 004f9905: RET
