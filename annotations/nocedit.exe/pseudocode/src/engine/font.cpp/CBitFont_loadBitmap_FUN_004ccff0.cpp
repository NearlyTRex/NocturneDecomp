// Name: engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0
// Address: 004ccff0
// Address Range: [[004ccff0, 004cd27d]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0(CBitFont * this_ptr, char * filename, int width, int height, int first_char)
// Cross-references:
//   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280 (004cd280) at 004cd2af [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_font_cpp_0062a4b6
//   TerminatedCString s_Too_many_bitmaps_0062a4c9
//   TerminatedCString s_art_0062a4da
//   TerminatedCString s_Invalid_font_file_size_s_0062a4de
//   TerminatedCString s_engine_font_cpp_0062a4fb
//   TerminatedCString s_engine_font_cpp_0062a50e
//   TerminatedCString s_Unable_to_allocate_memor_0062a521
//   TerminatedCString s_engine_font_cpp_0062a551
//   TerminatedCString s_act_0062a564
//   TerminatedCString s_rb_0062a568
//   TerminatedCString s_art_0062a56b
//   TerminatedCString s_engine_font_cpp_0062a56f
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_ckptutil.c_readBitmapFile_FUN_00431870
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strupr_FUN_00600770
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
//   engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_loadBitmap_FUN_004ccff0
          (CBitFont *this_ptr,char *filename,int width,int height,int first_char)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  FILE *file;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char (*pacVar7) [80];
  int in_stack_00000018;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_fffffbf4;
  int in_stack_fffffbf8;
  char acStack_2e8 [4];
  char acStack_2e4 [248];
  char acStack_1ec [4];
  char acStack_1e8 [252];
  char acStack_ec [4];
  char acStack_e8 [216];
  
  if (3 < this_ptr->bitmap_count) {
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 0xd6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many bitmaps");
  }
  pacVar7 = this_ptr->bitmap_files + this_ptr->bitmap_count;
  pcVar4 = filename;
  do {
    cVar1 = *pcVar4;
    (*pacVar7)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    (*pacVar7)[1] = cVar1;
    pacVar7 = (char (*) [80])(*pacVar7 + 2);
  } while (cVar1 != '\0');
  crt_string_c_strupr_FUN_00600770(this_ptr->bitmap_files[this_ptr->bitmap_count]);
  iVar5 = first_char * in_stack_00000018;
  this_ptr->bitmap_widths[this_ptr->bitmap_count] = first_char;
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880("art",filename);
  if (iVar2 < iVar5) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffbd0,"Invalid font file size (%s).",filename);
    g_CurrentFilename = "..\\engine\\font.cpp";
    g_CurrentLineNumber = 0xeb;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffbd4);
  }
  pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(iVar5,"..\\engine\\font.cpp",0xf0);
  this_ptr->bitmap_data[this_ptr->bitmap_count] = pvVar3;
  if (this_ptr->bitmap_data[this_ptr->bitmap_count] == (void *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffbdc,"Unable to allocate memory for font bitmap (%s).");
    g_CurrentLineNumber = 0xf3;
    g_CurrentFilename = "..\\engine\\font.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffbe0);
  }
  cockpit_ckptutil_c_readBitmapFile_FUN_00431870
            (filename,this_ptr->bitmap_data[this_ptr->bitmap_count],iVar5);
  engine_dosio_c_splitPath_FUN_00481f20(filename,(char *)0x0,acStack_1ec,acStack_ec,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_2e8,(char *)0x0,acStack_1e8,acStack_e8,"act");
  file = engine_dosio_c_getFile_FUN_00481a50("art",acStack_2e4,"rb");
  if (file != (FILE *)0x0) {
    iVar2 = 0;
    do {
      iVar5 = crt_stdio_c_fgetc_FUN_005fe840(file);
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300] = (char)iVar5;
      iVar5 = crt_stdio_c_fgetc_FUN_005fe840(file);
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300 + 1] = (char)iVar5;
      iVar5 = crt_stdio_c_fgetc_FUN_005fe840(file);
      iVar6 = iVar2 + 3;
      this_ptr->palette_data[iVar2 + this_ptr->bitmap_count * 0x300 + 2] = (char)iVar5;
      iVar2 = iVar6;
    } while (iVar6 != 0x300);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\font.cpp",0x10a);
  }
  engine_font_cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
            (this_ptr,this_ptr->bitmap_count,in_stack_0000003c,in_stack_00000040,in_stack_00000044,
             in_stack_fffffbf4,in_stack_fffffbf8);
  this_ptr->bitmap_count = this_ptr->bitmap_count + 1;
  engine_font_cpp_CBitFont_remapPalette_FUN_004d02a0(this_ptr);
  return;
}


