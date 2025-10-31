// Name: cockpit_ckptutil.c_readBitmapFile_FUN_00431870
// Address: 00431870
// Address Range: [[00431870, 004319a8]]
// Convention: __cdecl
// Signature: void * cockpit_ckptutil.c_readBitmapFile_FUN_00431870(char * filename, void * buffer, int size)
// Cross-references:
//   cockpit_ckptutil.c_applyColorPalette_FUN_004319b0 (00431830) at 0043184a [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0 (004317b0) at 004317cc [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080 (0054b080) at 0054b091 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 (0054b000) at 0054b02e [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 (004ccff0) at 004cd123 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_ckptutil_c_00617981
//   TerminatedCString s_Unable_to_allocate_u_byt_00617997
//   TerminatedCString s_cockpit_ckptutil_c_006179c9
//   TerminatedCString s_rb_006179df
//   TerminatedCString s_art_006179e2
//   TerminatedCString s_Unable_to_open_bitmap_fi_006179e6
//   TerminatedCString s_cockpit_ckptutil_c_00617a07
//   TerminatedCString s_Unable_to_read_bitmap_fi_00617a1d
//   TerminatedCString s_cockpit_ckptutil_c_00617a3e
//   TerminatedCString s_cockpit_ckptutil_c_00617a54
//   TerminatedCString s_cockpit_ckptutil_c_00617a6a
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

void * __cdecl cockpit_ckptutil_c_readBitmapFile_FUN_00431870(char *filename,void *buffer,int size)

{
  FILE *file;
  SIZE_T SVar1;
  BADSPACEBASE *in_ESP;
  
  if (buffer == (void *)0x0) {
    buffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\cockpit\\ckptutil.c",0xd7);
    if (buffer == (void *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xffffffa4,"Unable to allocate %u bytes for bitmap file (%s).",size,filename);
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 0xda;
      core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffa8);
    }
  }
  file = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (file == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffb0,"Unable to open bitmap file (%s).");
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0xe3;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffb4);
  }
  SVar1 = crt_stdio_c_fread_FUN_005fd990(buffer,size,1,file);
  if (SVar1 != 1) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffbc,"Unable to read bitmap file (%s).");
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0xea);
    g_CurrentLineNumber = 0xeb;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffc4);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0xee);
  return buffer;
}


// Assembly code:
// 00431870: PUSH EBX
//   Label: cockpit_ckptutil.c_readBitmapFile_FUN_00431870
// 00431871: PUSH ESI
// 00431872: PUSH EDI
// 00431873: PUSH EBP
// 00431874: SUB ESP,0x50
// 00431877: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x4] (READ)
// 0043187b: MOV ESI,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x8] (READ)
// 0043187f: MOV EBP,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0xc] (READ)
// 00431883: TEST ESI,ESI
// 00431885: JZ 0x00431906
//   XREF to: 00431906 (CONDITIONAL_JUMP)
// 0043188b: PUSH 0x6179df
//   Label: LAB_0043188b
//   XREF to: 006179df (DATA)
// 00431890: PUSH EDI
// 00431891: PUSH 0x6179e2
//   XREF to: 006179e2 (DATA)
// 00431896: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0043189b: ADD ESP,0xc
// 0043189e: MOV EBX,EAX
// 004318a0: TEST EAX,EAX
// 004318a2: JNZ 0x004318d7
//   XREF to: 004318d7 (CONDITIONAL_JUMP)
// 004318a4: PUSH EDI
// 004318a5: PUSH 0x6179e6
//   XREF to: 006179e6 (DATA)
// 004318aa: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x60] (DATA)
// 004318ae: PUSH EAX
// 004318af: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004318b4: MOV EAX,0x617a07
//   XREF to: 00617a07 (DATA)
// 004318b9: ADD ESP,0xc
// 004318bc: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004318c1: MOV EAX,ESP
// 004318c3: MOV EDX,0xe3
// 004318c8: PUSH EAX
// 004318c9: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004318cf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004318d4: ADD ESP,0x4
// 004318d7: PUSH EBX
//   Label: LAB_004318d7
// 004318d8: PUSH 0x1
// 004318da: PUSH EBP
// 004318db: PUSH ESI
// 004318dc: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004318e1: ADD ESP,0x10
// 004318e4: CMP EAX,0x1
// 004318e7: JNZ 0x0043195d
//   XREF to: 0043195d (CONDITIONAL_JUMP)
// 004318e9: PUSH 0xee
//   Label: LAB_004318e9
// 004318ee: PUSH 0x617a6a
//   XREF to: 00617a6a (DATA)
// 004318f3: PUSH EBX
// 004318f4: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004318f9: ADD ESP,0xc
// 004318fc: MOV EAX,ESI
// 004318fe: ADD ESP,0x50
// 00431901: POP EBP
// 00431902: POP EDI
// 00431903: POP ESI
// 00431904: POP EBX
// 00431905: RET
// 00431906: PUSH 0xd7
//   Label: LAB_00431906
// 0043190b: PUSH 0x617981
//   XREF to: 00617981 (DATA)
// 00431910: PUSH EBP
// 00431911: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00431916: ADD ESP,0xc
// 00431919: MOV ESI,EAX
// 0043191b: TEST EAX,EAX
// 0043191d: JNZ 0x0043188b
//   XREF to: 0043188b (CONDITIONAL_JUMP)
// 00431923: PUSH EDI
// 00431924: PUSH EBP
// 00431925: PUSH 0x617997
//   XREF to: 00617997 (DATA)
// 0043192a: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x60] (DATA)
// 0043192e: PUSH EAX
// 0043192f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00431934: MOV EDX,0x6179c9
//   XREF to: 006179c9 (PARAM)
// 00431939: ADD ESP,0x10
// 0043193c: MOV EAX,ESP
// 0043193e: MOV ECX,0xda
// 00431943: PUSH EAX
// 00431944: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0043194a: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00431950: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00431955: ADD ESP,0x4
// 00431958: JMP 0x0043188b
//   XREF to: 0043188b (UNCONDITIONAL_JUMP)
// 0043195d: PUSH EDI
//   Label: LAB_0043195d
// 0043195e: PUSH 0x617a1d
//   XREF to: 00617a1d (DATA)
// 00431963: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x60] (DATA)
// 00431967: PUSH EAX
// 00431968: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0043196d: ADD ESP,0xc
// 00431970: PUSH 0xea
// 00431975: PUSH 0x617a3e
//   XREF to: 00617a3e (DATA)
// 0043197a: PUSH EBX
// 0043197b: MOV EDI,0xeb
// 00431980: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00431985: ADD ESP,0xc
// 00431988: MOV EAX,ESP
// 0043198a: MOV ECX,0x617a54
//   XREF to: 00617a54 (PARAM)
// 0043198f: PUSH EAX
// 00431990: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00431996: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0043199c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004319a1: ADD ESP,0x4
// 004319a4: JMP 0x004318e9
//   XREF to: 004318e9 (UNCONDITIONAL_JUMP)
