// Name: cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520
// Address: 0054b520
// Address Range: [[0054b520, 0054b5b2]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520(CPackedBitmap * this_ptr, char * filename)
// Globals:
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f089
//   TerminatedCString s_wb_0063f0a1
//   TerminatedCString s_Unable_to_create_PBM_fil_0063f0a4
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f0c1
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f0d9
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520
          (CPackedBitmap *this_ptr,char *filename)

{
  FILE *file_handle;
  BADSPACEBASE *in_ESP;
  undefined4 in_stack_0000000c;
  CPackedBitmap *in_stack_00000010;
  
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (filename,(char *)0x0,"wb","..\\cockpit\\pkbitmap.cpp",0x46c)
  ;
  if (file_handle == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffff98,"Unable to create PBM file %s",in_stack_0000000c);
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    g_CurrentLineNumber = 0x470;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff9c);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0(in_stack_00000010,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\cockpit\\pkbitmap.cpp",0x474);
  return;
}


// Assembly code:
// 0054b520: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520
// 0054b521: PUSH EBP
// 0054b522: SUB ESP,0x64
// 0054b525: PUSH 0x46c
// 0054b52a: PUSH 0x63f089
//   XREF to: 0063f089 (DATA)
// 0054b52f: PUSH 0x63f0a1
//   XREF to: 0063f0a1 (DATA)
// 0054b534: PUSH 0x0
// 0054b536: MOV EDX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x8] (READ)
// 0054b53d: PUSH EDX
// 0054b53e: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0054b543: ADD ESP,0x14
// 0054b546: MOV EBX,EAX
// 0054b548: TEST EAX,EAX
// 0054b54a: JZ 0x0054b573
//   XREF to: 0054b573 (CONDITIONAL_JUMP)
// 0054b54c: PUSH EBX
//   Label: LAB_0054b54c
// 0054b54d: MOV EBP,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 0054b551: PUSH EBP
// 0054b552: CALL cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
//   XREF to: 0054b5c0 (UNCONDITIONAL_CALL)
// 0054b557: ADD ESP,0x8
// 0054b55a: PUSH 0x474
// 0054b55f: PUSH 0x63f0d9
//   XREF to: 0063f0d9 (DATA)
// 0054b564: PUSH EBX
// 0054b565: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0054b56a: ADD ESP,0xc
// 0054b56d: ADD ESP,0x64
// 0054b570: POP EBP
// 0054b571: POP EBX
// 0054b572: RET
// 0054b573: PUSH EDI
//   Label: LAB_0054b573
// 0054b574: PUSH ESI
// 0054b575: MOV ECX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x8] (READ)
// 0054b579: PUSH ECX
// 0054b57a: PUSH 0x63f0a4
//   XREF to: 0063f0a4 (DATA)
// 0054b57f: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x6c] (DATA)
// 0054b583: PUSH EAX
// 0054b584: MOV ESI,0x63f0c1
//   XREF to: 0063f0c1 (DATA)
// 0054b589: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054b58e: ADD ESP,0xc
// 0054b591: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 0054b595: MOV EDI,0x470
// 0054b59a: PUSH EAX
// 0054b59b: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0054b5a1: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0054b5a7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054b5ac: ADD ESP,0x4
// 0054b5af: POP ESI
// 0054b5b0: POP EDI
// 0054b5b1: JMP 0x0054b54c
//   XREF to: 0054b54c (UNCONDITIONAL_JUMP)