// Assembly code:
// 004ccff0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0
// 004ccff1: PUSH ESI
// 004ccff2: PUSH EDI
// 004ccff3: PUSH EBP
// 004ccff4: SUB ESP,0x42c
// 004ccffa: MOV EBX,dword ptr [ESP + 0x440]
//   XREF to: Stack[0x4] (READ)
// 004cd001: MOV EBP,dword ptr [ESP + 0x444]
//   XREF to: Stack[0x8] (READ)
// 004cd008: CMP dword ptr [EBX],0x4
// 004cd00b: JGE 0x004cd256
//   XREF to: 004cd256 (CONDITIONAL_JUMP)
// 004cd011: MOV EDX,dword ptr [EBX]
//   Label: LAB_004cd011
// 004cd013: LEA EAX,[EDX*0x4 + 0x0]
// 004cd01a: ADD EAX,EDX
// 004cd01c: LEA ECX,[EBX + 0x4]
// 004cd01f: SHL EAX,0x4
// 004cd022: MOV ESI,EBP
// 004cd024: LEA EDI,[ECX + EAX*0x1]
// 004cd027: PUSH EDI
// 004cd028: MOV AL,byte ptr [ESI]
//   Label: LAB_004cd028
// 004cd02a: MOV byte ptr [EDI],AL
// 004cd02c: CMP AL,0x0
// 004cd02e: JZ 0x004cd040
//   XREF to: 004cd040 (CONDITIONAL_JUMP)
// 004cd030: MOV AL,byte ptr [ESI + 0x1]
// 004cd033: ADD ESI,0x2
// 004cd036: MOV byte ptr [EDI + 0x1],AL
// 004cd039: ADD EDI,0x2
// 004cd03c: CMP AL,0x0
// 004cd03e: JNZ 0x004cd028
//   XREF to: 004cd028 (CONDITIONAL_JUMP)
// 004cd040: POP EDI
//   Label: LAB_004cd040
// 004cd041: MOV EDX,dword ptr [EBX]
// 004cd043: LEA EAX,[EDX*0x4 + 0x0]
// 004cd04a: ADD EAX,EDX
// 004cd04c: SHL EAX,0x4
// 004cd04f: ADD EAX,ECX
// 004cd051: PUSH EAX
// 004cd052: CALL crt_string.c_strupr_FUN_00600770
//   XREF to: 00600770 (UNCONDITIONAL_CALL)
// 004cd057: ADD ESP,0x4
// 004cd05a: MOV EDX,dword ptr [ESP + 0x448]
//   XREF to: Stack[0xc] (READ)
// 004cd061: MOV EDI,dword ptr [ESP + 0x44c]
//   XREF to: Stack[0x10] (READ)
// 004cd068: MOV ESI,EDX
// 004cd06a: IMUL ESI,EDI
// 004cd06d: PUSH EBP
// 004cd06e: MOV EAX,dword ptr [EBX]
// 004cd070: PUSH 0x62a4da
//   XREF to: 0062a4da (DATA)
// 004cd075: MOV dword ptr [EBX + EAX*0x4 + 0x154],EDX
// 004cd07c: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 004cd081: ADD ESP,0x8
// 004cd084: CMP EAX,ESI
// 004cd086: JGE 0x004cd0bb
//   XREF to: 004cd0bb (CONDITIONAL_JUMP)
// 004cd088: PUSH EBP
// 004cd089: PUSH 0x62a4de
//   XREF to: 0062a4de (DATA)
// 004cd08e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x43c] (DATA)
// 004cd092: PUSH EAX
// 004cd093: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004cd098: MOV EAX,0x62a4fb
//   XREF to: 0062a4fb (DATA)
// 004cd09d: ADD ESP,0xc
// 004cd0a0: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004cd0a5: MOV EAX,ESP
// 004cd0a7: MOV EDX,0xeb
// 004cd0ac: PUSH EAX
// 004cd0ad: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004cd0b3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004cd0b8: ADD ESP,0x4
// 004cd0bb: PUSH 0xf0
//   Label: LAB_004cd0bb
// 004cd0c0: PUSH 0x62a50e
//   XREF to: 0062a50e (DATA)
// 004cd0c5: PUSH ESI
// 004cd0c6: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 004cd0cb: MOV EDX,dword ptr [EBX]
// 004cd0cd: MOV dword ptr [EBX + EDX*0x4 + 0x144],EAX
// 004cd0d4: MOV EAX,dword ptr [EBX]
// 004cd0d6: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x144]
// 004cd0dd: ADD ESP,0xc
// 004cd0e0: TEST ECX,ECX
// 004cd0e2: JNZ 0x004cd117
//   XREF to: 004cd117 (CONDITIONAL_JUMP)
// 004cd0e4: PUSH EBP
// 004cd0e5: PUSH 0x62a521
//   XREF to: 0062a521 (DATA)
// 004cd0ea: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x43c] (DATA)
// 004cd0ee: PUSH EAX
// 004cd0ef: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004cd0f4: MOV EAX,0xf3
// 004cd0f9: ADD ESP,0xc
// 004cd0fc: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004cd101: MOV EAX,ESP
// 004cd103: MOV EDI,0x62a551
//   XREF to: 0062a551 (DATA)
// 004cd108: PUSH EAX
// 004cd109: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004cd10f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004cd114: ADD ESP,0x4
// 004cd117: MOV EAX,dword ptr [EBX]
//   Label: LAB_004cd117
// 004cd119: PUSH ESI
// 004cd11a: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x144]
// 004cd121: PUSH EDX
// 004cd122: PUSH EBP
// 004cd123: CALL cockpit_ckptutil.c_readBitmapFile_FUN_00431870
//   XREF to: 00431870 (UNCONDITIONAL_CALL)
// 004cd128: ADD ESP,0xc
// 004cd12b: PUSH 0x0
// 004cd12d: LEA EAX,[ESP + 0x330]
//   XREF to: Stack[-0x110] (DATA)
// 004cd134: PUSH EAX
// 004cd135: LEA EAX,[ESP + 0x234]
//   XREF to: Stack[-0x210] (DATA)
// 004cd13c: PUSH EAX
// 004cd13d: PUSH 0x0
// 004cd13f: PUSH EBP
// 004cd140: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004cd145: ADD ESP,0x14
// 004cd148: PUSH 0x62a564
//   XREF to: 0062a564 (DATA)
// 004cd14d: LEA EAX,[ESP + 0x330]
//   XREF to: Stack[-0x110] (DATA)
// 004cd154: PUSH EAX
// 004cd155: LEA EAX,[ESP + 0x234]
//   XREF to: Stack[-0x210] (DATA)
// 004cd15c: PUSH EAX
// 004cd15d: PUSH 0x0
// 004cd15f: LEA EAX,[ESP + 0x13c]
//   XREF to: Stack[-0x310] (DATA)
// 004cd166: PUSH EAX
// 004cd167: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004cd16c: ADD ESP,0x14
// 004cd16f: PUSH 0x62a568
//   XREF to: 0062a568 (DATA)
// 004cd174: LEA EAX,[ESP + 0x130]
//   XREF to: Stack[-0x310] (DATA)
// 004cd17b: PUSH EAX
// 004cd17c: PUSH 0x62a56b
//   XREF to: 0062a56b (DATA)
// 004cd181: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004cd186: ADD ESP,0xc
// 004cd189: MOV EDI,EAX
// 004cd18b: TEST EAX,EAX
// 004cd18d: JZ 0x004cd219
//   XREF to: 004cd219 (CONDITIONAL_JUMP)
// 004cd193: XOR ESI,ESI
// 004cd195: PUSH EDI
//   Label: LAB_004cd195
// 004cd196: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004cd19b: MOV EDX,dword ptr [EBX]
// 004cd19d: MOV ECX,EAX
// 004cd19f: LEA EAX,[EDX*0x4 + 0x0]
// 004cd1a6: SUB EAX,EDX
// 004cd1a8: SHL EAX,0x8
// 004cd1ab: ADD ESP,0x4
// 004cd1ae: ADD EAX,EBX
// 004cd1b0: PUSH EDI
// 004cd1b1: MOV byte ptr [ESI + EAX*0x1 + 0x164],CL
// 004cd1b8: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004cd1bd: MOV ECX,dword ptr [EBX]
// 004cd1bf: MOV EDX,EAX
// 004cd1c1: LEA EAX,[ECX*0x4 + 0x0]
// 004cd1c8: SUB EAX,ECX
// 004cd1ca: SHL EAX,0x8
// 004cd1cd: ADD ESP,0x4
// 004cd1d0: ADD EAX,EBX
// 004cd1d2: PUSH EDI
// 004cd1d3: MOV byte ptr [ESI + EAX*0x1 + 0x165],DL
// 004cd1da: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004cd1df: MOV ECX,dword ptr [EBX]
// 004cd1e1: MOV EDX,EAX
// 004cd1e3: LEA EAX,[ECX*0x4 + 0x0]
// 004cd1ea: SUB EAX,ECX
// 004cd1ec: SHL EAX,0x8
// 004cd1ef: ADD ESI,0x3
// 004cd1f2: ADD EAX,EBX
// 004cd1f4: ADD ESP,0x4
// 004cd1f7: MOV byte ptr [ESI + EAX*0x1 + 0x163],DL
// 004cd1fe: CMP ESI,0x300
// 004cd204: JNZ 0x004cd195
//   XREF to: 004cd195 (CONDITIONAL_JUMP)
// 004cd206: PUSH 0x10a
// 004cd20b: PUSH 0x62a56f
//   XREF to: 0062a56f (DATA)
// 004cd210: PUSH EDI
// 004cd211: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004cd216: ADD ESP,0xc
// 004cd219: MOV ECX,dword ptr [ESP + 0x450]
//   Label: LAB_004cd219
//   XREF to: Stack[0x14] (READ)
// 004cd220: PUSH ECX
// 004cd221: MOV ESI,dword ptr [ESP + 0x450]
//   XREF to: Stack[0x10] (READ)
// 004cd228: PUSH ESI
// 004cd229: MOV EDI,dword ptr [ESP + 0x450]
//   XREF to: Stack[0xc] (READ)
// 004cd230: PUSH EDI
// 004cd231: MOV EBP,dword ptr [EBX]
// 004cd233: PUSH EBP
// 004cd234: PUSH EBX
// 004cd235: CALL engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
//   XREF to: 004cd550 (UNCONDITIONAL_CALL)
// 004cd23a: MOV EAX,dword ptr [EBX]
// 004cd23c: ADD ESP,0x14
// 004cd23f: INC EAX
// 004cd240: PUSH EBX
// 004cd241: MOV dword ptr [EBX],EAX
// 004cd243: CALL engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0
//   XREF to: 004d02a0 (UNCONDITIONAL_CALL)
// 004cd248: ADD ESP,0x4
// 004cd24b: ADD ESP,0x42c
// 004cd251: POP EBP
// 004cd252: POP EDI
// 004cd253: POP ESI
// 004cd254: POP EBX
// 004cd255: RET
// 004cd256: MOV ECX,0x62a4b6
//   Label: LAB_004cd256
//   XREF to: 0062a4b6 (PARAM)
// 004cd25b: MOV ESI,0xd6
// 004cd260: PUSH 0x62a4c9
//   XREF to: 0062a4c9 (DATA)
// 004cd265: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004cd26b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004cd271: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004cd276: ADD ESP,0x4
// 004cd279: JMP 0x004cd011
//   XREF to: 004cd011 (UNCONDITIONAL_JUMP)
