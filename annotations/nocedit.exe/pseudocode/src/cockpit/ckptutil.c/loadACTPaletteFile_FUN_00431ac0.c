// Name: cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0
// Address: 00431ac0
// Address Range: [[00431ac0, 00431bff]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0(char * base_filename, char * output_buffer)
// Cross-references:
//   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30 (00431a30) at 00431a44 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_ACT_00617a80
//   undefined4 s_ACT_00617a81
//   undefined4 s_CT_00617a82
//   undefined4 s_T_00617a83
//   TerminatedCString s_rb_00617a85
//   TerminatedCString s_art_00617a88
//   TerminatedCString s_Error_reading_s_00617a8c
//   TerminatedCString s_cockpit_ckptutil_c_00617a9e
//   TerminatedCString s_cockpit_ckptutil_c_00617ab4
//   uchar[768] g_DefaultPalette
//   undefined4 UCHAR_ARRAY_02d0224c
//   undefined4 UCHAR_ARRAY_02d0224d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_loadACTPaletteFile_FUN_00431ac0(char *base_filename,char *output_buffer)

{
  char cVar1;
  FILE *file;
  SIZE_T SVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  uchar *puVar6;
  char *pcVar7;
  byte bVar8;
  char acStack_54 [4];
  char acStack_50 [68];
  
  bVar8 = 0;
  pcVar7 = &stack0xffffff54;
  pcVar5 = &stack0xffffff54;
  do {
    cVar1 = *base_filename;
    *pcVar7 = cVar1;
    pcVar4 = &stack0xffffff54;
    if (cVar1 == '\0') break;
    cVar1 = base_filename[1];
    base_filename = base_filename + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar4 = &stack0xffffff54;
  } while (cVar1 != '\0');
  do {
    pcVar7 = pcVar4;
    if (*pcVar4 == '.') goto LAB_00431b0f;
    if (*pcVar4 == '\0') break;
    pcVar7 = pcVar4 + 1;
    if (*pcVar7 == '.') goto LAB_00431b0f;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00431b0f:
  if (pcVar7 == (char *)0x0) {
    do {
      pcVar7 = pcVar5;
      if (*pcVar5 == '\0') goto LAB_00431b33;
      if (*pcVar5 == '\0') break;
      pcVar7 = pcVar5 + 1;
      if (*pcVar7 == '\0') goto LAB_00431b33;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)0x0;
  }
LAB_00431b33:
  pcVar5 = ".ACT";
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  file = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffff54,"rb");
  if (file == (FILE *)0x0) {
    puVar6 = g_DefaultPalette;
    for (iVar3 = 0xc0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)output_buffer = *(undefined4 *)puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -8 + 4;
      output_buffer = (char *)((uchar *)output_buffer + (uint)bVar8 * -8 + 4);
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *output_buffer = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      output_buffer = (char *)((uchar *)output_buffer + (uint)bVar8 * -2 + 1);
    }
    return;
  }
  SVar2 = crt_stdio_c_fread_FUN_005fd990(output_buffer,0x100,3,file);
  if (SVar2 != 3) {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_54,"Error reading %s.");
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x13d;
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_50);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x140);
  return;
}


