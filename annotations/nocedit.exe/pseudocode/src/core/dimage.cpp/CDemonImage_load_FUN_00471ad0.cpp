// Name: core_dimage.cpp_CDemonImage_load_FUN_00471ad0
// Address: 00471ad0
// Address Range: [[00471ad0, 00471d23]]
// Convention: __cdecl
// Signature: void core_dimage.cpp_CDemonImage_load_FUN_00471ad0(CDemonImage * this_ptr, char * filename)
// Globals:
//   TerminatedCString s_rb_0061ecbd
//   TerminatedCString s_art_0061ecc0
//   TerminatedCString s_core_dimage_cpp_0061ecc4
//   TerminatedCString s_CDemonImage_load_Unable__0061ecd7
//   TerminatedCString s_core_dimage_cpp_0061ed01
//   TerminatedCString s_core_dimage_cpp_0061ed14
//   TerminatedCString s_CDemonImage_load_Unable__0061ed27
//   TerminatedCString s_ACT_0061ed55
//   undefined4 s_ACT_0061ed56
//   undefined4 s_CT_0061ed57
//   undefined4 s_T_0061ed58
//   TerminatedCString s_rb_0061ed5a
//   TerminatedCString s_art_0061ed5d
//   TerminatedCString s_core_dimage_cpp_0061ed61
//   TerminatedCString s_CDemonImage_load_Unable__0061ed74
//   TerminatedCString s_core_dimage_cpp_0061eda0
//   uchar[32768] g_ColorCubeLookup
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0
//   core_dimage.cpp_CDemonImage_packColor_FUN_00471a70
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_load_FUN_00471ad0(CDemonImage *this_ptr,char *filename)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  FILE *pFVar4;
  CDemonImage *pCVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  CDemonImage *pCVar7;
  char *pcVar8;
  CDemonImage *pCVar9;
  CDemonImage *in_stack_0000000c;
  uint uStack00000010;
  ushort *puStack00000014;
  CDemonImage *in_stack_00000018;
  SIZE_T in_stack_0000001c;
  int in_stack_00000024;
  CDemonImage *in_stack_0000002c;
  
  pcVar8 = &stack0xfffffee4;
  do {
    cVar1 = *filename;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xfffffee4,"rb");
  if (pFVar4 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x68;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to load image!");
  }
  in_stack_0000000c->width = (int)in_stack_0000000c;
  in_stack_0000000c->height = (int)in_stack_00000018;
  core_dimage_cpp_CDemonImage_allocMemory_FUN_004719e0(in_stack_0000000c);
  crt_stdio_c_fread_FUN_005fd990
            (in_stack_0000000c->data,(SIZE_T)in_stack_0000000c,in_stack_0000001c,pFVar4);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\dimage.cpp",0x76);
  pcVar8 = &stack0xfffffef8;
  do {
    pcVar6 = pcVar8;
    if (*pcVar8 == '.') goto LAB_00471b94;
    if (*pcVar8 == '\0') break;
    pcVar6 = pcVar8 + 1;
    if (*pcVar6 == '.') goto LAB_00471b94;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_00471b94:
  if (pcVar6 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x7b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to find extention!");
  }
  pcVar8 = ".ACT";
  do {
    cVar1 = *pcVar8;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xfffffefc,"rb");
  if (pFVar4 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dimage.cpp";
    g_CurrentLineNumber = 0x7f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::load - Unable to load palette!");
  }
  crt_stdio_c_fread_FUN_005fd990((void *)(in_stack_00000024 + 0x30c),0x100,3,pFVar4);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\dimage.cpp",0x81);
  puStack00000014 = in_stack_0000002c->color_values + 0x80;
  pCVar5 = in_stack_0000002c;
  pCVar7 = in_stack_0000002c;
  pCVar9 = in_stack_0000002c;
  do {
    uStack00000010 = (uint)(pCVar5->palette).colors[0].b;
    bVar2 = (pCVar5->palette).colors[0].g;
    uVar3 = core_dimage_cpp_CDemonImage_packColor_FUN_00471a70
                      (in_stack_0000002c,(uint)(pCVar5->palette).colors[0].r,(uint)bVar2,
                       uStack00000010);
    pCVar7->color_values[0] = uVar3;
    pCVar7 = (CDemonImage *)(pCVar7->color_cube_lookup + 2);
    pCVar5 = (CDemonImage *)(pCVar5->color_cube_lookup + 3);
    pCVar9->color_cube_lookup[0] =
         g_ColorCubeLookup
         [(uint)(bVar2 >> 3) * 0x20 + (uStack00000010 >> 3) * 0x400 + ((uint)puStack00000014 >> 3)];
    pCVar9 = (CDemonImage *)(pCVar9->color_cube_lookup + 1);
  } while (pCVar7 != in_stack_00000018);
  return;
}


