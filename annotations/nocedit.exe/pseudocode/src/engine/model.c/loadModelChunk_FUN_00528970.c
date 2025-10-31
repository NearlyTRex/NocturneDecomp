// Name: engine_model.c_loadModelChunk_FUN_00528970
// Address: 00528970
// Address Range: [[00528970, 00528abb]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_model.c_loadModelChunk_FUN_00528970(char * filename, int model_size)
// Cross-references:
//   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40 (00501d40) at 00501d98 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_00639c60
//   TerminatedCString s_models_00639c63
//   TerminatedCString s_Unable_to_open_model_s_00639c6a
//   TerminatedCString s_engine_model_c_00639c83
//   TerminatedCString s_engine_model_c_00639c95
//   TerminatedCString s_Out_of_partial_model_mem_00639ca7
//   TerminatedCString s_engine_model_c_00639cc5
//   TerminatedCString s_engine_model_c_00639cd7
//   TerminatedCString s_Model_read_hose_00639ce9
//   TerminatedCString s_engine_model_c_00639cf9
//   TerminatedCString s_engine_model_c_00639d0b
//   TerminatedCString s_Bad_model_00639d1d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_model_c_loadModelChunk_FUN_00528970(char *filename,int model_size)

{
  char cVar1;
  FILE *file;
  SMRGLHeaderExtended *buffer;
  SIZE_T SVar2;
  BADSPACEBASE *in_ESP;
  
  file = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rb");
  if (file == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa4,"Unable to open model: %s",filename);
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0x2e3;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffa8);
  }
  buffer = (SMRGLHeaderExtended *)
           shape_memdbg_cpp_debugMalloc_FUN_0050f250(model_size + 4,"..\\engine\\model.c",0x2e6)
  ;
  if (buffer == (SMRGLHeaderExtended *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffb0,"Out of partial model mem : %s");
    g_CurrentLineNumber = 0x2ee;
    g_CurrentFilename = "..\\engine\\model.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffb4);
  }
  SVar2 = crt_stdio_c_fread_FUN_005fd990(buffer,1,model_size,file);
  if (SVar2 != model_size) {
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0x2f3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Model read hose");
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\model.c",0x2f4);
  cVar1 = (char)(buffer->base).type;
  if ((cVar1 != '\x14') && (cVar1 != ' ')) {
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 0x2f6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad model!");
    *(undefined4 *)((int)&(buffer->base).type + model_size) = 0;
    return buffer;
  }
  *(undefined4 *)((int)&(buffer->base).type + model_size) = 0;
  return buffer;
}


