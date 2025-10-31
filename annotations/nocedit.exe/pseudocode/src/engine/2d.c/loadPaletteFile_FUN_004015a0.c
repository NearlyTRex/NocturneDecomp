// Name: engine_2d.c_loadPaletteFile_FUN_004015a0
// Address: 004015a0
// Address Range: [[004015a0, 0040160e]]
// Convention: __cdecl
// Signature: void engine_2d.c_loadPaletteFile_FUN_004015a0(char * filename)
// Cross-references:
//   engine_2d.c_initGraphicsSystem_FUN_00401010 (00401010) at 00401054 [UNCONDITIONAL_CALL]
//   shape_design.c_loadPalette_FUN_0046e810 (0046e810) at 0046e9d3 [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f2bc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_006130ac
//   TerminatedCString s_art_006130af
//   TerminatedCString s_engine_2d_c_006130b3
//   TerminatedCString s_Unable_to_open_VGA_palet_006130c2
//   TerminatedCString s_engine_2d_c_006130dd
//   char[768] g_SourcePaletteData
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl engine_2d_c_loadPaletteFile_FUN_004015a0(char *filename)

{
  FILE *file;
  
  file = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x2c3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open VGA palette");
  }
  crt_stdio_c_fread_FUN_005fd990(g_SourcePaletteData,0x300,1,file);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\2d.c",0x2c5);
  return;
}


// Assembly code:
// 004015a0: PUSH EBX
//   Label: engine_2d.c_loadPaletteFile_FUN_004015a0
// 004015a1: PUSH 0x6130ac
//   XREF to: 006130ac (DATA)
// 004015a6: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004015aa: PUSH EDX
// 004015ab: PUSH 0x6130af
//   XREF to: 006130af (DATA)
// 004015b0: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004015b5: ADD ESP,0xc
// 004015b8: MOV EBX,EAX
// 004015ba: TEST EAX,EAX
// 004015bc: JZ 0x004015e8
//   XREF to: 004015e8 (CONDITIONAL_JUMP)
// 004015be: PUSH EBX
//   Label: LAB_004015be
// 004015bf: PUSH 0x1
// 004015c1: PUSH 0x300
// 004015c6: PUSH 0x2d01f48
//   XREF to: 02d01f48 (DATA)
// 004015cb: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004015d0: ADD ESP,0x10
// 004015d3: PUSH 0x2c5
// 004015d8: PUSH 0x6130dd
//   XREF to: 006130dd (DATA)
// 004015dd: PUSH EBX
// 004015de: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004015e3: ADD ESP,0xc
// 004015e6: POP EBX
// 004015e7: RET
// 004015e8: PUSH ESI
//   Label: LAB_004015e8
// 004015e9: MOV ECX,0x6130b3
//   XREF to: 006130b3 (PARAM)
// 004015ee: MOV ESI,0x2c3
// 004015f3: PUSH 0x6130c2
//   XREF to: 006130c2 (DATA)
// 004015f8: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004015fe: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00401604: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00401609: ADD ESP,0x4
// 0040160c: POP ESI
// 0040160d: JMP 0x004015be
//   XREF to: 004015be (UNCONDITIONAL_JUMP)
