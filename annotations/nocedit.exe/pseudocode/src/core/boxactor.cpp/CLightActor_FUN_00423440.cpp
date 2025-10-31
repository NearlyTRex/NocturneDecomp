// Name: core_boxactor.cpp_CLightActor_FUN_00423440
// Address: 00423440
// Address Range: [[00423440, 004234da]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CLightActor_FUN_00423440()
// Cross-references:
//   core_boxactor.cpp_CLightActor_FUN_004234e0 (004234e0) at 0042355b [DATA]
// Globals:
//   TerminatedCString s_Enter_FOV_mm_for_CLightA_006169de
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   undefined4 g_CLightActorClassInfo.name_hash
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0

#include "nocturne.h"

undefined4
core_boxactor_cpp_CLightActor_FUN_00423440
          (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
          CDemonActor *param_5,undefined4 param_6)

{
  CDemonActor *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char acStack_134 [296];
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(param_5,g_CLightActorClassInfo.name_hash);
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffec8,"Enter FOV (mm) for CLightActor %s",param_6);
  iVar2 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,acStack_134,(float *)&stack0xfffffff8,true,1.0,9999.0,true);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(pCVar1[4].metadata.field3_0x1c + 4) = unaff_EBX;
  return 1;
}


// Assembly code:
// 00423440: PUSH EBX
//   Label: core_boxactor.cpp_CLightActor_FUN_00423440
// 00423441: PUSH ESI
// 00423442: PUSH EDI
// 00423443: SUB ESP,0x130
// 00423449: MOV EDX,dword ptr [0x00822c84]
//   XREF to: 00822c84 (READ)
// 0042344f: PUSH EDX
// 00423450: MOV ECX,dword ptr [ESP + 0x144]
//   XREF to: Stack[0x4] (READ)
// 00423457: PUSH ECX
// 00423458: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0042345d: ADD ESP,0x8
// 00423460: MOV ESI,dword ptr [ESP + 0x140]
//   XREF to: Stack[0x4] (READ)
// 00423467: LEA EBX,[EAX + 0x670]
// 0042346d: PUSH ESI
// 0042346e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x13c] (DATA)
// 00423472: PUSH 0x6169de
//   XREF to: 006169de (DATA)
// 00423477: FLD float ptr [EBX + 0x38]
// 0042347a: PUSH EAX
// 0042347b: FSTP float ptr [ESP + 0x138]
//   XREF to: Stack[-0x10] (WRITE)
// 00423482: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00423487: ADD ESP,0xc
// 0042348a: PUSH 0x1
// 0042348c: PUSH 0x461c3c00
// 00423491: PUSH 0x3f800000
// 00423496: PUSH 0x1
// 00423498: LEA EAX,[ESP + 0x13c]
//   XREF to: Stack[-0x10] (DATA)
// 0042349f: PUSH EAX
// 004234a0: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x13c] (DATA)
// 004234a4: PUSH EAX
// 004234a5: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004234ab: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004234ac: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 004234b1: ADD ESP,0x1c
// 004234b4: TEST EAX,EAX
// 004234b6: JNZ 0x004234c2
//   XREF to: 004234c2 (CONDITIONAL_JUMP)
// 004234b8: ADD ESP,0x130
// 004234be: POP EDI
// 004234bf: POP ESI
// 004234c0: POP EBX
// 004234c1: RET
// 004234c2: MOV EAX,dword ptr [ESP + 0x12c]
//   Label: LAB_004234c2
//   XREF to: Stack[-0x10] (READ)
// 004234c9: MOV dword ptr [EBX + 0x38],EAX
// 004234cc: MOV EAX,0x1
// 004234d1: ADD ESP,0x130
// 004234d7: POP EDI
// 004234d8: POP ESI
// 004234d9: POP EBX
// 004234da: RET