// Assembly code:
// 00528970: PUSH EBX
//   Label: engine_model.c_loadModelChunk_FUN_00528970
// 00528971: PUSH ESI
// 00528972: PUSH EDI
// 00528973: PUSH EBP
// 00528974: SUB ESP,0x50
// 00528977: MOV EBP,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x4] (READ)
// 0052897b: MOV ESI,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x8] (READ)
// 0052897f: PUSH 0x639c60
//   XREF to: 00639c60 (DATA)
// 00528984: PUSH EBP
// 00528985: PUSH 0x639c63
//   XREF to: 00639c63 (DATA)
// 0052898a: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0052898f: ADD ESP,0xc
// 00528992: MOV EDI,EAX
// 00528994: TEST EAX,EAX
// 00528996: JZ 0x00528a4f
//   XREF to: 00528a4f (CONDITIONAL_JUMP)
// 0052899c: PUSH 0x2e6
//   Label: LAB_0052899c
// 005289a1: PUSH 0x639c95
//   XREF to: 00639c95 (DATA)
// 005289a6: LEA EAX,[ESI + 0x4]
// 005289a9: PUSH EAX
// 005289aa: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 005289af: ADD ESP,0xc
// 005289b2: MOV EBX,EAX
// 005289b4: TEST EAX,EAX
// 005289b6: JNZ 0x005289eb
//   XREF to: 005289eb (CONDITIONAL_JUMP)
// 005289b8: PUSH EBP
// 005289b9: PUSH 0x639ca7
//   XREF to: 00639ca7 (DATA)
// 005289be: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x60] (DATA)
// 005289c2: PUSH EAX
// 005289c3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005289c8: MOV EAX,0x2ee
// 005289cd: ADD ESP,0xc
// 005289d0: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005289d5: MOV EAX,ESP
// 005289d7: MOV EBP,0x639cc5
//   XREF to: 00639cc5 (DATA)
// 005289dc: PUSH EAX
// 005289dd: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005289e3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005289e8: ADD ESP,0x4
// 005289eb: PUSH EDI
//   Label: LAB_005289eb
// 005289ec: PUSH ESI
// 005289ed: PUSH 0x1
// 005289ef: PUSH EBX
// 005289f0: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005289f5: ADD ESP,0x10
// 005289f8: CMP EAX,ESI
// 005289fa: JZ 0x00528a1f
//   XREF to: 00528a1f (CONDITIONAL_JUMP)
// 005289fc: MOV EDX,0x639cd7
//   XREF to: 00639cd7 (PARAM)
// 00528a01: MOV ECX,0x2f3
// 00528a06: PUSH 0x639ce9
//   XREF to: 00639ce9 (DATA)
// 00528a0b: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00528a11: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00528a17: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00528a1c: ADD ESP,0x4
// 00528a1f: PUSH 0x2f4
//   Label: LAB_00528a1f
// 00528a24: PUSH 0x639cf9
//   XREF to: 00639cf9 (DATA)
// 00528a29: PUSH EDI
// 00528a2a: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00528a2f: MOV AH,byte ptr [EBX]
// 00528a31: ADD ESP,0xc
// 00528a34: CMP AH,0x14
// 00528a37: JZ 0x00528a3e
//   XREF to: 00528a3e (CONDITIONAL_JUMP)
// 00528a39: CMP AH,0x20
// 00528a3c: JNZ 0x00528a88
//   XREF to: 00528a88 (CONDITIONAL_JUMP)
// 00528a3e: MOV EAX,EBX
//   Label: LAB_00528a3e
// 00528a40: MOV dword ptr [ESI + EBX*0x1],0x0
// 00528a47: ADD ESP,0x50
// 00528a4a: POP EBP
// 00528a4b: POP EDI
// 00528a4c: POP ESI
// 00528a4d: POP EBX
// 00528a4e: RET
// 00528a4f: PUSH EBP
//   Label: LAB_00528a4f
// 00528a50: PUSH 0x639c6a
//   XREF to: 00639c6a (DATA)
// 00528a55: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x60] (DATA)
// 00528a59: PUSH EAX
// 00528a5a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00528a5f: MOV EDX,0x639c83
//   XREF to: 00639c83 (PARAM)
// 00528a64: ADD ESP,0xc
// 00528a67: MOV EAX,ESP
// 00528a69: MOV ECX,0x2e3
// 00528a6e: PUSH EAX
// 00528a6f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00528a75: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00528a7b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00528a80: ADD ESP,0x4
// 00528a83: JMP 0x0052899c
//   XREF to: 0052899c (UNCONDITIONAL_JUMP)
// 00528a88: MOV EDI,0x639d0b
//   Label: LAB_00528a88
//   XREF to: 00639d0b (DATA)
// 00528a8d: MOV EBP,0x2f6
// 00528a92: PUSH 0x639d1d
//   XREF to: 00639d1d (DATA)
// 00528a97: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00528a9d: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00528aa3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00528aa8: ADD ESP,0x4
// 00528aab: MOV EAX,EBX
// 00528aad: MOV dword ptr [ESI + EBX*0x1],0x0
// 00528ab4: ADD ESP,0x50
// 00528ab7: POP EBP
// 00528ab8: POP EDI
// 00528ab9: POP ESI
// 00528aba: POP EBX
// 00528abb: RET
