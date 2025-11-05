// Name: core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590
// Address: 005e5590
// Address Range: [[005e5590, 005e56bf]]
// Convention: __cdecl
// Signature: CVampireBoss * core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss * this_ptr)
// Cross-references:
//   core_vampboss.cpp_FUN_005e5550 (005e5550) at 005e556a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_nosfer_dfm_00656ac5
//   TerminatedCString s_batboss_dfm_00656ad0
//   CDemonActor_vtable g_CVampireBossVTable
// Function calls:
//   core_cloth.cpp_FUN_00438ba0
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_morph.cpp_FUN_0052b310
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(CVampireBoss *this_ptr)

{
  CEnemy *pCVar1;
  int iVar2;
  int iStack00000008;
  
  pCVar1 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
            ((CDeformableModelInstance *)(pCVar1[1].base_character.base_actor.actor_name + 8));
  core_cloth_cpp_FUN_00438ba0();
  iStack00000008 = core_cloth_cpp_FUN_00438ba0();
  iStack00000008 = iStack00000008 + 0x3fe70;
  core_cloth_cpp_FUN_00438ba0();
  iStack00000008 = 0x5e55e1;
  iVar2 = core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(iVar2 + -0xcdb70) = &g_CVampireBossVTable;
  iStack00000008 = 0x5e5605;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar2 + -0xcdb6c),"nosfer.dfm");
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar2 + -0xc1e08),"batboss.dfm");
  *(undefined4 *)(iVar2 + -0xcaee8) = 0x40000000;
  *(undefined4 *)(iVar2 + -0xcaee4) = 0x40400000;
  *(undefined4 *)(iVar2 + -0xcaee0) = 0x42480000;
  *(undefined4 *)(iVar2 + -0xcaedc) = 0x42c80000;
  *(undefined4 *)(iVar2 + 0xc30) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + 0xc2c) = 0;
  *(undefined4 *)(iVar2 + 0xc48) = 0;
  *(undefined4 *)(iVar2 + 0xc4c) = 0;
  *(undefined4 *)(iVar2 + 0xc50) = 0;
  *(undefined4 *)(iVar2 + 0xc54) = 0;
  *(undefined4 *)(iVar2 + 0xc44) = 0;
  *(undefined4 *)(iVar2 + 0xc58) = 0;
  *(undefined4 *)(iVar2 + 0xc34) = 0x41200000;
  *(undefined4 *)(iVar2 + 0xc40) = 1;
  *(undefined4 *)(iVar2 + -0xcb6a0) = 0;
  return (CVampireBoss *)(iVar2 + -0xcdcc4);
}


// Assembly code:
// 005e5590: PUSH EBX
//   Label: core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590
// 005e5591: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e5595: PUSH EBX
// 005e5596: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 005e559b: ADD ESP,0x4
// 005e559e: ADD EAX,0xbebc
// 005e55a3: PUSH EAX
// 005e55a4: CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
// 005e55a9: ADD ESP,0x4
// 005e55ac: ADD EAX,0x22b4
// 005e55b1: PUSH EAX
// 005e55b2: CALL core_cloth.cpp_FUN_00438ba0
//   XREF to: 00438ba0 (UNCONDITIONAL_CALL)
// 005e55b7: ADD ESP,0x4
// 005e55ba: ADD EAX,0x3fe70
// 005e55bf: PUSH EAX
// 005e55c0: CALL core_cloth.cpp_FUN_00438ba0
//   XREF to: 00438ba0 (UNCONDITIONAL_CALL)
// 005e55c5: ADD ESP,0x4
// 005e55c8: ADD EAX,0x3fe70
// 005e55cd: PUSH EAX
// 005e55ce: CALL core_cloth.cpp_FUN_00438ba0
//   XREF to: 00438ba0 (UNCONDITIONAL_CALL)
// 005e55d3: ADD ESP,0x4
// 005e55d6: ADD EAX,0x3fe74
// 005e55db: PUSH EAX
// 005e55dc: CALL core_morph.cpp_FUN_0052b310
//   XREF to: 0052b310 (UNCONDITIONAL_CALL)
// 005e55e1: ADD ESP,0x4
// 005e55e4: LEA EBX,[EAX + 0xfff3233c]
// 005e55ea: PUSH 0x656ac5
//   XREF to: 00656ac5 (DATA)
// 005e55ef: LEA EAX,[EBX + 0x158]
// 005e55f5: PUSH EAX
// 005e55f6: MOV dword ptr [EBX + 0x154],0x664e94
//   XREF to: 00664e94 (DATA)
// 005e5600: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005e5605: ADD ESP,0x8
// 005e5608: PUSH 0x656ad0
//   XREF to: 00656ad0 (DATA)
// 005e560d: LEA EAX,[EBX + 0xbebc]
// 005e5613: PUSH EAX
// 005e5614: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005e5619: MOV dword ptr [EBX + 0x2ddc],0x40000000
// 005e5623: MOV dword ptr [EBX + 0x2de0],0x40400000
// 005e562d: MOV dword ptr [EBX + 0x2de4],0x42480000
// 005e5637: MOV dword ptr [EBX + 0x2de8],0x42c80000
// 005e5641: MOV dword ptr [EBX + 0xce8f4],0x0
// 005e564b: MOV dword ptr [EBX + 0xcdcc0],0x0
// 005e5655: MOV dword ptr [EBX + 0xce8f0],0x0
// 005e565f: MOV dword ptr [EBX + 0xce90c],0x0
// 005e5669: MOV dword ptr [EBX + 0xce910],0x0
// 005e5673: MOV dword ptr [EBX + 0xce914],0x0
// 005e567d: MOV dword ptr [EBX + 0xce918],0x0
// 005e5687: MOV dword ptr [EBX + 0xce908],0x0
// 005e5691: MOV dword ptr [EBX + 0xce91c],0x0
// 005e569b: MOV dword ptr [EBX + 0xce8f8],0x41200000
// 005e56a5: ADD ESP,0x8
// 005e56a8: MOV dword ptr [EBX + 0xce904],0x1
// 005e56b2: MOV EAX,EBX
// 005e56b4: MOV dword ptr [EBX + 0x2624],0x0
// 005e56be: POP EBX
// 005e56bf: RET
