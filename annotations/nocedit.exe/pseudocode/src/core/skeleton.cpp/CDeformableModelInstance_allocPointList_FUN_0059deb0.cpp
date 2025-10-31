// Name: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0
// Address: 0059deb0
// Address Range: [[0059deb0, 0059df33]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0480 (005a0480) at 005a0583 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064ed3e
//   TerminatedCString s_core_skeleton_cpp_0064ed53
//   TerminatedCString s_CDeformableModelInstance_0064ed68
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_UnknownSomethingFreeMem2_FUN_0059df40
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModelInstance_allocPointList(undefined4
   param_1) */

void core_skeleton_cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0(void)

{
  int iVar1;
  void *pvVar2;
  int in_stack_00000004;
  
  core_skeleton_cpp_CDeformableModelInstance_UnknownSomethingFreeMem2_FUN_0059df40();
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  iVar1 = *(int *)(iVar1 + 0x2c);
  pvVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(iVar1 * 0xc,"..\\core\\skeleton.cpp",0x8f9);
  *(void **)(in_stack_00000004 + 0x2234) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    *(undefined4 *)(in_stack_00000004 + 0x2230) = 0xffffffff;
    return;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 0x8fa;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModelInstance::allocPointList out of memory for %d points!",iVar1);
  *(undefined4 *)(in_stack_00000004 + 0x2230) = 0xffffffff;
  return;
}


// Assembly code:
// 0059deb0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0
// 0059deb1: PUSH ESI
// 0059deb2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0059deb6: PUSH EBX
// 0059deb7: CALL core_skeleton.cpp_CDeformableModelInstance_UnknownSomethingFreeMem2_FUN_0059df40
//   XREF to: 0059df40 (UNCONDITIONAL_CALL)
// 0059debc: ADD ESP,0x4
// 0059debf: PUSH EBX
// 0059dec0: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0059dec5: MOV ESI,dword ptr [EAX + 0x2c]
// 0059dec8: ADD ESP,0x4
// 0059decb: LEA EAX,[ESI*0x4 + 0x0]
// 0059ded2: PUSH 0x8f9
// 0059ded7: SUB EAX,ESI
// 0059ded9: PUSH 0x64ed3e
//   XREF to: 0064ed3e (DATA)
// 0059dede: SHL EAX,0x2
// 0059dee1: PUSH EAX
// 0059dee2: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0059dee7: ADD ESP,0xc
// 0059deea: MOV dword ptr [EBX + 0x2234],EAX
// 0059def0: TEST EAX,EAX
// 0059def2: JZ 0x0059df01
//   XREF to: 0059df01 (CONDITIONAL_JUMP)
// 0059def4: MOV dword ptr [EBX + 0x2230],0xffffffff
// 0059defe: POP ESI
// 0059deff: POP EBX
// 0059df00: RET
// 0059df01: PUSH EDI
//   Label: LAB_0059df01
// 0059df02: PUSH ESI
// 0059df03: MOV ECX,0x64ed53
//   XREF to: 0064ed53 (PARAM)
// 0059df08: MOV EDI,0x8fa
// 0059df0d: PUSH 0x64ed68
//   XREF to: 0064ed68 (DATA)
// 0059df12: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0059df18: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0059df1e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059df23: ADD ESP,0x8
// 0059df26: POP EDI
// 0059df27: MOV dword ptr [EBX + 0x2230],0xffffffff
// 0059df31: POP ESI
// 0059df32: POP EBX
// 0059df33: RET
