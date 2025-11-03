// Name: core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850
// Address: 005d8850
// Address Range: [[005d8850, 005d88d7]]
// Convention: __cdecl
// Signature: CSvetlana * core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850(CSvetlana * this_ptr)
// Cross-references:
//   core_svetlana.cpp_FUN_005d8810 (005d8810) at 005d882a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_svetlana_dfm_006548f9
//   CDemonActor_vtable g_CSvetlanaVTable
// Function calls:
//   core_cloth.cpp_FUN_00438ba0
//   core_hero.cpp_FUN_004f2340
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_ctor_FUN_005d8850(CSvetlana *this_ptr)

{
  int iVar1;
  
  core_hero_cpp_FUN_004f2340();
  core_cloth_cpp_FUN_00438ba0();
  iVar1 = core_cloth_cpp_FUN_00438ba0();
  *(CDemonActor_vtable **)(iVar1 + -0x5f8f8) = &g_CSvetlanaVTable;
  *(undefined4 *)(iVar1 + -0x3fe78) = 0;
  *(undefined4 *)(iVar1 + -0x3fe74) = 0;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            ((CDeformableModelInstance *)(iVar1 + -0x5f8f4));
  *(undefined4 *)(iVar1 + 0x3fe80) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x3fe7c) = 0;
  *(undefined4 *)(iVar1 + 0x3fe78) = *(undefined4 *)(iVar1 + 0x3fe7c);
  *(undefined4 *)(iVar1 + 0x3fe74) = *(undefined4 *)(iVar1 + 0x3fe78);
  return (CSvetlana *)(iVar1 + -0x5fa4c);
}


// Assembly code:
// 005d8850: PUSH EBX
//   Label: core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850
// 005d8851: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d8855: PUSH EBX
// 005d8856: CALL core_hero.cpp_FUN_004f2340
//   XREF to: 004f2340 (UNCONDITIONAL_CALL)
// 005d885b: ADD ESP,0x4
// 005d885e: ADD EAX,0x1fbdc
// 005d8863: PUSH EAX
// 005d8864: CALL core_cloth.cpp_FUN_00438ba0
//   XREF to: 00438ba0 (UNCONDITIONAL_CALL)
// 005d8869: ADD ESP,0x4
// 005d886c: ADD EAX,0x3fe70
// 005d8871: PUSH EAX
// 005d8872: CALL core_cloth.cpp_FUN_00438ba0
//   XREF to: 00438ba0 (UNCONDITIONAL_CALL)
// 005d8877: ADD ESP,0x4
// 005d887a: LEA EBX,[EAX + 0xfffa05b4]
// 005d8880: PUSH 0x6548f9
//   XREF to: 006548f9 (DATA)
// 005d8885: MOV dword ptr [EBX + 0x154],0x663d64
//   XREF to: 00663d64 (DATA)
// 005d888f: LEA EAX,[EBX + 0x158]
// 005d8895: MOV dword ptr [EBX + 0x1fbd4],0x0
// 005d889f: PUSH EAX
// 005d88a0: MOV dword ptr [EBX + 0x1fbd8],0x0
// 005d88aa: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005d88af: LEA EAX,[EBX + 0x9f8c0]
// 005d88b5: MOV dword ptr [EBX + 0x9f8cc],0x3f800000
// 005d88bf: MOV dword ptr [EAX + 0x8],0x0
// 005d88c6: ADD ESP,0x8
// 005d88c9: MOV EDX,dword ptr [EAX + 0x8]
// 005d88cc: MOV dword ptr [EAX + 0x4],EDX
// 005d88cf: MOV EDX,dword ptr [EAX + 0x4]
// 005d88d2: MOV dword ptr [EAX],EDX
// 005d88d4: MOV EAX,EBX
// 005d88d6: POP EBX
// 005d88d7: RET