// Assembly code:
// 00471ad0: PUSH EBX
//   Label: core_dimage.cpp_CDemonImage_load_FUN_00471ad0
// 00471ad1: PUSH ESI
// 00471ad2: PUSH EDI
// 00471ad3: PUSH EBP
// 00471ad4: SUB ESP,0x10c
// 00471ada: MOV ESI,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x8] (READ)
// 00471ae1: MOV EBP,dword ptr [ESP + 0x128]
//   XREF to: Stack[0xc] (READ)
// 00471ae8: MOV EDI,ESP
// 00471aea: PUSH EDI
// 00471aeb: MOV AL,byte ptr [ESI]
//   Label: LAB_00471aeb
// 00471aed: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x11c] (DATA)
// 00471aef: CMP AL,0x0
// 00471af1: JZ 0x00471b03
//   XREF to: 00471b03 (CONDITIONAL_JUMP)
// 00471af3: MOV AL,byte ptr [ESI + 0x1]
// 00471af6: ADD ESI,0x2
// 00471af9: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x11b] (WRITE)
// 00471afc: ADD EDI,0x2
// 00471aff: CMP AL,0x0
// 00471b01: JNZ 0x00471aeb
//   XREF to: 00471aeb (CONDITIONAL_JUMP)
// 00471b03: POP EDI
//   Label: LAB_00471b03
// 00471b04: PUSH 0x61ecbd
//   XREF to: 0061ecbd (DATA)
// 00471b09: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x11c] (DATA)
// 00471b0d: PUSH EAX
// 00471b0e: PUSH 0x61ecc0
//   XREF to: 0061ecc0 (DATA)
// 00471b13: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00471b18: ADD ESP,0xc
// 00471b1b: MOV EBX,EAX
// 00471b1d: TEST EAX,EAX
// 00471b1f: JZ 0x00471cd4
//   XREF to: 00471cd4 (CONDITIONAL_JUMP)
// 00471b25: MOV EAX,dword ptr [ESP + 0x120]
//   Label: LAB_00471b25
//   XREF to: Stack[0x4] (READ)
// 00471b2c: MOV ESI,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x4] (READ)
// 00471b33: MOV dword ptr [EAX + 0x304],EBP
// 00471b39: MOV EAX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[0x10] (READ)
// 00471b40: PUSH ESI
// 00471b41: MOV dword ptr [ESI + 0x308],EAX
// 00471b47: CALL core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0
//   XREF to: 004719e0 (UNCONDITIONAL_CALL)
// 00471b4c: ADD ESP,0x4
// 00471b4f: PUSH EBX
// 00471b50: MOV EDI,dword ptr [ESP + 0x130]
//   XREF to: Stack[0x10] (READ)
// 00471b57: PUSH EDI
// 00471b58: PUSH EBP
// 00471b59: MOV EBP,dword ptr [ESI + 0x300]
// 00471b5f: PUSH EBP
// 00471b60: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00471b65: ADD ESP,0x10
// 00471b68: PUSH 0x76
// 00471b6a: PUSH 0x61ed01
//   XREF to: 0061ed01 (DATA)
// 00471b6f: PUSH EBX
// 00471b70: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00471b75: ADD ESP,0xc
// 00471b78: MOV ESI,ESP
// 00471b7a: MOV DL,0x2e
// 00471b7c: MOV AL,byte ptr [ESI]
//   Label: LAB_00471b7c
//   XREF to: Stack[-0x11c] (DATA)
// 00471b7e: CMP AL,DL
// 00471b80: JZ 0x00471b94
//   XREF to: 00471b94 (CONDITIONAL_JUMP)
// 00471b82: CMP AL,0x0
// 00471b84: JZ 0x00471b92
//   XREF to: 00471b92 (CONDITIONAL_JUMP)
// 00471b86: INC ESI
// 00471b87: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x11b] (DATA)
// 00471b89: CMP AL,DL
// 00471b8b: JZ 0x00471b94
//   XREF to: 00471b94 (CONDITIONAL_JUMP)
// 00471b8d: INC ESI
// 00471b8e: CMP AL,0x0
// 00471b90: JNZ 0x00471b7c
//   XREF to: 00471b7c (CONDITIONAL_JUMP)
// 00471b92: SUB ESI,ESI
//   Label: LAB_00471b92
// 00471b94: MOV EDI,ESI
//   Label: LAB_00471b94
// 00471b96: TEST ESI,ESI
// 00471b98: JNZ 0x00471bbc
//   XREF to: 00471bbc (CONDITIONAL_JUMP)
// 00471b9a: MOV EAX,0x61ed14
//   XREF to: 0061ed14 (DATA)
// 00471b9f: MOV EDX,0x7b
// 00471ba4: PUSH 0x61ed27
//   XREF to: 0061ed27 (DATA)
// 00471ba9: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00471bae: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00471bb4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00471bb9: ADD ESP,0x4
// 00471bbc: MOV ESI,0x61ed55
//   Label: LAB_00471bbc
//   XREF to: 0061ed55 (DATA)
// 00471bc1: PUSH EDI
// 00471bc2: MOV AL,byte ptr [ESI]
//   Label: LAB_00471bc2
//   XREF to: 0061ed55 (READ)
//   XREF to: 0061ed57 (READ)
// 00471bc4: MOV byte ptr [EDI],AL
// 00471bc6: CMP AL,0x0
// 00471bc8: JZ 0x00471bda
//   XREF to: 00471bda (CONDITIONAL_JUMP)
// 00471bca: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061ed56 (READ)
//   XREF to: 0061ed58 (READ)
// 00471bcd: ADD ESI,0x2
// 00471bd0: MOV byte ptr [EDI + 0x1],AL
// 00471bd3: ADD EDI,0x2
// 00471bd6: CMP AL,0x0
// 00471bd8: JNZ 0x00471bc2
//   XREF to: 00471bc2 (CONDITIONAL_JUMP)
// 00471bda: POP EDI
//   Label: LAB_00471bda
// 00471bdb: PUSH 0x61ed5a
//   XREF to: 0061ed5a (DATA)
// 00471be0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x11c] (DATA)
// 00471be4: PUSH EAX
// 00471be5: PUSH 0x61ed5d
//   XREF to: 0061ed5d (DATA)
// 00471bea: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00471bef: ADD ESP,0xc
// 00471bf2: MOV EBX,EAX
// 00471bf4: TEST EAX,EAX
// 00471bf6: JZ 0x00471cfc
//   XREF to: 00471cfc (CONDITIONAL_JUMP)
// 00471bfc: PUSH EBX
//   Label: LAB_00471bfc
// 00471bfd: PUSH 0x3
// 00471bff: MOV EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x4] (READ)
// 00471c06: PUSH 0x100
// 00471c0b: ADD EAX,0x30c
// 00471c10: PUSH EAX
// 00471c11: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00471c16: ADD ESP,0x10
// 00471c19: PUSH 0x81
// 00471c1e: PUSH 0x61eda0
//   XREF to: 0061eda0 (DATA)
// 00471c23: PUSH EBX
// 00471c24: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00471c29: ADD ESP,0xc
// 00471c2c: MOV EDI,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x4] (READ)
// 00471c33: MOV ESI,EDI
// 00471c35: MOV EBX,EDI
// 00471c37: LEA EAX,[EDI + 0x200]
// 00471c3d: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00471c44: XOR EAX,EAX
//   Label: LAB_00471c44
// 00471c46: MOV AL,byte ptr [EBX + 0x30c]
// 00471c4c: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00471c53: XOR EAX,EAX
// 00471c55: MOV AL,byte ptr [EBX + 0x30e]
// 00471c5b: PUSH EAX
// 00471c5c: MOVZX EBP,byte ptr [EBX + 0x30d]
// 00471c63: PUSH EBP
// 00471c64: MOV EDX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x1c] (READ)
// 00471c6b: PUSH EDX
// 00471c6c: MOV ECX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[0x4] (READ)
// 00471c73: PUSH ECX
// 00471c74: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00471c7b: CALL core_dimage.cpp_CDemonImage_packColor_FUN_00471a70
//   XREF to: 00471a70 (UNCONDITIONAL_CALL)
// 00471c80: ADD ESP,0x10
// 00471c83: MOV word ptr [ESI + 0x100],AX
// 00471c8a: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x1c] (READ)
// 00471c91: SHR EBP,0x3
// 00471c94: SHR EAX,0x3
// 00471c97: SHL EBP,0x5
// 00471c9a: SHL EAX,0xa
// 00471c9d: INC EDI
// 00471c9e: ADD EBP,EAX
// 00471ca0: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 00471ca7: ADD ESI,0x2
// 00471caa: SHR EAX,0x3
// 00471cad: ADD EBX,0x3
// 00471cb0: MOV AL,byte ptr [EAX + EBP*0x1 + 0x2cf9020]
//   XREF to: 02cf9020 (DATA)
// 00471cb7: MOV EBP,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x14] (READ)
// 00471cbe: MOV byte ptr [EDI + -0x1],AL
// 00471cc1: CMP ESI,EBP
// 00471cc3: JNZ 0x00471c44
//   XREF to: 00471c44 (CONDITIONAL_JUMP)
// 00471cc9: ADD ESP,0x10c
// 00471ccf: POP EBP
// 00471cd0: POP EDI
// 00471cd1: POP ESI
// 00471cd2: POP EBX
// 00471cd3: RET
// 00471cd4: MOV EDX,0x61ecc4
//   Label: LAB_00471cd4
//   XREF to: 0061ecc4 (DATA)
// 00471cd9: MOV ECX,0x68
// 00471cde: PUSH 0x61ecd7
//   XREF to: 0061ecd7 (DATA)
// 00471ce3: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00471ce9: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00471cef: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00471cf4: ADD ESP,0x4
// 00471cf7: JMP 0x00471b25
//   XREF to: 00471b25 (UNCONDITIONAL_JUMP)
// 00471cfc: MOV ECX,0x61ed61
//   Label: LAB_00471cfc
//   XREF to: 0061ed61 (DATA)
// 00471d01: MOV ESI,0x7f
// 00471d06: PUSH 0x61ed74
//   XREF to: 0061ed74 (DATA)
// 00471d0b: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00471d11: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00471d17: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00471d1c: ADD ESP,0x4
// 00471d1f: JMP 0x00471bfc
//   XREF to: 00471bfc (UNCONDITIONAL_JUMP)
