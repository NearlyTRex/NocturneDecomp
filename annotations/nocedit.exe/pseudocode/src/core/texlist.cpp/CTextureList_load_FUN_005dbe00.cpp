// Name: core_texlist.cpp_CTextureList_load_FUN_005dbe00
// Address: 005dbe00
// Address Range: [[005dbe00, 005dc0c6]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_load_FUN_005dbe00(CTextureList * this_ptr, char * filename)
// Cross-references:
//   core_ground.cpp_CGround_load_FUN_004ef030 (004ef030) at 004ef310 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_texlist_cpp_00654eb8
//   TerminatedCString s_CTextureList_load_No_ext_00654ecc
//   TerminatedCString s_tex_00654ef4
//   undefined4 DAT_00654ef5
//   undefined4 DAT_00654ef6
//   undefined4 DAT_00654ef7
//   TerminatedCString s_rt_00654ef9
//   TerminatedCString s_data_00654efc
//   TerminatedCString s_core_texlist_cpp_00654f01
//   TerminatedCString s_CTextureList_load_Bad_fi_00654f15
//   TerminatedCString s_d_00654f38
//   TerminatedCString s_s_00654f3c
//   TerminatedCString s_core_texlist_cpp_00654f40
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_stdlib.c_atoi_FUN_005ffef0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_load_FUN_005dbe00(CTextureList *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char acStack_11c [248];
  FILE *local_24;
  FILE *local_20;
  FILE *local_1c;
  int local_18;
  CTextureList *local_14;
  int iVar10;
  CTextureList *pCVar11;
  
  bVar9 = 0;
  pcVar8 = &stack0xfffffed4;
  do {
    cVar1 = *filename;
    *pcVar8 = cVar1;
    pcVar6 = &stack0xfffffed4;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar6 = &stack0xfffffed4;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar6;
    if (*pcVar6 == '.') goto LAB_005dbe50;
    if (*pcVar6 == '\0') break;
    pcVar8 = pcVar6 + 1;
    if (*pcVar8 == '.') goto LAB_005dbe50;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_005dbe50:
  if (pcVar8 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0x61;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::load - No extension found");
  }
  pcVar6 = ".tex";
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  local_24 = engine_dosio_c_getFile_FUN_00481a50("data",&stack0xfffffed8,"rt");
  if (local_24 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0x6a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::load - Bad filename!");
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(local_20,"%d\n");
  iVar10 = 0;
  if (this_ptr->texture_count < 1) {
LAB_005dc05c:
    iVar10 = this_ptr->texture_count;
    if (iVar10 < 1000) {
      pcVar8 = this_ptr->texture_entries[0].texture_name + iVar10 * 4 + -0xc;
      do {
        iVar10 = iVar10 + 1;
        *(undefined4 *)(pcVar8 + 0x5dc4) = 0;
        pcVar8 = pcVar8 + 4;
      } while (iVar10 < 1000);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\core\\texlist.cpp",0x96);
    return;
  }
  local_18 = 0;
  pcVar8 = this_ptr->texture_entries[0].texture_name;
  local_14 = this_ptr;
  pCVar11 = this_ptr;
LAB_005dbf13:
  crt_stdio_c_fscanf_FUN_005fe7c0(local_1c,"%s\n");
  pcVar6 = acStack_11c;
  do {
    pcVar7 = pcVar6;
    if (*pcVar6 == ',') goto LAB_005dbf47;
    if (*pcVar6 == '\0') break;
    pcVar7 = pcVar6 + 1;
    if (*pcVar7 == ',') goto LAB_005dbf47;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_005dbf47:
  if (pcVar7 == (char *)0x0) {
    pCVar11->texture_values[0] = 0;
  }
  else {
    *pcVar7 = '\0';
    iVar2 = crt_stdlib_c_atoi_FUN_005ffef0(pcVar7 + 1);
    this_ptr->texture_values[1] = iVar2;
  }
  iVar2 = local_18;
  pcVar7 = acStack_11c;
  pcVar6 = pcVar8;
  do {
    cVar1 = *pcVar7;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  uVar5 = 0;
  local_14->texture_entries[0].base.count = 0;
  do {
    uVar4 = 0xffffffff;
    pcVar6 = this_ptr->texture_entries[0].texture_name + iVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 <= uVar5) break;
    iVar3 = uVar5 + iVar2;
    uVar5 = uVar5 + 1;
    iVar3 = crt_ctype_c_toupper_FUN_005ff9e0
                      ((uint)(byte)this_ptr->texture_entries[0].texture_name[iVar3]);
    this_ptr->texture_entries[0].texture_name[uVar5 + iVar2 + -1] = (char)iVar3;
  } while( true );
  pCVar11 = (CTextureList *)pCVar11->texture_entries;
  local_18 = local_18 + 0x18;
  local_14 = (CTextureList *)(local_14->texture_entries[0].texture_name + 0xc);
  pcVar8 = pcVar8 + 0x18;
  iVar10 = iVar10 + 1;
  if (this_ptr->texture_count <= iVar10) goto LAB_005dc05c;
  goto LAB_005dbf13;
}


// Assembly code:
// 005dbe00: PUSH EBX
//   Label: core_texlist.cpp_CTextureList_load_FUN_005dbe00
// 005dbe01: PUSH ESI
// 005dbe02: PUSH EDI
// 005dbe03: PUSH EBP
// 005dbe04: SUB ESP,0x11c
// 005dbe0a: MOV EBP,dword ptr [ESP + 0x130]
//   XREF to: Stack[0x4] (READ)
// 005dbe11: MOV ESI,dword ptr [ESP + 0x134]
//   XREF to: Stack[0x8] (READ)
// 005dbe18: MOV EDI,ESP
// 005dbe1a: MOV DL,0x2e
// 005dbe1c: PUSH EDI
// 005dbe1d: MOV AL,byte ptr [ESI]
//   Label: LAB_005dbe1d
// 005dbe1f: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x12c] (DATA)
// 005dbe21: CMP AL,0x0
// 005dbe23: JZ 0x005dbe35
//   XREF to: 005dbe35 (CONDITIONAL_JUMP)
// 005dbe25: MOV AL,byte ptr [ESI + 0x1]
// 005dbe28: ADD ESI,0x2
// 005dbe2b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x12b] (WRITE)
// 005dbe2e: ADD EDI,0x2
// 005dbe31: CMP AL,0x0
// 005dbe33: JNZ 0x005dbe1d
//   XREF to: 005dbe1d (CONDITIONAL_JUMP)
// 005dbe35: POP EDI
//   Label: LAB_005dbe35
// 005dbe36: MOV ESI,ESP
// 005dbe38: MOV AL,byte ptr [ESI]
//   Label: LAB_005dbe38
//   XREF to: Stack[-0x12c] (DATA)
// 005dbe3a: CMP AL,DL
// 005dbe3c: JZ 0x005dbe50
//   XREF to: 005dbe50 (CONDITIONAL_JUMP)
// 005dbe3e: CMP AL,0x0
// 005dbe40: JZ 0x005dbe4e
//   XREF to: 005dbe4e (CONDITIONAL_JUMP)
// 005dbe42: INC ESI
// 005dbe43: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x12b] (DATA)
// 005dbe45: CMP AL,DL
// 005dbe47: JZ 0x005dbe50
//   XREF to: 005dbe50 (CONDITIONAL_JUMP)
// 005dbe49: INC ESI
// 005dbe4a: CMP AL,0x0
// 005dbe4c: JNZ 0x005dbe38
//   XREF to: 005dbe38 (CONDITIONAL_JUMP)
// 005dbe4e: SUB ESI,ESI
//   Label: LAB_005dbe4e
// 005dbe50: MOV EDI,ESI
//   Label: LAB_005dbe50
// 005dbe52: TEST ESI,ESI
// 005dbe54: JZ 0x005dbfd6
//   XREF to: 005dbfd6 (CONDITIONAL_JUMP)
// 005dbe5a: MOV ESI,0x654ef4
//   Label: LAB_005dbe5a
//   XREF to: 00654ef4 (DATA)
// 005dbe5f: PUSH EDI
// 005dbe60: MOV AL,byte ptr [ESI]
//   Label: LAB_005dbe60
//   XREF to: 00654ef4 (READ)
//   XREF to: 00654ef6 (READ)
// 005dbe62: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x129] (DATA)
// 005dbe64: CMP AL,0x0
// 005dbe66: JZ 0x005dbe78
//   XREF to: 005dbe78 (CONDITIONAL_JUMP)
// 005dbe68: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00654ef5 (READ)
//   XREF to: 00654ef7 (READ)
// 005dbe6b: ADD ESI,0x2
// 005dbe6e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x129] (WRITE)
// 005dbe71: ADD EDI,0x2
// 005dbe74: CMP AL,0x0
// 005dbe76: JNZ 0x005dbe60
//   XREF to: 005dbe60 (CONDITIONAL_JUMP)
// 005dbe78: POP EDI
//   Label: LAB_005dbe78
// 005dbe79: PUSH 0x654ef9
//   XREF to: 00654ef9 (DATA)
// 005dbe7e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x12c] (DATA)
// 005dbe82: PUSH EAX
// 005dbe83: PUSH 0x654efc
//   XREF to: 00654efc (DATA)
// 005dbe88: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005dbe8d: ADD ESP,0xc
// 005dbe90: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005dbe97: TEST EAX,EAX
// 005dbe99: JNZ 0x005dbebe
//   XREF to: 005dbebe (CONDITIONAL_JUMP)
// 005dbe9b: MOV EBX,0x654f01
//   XREF to: 00654f01 (PARAM)
// 005dbea0: MOV ESI,0x6a
// 005dbea5: PUSH 0x654f15
//   XREF to: 00654f15 (DATA)
// 005dbeaa: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 005dbeb0: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005dbeb6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005dbebb: ADD ESP,0x4
// 005dbebe: PUSH EBP
//   Label: LAB_005dbebe
// 005dbebf: PUSH 0x654f38
//   XREF to: 00654f38 (DATA)
// 005dbec4: MOV EDI,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x2c] (READ)
// 005dbecb: PUSH EDI
// 005dbecc: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005dbed1: ADD ESP,0xc
// 005dbed4: XOR EAX,EAX
// 005dbed6: MOV EDX,dword ptr [EBP]
// 005dbed9: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005dbee0: TEST EDX,EDX
// 005dbee2: JLE 0x005dc05c
//   XREF to: 005dc05c (CONDITIONAL_JUMP)
// 005dbee8: LEA EAX,[EBP + 0x4]
// 005dbeeb: XOR ECX,ECX
// 005dbeed: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005dbef4: MOV dword ptr [ESP + 0x114],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 005dbefb: MOV dword ptr [ESP + 0x104],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005dbf02: ADD EAX,0x8
// 005dbf05: MOV dword ptr [ESP + 0x108],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 005dbf0c: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005dbf13: MOV EAX,ESP
//   Label: LAB_005dbf13
// 005dbf15: PUSH EAX
// 005dbf16: PUSH 0x654f3c
//   XREF to: 00654f3c (DATA)
// 005dbf1b: MOV EBX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x2c] (READ)
// 005dbf22: PUSH EBX
// 005dbf23: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005dbf28: ADD ESP,0xc
// 005dbf2b: MOV ESI,ESP
// 005dbf2d: MOV DL,0x2c
// 005dbf2f: MOV AL,byte ptr [ESI]
//   Label: LAB_005dbf2f
//   XREF to: Stack[-0x12c] (DATA)
// 005dbf31: CMP AL,DL
// 005dbf33: JZ 0x005dbf47
//   XREF to: 005dbf47 (CONDITIONAL_JUMP)
// 005dbf35: CMP AL,0x0
// 005dbf37: JZ 0x005dbf45
//   XREF to: 005dbf45 (CONDITIONAL_JUMP)
// 005dbf39: INC ESI
// 005dbf3a: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x12b] (DATA)
// 005dbf3c: CMP AL,DL
// 005dbf3e: JZ 0x005dbf47
//   XREF to: 005dbf47 (CONDITIONAL_JUMP)
// 005dbf40: INC ESI
// 005dbf41: CMP AL,0x0
// 005dbf43: JNZ 0x005dbf2f
//   XREF to: 005dbf2f (CONDITIONAL_JUMP)
// 005dbf45: SUB ESI,ESI
//   Label: LAB_005dbf45
// 005dbf47: TEST ESI,ESI
//   Label: LAB_005dbf47
// 005dbf49: JZ 0x005dc0b5
//   XREF to: 005dc0b5 (CONDITIONAL_JUMP)
// 005dbf4f: MOV byte ptr [ESI],0x0
//   XREF to: Stack[-0x129] (DATA)
// 005dbf52: INC ESI
// 005dbf53: PUSH ESI
// 005dbf54: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 005dbf59: ADD ESP,0x4
// 005dbf5c: MOV ECX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x18] (READ)
// 005dbf63: MOV dword ptr [ECX + 0x5dc4],EAX
// 005dbf69: MOV ESI,ESP
//   Label: LAB_005dbf69
// 005dbf6b: MOV EDI,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x20] (READ)
// 005dbf72: PUSH EDI
// 005dbf73: MOV AL,byte ptr [ESI]
//   Label: LAB_005dbf73
//   XREF to: Stack[-0x12c] (DATA)
// 005dbf75: MOV byte ptr [EDI],AL
// 005dbf77: CMP AL,0x0
// 005dbf79: JZ 0x005dbf8b
//   XREF to: 005dbf8b (CONDITIONAL_JUMP)
// 005dbf7b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x12b] (READ)
// 005dbf7e: ADD ESI,0x2
// 005dbf81: MOV byte ptr [EDI + 0x1],AL
// 005dbf84: ADD EDI,0x2
// 005dbf87: CMP AL,0x0
// 005dbf89: JNZ 0x005dbf73
//   XREF to: 005dbf73 (CONDITIONAL_JUMP)
// 005dbf8b: POP EDI
//   Label: LAB_005dbf8b
// 005dbf8c: MOV EAX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x24] (READ)
// 005dbf93: XOR EBX,EBX
// 005dbf95: MOV ESI,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x28] (READ)
// 005dbf9c: MOV dword ptr [EAX + 0x8],0x0
// 005dbfa3: MOV EDI,dword ptr [ESP + 0x118]
//   Label: LAB_005dbfa3
//   XREF to: Stack[-0x14] (READ)
// 005dbfaa: ADD EDI,ESI
// 005dbfac: ADD EDI,0x8
// 005dbfaf: SUB ECX,ECX
// 005dbfb1: DEC ECX
// 005dbfb2: XOR EAX,EAX
// 005dbfb4: SCASB.REPNE ES:EDI
// 005dbfb6: NOT ECX
// 005dbfb8: DEC ECX
// 005dbfb9: CMP EBX,ECX
// 005dbfbb: JNC 0x005dbffe
//   XREF to: 005dbffe (CONDITIONAL_JUMP)
// 005dbfbd: LEA EDI,[ESI + EBP*0x1]
// 005dbfc0: XOR EAX,EAX
// 005dbfc2: MOV AL,byte ptr [EDI + EBX*0x1 + 0xc]
// 005dbfc6: PUSH EAX
// 005dbfc7: INC EBX
// 005dbfc8: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 005dbfcd: ADD ESP,0x4
// 005dbfd0: MOV byte ptr [EDI + EBX*0x1 + 0xb],AL
// 005dbfd4: JMP 0x005dbfa3
//   XREF to: 005dbfa3 (UNCONDITIONAL_JUMP)
// 005dbfd6: MOV EDX,0x654eb8
//   Label: LAB_005dbfd6
//   XREF to: 00654eb8 (PARAM)
// 005dbfdb: MOV ECX,0x61
// 005dbfe0: PUSH 0x654ecc
//   XREF to: 00654ecc (DATA)
// 005dbfe5: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005dbfeb: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005dbff1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005dbff6: ADD ESP,0x4
// 005dbff9: JMP 0x005dbe5a
//   XREF to: 005dbe5a (UNCONDITIONAL_JUMP)
// 005dbffe: MOV ECX,dword ptr [ESP + 0x114]
//   Label: LAB_005dbffe
//   XREF to: Stack[-0x18] (READ)
// 005dc005: MOV EBX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x28] (READ)
// 005dc00c: MOV ESI,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x24] (READ)
// 005dc013: MOV EDI,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x20] (READ)
// 005dc01a: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x1c] (READ)
// 005dc021: MOV EDX,dword ptr [EBP]
// 005dc024: ADD ECX,0x4
// 005dc027: ADD EBX,0x18
// 005dc02a: ADD ESI,0x18
// 005dc02d: ADD EDI,0x18
// 005dc030: INC EAX
// 005dc031: MOV dword ptr [ESP + 0x114],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005dc038: MOV dword ptr [ESP + 0x104],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 005dc03f: MOV dword ptr [ESP + 0x108],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 005dc046: MOV dword ptr [ESP + 0x10c],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 005dc04d: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005dc054: CMP EAX,EDX
// 005dc056: JL 0x005dbf13
//   XREF to: 005dbf13 (CONDITIONAL_JUMP)
// 005dc05c: MOV ESI,dword ptr [EBP]
//   Label: LAB_005dc05c
// 005dc05f: CMP ESI,0x3e8
// 005dc065: JGE 0x005dc090
//   XREF to: 005dc090 (CONDITIONAL_JUMP)
// 005dc067: LEA EAX,[ESI*0x4 + 0x0]
// 005dc06e: ADD EAX,EBP
// 005dc070: ADD EAX,0x4
//   Label: LAB_005dc070
// 005dc073: INC ESI
// 005dc074: MOV dword ptr [EAX + 0x5dc0],0x0
// 005dc07e: CMP ESI,0x3e8
// 005dc084: JL 0x005dc070
//   XREF to: 005dc070 (CONDITIONAL_JUMP)
// 005dc086: LEA EAX,[EAX]
// 005dc08c: LEA EDX,[EDX]
// 005dc090: PUSH 0x96
//   Label: LAB_005dc090
// 005dc095: PUSH 0x654f40
//   XREF to: 00654f40 (DATA)
// 005dc09a: MOV ESI,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x2c] (READ)
// 005dc0a1: PUSH ESI
// 005dc0a2: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005dc0a7: ADD ESP,0xc
// 005dc0aa: ADD ESP,0x11c
// 005dc0b0: POP EBP
// 005dc0b1: POP EDI
// 005dc0b2: POP ESI
// 005dc0b3: POP EBX
// 005dc0b4: RET
// 005dc0b5: MOV EAX,dword ptr [ESP + 0x114]
//   Label: LAB_005dc0b5
//   XREF to: Stack[-0x18] (READ)
// 005dc0bc: MOV dword ptr [EAX + 0x5dc4],ESI
// 005dc0c2: JMP 0x005dbf69
//   XREF to: 005dbf69 (UNCONDITIONAL_JUMP)
