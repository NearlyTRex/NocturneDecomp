// Name: engine_model.c_loadModelFile_FUN_00527ec0
// Address: 00527ec0
// Address Range: [[00527ec0, 005280a1]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_00527ec0(char * filename)
// Cross-references:
//   engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610 (004b5610) at 004b5616 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0 (004b54e0) at 004b5594 [UNCONDITIONAL_CALL]
//   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40 (00501d40) at 00501e92 [UNCONDITIONAL_CALL]
//   engine_model.c_getMRGLBounds_FUN_00528140 (00528140) at 00528554 [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_FUN_00545060 (00545060) at 00545108 [UNCONDITIONAL_CALL]
//   shape_design.c_centerKeyframeModels_FUN_004681a0 (004681a0) at 004681f5 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 00458886 [UNCONDITIONAL_CALL]
//   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 (0048fed0) at 0048ff24 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_t_00639a2e
//   TerminatedCString s_models_00639aab
//   TerminatedCString s_Unable_to_get_file_size__00639ab2
//   TerminatedCString s_engine_model_c_00639ace
//   TerminatedCString s_rb_00639ae0
//   TerminatedCString s_models_00639ae3
//   TerminatedCString s_Unable_to_open_model_s_00639aea
//   TerminatedCString s_engine_model_c_00639b03
//   TerminatedCString s_engine_model_c_00639b15
//   TerminatedCString s_Out_of_model_memory_s_00639b27
//   TerminatedCString s_engine_model_c_00639b3f
//   TerminatedCString s_Model_file_read_error_s_00639b51
//   TerminatedCString s_engine_model_c_00639b6b
//   TerminatedCString s_engine_model_c_00639b7d
//   TerminatedCString s_Invalid_model_s_00639b8f
//   TerminatedCString s_engine_model_c_00639ba1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_boss.c_modelStructNotSupported_FUN_0041db80
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_model_c_loadModelFile_FUN_00527ec0(char *filename)

{
  char cVar1;
  SIZE_T count;
  FILE *file;
  SMRGLHeaderExtended *pSVar2;
  SIZE_T SVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  char *pcStack_2c;
  char acStack_24 [4];
  char acStack_20 [20];
  
  pcVar6 = filename;
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == '.') goto LAB_00527ee6;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_00527ee6;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00527ee6:
  if (pcVar5 != (char *)0x0) {
    iVar4 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)pcVar5[1]);
    if (iVar4 == 0x54) {
      pSVar2 = engine_boss_c_modelStructNotSupported_FUN_0041db80((SMRGLHeaderExtended *)filename);
      return pSVar2;
    }
  }
  count = engine_dosio_c_getFileSize_FUN_00481880("models",filename);
  if (count == 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffac,"Unable to get file size: %s",filename);
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0xf0;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffb0);
  }
  file = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rb");
  if (file == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffb8,"Unable to open model: %s");
    g_CurrentLineNumber = 0xf5;
    g_CurrentFilename = "..\\engine\\model.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffbc);
  }
  pSVar2 = (SMRGLHeaderExtended *)
           shape_memdbg_cpp_debugMalloc_FUN_0050f250(count,"..\\engine\\model.c",0xf8);
  if (pSVar2 == (SMRGLHeaderExtended *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffc4,"Out of model memory: %s");
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0x100;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffc8);
  }
  SVar3 = crt_stdio_c_fread_FUN_005fd990(pSVar2,1,count,file);
  if (SVar3 != count) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffd0,"Model file read error: %s");
    g_CurrentLineNumber = 0x107;
    g_CurrentFilename = "..\\engine\\model.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10((char *)&pcStack_2c);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\model.c",0x109);
  cVar1 = (char)(pSVar2->base).type;
  if ((cVar1 != 0x14) && (cVar1 != 0x20)) {
    pcStack_2c = filename;
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_24,"Invalid model: %s");
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0x10d;
    pcStack_2c = (char *)0x52806e;
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_20);
  }
  return pSVar2;
}


