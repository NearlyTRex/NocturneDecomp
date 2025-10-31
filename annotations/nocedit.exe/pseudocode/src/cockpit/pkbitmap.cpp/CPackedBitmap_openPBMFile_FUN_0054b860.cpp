// Name: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860
// Address: 0054b860
// Address Range: [[0054b860, 0054b90b]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860(CPackedBitmap * this_ptr, char * filename, int post_load_processing)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910 (0054b910) at 0054b91b [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0 (0054c3d0) at 0054c44c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_0063f1fe
//   TerminatedCString s_art_0063f201
//   TerminatedCString s_Unable_to_open_PBM_file__0063f205
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f220
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f238
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
//   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
//   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
//   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_0054b860
          (CPackedBitmap *this_ptr,char *filename,int post_load_processing)

{
  FILE *file_handle;
  BADSPACEBASE *in_ESP;
  int in_stack_00000028;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(this_ptr,(char *)post_load_processing)
  ;
  file_handle = engine_dosio_c_getFile_FUN_00481a50("art",this_ptr->filename,"rb")
  ;
  if (file_handle == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa0,"Unable to open PBM file %s",this_ptr);
    g_CurrentLineNumber = 0x4fc;
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffa4);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0054b690(this_ptr,file_handle,0);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\cockpit\\pkbitmap.cpp",0x500);
  if (in_stack_00000028 == 0) {
    return;
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(this_ptr);
  return;
}


// Assembly code:
// 0054b860: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860
// 0054b861: PUSH ESI
// 0054b862: SUB ESP,0x64
// 0054b865: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 0054b869: PUSH EBX
// 0054b86a: CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
//   XREF to: 0054a8e0 (UNCONDITIONAL_CALL)
// 0054b86f: ADD ESP,0x4
// 0054b872: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 0054b876: PUSH EDX
// 0054b877: PUSH EBX
// 0054b878: CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
//   XREF to: 0054a990 (UNCONDITIONAL_CALL)
// 0054b87d: ADD ESP,0x8
// 0054b880: PUSH 0x63f1fe
//   XREF to: 0063f1fe (DATA)
// 0054b885: PUSH EBX
// 0054b886: PUSH 0x63f201
//   XREF to: 0063f201 (DATA)
// 0054b88b: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0054b890: ADD ESP,0xc
// 0054b893: MOV ESI,EAX
// 0054b895: TEST EAX,EAX
// 0054b897: JNZ 0x0054b8d1
//   XREF to: 0054b8d1 (CONDITIONAL_JUMP)
// 0054b899: PUSH EDI
// 0054b89a: PUSH EBX
// 0054b89b: PUSH 0x63f205
//   XREF to: 0063f205 (DATA)
// 0054b8a0: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6c] (DATA)
// 0054b8a4: PUSH EAX
// 0054b8a5: MOV EDI,0x4fc
// 0054b8aa: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054b8af: ADD ESP,0xc
// 0054b8b2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x6c] (DATA)
// 0054b8b6: MOV ECX,0x63f220
//   XREF to: 0063f220 (PARAM)
// 0054b8bb: PUSH EAX
// 0054b8bc: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0054b8c2: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054b8c8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054b8cd: ADD ESP,0x4
// 0054b8d0: POP EDI
// 0054b8d1: PUSH 0x0
//   Label: LAB_0054b8d1
// 0054b8d3: PUSH ESI
// 0054b8d4: PUSH EBX
// 0054b8d5: CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
//   XREF to: 0054b690 (UNCONDITIONAL_CALL)
// 0054b8da: ADD ESP,0xc
// 0054b8dd: PUSH 0x500
// 0054b8e2: PUSH 0x63f238
//   XREF to: 0063f238 (DATA)
// 0054b8e7: PUSH ESI
// 0054b8e8: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0054b8ed: ADD ESP,0xc
// 0054b8f0: CMP dword ptr [ESP + 0x78],0x0
//   XREF to: Stack[0xc] (READ)
// 0054b8f5: JNZ 0x0054b8fd
//   XREF to: 0054b8fd (CONDITIONAL_JUMP)
// 0054b8f7: ADD ESP,0x64
// 0054b8fa: POP ESI
// 0054b8fb: POP EBX
// 0054b8fc: RET
// 0054b8fd: PUSH EBX
//   Label: LAB_0054b8fd
// 0054b8fe: CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
//   XREF to: 0054b4a0 (UNCONDITIONAL_CALL)
// 0054b903: ADD ESP,0x4
// 0054b906: ADD ESP,0x64
// 0054b909: POP ESI
// 0054b90a: POP EBX
// 0054b90b: RET
