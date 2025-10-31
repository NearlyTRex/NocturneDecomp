// Name: engine_2d.c_loadOrBuildColorMap_FUN_00402930
// Address: 00402930
// Address Range: [[00402930, 00402a68]]
// Convention: __cdecl
// Signature: void engine_2d.c_loadOrBuildColorMap_FUN_00402930(char * palette_filename)
// Cross-references:
//   engine_2d.c_initGraphicsSystem_FUN_00401010 (00401010) at 00401069 [UNCONDITIONAL_CALL]
//   shape_design.c_loadPalette_FUN_0046e810 (0046e810) at 0046e9eb [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f2d8 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_Please_run_SETUP_0061302e
//   TerminatedCString s_engine_2d_c_006130f4
//   TerminatedCString s_hose_00613103
//   TerminatedCString s_map_00613109
//   TerminatedCString s_rb_0061310e
//   TerminatedCString s_fog_00613111
//   TerminatedCString s_wb_00613115
//   TerminatedCString s_fog_00613118
//   TerminatedCString s_engine_2d_c_0061311c
//   TerminatedCString s_Unable_to_write_quick_ma_0061312b
//   TerminatedCString s_engine_2d_c_00613146
//   TerminatedCString s_engine_2d_c_00613155
//   uchar[32768] g_ColorCubeLookup
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fwrite_FUN_005fdc00
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_buildColorLookupTable_FUN_00402870
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl engine_2d_c_loadOrBuildColorMap_FUN_00402930(char *palette_filename)