// Assembly code:
// 00527ec0: PUSH EBX
//   Label: engine_model.c_loadModelFile_FUN_00527ec0
// 00527ec1: PUSH ESI
// 00527ec2: PUSH EBP
// 00527ec3: SUB ESP,0x50
// 00527ec6: MOV EBX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 00527eca: MOV DL,0x2e
// 00527ecc: MOV ESI,EBX
// 00527ece: MOV AL,byte ptr [ESI]
//   Label: LAB_00527ece
// 00527ed0: CMP AL,DL
// 00527ed2: JZ 0x00527ee6
//   XREF to: 00527ee6 (CONDITIONAL_JUMP)
// 00527ed4: CMP AL,0x0
// 00527ed6: JZ 0x00527ee4
//   XREF to: 00527ee4 (CONDITIONAL_JUMP)
// 00527ed8: INC ESI
// 00527ed9: MOV AL,byte ptr [ESI]
// 00527edb: CMP AL,DL
// 00527edd: JZ 0x00527ee6
//   XREF to: 00527ee6 (CONDITIONAL_JUMP)
// 00527edf: INC ESI
// 00527ee0: CMP AL,0x0
// 00527ee2: JNZ 0x00527ece
//   XREF to: 00527ece (CONDITIONAL_JUMP)
// 00527ee4: SUB ESI,ESI
//   Label: LAB_00527ee4
// 00527ee6: TEST ESI,ESI
//   Label: LAB_00527ee6
// 00527ee8: JNZ 0x0052807b
//   XREF to: 0052807b (CONDITIONAL_JUMP)
// 00527eee: PUSH EDI
//   Label: LAB_00527eee
// 00527eef: PUSH EBX
// 00527ef0: PUSH 0x639aab
//   XREF to: 00639aab (DATA)
// 00527ef5: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 00527efa: ADD ESP,0x8
// 00527efd: MOV EDI,EAX
// 00527eff: TEST EAX,EAX
// 00527f01: JNZ 0x00527f39
//   XREF to: 00527f39 (CONDITIONAL_JUMP)
// 00527f03: PUSH EBX
// 00527f04: PUSH 0x639ab2
//   XREF to: 00639ab2 (DATA)
// 00527f09: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x5c] (DATA)
// 00527f0d: PUSH EAX
// 00527f0e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00527f13: MOV EDX,0x639ace
//   XREF to: 00639ace (PARAM)
// 00527f18: ADD ESP,0xc
// 00527f1b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 00527f1f: MOV ECX,0xf0
// 00527f24: PUSH EAX
// 00527f25: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00527f2b: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00527f31: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00527f36: ADD ESP,0x4
// 00527f39: PUSH 0x639ae0
//   Label: LAB_00527f39
//   XREF to: 00639ae0 (DATA)
// 00527f3e: PUSH EBX
// 00527f3f: PUSH 0x639ae3
//   XREF to: 00639ae3 (DATA)
// 00527f44: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
//   XREF to: 00639a2e (PARAM)
// 00527f49: ADD ESP,0xc
// 00527f4c: MOV EBP,EAX
// 00527f4e: TEST EAX,EAX
// 00527f50: JNZ 0x00527f87
//   XREF to: 00527f87 (CONDITIONAL_JUMP)
// 00527f52: PUSH EBX
// 00527f53: PUSH 0x639aea
//   XREF to: 00639aea (DATA)
// 00527f58: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x5c] (DATA)
// 00527f5c: PUSH EAX
// 00527f5d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00527f62: MOV EAX,0xf5
// 00527f67: ADD ESP,0xc
// 00527f6a: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00527f6f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 00527f73: MOV ESI,0x639b03
//   XREF to: 00639b03 (DATA)
// 00527f78: PUSH EAX
// 00527f79: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00527f7f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00527f84: ADD ESP,0x4
// 00527f87: PUSH 0xf8
//   Label: LAB_00527f87
// 00527f8c: PUSH 0x639b15
//   XREF to: 00639b15 (DATA)
// 00527f91: PUSH EDI
// 00527f92: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00527f97: ADD ESP,0xc
// 00527f9a: MOV ESI,EAX
// 00527f9c: TEST EAX,EAX
// 00527f9e: JNZ 0x00527fd6
//   XREF to: 00527fd6 (CONDITIONAL_JUMP)
// 00527fa0: PUSH EBX
// 00527fa1: PUSH 0x639b27
//   XREF to: 00639b27 (DATA)
// 00527fa6: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x5c] (DATA)
// 00527faa: PUSH EAX
// 00527fab: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00527fb0: MOV EDX,0x639b3f
//   XREF to: 00639b3f (PARAM)
// 00527fb5: ADD ESP,0xc
// 00527fb8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 00527fbc: MOV ECX,0x100
// 00527fc1: PUSH EAX
// 00527fc2: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00527fc8: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00527fce: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00527fd3: ADD ESP,0x4
// 00527fd6: PUSH EBP
//   Label: LAB_00527fd6
// 00527fd7: PUSH EDI
// 00527fd8: PUSH 0x1
// 00527fda: PUSH ESI
// 00527fdb: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00527fe0: ADD ESP,0x10
// 00527fe3: CMP EAX,EDI
// 00527fe5: JZ 0x0052801c
//   XREF to: 0052801c (CONDITIONAL_JUMP)
// 00527fe7: PUSH EBX
// 00527fe8: PUSH 0x639b51
//   XREF to: 00639b51 (DATA)
// 00527fed: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x5c] (DATA)
// 00527ff1: PUSH EAX
// 00527ff2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00527ff7: MOV EAX,0x107
// 00527ffc: ADD ESP,0xc
// 00527fff: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00528004: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 00528008: MOV EDI,0x639b6b
//   XREF to: 00639b6b (DATA)
// 0052800d: PUSH EAX
// 0052800e: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00528014: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00528019: ADD ESP,0x4
// 0052801c: PUSH 0x109
//   Label: LAB_0052801c
// 00528021: PUSH 0x639b7d
//   XREF to: 00639b7d (DATA)
// 00528026: PUSH EBP
// 00528027: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0052802c: MOV AH,byte ptr [ESI]
// 0052802e: ADD ESP,0xc
// 00528031: CMP AH,0x14
// 00528034: JZ 0x00528071
//   XREF to: 00528071 (CONDITIONAL_JUMP)
// 00528036: CMP AH,0x20
// 00528039: JZ 0x00528071
//   XREF to: 00528071 (CONDITIONAL_JUMP)
// 0052803b: PUSH EBX
// 0052803c: PUSH 0x639b8f
//   XREF to: 00639b8f (DATA)
// 00528041: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x5c] (DATA)
// 00528045: PUSH EAX
// 00528046: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0052804b: MOV EDX,0x639ba1
//   XREF to: 00639ba1 (PARAM)
// 00528050: ADD ESP,0xc
// 00528053: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 00528057: MOV ECX,0x10d
// 0052805c: PUSH EAX
// 0052805d: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00528063: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00528069: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052806e: ADD ESP,0x4
// 00528071: MOV EAX,ESI
//   Label: LAB_00528071
// 00528073: POP EDI
// 00528074: ADD ESP,0x50
// 00528077: POP EBP
// 00528078: POP ESI
// 00528079: POP EBX
// 0052807a: RET
// 0052807b: XOR EAX,EAX
//   Label: LAB_0052807b
// 0052807d: MOV AL,byte ptr [ESI + 0x1]
// 00528080: PUSH EAX
// 00528081: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 00528086: ADD ESP,0x4
// 00528089: CMP EAX,0x54
// 0052808c: JNZ 0x00527eee
//   XREF to: 00527eee (CONDITIONAL_JUMP)
// 00528092: PUSH EBX
// 00528093: CALL engine_boss.c_modelStructNotSupported_FUN_0041db80
//   XREF to: 0041db80 (UNCONDITIONAL_CALL)
// 00528098: ADD ESP,0x4
// 0052809b: ADD ESP,0x50
// 0052809e: POP EBP
// 0052809f: POP ESI
// 005280a0: POP EBX
// 005280a1: RET
