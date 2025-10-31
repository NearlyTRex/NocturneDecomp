// Name: core_gargoyle.cpp_FUN_004e44e0
// Address: 004e44e0
// Address Range: [[004e44e0, 004e45d1]]
// Convention: __cdecl
// Signature: CGargoyle * core_gargoyle.cpp_FUN_004e44e0(CGargoyle * this_ptr)
// Cross-references:
//   core_gargoyle.cpp_FUN_004e44a0 (004e44a0) at 004e44ba [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_gargoyle_dfm_0062d7d6
//   undefined4 DAT_0065ea30
//   undefined4 DAT_0065ea34
//   CDemonActor_vtable PTR_core_gargoyle.cpp_CGargoyle_FUN_0065ea44
// Function calls:
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGargoyle * __cdecl core_gargoyle_cpp_FUN_004e44e0(CGargoyle *this_ptr)

{
  CEnemy *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CGargoyle *pCVar4;
  
  pCVar4 = (CGargoyle *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  (pCVar4->base_enemy).base_character.base_actor.metadata.vtable =
       &PTR_core_gargoyle_cpp_CGargoyle_FUN_0065ea44;
  core_skeleton_cpp_FUN_005a0840();
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x344] = -0x66;
  (pCVar1->base_character).cloth_data[0x345] = -0x67;
  (pCVar1->base_character).cloth_data[0x346] = '\x19';
  (pCVar1->base_character).cloth_data[0x347] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).cloth_data[0x348] = -0x66;
  (pCVar1->base_character).cloth_data[0x349] = -0x67;
  (pCVar1->base_character).cloth_data[0x34a] = '\x19';
  (pCVar1->base_character).cloth_data[0x34b] = '?';
  pCVar1 = &pCVar4->base_enemy;
  (pCVar1->base_character).field11_0x25a0[0x70] = '\x02';
  (pCVar1->base_character).field11_0x25a0[0x71] = '\0';
  (pCVar1->base_character).field11_0x25a0[0x72] = '\0';
  (pCVar1->base_character).field11_0x25a0[0x73] = '\0';
  (pCVar4->base_enemy).base_character.hit_points = 30.0;
  (pCVar4->base_enemy).base_character.base_actor.scale.x = 0xffff;
  (pCVar4->base_enemy).base_character.base_actor.scale.y = 0xffff;
  (pCVar4->base_enemy).base_character.base_actor.scale.z = 0xffff;
  pCVar4->field5_0xbef8[0xc] = -1;
  pCVar4->field5_0xbef8[0xd] = -1;
  pCVar4->field5_0xbef8[0xe] = '\0';
  pCVar4->field5_0xbef8[0xf] = '\0';
  pCVar4->field5_0xbef8[0x10] = -1;
  pCVar4->field5_0xbef8[0x11] = -1;
  pCVar4->field5_0xbef8[0x12] = '\0';
  pCVar4->field5_0xbef8[0x13] = '\0';
  pCVar4->field5_0xbef8[0x14] = -1;
  pCVar4->field5_0xbef8[0x15] = -1;
  pCVar4->field5_0xbef8[0x16] = '\0';
  pCVar4->field5_0xbef8[0x17] = '\0';
  pCVar4->stone_red = 0x80;
  pCVar4->stone_green = 0x80;
  pCVar4->stone_blue = 0x80;
  pCVar4->field5_0xbef8[0] = '\0';
  uVar2 = _DAT_0065ea30;
  pCVar4->field5_0xbef8[1] = '\0';
  pCVar4->field5_0xbef8[2] = '\0';
  pCVar4->field5_0xbef8[3] = '\0';
  pCVar4->field5_0xbef8[0x18] = '\0';
  uVar3 = _DAT_0065ea34;
  pCVar4->field5_0xbef8[0x19] = '\0';
  pCVar4->field5_0xbef8[0x1a] = '\0';
  pCVar4->field5_0xbef8[0x1b] = '\0';
  pCVar4->field5_0xbef8[0x1c] = '\0';
  pCVar4->field5_0xbef8[0x1d] = '\0';
  pCVar4->field5_0xbef8[0x1e] = '\0';
  pCVar4->field5_0xbef8[0x1f] = '\0';
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
// 004e44e0: PUSH EBX
//   Label: core_gargoyle.cpp_FUN_004e44e0
// 004e44e1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e44e5: PUSH EDX
// 004e44e6: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 004e44eb: ADD ESP,0x4
// 004e44ee: PUSH 0x62d7d6
//   XREF to: 0062d7d6 (DATA)
// 004e44f3: MOV EBX,EAX
// 004e44f5: ADD EAX,0x158
// 004e44fa: PUSH EAX
// 004e44fb: MOV dword ptr [EAX + -0x4],0x65ea44
//   XREF to: 0065ea44 (DATA)
// 004e4502: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004e4507: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 004e4511: MOV dword ptr [EBX + 0x2de0],0x3f19999a
// 004e451b: MOV dword ptr [EBX + 0x2610],0x2
// 004e4525: MOV dword ptr [EBX + 0x243c],0x41f00000
// 004e452f: MOV dword ptr [EBX + 0x108],0xffff
// 004e4539: MOV dword ptr [EBX + 0x10c],0xffff
// 004e4543: MOV dword ptr [EBX + 0x110],0xffff
// 004e454d: MOV dword ptr [EBX + 0xbf04],0xffff
// 004e4557: MOV dword ptr [EBX + 0xbf08],0xffff
// 004e4561: MOV dword ptr [EBX + 0xbf0c],0xffff
// 004e456b: MOV dword ptr [EBX + 0xbeec],0x80
// 004e4575: MOV dword ptr [EBX + 0xbef0],0x80
// 004e457f: MOV dword ptr [EBX + 0xbef4],0x80
// 004e4589: MOV dword ptr [EBX + 0xbef8],0x0
// 004e4593: FLD float ptr [0x0065ea30]
//   XREF to: 0065ea30 (READ)
// 004e4599: MOV dword ptr [EBX + 0xbf10],0x0
// 004e45a3: FLD float ptr [0x0065ea34]
//   XREF to: 0065ea34 (READ)
// 004e45a9: MOV dword ptr [EBX + 0xbf14],0x0
// 004e45b3: ADD ESP,0x8
// 004e45b6: MOV dword ptr [EBX + 0x2624],0x0
// 004e45c0: MOV EAX,EBX
// 004e45c2: FXCH
// 004e45c4: FSTP float ptr [EBX + 0x2de4]
// 004e45ca: FSTP float ptr [EBX + 0x2de8]
// 004e45d0: POP EBX
// 004e45d1: RET
