// Name: core_dmodel.cpp_writeModelDependencies_FUN_0047ee30
// Address: 0047ee30
// Address Range: [[0047ee30, 0047eeed]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_writeModelDependencies_FUN_0047ee30(FILE * dependency_file, char * model_filename)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230 (004be230) at 004be257 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00584e70 (00584e70) at 00585093 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_models_s_00620f2e
//   TerminatedCString s_core_dmodel_cpp_00620f39
//   TerminatedCString s_core_dmodel_cpp_00620f4c
//   TerminatedCString s_Out_of_memory_00620f5f
//   TerminatedCString s_core_dmodel_cpp_00620f6e
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_writeModelDependencies_FUN_0047ee30(FILE *dependency_file,char *model_filename)

{
  CKeyFramedModel *pCVar1;
  FILE *in_stack_00000014;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(dependency_file,"models\\%s\n",model_filename);
  pCVar1 = (CKeyFramedModel *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x56d8,"..\\core\\dmodel.cpp",0xe8a);
  if (pCVar1 != (CKeyFramedModel *)0x0) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(pCVar1);
  }
  if (pCVar1 == (CKeyFramedModel *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0xe8b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
  }
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(pCVar1,(char *)in_stack_00000014);
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(pCVar1,in_stack_00000014,0);
  g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
  g_CurrentDebugLine = 0xe8e;
  if (pCVar1 == (CKeyFramedModel *)0x0) {
    return;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(pCVar1);
  shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  return;
}


// Assembly code:
// 0047ee30: PUSH EBX
//   Label: core_dmodel.cpp_writeModelDependencies_FUN_0047ee30
// 0047ee31: PUSH EBP
// 0047ee32: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0047ee36: PUSH EDX
// 0047ee37: PUSH 0x620f2e
//   XREF to: 00620f2e (DATA)
// 0047ee3c: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047ee40: PUSH ECX
// 0047ee41: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0047ee46: ADD ESP,0xc
// 0047ee49: PUSH 0xe8a
// 0047ee4e: PUSH 0x620f39
//   XREF to: 00620f39 (DATA)
// 0047ee53: PUSH 0x56d8
// 0047ee58: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0047ee5d: ADD ESP,0xc
// 0047ee60: TEST EAX,EAX
// 0047ee62: JNZ 0x0047eecc
//   XREF to: 0047eecc (CONDITIONAL_JUMP)
// 0047ee64: MOV EBX,EAX
//   Label: LAB_0047ee64
// 0047ee66: TEST EAX,EAX
// 0047ee68: JNZ 0x0047ee91
//   XREF to: 0047ee91 (CONDITIONAL_JUMP)
// 0047ee6a: PUSH EDI
// 0047ee6b: PUSH ESI
// 0047ee6c: MOV ESI,0x620f4c
//   XREF to: 00620f4c (DATA)
// 0047ee71: MOV EDI,0xe8b
// 0047ee76: PUSH 0x620f5f
//   XREF to: 00620f5f (DATA)
// 0047ee7b: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0047ee81: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0047ee87: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047ee8c: ADD ESP,0x4
// 0047ee8f: POP ESI
// 0047ee90: POP EDI
// 0047ee91: MOV EBP,dword ptr [ESP + 0x10]
//   Label: LAB_0047ee91
//   XREF to: Stack[0x8] (READ)
// 0047ee95: PUSH EBP
// 0047ee96: PUSH EBX
// 0047ee97: CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   XREF to: 00476db0 (UNCONDITIONAL_CALL)
// 0047ee9c: ADD ESP,0x8
// 0047ee9f: PUSH 0x0
// 0047eea1: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0047eea5: PUSH EAX
// 0047eea6: PUSH EBX
// 0047eea7: CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   XREF to: 0047ed00 (UNCONDITIONAL_CALL)
// 0047eeac: MOV EDX,0x620f6e
//   XREF to: 00620f6e (PARAM)
// 0047eeb1: MOV ECX,0xe8e
// 0047eeb6: ADD ESP,0xc
// 0047eeb9: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 0047eebf: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 0047eec5: TEST EBX,EBX
// 0047eec7: JNZ 0x0047eed7
//   XREF to: 0047eed7 (CONDITIONAL_JUMP)
// 0047eec9: POP EBP
// 0047eeca: POP EBX
// 0047eecb: RET
// 0047eecc: PUSH EAX
//   Label: LAB_0047eecc
// 0047eecd: CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   XREF to: 00476cf0 (UNCONDITIONAL_CALL)
// 0047eed2: ADD ESP,0x4
// 0047eed5: JMP 0x0047ee64
//   XREF to: 0047ee64 (UNCONDITIONAL_JUMP)
// 0047eed7: PUSH 0x0
//   Label: LAB_0047eed7
// 0047eed9: PUSH EBX
// 0047eeda: CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
//   XREF to: 00476d90 (UNCONDITIONAL_CALL)
// 0047eedf: ADD ESP,0x8
// 0047eee2: PUSH EAX
// 0047eee3: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0047eee8: ADD ESP,0x4
// 0047eeeb: POP EBP
// 0047eeec: POP EBX
// 0047eeed: RET
