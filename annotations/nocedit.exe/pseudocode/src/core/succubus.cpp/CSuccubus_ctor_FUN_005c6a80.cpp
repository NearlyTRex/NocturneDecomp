// Name: core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80
// Address: 005c6a80
// Address Range: [[005c6a80, 005c6b54]]
// Convention: __cdecl
// Signature: CSuccubus * core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus * this_ptr)
// Cross-references:
//   core_succubus.cpp_FUN_005c6a40 (005c6a40) at 005c6a5a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_succubus_dfm_00653fd8
//   TerminatedCString s_hotdemon_dfm_00653fe5
//   TerminatedCString s_hdwing_cth_00653ff2
//   undefined4 s_dwing.cth_00653ff3
//   undefined4 s_wing.cth_00653ff4
//   undefined4 s_ing.cth_00653ff5
//   undefined4 DAT_0066392c
//   undefined4 PTR_FUN_0066392d+3
//   CDemonActor_vtable g_CSuccubusVTable
// Function calls:
//   core_cloth.cpp_FUN_0043bf40
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_morph.cpp_FUN_0052b310
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSuccubus * __cdecl core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(CSuccubus *this_ptr)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CEnemy *pCVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
            ((CDeformableModelInstance *)(pCVar4[1].base_character.base_actor.actor_name + 8));
  core_cloth_cpp_FUN_0043bf40();
  iVar5 = core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(iVar5 + -0xe1e8) = &g_CSuccubusVTable;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            ((CDeformableModelInstance *)(iVar5 + -0xe1e4));
  pcVar6 = "hdwing.cth";
  pcVar7 = (char *)(iVar5 + -0x1c8);
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            ((CDeformableModelInstance *)(iVar5 + -0x2480));
  *(undefined4 *)(iVar5 + -0xb560) = 0x3f19999a;
  uVar2 = _DAT_0066392c;
  *(undefined4 *)(iVar5 + -0xb55c) = 0x3f666666;
  uVar3 = _PTR_FUN_0066392d_3;
  *(undefined4 *)(iVar5 + -0x1cc) = 1;
  *(undefined4 *)(iVar5 + -0xb558) = uVar2;
  *(undefined4 *)(iVar5 + -0xb554) = uVar3;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') {
      return (CSuccubus *)(iVar5 + -0xe33c);
    }
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  return (CSuccubus *)(iVar5 + -0xe33c);
}


// Assembly code:
// 005c6a80: PUSH EBX
//   Label: core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80
// 005c6a81: PUSH ESI
// 005c6a82: PUSH EDI
// 005c6a83: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005c6a87: PUSH EBX
// 005c6a88: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 005c6a8d: ADD ESP,0x4
// 005c6a90: ADD EAX,0xbebc
// 005c6a95: PUSH EAX
// 005c6a96: CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
// 005c6a9b: ADD ESP,0x4
// 005c6a9e: ADD EAX,0x22b4
// 005c6aa3: PUSH EAX
// 005c6aa4: CALL core_cloth.cpp_FUN_0043bf40
//   XREF to: 0043bf40 (UNCONDITIONAL_CALL)
// 005c6aa9: ADD ESP,0x4
// 005c6aac: ADD EAX,0x1cc
// 005c6ab1: PUSH EAX
// 005c6ab2: CALL core_morph.cpp_FUN_0052b310
//   XREF to: 0052b310 (UNCONDITIONAL_CALL)
// 005c6ab7: ADD ESP,0x4
// 005c6aba: LEA EBX,[EAX + 0xffff1cc4]
// 005c6ac0: PUSH 0x653fd8
//   XREF to: 00653fd8 (DATA)
// 005c6ac5: LEA EAX,[EBX + 0x158]
// 005c6acb: PUSH EAX
// 005c6acc: MOV dword ptr [EBX + 0x154],0x663944
//   XREF to: 00663944 (DATA)
// 005c6ad6: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005c6adb: ADD ESP,0x8
// 005c6ade: PUSH 0x653fe5
//   XREF to: 00653fe5 (DATA)
// 005c6ae3: LEA EAX,[EBX + 0xbebc]
// 005c6ae9: PUSH EAX
// 005c6aea: MOV ESI,0x653ff2
//   XREF to: 00653ff2 (DATA)
// 005c6aef: LEA EDI,[EBX + 0xe174]
// 005c6af5: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005c6afa: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 005c6b04: FLD float ptr [0x0066392c]
//   XREF to: 0066392c (READ)
// 005c6b0a: MOV dword ptr [EBX + 0x2de0],0x3f666666
// 005c6b14: FLD float ptr [0x00663930]
//   XREF to: 00663930 (READ)
// 005c6b1a: MOV dword ptr [EBX + 0xe170],0x1
// 005c6b24: ADD ESP,0x8
// 005c6b27: FXCH
// 005c6b29: FSTP float ptr [EBX + 0x2de4]
// 005c6b2f: FSTP float ptr [EBX + 0x2de8]
// 005c6b35: PUSH EDI
// 005c6b36: MOV AL,byte ptr [ESI]
//   Label: LAB_005c6b36
//   XREF to: 00653ff2 (READ)
//   XREF to: 00653ff4 (READ)
// 005c6b38: MOV byte ptr [EDI],AL
// 005c6b3a: CMP AL,0x0
// 005c6b3c: JZ 0x005c6b4e
//   XREF to: 005c6b4e (CONDITIONAL_JUMP)
// 005c6b3e: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00653ff3 (READ)
//   XREF to: 00653ff5 (READ)
// 005c6b41: ADD ESI,0x2
// 005c6b44: MOV byte ptr [EDI + 0x1],AL
// 005c6b47: ADD EDI,0x2
// 005c6b4a: CMP AL,0x0
// 005c6b4c: JNZ 0x005c6b36
//   XREF to: 005c6b36 (CONDITIONAL_JUMP)
// 005c6b4e: POP EDI
//   Label: LAB_005c6b4e
// 005c6b4f: MOV EAX,EBX
// 005c6b51: POP EDI
// 005c6b52: POP ESI
// 005c6b53: POP EBX
// 005c6b54: RET
