// Name: core_skeleton.cpp_CDeformableModelInstance_UnknownSomethingFreeMem2_FUN_0059df40
// Address: 0059df40
// Address Range: [[0059df40, 0059df7d]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_UnknownSomethingFreeMem2_FUN_0059df40()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0 (0059deb0) at 0059deb7 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 (0059de40) at 0059de54 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064edae
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659

#include "nocturne.h"

/* Signature: undefined1
   core_skeleton.cpp_CDeformableModelInstance_UnknownSomethingFreeMem2(CDeformableModelInstance*
   param_1) */

void core_skeleton_cpp_CDeformableModelInstance_UnknownSomethingFreeMem2_FUN_0059df40(void)

{
  int in_stack_00000004;
  
  if (*(void **)(in_stack_00000004 + 0x2234) == (void *)0x0) {
    return;
  }
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0x905;
  crt_memory_c_free_FUN_005fe659(*(void **)(in_stack_00000004 + 0x2234));
  *(undefined4 *)(in_stack_00000004 + 0x2234) = 0;
  return;
}


// Assembly code:
// 0059df40: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_UnknownSomethingFreeMem2_FUN_0059df40
// 0059df41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0059df45: MOV EDX,dword ptr [EBX + 0x2234]
// 0059df4b: TEST EDX,EDX
// 0059df4d: JNZ 0x0059df51
//   XREF to: 0059df51 (CONDITIONAL_JUMP)
// 0059df4f: POP EBX
// 0059df50: RET
// 0059df51: PUSH ESI
//   Label: LAB_0059df51
// 0059df52: MOV ECX,0x64edae
//   XREF to: 0064edae (PARAM)
// 0059df57: MOV ESI,0x905
// 0059df5c: PUSH EDX
// 0059df5d: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0059df63: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 0059df69: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0059df6e: ADD ESP,0x4
// 0059df71: MOV dword ptr [EBX + 0x2234],0x0
// 0059df7b: POP ESI
// 0059df7c: POP EBX
// 0059df7d: RET
