// Name: core_dog.cpp_CZombieDog_ctor_FUN_0047f050
// Address: 0047f050
// Address Range: [[0047f050, 0047f0b5]]
// Convention: __cdecl
// Signature: CZombieDog * core_dog.cpp_CZombieDog_ctor_FUN_0047f050(CZombieDog * this_ptr)
// Cross-references:
//   core_dog.cpp_factoryFunc_FUN_0047f010 (0047f010) at 0047f02a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_dog_dfm_00620f9c
//   undefined4 DAT_0065ca2c
//   undefined4 PTR_core_bride.cpp_FUN_0065ca2d+3
//   CDemonActor_vtable PTR_core_dog.cpp_FUN_0065ca44
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_0047f050(CZombieDog *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CZombieDog *pCVar4;
  
  pCVar4 = (CZombieDog *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.vtable = &PTR_core_dog_cpp_FUN_0065ca44;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar4->base_enemy).base_character.model,"dog.dfm");
  uVar2 = _DAT_0065ca2c;
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = '\0';
  uVar3 = _PTR_core_bride_cpp_FUN_0065ca2d_3;
  (pCVar1->base_character).cloth_data[0x345] = '\0';
  (pCVar1->base_character).cloth_data[0x346] = '@';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = '\0';
  (pCVar1->base_character).cloth_data[0x349] = '\0';
  (pCVar1->base_character).cloth_data[0x34a] = -0x40;
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar4->field1_0xbeb4[0x10] = '\0';
  pCVar4->field1_0xbeb4[0x11] = '\0';
  pCVar4->field1_0xbeb4[0x12] = '\0';
  pCVar4->field1_0xbeb4[0x13] = '\0';
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x34c) = uVar2;
  *(undefined4 *)((pCVar4->base_enemy).base_character.cloth_data + 0x350) = uVar3;
  return pCVar4;
}


// Assembly code:
// 0047f050: PUSH EBX
//   Label: core_dog.cpp_CZombieDog_ctor_FUN_0047f050
// 0047f051: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0047f055: PUSH EDX
// 0047f056: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 0047f05b: ADD ESP,0x4
// 0047f05e: PUSH 0x620f9c
//   XREF to: 00620f9c (DATA)
// 0047f063: MOV EBX,EAX
// 0047f065: ADD EAX,0x158
// 0047f06a: PUSH EAX
// 0047f06b: MOV dword ptr [EAX + -0x4],0x65ca44
//   XREF to: 0065ca44 (DATA)
// 0047f072: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0047f077: FLD float ptr [0x0065ca2c]
//   XREF to: 0065ca2c (READ)
// 0047f07d: MOV dword ptr [EBX + 0x2ddc],0x3f400000
// 0047f087: FLD float ptr [0x0065ca30]
//   XREF to: 0065ca30 (READ)
// 0047f08d: MOV dword ptr [EBX + 0x2de0],0x3fc00000
// 0047f097: ADD ESP,0x8
// 0047f09a: MOV dword ptr [EBX + 0xbec4],0x0
// 0047f0a4: MOV EAX,EBX
// 0047f0a6: FXCH
// 0047f0a8: FSTP float ptr [EBX + 0x2de4]
// 0047f0ae: FSTP float ptr [EBX + 0x2de8]
// 0047f0b4: POP EBX
// 0047f0b5: RET