// Assembly code:
// 00431ac0: PUSH EBX
//   Label: cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0
// 00431ac1: PUSH ESI
// 00431ac2: PUSH EDI
// 00431ac3: SUB ESP,0xa0
// 00431ac9: MOV ESI,dword ptr [ESP + 0xb0]
//   XREF to: Stack[0x4] (READ)
// 00431ad0: MOV EBX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[0x8] (READ)
// 00431ad7: MOV EDI,ESP
// 00431ad9: MOV DL,0x2e
// 00431adb: PUSH EDI
// 00431adc: MOV AL,byte ptr [ESI]
//   Label: LAB_00431adc
// 00431ade: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xac] (DATA)
// 00431ae0: CMP AL,0x0
// 00431ae2: JZ 0x00431af4
//   XREF to: 00431af4 (CONDITIONAL_JUMP)
// 00431ae4: MOV AL,byte ptr [ESI + 0x1]
// 00431ae7: ADD ESI,0x2
// 00431aea: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xab] (WRITE)
// 00431aed: ADD EDI,0x2
// 00431af0: CMP AL,0x0
// 00431af2: JNZ 0x00431adc
//   XREF to: 00431adc (CONDITIONAL_JUMP)
// 00431af4: POP EDI
//   Label: LAB_00431af4
// 00431af5: MOV ESI,ESP
// 00431af7: MOV AL,byte ptr [ESI]
//   Label: LAB_00431af7
//   XREF to: Stack[-0xac] (DATA)
// 00431af9: CMP AL,DL
// 00431afb: JZ 0x00431b0f
//   XREF to: 00431b0f (CONDITIONAL_JUMP)
// 00431afd: CMP AL,0x0
// 00431aff: JZ 0x00431b0d
//   XREF to: 00431b0d (CONDITIONAL_JUMP)
// 00431b01: INC ESI
// 00431b02: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0xab] (DATA)
// 00431b04: CMP AL,DL
// 00431b06: JZ 0x00431b0f
//   XREF to: 00431b0f (CONDITIONAL_JUMP)
// 00431b08: INC ESI
// 00431b09: CMP AL,0x0
// 00431b0b: JNZ 0x00431af7
//   XREF to: 00431af7 (CONDITIONAL_JUMP)
// 00431b0d: SUB ESI,ESI
//   Label: LAB_00431b0d
// 00431b0f: MOV EDI,ESI
//   Label: LAB_00431b0f
// 00431b11: TEST ESI,ESI
// 00431b13: JNZ 0x00431b33
//   XREF to: 00431b33 (CONDITIONAL_JUMP)
// 00431b15: MOV ESI,ESP
// 00431b17: XOR DL,DL
// 00431b19: MOV AL,byte ptr [ESI]
//   Label: LAB_00431b19
//   XREF to: Stack[-0xac] (DATA)
// 00431b1b: CMP AL,DL
// 00431b1d: JZ 0x00431b31
//   XREF to: 00431b31 (CONDITIONAL_JUMP)
// 00431b1f: CMP AL,0x0
// 00431b21: JZ 0x00431b2f
//   XREF to: 00431b2f (CONDITIONAL_JUMP)
// 00431b23: INC ESI
// 00431b24: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0xab] (DATA)
// 00431b26: CMP AL,DL
// 00431b28: JZ 0x00431b31
//   XREF to: 00431b31 (CONDITIONAL_JUMP)
// 00431b2a: INC ESI
// 00431b2b: CMP AL,0x0
// 00431b2d: JNZ 0x00431b19
//   XREF to: 00431b19 (CONDITIONAL_JUMP)
// 00431b2f: SUB ESI,ESI
//   Label: LAB_00431b2f
// 00431b31: MOV EDI,ESI
//   Label: LAB_00431b31
// 00431b33: MOV ESI,0x617a80
//   Label: LAB_00431b33
//   XREF to: 00617a80 (DATA)
// 00431b38: PUSH EDI
// 00431b39: MOV AL,byte ptr [ESI]
//   Label: LAB_00431b39
//   XREF to: 00617a80 (READ)
//   XREF to: 00617a82 (READ)
// 00431b3b: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xa9] (DATA)
// 00431b3d: CMP AL,0x0
// 00431b3f: JZ 0x00431b51
//   XREF to: 00431b51 (CONDITIONAL_JUMP)
// 00431b41: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00617a81 (READ)
//   XREF to: 00617a83 (READ)
// 00431b44: ADD ESI,0x2
// 00431b47: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xa8] (WRITE)
// 00431b4a: ADD EDI,0x2
// 00431b4d: CMP AL,0x0
// 00431b4f: JNZ 0x00431b39
//   XREF to: 00431b39 (CONDITIONAL_JUMP)
// 00431b51: POP EDI
//   Label: LAB_00431b51
// 00431b52: PUSH 0x617a85
//   XREF to: 00617a85 (DATA)
// 00431b57: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xac] (DATA)
// 00431b5b: PUSH EAX
// 00431b5c: PUSH 0x617a88
//   XREF to: 00617a88 (DATA)
// 00431b61: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00431b66: ADD ESP,0xc
// 00431b69: MOV ESI,EAX
// 00431b6b: TEST EAX,EAX
// 00431b6d: JZ 0x00431bda
//   XREF to: 00431bda (CONDITIONAL_JUMP)
// 00431b6f: PUSH EAX
// 00431b70: PUSH 0x3
// 00431b72: PUSH 0x100
// 00431b77: PUSH EBX
// 00431b78: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00431b7d: ADD ESP,0x10
// 00431b80: CMP EAX,0x3
// 00431b83: JZ 0x00431bbd
//   XREF to: 00431bbd (CONDITIONAL_JUMP)
// 00431b85: MOV EAX,ESP
// 00431b87: PUSH EAX
// 00431b88: PUSH 0x617a8c
//   XREF to: 00617a8c (DATA)
// 00431b8d: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x5c] (DATA)
// 00431b91: PUSH EAX
// 00431b92: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00431b97: MOV EDX,0x617a9e
//   XREF to: 00617a9e (DATA)
// 00431b9c: ADD ESP,0xc
// 00431b9f: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x5c] (DATA)
// 00431ba3: MOV ECX,0x13d
// 00431ba8: PUSH EAX
// 00431ba9: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00431baf: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00431bb5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00431bba: ADD ESP,0x4
// 00431bbd: PUSH 0x140
//   Label: LAB_00431bbd
// 00431bc2: PUSH 0x617ab4
//   XREF to: 00617ab4 (DATA)
// 00431bc7: PUSH ESI
// 00431bc8: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00431bcd: ADD ESP,0xc
// 00431bd0: ADD ESP,0xa0
// 00431bd6: POP EDI
// 00431bd7: POP ESI
// 00431bd8: POP EBX
// 00431bd9: RET
// 00431bda: MOV ECX,0x300
//   Label: LAB_00431bda
// 00431bdf: MOV ESI,0x2d02248
//   XREF to: 02d02248 (DATA)
// 00431be4: MOV EDI,EBX
// 00431be6: PUSH EDI
// 00431be7: MOV EAX,ECX
// 00431be9: SHR ECX,0x2
// 00431bec: MOVSD.REP ES:EDI,ESI
//   XREF to: 02d02248 (READ)
//   XREF to: 02d0224c (READ)
// 00431bee: MOV CL,AL
// 00431bf0: AND CL,0x3
// 00431bf3: MOVSB.REP ES:EDI,ESI
//   XREF to: 02d0224c (READ)
//   XREF to: 02d0224d (READ)
// 00431bf5: POP EDI
// 00431bf6: ADD ESP,0xa0
// 00431bfc: POP EDI
// 00431bfd: POP ESI
// 00431bfe: POP EBX
// 00431bff: RET
