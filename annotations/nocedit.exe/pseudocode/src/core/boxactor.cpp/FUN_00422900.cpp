// Name: core_boxactor.cpp_FUN_00422900
// Address: 00422900
// Address Range: [[00422900, 00422941]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422900()
// Globals:
//   TerminatedCString s_MODELS_s_006168e8
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_00422900(undefined4 param_1, undefined4
   param_2) */

void core_boxactor_cpp_FUN_00422900(void)

{
  CKeyFramedModel *pCVar1;
  FILE *dependency_file;
  int in_stack_00000004;
  FILE *in_stack_0000000c;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000000c,"MODELS\\%s\n",pCVar1);
  dependency_file = (FILE *)0x0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
            (pCVar1,dependency_file,in_stack_00000004);
  return;
}


// Assembly code:
// 00422900: PUSH EBX
//   Label: core_boxactor.cpp_FUN_00422900
// 00422901: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00422905: ADD EBX,0x158
// 0042290b: PUSH EBX
// 0042290c: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00422911: ADD ESP,0x4
// 00422914: PUSH EAX
// 00422915: PUSH 0x6168e8
//   XREF to: 006168e8 (DATA)
// 0042291a: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0042291e: PUSH EDX
// 0042291f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00422924: ADD ESP,0xc
// 00422927: PUSH 0x0
// 00422929: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0042292d: PUSH ECX
// 0042292e: PUSH EBX
// 0042292f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00422934: ADD ESP,0x4
// 00422937: PUSH EAX
// 00422938: CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   XREF to: 0047ed00 (UNCONDITIONAL_CALL)
// 0042293d: ADD ESP,0xc
// 00422940: POP EBX
// 00422941: RET