{
  char cVar1;
  FILE *pFVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = &stack0xffffffa4;
  do {
    cVar1 = *palette_filename;
    *pcVar4 = cVar1;
    pcVar3 = &stack0xffffffa4;
    if (cVar1 == '\0') break;
    cVar1 = palette_filename[1];
    palette_filename = palette_filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = &stack0xffffffa4;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_00402972;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_00402972;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_00402972:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x770;
    core_main_c_displayErrorAndQuit_FUN_00506f10("hose!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,".map");
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("fog",&stack0xffffffac,"rb");
  if (pFVar2 != (FILE *)0x0) {
    crt_stdio_c_fread_FUN_005fd990(g_ColorCubeLookup,1,0x8000,pFVar2);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\engine\\2d.c",0x77c);
    return;
  }
  engine_2d_c_buildColorLookupTable_FUN_00402870();
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("fog",&stack0xffffffb4,"wb");
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x777;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write quick map!");
  }
  crt_stdio_c_fwrite_FUN_005fdc00(g_ColorCubeLookup,1,0x8000,pFVar2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\engine\\2d.c",0x779);
  return;
}


// Assembly code:
// 00402930: PUSH EBX
//   Label: engine_2d.c_loadOrBuildColorMap_FUN_00402930
// 00402931: PUSH ESI
// 00402932: PUSH EDI
// 00402933: SUB ESP,0x50
// 00402936: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 0040293a: MOV EDI,ESP
// 0040293c: MOV DL,0x2e
// 0040293e: PUSH EDI
// 0040293f: MOV AL,byte ptr [ESI]
//   Label: LAB_0040293f
// 00402941: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x5c] (DATA)
// 00402943: CMP AL,0x0
// 00402945: JZ 0x00402957
//   XREF to: 00402957 (CONDITIONAL_JUMP)
// 00402947: MOV AL,byte ptr [ESI + 0x1]
// 0040294a: ADD ESI,0x2
// 0040294d: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x5b] (WRITE)
// 00402950: ADD EDI,0x2
// 00402953: CMP AL,0x0
// 00402955: JNZ 0x0040293f
//   XREF to: 0040293f (CONDITIONAL_JUMP)
// 00402957: POP EDI
//   Label: LAB_00402957
// 00402958: MOV ESI,ESP
// 0040295a: MOV AL,byte ptr [ESI]
//   Label: LAB_0040295a
//   XREF to: Stack[-0x5c] (DATA)
// 0040295c: CMP AL,DL
// 0040295e: JZ 0x00402972
//   XREF to: 00402972 (CONDITIONAL_JUMP)
// 00402960: CMP AL,0x0
// 00402962: JZ 0x00402970
//   XREF to: 00402970 (CONDITIONAL_JUMP)
// 00402964: INC ESI
// 00402965: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x5b] (DATA)
// 00402967: CMP AL,DL
// 00402969: JZ 0x00402972
//   XREF to: 00402972 (CONDITIONAL_JUMP)
// 0040296b: INC ESI
// 0040296c: CMP AL,0x0
// 0040296e: JNZ 0x0040295a
//   XREF to: 0040295a (CONDITIONAL_JUMP)
// 00402970: SUB ESI,ESI
//   Label: LAB_00402970
// 00402972: MOV EBX,ESI
//   Label: LAB_00402972
// 00402974: TEST ESI,ESI
// 00402976: JNZ 0x0040299b
//   XREF to: 0040299b (CONDITIONAL_JUMP)
// 00402978: MOV EDX,0x6130f4
//   XREF to: 006130f4 (PARAM)
// 0040297d: MOV ECX,0x770
// 00402982: PUSH 0x613103
//   XREF to: 00613103 (DATA)
// 00402987: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0040298d: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00402993: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00402998: ADD ESP,0x4
// 0040299b: PUSH 0x613109
//   Label: LAB_0040299b
//   XREF to: 00613109 (DATA)
// 004029a0: PUSH EBX
// 004029a1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
//   XREF to: 0061302e (PARAM)
// 004029a6: ADD ESP,0x8
// 004029a9: PUSH 0x61310e
//   XREF to: 0061310e (DATA)
// 004029ae: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 004029b2: PUSH EAX
// 004029b3: PUSH 0x613111
//   XREF to: 00613111 (DATA)
// 004029b8: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004029bd: MOV EBX,EAX
// 004029bf: ADD ESP,0xc
// 004029c2: TEST EAX,EAX
// 004029c4: JNZ 0x00402a3a
//   XREF to: 00402a3a (CONDITIONAL_JUMP)
// 004029c6: CALL engine_2d.c_buildColorLookupTable_FUN_00402870
//   XREF to: 00402870 (UNCONDITIONAL_CALL)
// 004029cb: PUSH 0x613115
//   XREF to: 00613115 (DATA)
// 004029d0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 004029d4: PUSH EAX
// 004029d5: PUSH 0x613118
//   XREF to: 00613118 (DATA)
// 004029da: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004029df: ADD ESP,0xc
// 004029e2: MOV EBX,EAX
// 004029e4: TEST EAX,EAX
// 004029e6: JNZ 0x00402a0b
//   XREF to: 00402a0b (CONDITIONAL_JUMP)
// 004029e8: MOV ESI,0x61311c
//   XREF to: 0061311c (DATA)
// 004029ed: MOV EDI,0x777
// 004029f2: PUSH 0x61312b
//   XREF to: 0061312b (DATA)
// 004029f7: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004029fd: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00402a03: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00402a08: ADD ESP,0x4
// 00402a0b: PUSH EBX
//   Label: LAB_00402a0b
// 00402a0c: PUSH 0x8000
// 00402a11: PUSH 0x1
// 00402a13: PUSH 0x2cf9020
//   XREF to: 02cf9020 (DATA)
// 00402a18: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00402a1d: ADD ESP,0x10
// 00402a20: PUSH 0x779
// 00402a25: PUSH 0x613146
//   XREF to: 00613146 (DATA)
// 00402a2a: PUSH EBX
// 00402a2b: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00402a30: ADD ESP,0xc
// 00402a33: ADD ESP,0x50
// 00402a36: POP EDI
// 00402a37: POP ESI
// 00402a38: POP EBX
// 00402a39: RET
// 00402a3a: PUSH EAX
//   Label: LAB_00402a3a
// 00402a3b: PUSH 0x8000
// 00402a40: PUSH 0x1
// 00402a42: PUSH 0x2cf9020
//   XREF to: 02cf9020 (DATA)
// 00402a47: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00402a4c: ADD ESP,0x10
// 00402a4f: PUSH 0x77c
// 00402a54: PUSH 0x613155
//   XREF to: 00613155 (DATA)
// 00402a59: PUSH EBX
// 00402a5a: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00402a5f: ADD ESP,0xc
// 00402a62: ADD ESP,0x50
// 00402a65: POP EDI
// 00402a66: POP ESI
// 00402a67: POP EBX
// 00402a68: RET
