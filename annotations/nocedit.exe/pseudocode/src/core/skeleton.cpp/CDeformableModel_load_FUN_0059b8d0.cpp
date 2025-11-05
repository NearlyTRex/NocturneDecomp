// Name: core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0
// Address: 0059b8d0
// Address Range: [[0059b8d0, 0059b960]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0(CDeformableModel * this_ptr, char * filename)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 (004be070) at 004be0e9 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_getDeformableModel_FUN_005a1cf0 (005a1cf0) at 005a1d9d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rt_0064e860
//   TerminatedCString s_models_0064e863
//   TerminatedCString s_core_skeleton_cpp_0064e86a
//   TerminatedCString s_CDeformableModel_load_Ca_0064e87f
//   TerminatedCString s_core_skeleton_cpp_0064e8a6
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_load_FUN_0059b8d0(CDeformableModel *this_ptr,char *filename)

{
  char cVar1;
  FILE *file_handle;
  char *pcVar2;
  char *pcVar3;
  CDeformableModel *in_stack_0000000c;
  
  pcVar3 = this_ptr->model_filename;
  pcVar2 = filename;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  file_handle = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rt");
  if (file_handle == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x4b2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::load - Can't open %s",filename);
  }
  core_skeleton_cpp_CDeformableModel_loadStream_FUN_0059b970(in_stack_0000000c,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\skeleton.cpp",0x4b4);
  return;
}


// Assembly code:
// 0059b8d0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0
// 0059b8d1: PUSH ESI
// 0059b8d2: PUSH EDI
// 0059b8d3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0059b8d7: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0059b8db: MOV ESI,EBX
// 0059b8dd: ADD EDI,0x8fb0
// 0059b8e3: PUSH EDI
// 0059b8e4: MOV AL,byte ptr [ESI]
//   Label: LAB_0059b8e4
// 0059b8e6: MOV byte ptr [EDI],AL
// 0059b8e8: CMP AL,0x0
// 0059b8ea: JZ 0x0059b8fc
//   XREF to: 0059b8fc (CONDITIONAL_JUMP)
// 0059b8ec: MOV AL,byte ptr [ESI + 0x1]
// 0059b8ef: ADD ESI,0x2
// 0059b8f2: MOV byte ptr [EDI + 0x1],AL
// 0059b8f5: ADD EDI,0x2
// 0059b8f8: CMP AL,0x0
// 0059b8fa: JNZ 0x0059b8e4
//   XREF to: 0059b8e4 (CONDITIONAL_JUMP)
// 0059b8fc: POP EDI
//   Label: LAB_0059b8fc
// 0059b8fd: PUSH 0x64e860
//   XREF to: 0064e860 (DATA)
// 0059b902: PUSH EBX
// 0059b903: PUSH 0x64e863
//   XREF to: 0064e863 (DATA)
// 0059b908: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0059b90d: ADD ESP,0xc
// 0059b910: MOV EDI,EAX
// 0059b912: TEST EAX,EAX
// 0059b914: JZ 0x0059b93b
//   XREF to: 0059b93b (CONDITIONAL_JUMP)
// 0059b916: PUSH EDI
//   Label: LAB_0059b916
// 0059b917: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059b91b: PUSH EBX
// 0059b91c: CALL core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970
//   XREF to: 0059b970 (UNCONDITIONAL_CALL)
// 0059b921: ADD ESP,0x8
// 0059b924: PUSH 0x4b4
// 0059b929: PUSH 0x64e8a6
//   XREF to: 0064e8a6 (DATA)
// 0059b92e: PUSH EDI
// 0059b92f: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0059b934: ADD ESP,0xc
// 0059b937: POP EDI
// 0059b938: POP ESI
// 0059b939: POP EBX
// 0059b93a: RET
// 0059b93b: PUSH EBX
//   Label: LAB_0059b93b
// 0059b93c: MOV EDX,0x64e86a
//   XREF to: 0064e86a (PARAM)
// 0059b941: MOV ECX,0x4b2
// 0059b946: PUSH 0x64e87f
//   XREF to: 0064e87f (DATA)
// 0059b94b: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0059b951: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0059b957: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059b95c: ADD ESP,0x8
// 0059b95f: JMP 0x0059b916
//   XREF to: 0059b916 (UNCONDITIONAL_JUMP)
