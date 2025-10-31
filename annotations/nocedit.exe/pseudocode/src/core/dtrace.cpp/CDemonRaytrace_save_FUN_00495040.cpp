// Name: core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040
// Address: 00495040
// Address Range: [[00495040, 004950a9]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040(CDemonRaytrace * this_ptr, char * filename)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 (00494de0) at 00494f2d [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005793c6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wb_00622a46
//   TerminatedCString s_data_00622a49
//   TerminatedCString s_core_dtrace_cpp_00622a4e
//   TerminatedCString s_CDemonRaytrace_save_Unab_00622a61
//   TerminatedCString s_core_dtrace_cpp_00622a8c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_save_FUN_00495040(CDemonRaytrace *this_ptr,char *filename)

{
  FILE *file_handle;
  CDemonRaytrace *in_stack_0000000c;
  
  file_handle = engine_dosio_c_getFile_FUN_00481a50("data",filename,"wb");
  if (file_handle == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x25f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::save - Unable to save file");
  }
  core_dtrace_cpp_CDemonRaytrace_saveBinary_FUN_00494f50(in_stack_0000000c,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\dtrace.cpp",0x261);
  return;
}


// Assembly code:
// 00495040: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040
// 00495041: PUSH EDI
// 00495042: PUSH 0x622a46
//   XREF to: 00622a46 (DATA)
// 00495047: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0049504b: PUSH EDX
// 0049504c: PUSH 0x622a49
//   XREF to: 00622a49 (DATA)
// 00495051: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00495056: ADD ESP,0xc
// 00495059: MOV EBX,EAX
// 0049505b: TEST EAX,EAX
// 0049505d: JZ 0x00495083
//   XREF to: 00495083 (CONDITIONAL_JUMP)
// 0049505f: PUSH EBX
//   Label: LAB_0049505f
// 00495060: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00495064: PUSH EDI
// 00495065: CALL core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50
//   XREF to: 00494f50 (UNCONDITIONAL_CALL)
// 0049506a: ADD ESP,0x8
// 0049506d: PUSH 0x261
// 00495072: PUSH 0x622a8c
//   XREF to: 00622a8c (DATA)
// 00495077: PUSH EBX
// 00495078: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0049507d: ADD ESP,0xc
// 00495080: POP EDI
// 00495081: POP EBX
// 00495082: RET
// 00495083: PUSH ESI
//   Label: LAB_00495083
// 00495084: MOV ECX,0x622a4e
//   XREF to: 00622a4e (PARAM)
// 00495089: MOV ESI,0x25f
// 0049508e: PUSH 0x622a61
//   XREF to: 00622a61 (DATA)
// 00495093: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00495099: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0049509f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004950a4: ADD ESP,0x4
// 004950a7: POP ESI
// 004950a8: JMP 0x0049505f
//   XREF to: 0049505f (UNCONDITIONAL_JUMP)
