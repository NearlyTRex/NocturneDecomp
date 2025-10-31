// Name: engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0
// Address: 004cd2c0
// Address Range: [[004cd2c0, 004cd4d1]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0(CBitFont * this_ptr, char * font_path)
// Globals:
//   TerminatedCString s_rt_0062a582
//   TerminatedCString s_art_0062a585
//   TerminatedCString s_s_0062a589
//   TerminatedCString s_d_d_0062a58d
//   TerminatedCString s_d_d_0062a594
//   TerminatedCString s_d_0062a59b
//   TerminatedCString s_d_0062a59f
//   TerminatedCString s_d_d_0062a5a3
//   TerminatedCString s_engine_font_cpp_0062a5aa
// Function calls:
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280
//   engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_loadFromFile_FUN_004cd2c0(CBitFont *this_ptr,char *font_path)

{
  FILE *stream;
  BADSPACEBASE *in_ESP;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_fffffe08;
  char acStack_1f4 [204];
  char acStack_128 [8];
  char acStack_120 [8];
  char acStack_118 [8];
  char acStack_110 [8];
  char acStack_108 [8];
  char acStack_100 [228];
  undefined1 local_1c [16];
  
  stream = engine_dosio_c_getFile_FUN_00481a50("art",font_path,"rt");
  if (stream == (FILE *)0x0) {
    return;
  }
  crt_stdio_c_fgets_FUN_005fefd0(acStack_128,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%s\n",&stack0xfffffddc);
  crt_stdio_c_fgets_FUN_005fefd0(acStack_120,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d,%d\n",local_1c);
  crt_stdio_c_fgets_FUN_005fefd0(acStack_118,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d,%d\n");
  crt_stdio_c_fgets_FUN_005fefd0(acStack_110,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d\n");
  crt_stdio_c_fgets_FUN_005fefd0(acStack_108,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d\n");
  crt_stdio_c_fgets_FUN_005fefd0(acStack_100,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d,%d\n");
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\font.cpp",0x159);
  if ((in_stack_00000014 == 0x20) && (in_stack_00000018 == 0xff)) {
    engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
              (this_ptr,acStack_1f4,in_stack_0000000c,in_stack_00000010,in_stack_0000001c);
  }
  else {
    engine_font_cpp_CBitFont_loadNewBitmap_FUN_004cd280
              (this_ptr,acStack_1f4,in_stack_0000000c,in_stack_00000010,in_stack_00000014,
               in_stack_00000018,in_stack_0000001c,in_stack_fffffe08);
  }
  this_ptr->char_widths[0x20] = in_stack_00000024;
  this_ptr->font_type = in_stack_00000028;
  this_ptr->font_enabled = in_stack_0000002c;
  return;
}


// Assembly code:
// 004cd2c0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0
// 004cd2c1: PUSH ESI
// 004cd2c2: PUSH EBP
// 004cd2c3: SUB ESP,0x220
// 004cd2c9: MOV ESI,dword ptr [ESP + 0x230]
//   XREF to: Stack[0x4] (READ)
// 004cd2d0: PUSH 0x62a582
//   XREF to: 0062a582 (DATA)
// 004cd2d5: MOV EDX,dword ptr [ESP + 0x238]
//   XREF to: Stack[0x8] (READ)
// 004cd2dc: PUSH EDX
// 004cd2dd: PUSH 0x62a585
//   XREF to: 0062a585 (DATA)
// 004cd2e2: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004cd2e7: MOV EBX,EAX
// 004cd2e9: ADD ESP,0xc
// 004cd2ec: TEST EAX,EAX
// 004cd2ee: JNZ 0x004cd2fa
//   XREF to: 004cd2fa (CONDITIONAL_JUMP)
// 004cd2f0: ADD ESP,0x220
// 004cd2f6: POP EBP
// 004cd2f7: POP ESI
// 004cd2f8: POP EBX
// 004cd2f9: RET
// 004cd2fa: PUSH EDI
//   Label: LAB_004cd2fa
// 004cd2fb: PUSH EAX
// 004cd2fc: PUSH 0xff
// 004cd301: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x12c] (DATA)
// 004cd308: PUSH EAX
// 004cd309: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004cd30e: ADD ESP,0xc
// 004cd311: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x22c] (DATA)
// 004cd315: PUSH EAX
// 004cd316: PUSH 0x62a589
//   XREF to: 0062a589 (DATA)
// 004cd31b: PUSH EBX
// 004cd31c: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004cd321: ADD ESP,0xc
// 004cd324: PUSH EBX
// 004cd325: PUSH 0xff
// 004cd32a: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x12c] (DATA)
// 004cd331: PUSH EAX
// 004cd332: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004cd337: ADD ESP,0xc
// 004cd33a: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x28] (DATA)
// 004cd341: PUSH EAX
// 004cd342: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x2c] (DATA)
// 004cd349: PUSH EAX
// 004cd34a: PUSH 0x62a58d
//   XREF to: 0062a58d (DATA)
// 004cd34f: PUSH EBX
// 004cd350: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004cd355: ADD ESP,0x10
// 004cd358: PUSH EBX
// 004cd359: PUSH 0xff
// 004cd35e: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x12c] (DATA)
// 004cd365: PUSH EAX
// 004cd366: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004cd36b: ADD ESP,0xc
// 004cd36e: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0x20] (DATA)
// 004cd375: PUSH EAX
// 004cd376: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0x24] (DATA)
// 004cd37d: PUSH EAX
// 004cd37e: PUSH 0x62a594
//   XREF to: 0062a594 (DATA)
// 004cd383: PUSH EBX
// 004cd384: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004cd389: ADD ESP,0x10
// 004cd38c: PUSH EBX
// 004cd38d: PUSH 0xff
// 004cd392: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x12c] (DATA)
// 004cd399: PUSH EAX
// 004cd39a: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004cd39f: ADD ESP,0xc
// 004cd3a2: LEA EAX,[ESP + 0x214]
//   XREF to: Stack[-0x1c] (DATA)
// 004cd3a9: PUSH EAX
// 004cd3aa: PUSH 0x62a59b
//   XREF to: 0062a59b (DATA)
// 004cd3af: PUSH EBX
// 004cd3b0: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004cd3b5: ADD ESP,0xc
// 004cd3b8: PUSH EBX
// 004cd3b9: PUSH 0xff
// 004cd3be: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x12c] (DATA)
// 004cd3c5: PUSH EAX
// 004cd3c6: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004cd3cb: ADD ESP,0xc
// 004cd3ce: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0x18] (DATA)
// 004cd3d5: PUSH EAX
// 004cd3d6: PUSH 0x62a59f
//   XREF to: 0062a59f (DATA)
// 004cd3db: PUSH EBX
// 004cd3dc: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004cd3e1: ADD ESP,0xc
// 004cd3e4: PUSH EBX
// 004cd3e5: PUSH 0xff
// 004cd3ea: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x12c] (DATA)
// 004cd3f1: PUSH EAX
// 004cd3f2: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004cd3f7: ADD ESP,0xc
// 004cd3fa: LEA EAX,[ESP + 0x220]
//   XREF to: Stack[-0x10] (DATA)
// 004cd401: PUSH EAX
// 004cd402: LEA EAX,[ESP + 0x220]
//   XREF to: Stack[-0x14] (DATA)
// 004cd409: PUSH EAX
// 004cd40a: PUSH 0x62a5a3
//   XREF to: 0062a5a3 (DATA)
// 004cd40f: PUSH EBX
// 004cd410: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004cd415: ADD ESP,0x10
// 004cd418: PUSH 0x159
// 004cd41d: PUSH 0x62a5aa
//   XREF to: 0062a5aa (DATA)
// 004cd422: PUSH EBX
// 004cd423: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004cd428: ADD ESP,0xc
// 004cd42b: CMP dword ptr [ESP + 0x20c],0x20
//   XREF to: Stack[-0x24] (READ)
// 004cd433: JZ 0x004cd49d
//   XREF to: 004cd49d (CONDITIONAL_JUMP)
// 004cd435: MOV EDX,dword ptr [ESP + 0x214]
//   Label: LAB_004cd435
//   XREF to: Stack[-0x1c] (READ)
// 004cd43c: PUSH EDX
// 004cd43d: MOV ECX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x20] (READ)
// 004cd444: PUSH ECX
// 004cd445: MOV EBX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x24] (READ)
// 004cd44c: PUSH EBX
// 004cd44d: MOV EDI,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x28] (READ)
// 004cd454: PUSH EDI
// 004cd455: MOV EBP,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x2c] (READ)
// 004cd45c: PUSH EBP
// 004cd45d: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x22c] (DATA)
// 004cd461: PUSH EAX
// 004cd462: PUSH ESI
// 004cd463: CALL engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280
//   XREF to: 004cd280 (UNCONDITIONAL_CALL)
// 004cd468: ADD ESP,0x1c
// 004cd46b: MOV EAX,dword ptr [ESP + 0x218]
//   Label: LAB_004cd46b
//   XREF to: Stack[-0x18] (READ)
// 004cd472: MOV dword ptr [ESI + 0x25e8],EAX
// 004cd478: MOV EAX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[-0x14] (READ)
// 004cd47f: MOV EBX,dword ptr [ESP + 0x220]
//   XREF to: Stack[-0x10] (READ)
// 004cd486: MOV dword ptr [ESI + 0x317c],EAX
// 004cd48c: MOV dword ptr [ESI + 0x3180],EBX
// 004cd492: POP EDI
// 004cd493: ADD ESP,0x220
// 004cd499: POP EBP
// 004cd49a: POP ESI
// 004cd49b: POP EBX
// 004cd49c: RET
// 004cd49d: CMP dword ptr [ESP + 0x210],0xff
//   Label: LAB_004cd49d
//   XREF to: Stack[-0x20] (READ)
// 004cd4a8: JNZ 0x004cd435
//   XREF to: 004cd435 (CONDITIONAL_JUMP)
// 004cd4aa: MOV EDI,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x1c] (READ)
// 004cd4b1: PUSH EDI
// 004cd4b2: MOV EBP,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x28] (READ)
// 004cd4b9: PUSH EBP
// 004cd4ba: MOV EAX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x2c] (READ)
// 004cd4c1: PUSH EAX
// 004cd4c2: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x22c] (DATA)
// 004cd4c6: PUSH EAX
// 004cd4c7: PUSH ESI
// 004cd4c8: CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
//   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)
// 004cd4cd: ADD ESP,0x14
// 004cd4d0: JMP 0x004cd46b
//   XREF to: 004cd46b (UNCONDITIONAL_JUMP)
