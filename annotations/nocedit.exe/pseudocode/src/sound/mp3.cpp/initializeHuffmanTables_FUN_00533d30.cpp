// Name: sound_mp3.cpp_initializeHuffmanTables_FUN_00533d30
// Address: 00533d30
// Address Range: [[00533d30, 00533f7f]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_initializeHuffmanTables_FUN_00533d30(void)
// Globals:
//   TerminatedCString s_d_0063af26
//   TerminatedCString s_u_0063af29
//   TerminatedCString s_sound_mp3_cpp_0063af2c
//   TerminatedCString s_wrong_table_number_u_Fil_0063af3d
//   TerminatedCString s_sound_mp3_cpp_0063af5e
//   TerminatedCString s_wrong_table_u_reference__0063af6f
//   TerminatedCString s_sound_mp3_cpp_0063af93
//   TerminatedCString s_MP3_Huffman_tree_overflo_0063afa4
//   TerminatedCString s_sound_mp3_cpp_0063afc9
//   TerminatedCString s_huffman_decodertable_err_0063afda
//   SHuffmanTableSource[34] g_HuffmanTableSources
//   undefined4 DAT_00680174
//   undefined4 DAT_00680178
//   undefined4 DAT_0068017c
//   undefined4 DAT_00680180
//   undefined4 DAT_00680184
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   char[256] g_CurrentMp3Filename
//   SHuffmanTable[34] g_HuffmanTables
//   undefined4 DAT_02f6828c
//   undefined4 DAT_02f68290
//   undefined4 DAT_02f68294
//   undefined4 DAT_02f68298
//   undefined4 DAT_02f6829c
//   undefined4 DAT_02f682a8
//   undefined4 DAT_02f682a8+1
//   undefined4 DAT_02f682a8+2
//   undefined4 DAT_02f682a8+3
//   undefined4 DAT_02f682ac
//   undefined4 DAT_02f682ad
//   undefined4 g_HuffmanTables[0].table_size
//   undefined4 DAT_02f68ab0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c

#include "nocturne.h"

int __cdecl sound_mp3_cpp_initializeHuffmanTables_FUN_00533d30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  SHuffmanTable *pSVar4;
  int unaff_ESI;
  uint uVar5;
  byte bVar6;
  char *pcVar7;
  SHuffmanTable *pSVar8;
  char *pcVar9;
  SHuffmanTable *local_14;
  
  bVar6 = 0;
  pSVar4 = (SHuffmanTable *)0x0;
  iVar3 = 0;
  pSVar8 = g_HuffmanTables;
  local_14 = (SHuffmanTable *)0x0;
  do {
    pcVar9 = pSVar8->table_id;
    crt_stdio_c_sprintf_FUN_005fdbd0(pSVar8->table_id,"%d",pSVar4);
    *(undefined4 *)((int)&g_HuffmanTables[0].table_size + iVar3) =
         *(undefined4 *)((int)&g_HuffmanTableSources[0].table_size + unaff_EBP);
    *(undefined4 *)(g_HuffmanTables[0].table_id + iVar3 + 4) =
         *(undefined4 *)((int)&g_HuffmanTableSources[0].field1_0x4 + unaff_EBP);
    *(undefined4 *)(g_HuffmanTables[0].table_id + iVar3 + 8) =
         *(undefined4 *)((int)&g_HuffmanTableSources[0].field2_0x8 + unaff_EBP);
    *(undefined4 *)(g_HuffmanTables[0].table_id + iVar3 + 0xc) =
         *(undefined4 *)((int)&g_HuffmanTableSources[0].bits + unaff_EBP);
    *(int *)(g_HuffmanTables[0].table_id + iVar3 + 0x10) =
         (1 << (g_HuffmanTables[0].table_id[iVar3 + 0xc] & 0x1fU)) + -1;
    crt_stdio_c_sscanf_FUN_0060013c(pSVar8->table_id,"%u",&stack0xffffffe8);
    if (pSVar4 != local_14) {
      pcVar9 = g_CurrentMp3Filename;
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0xd72;
      core_main_c_displayErrorAndQuit_FUN_00506f10("wrong table number %u.  File: %s",pSVar4);
    }
    iVar2 = *(int *)((int)&g_HuffmanTableSources[0].reference_index + unaff_ESI);
    if (iVar2 < 0) {
      if (iVar2 != -1) {
        pcVar7 = "huffman decodertable error at table %d.  File: %s";
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd94;
        goto LAB_00533e4e;
      }
      uVar5 = *(uint *)((int)&g_HuffmanTables[0].table_size + iVar3);
      pcVar7 = g_HuffmanTables[0].huffman_data + iVar3 + -0xc;
      pcVar7[0] = -1;
      pcVar7[1] = -1;
      pcVar7[2] = -1;
      pcVar7[3] = -1;
      if (0x400 < uVar5) {
        local_14 = (SHuffmanTable *)g_CurrentMp3Filename;
        pcVar9 = "MP3 Huffman tree overflow!  File: %s";
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd85;
        core_main_c_displayErrorAndQuit_FUN_00506f10("MP3 Huffman tree overflow!  File: %s");
      }
      uVar5 = 0;
      pcVar7 = *(char **)((int)&g_HuffmanTableSources[0].huffman_data_ptr + unaff_ESI);
      iVar2 = iVar3;
      if (*(int *)((int)&g_HuffmanTables[0].table_size + iVar3) != 0) {
        do {
          g_HuffmanTables[0].huffman_data[iVar2] = *pcVar7;
          g_HuffmanTables[0].huffman_data[iVar2 + 1] = pcVar7[1];
          uVar5 = uVar5 + 1;
          pcVar7 = pcVar7 + 2;
          iVar2 = iVar2 + 2;
        } while (uVar5 < *(uint *)((int)&g_HuffmanTables[0].table_size + iVar3));
      }
    }
    else {
      *(int *)(g_HuffmanTables[0].huffman_data + iVar3 + -0xc) = iVar2;
      local_14 = (SHuffmanTable *)(g_HuffmanTables[0].huffman_data + iVar3);
      pcVar7 = g_HuffmanTables[iVar2].huffman_data;
      pSVar8 = local_14;
      for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pSVar8->table_id = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + (uint)bVar6 * -8 + 4;
        pSVar8 = (SHuffmanTable *)((int)pSVar8 + (uint)bVar6 * -8 + 4);
      }
      for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
        pSVar8->table_id[0] = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar6 * -2 + 1;
        pSVar8 = (SHuffmanTable *)((int)pSVar8 + (uint)bVar6 * -2 + 1);
      }
      *(int *)((int)&g_HuffmanTables[0].table_size + iVar3) = g_HuffmanTables[iVar2].table_size;
      if ((*(int *)(g_HuffmanTables[0].table_id + iVar3 + 4) != g_HuffmanTables[iVar2].xlen) ||
         (g_HuffmanTables[iVar2].ylen != *(int *)(g_HuffmanTables[0].table_id + iVar3 + 8))) {
        pcVar7 = "wrong table %u reference.  File: %s";
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd7d;
LAB_00533e4e:
        local_14 = (SHuffmanTable *)g_CurrentMp3Filename;
        pcVar9 = pSVar4->table_id;
        core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar7);
      }
    }
    iVar3 = iVar3 + 0x828;
    pSVar4 = (SHuffmanTable *)(pSVar4->table_id + 1);
    local_14 = (SHuffmanTable *)&local_14->field6_0x18;
    pSVar8 = (SHuffmanTable *)((int)pcVar9 + 0x828);
    if (0x21 < (int)pSVar4) {
      return (int)pSVar4;
    }
  } while( true );
}


// Assembly code:
// 00533d30: PUSH EBX
//   Label: sound_mp3.cpp_initializeHuffmanTables_FUN_00533d30
// 00533d31: PUSH ESI
// 00533d32: PUSH EDI
// 00533d33: PUSH EBP
// 00533d34: SUB ESP,0xc
// 00533d37: MOV EDX,0x2f68288
//   XREF to: 02f68288 (DATA)
// 00533d3c: XOR EBP,EBP
// 00533d3e: XOR EBX,EBX
// 00533d40: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: 02f68288 (DATA)
//   XREF to: Stack[-0x18] (WRITE)
// 00533d44: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00533d48: PUSH EBP
//   Label: LAB_00533d48
// 00533d49: PUSH 0x63af26
//   XREF to: 0063af26 (DATA)
// 00533d4e: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00533d52: PUSH ESI
//   XREF to: 02f68288 (DATA)
//   XREF to: 02f68ab0 (DATA)
// 00533d53: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00533d58: ADD ESP,0xc
// 00533d5b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00533d5f: MOV EAX,dword ptr [EAX + 0x680170]
//   XREF to: 00680170 (DATA)
// 00533d65: MOV dword ptr [EBX + 0x2f68aac],EAX
//   XREF to: 02f68aac (WRITE)
// 00533d6b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00533d6f: MOV EAX,dword ptr [EAX + 0x680174]
//   XREF to: 00680174 (DATA)
// 00533d75: MOV dword ptr [EBX + 0x2f6828c],EAX
//   XREF to: 02f6828c (WRITE)
// 00533d7b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00533d7f: MOV EAX,dword ptr [EAX + 0x680178]
//   XREF to: 00680178 (DATA)
// 00533d85: MOV dword ptr [EBX + 0x2f68290],EAX
//   XREF to: 02f68290 (WRITE)
// 00533d8b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00533d8f: MOV EAX,dword ptr [EAX + 0x68017c]
//   XREF to: 0068017c (DATA)
// 00533d95: MOV dword ptr [EBX + 0x2f68294],EAX
//   XREF to: 02f68294 (WRITE)
// 00533d9b: MOV EAX,0x1
// 00533da0: MOV CL,byte ptr [EBX + 0x2f68294]
//   XREF to: 02f68294 (READ)
// 00533da6: SHL EAX,CL
// 00533da8: DEC EAX
// 00533da9: MOV dword ptr [EBX + 0x2f68298],EAX
//   XREF to: 02f68298 (WRITE)
// 00533daf: MOV EAX,ESP
// 00533db1: PUSH EAX
// 00533db2: PUSH 0x63af29
//   XREF to: 0063af29 (DATA)
// 00533db7: PUSH ESI
//   XREF to: 02f68288 (DATA)
// 00533db8: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00533dbd: ADD ESP,0xc
// 00533dc0: CMP EBP,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00533dc3: JNZ 0x00533e89
//   XREF to: 00533e89 (CONDITIONAL_JUMP)
// 00533dc9: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00533dc9
//   XREF to: Stack[-0x14] (READ)
// 00533dcd: MOV EAX,dword ptr [EAX + 0x680180]
//   XREF to: 00680180 (DATA)
// 00533dd3: TEST EAX,EAX
// 00533dd5: JL 0x00533ecb
//   XREF to: 00533ecb (CONDITIONAL_JUMP)
// 00533ddb: MOV dword ptr [EBX + 0x2f6829c],EAX
//   XREF to: 02f6829c (WRITE)
// 00533de1: IMUL EDX,EAX,0x828
// 00533de7: MOV ESI,0x2f68288
//   XREF to: 02f68288 (DATA)
// 00533dec: MOV EDI,0x2f68288
//   XREF to: 02f68288 (DATA)
// 00533df1: MOV ECX,0x802
// 00533df6: ADD EDI,EBX
// 00533df8: ADD ESI,EDX
// 00533dfa: ADD EDI,0x20
// 00533dfd: ADD ESI,0x20
// 00533e00: PUSH EDI
//   XREF to: 02f682a8 (DATA)
// 00533e01: MOV EAX,ECX
// 00533e03: SHR ECX,0x2
// 00533e06: MOVSD.REP ES:EDI,ESI
//   XREF to: 02f682a8 (WRITE)
//   XREF to: 02f682ac (DATA)
//   XREF to: 02f682ac (WRITE)
// 00533e08: MOV CL,AL
// 00533e0a: AND CL,0x3
// 00533e0d: MOVSB.REP ES:EDI,ESI
//   XREF to: 02f682ac (WRITE)
//   XREF to: 02f682ad (DATA)
//   XREF to: 02f682ad (WRITE)
// 00533e0f: POP EDI
// 00533e10: MOV EAX,dword ptr [EDX + 0x2f68aac]
//   XREF to: 02f68aac (DATA)
// 00533e16: MOV dword ptr [EBX + 0x2f68aac],EAX
//   XREF to: 02f68aac (WRITE)
// 00533e1c: MOV EAX,dword ptr [EBX + 0x2f6828c]
//   XREF to: 02f6828c (READ)
// 00533e22: CMP EAX,dword ptr [EDX + 0x2f6828c]
//   XREF to: 02f6828c (DATA)
// 00533e28: JZ 0x00533eb7
//   XREF to: 00533eb7 (CONDITIONAL_JUMP)
// 00533e2e: PUSH 0x2f68188
//   Label: LAB_00533e2e
//   XREF to: 02f68188 (DATA)
// 00533e33: PUSH EBP
// 00533e34: MOV EDI,0x63af5e
//   XREF to: 0063af5e (DATA)
// 00533e39: MOV EAX,0xd7d
// 00533e3e: PUSH 0x63af6f
//   XREF to: 0063af6f (DATA)
// 00533e43: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00533e49: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00533e4e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   Label: LAB_00533e4e
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00533e53: ADD ESP,0xc
// 00533e56: MOV ESI,dword ptr [ESP + 0x8]
//   Label: LAB_00533e56
//   XREF to: Stack[-0x14] (READ)
// 00533e5a: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 00533e5e: ADD EBX,0x828
// 00533e64: INC EBP
// 00533e65: ADD ESI,0x18
// 00533e68: ADD ECX,0x828
// 00533e6e: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00533e72: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: 02f68ab0 (DATA)
//   XREF to: Stack[-0x18] (WRITE)
// 00533e76: CMP EBP,0x22
// 00533e79: JL 0x00533d48
//   XREF to: 00533d48 (CONDITIONAL_JUMP)
// 00533e7f: MOV EAX,EBP
// 00533e81: ADD ESP,0xc
// 00533e84: POP EBP
// 00533e85: POP EDI
// 00533e86: POP ESI
// 00533e87: POP EBX
// 00533e88: RET
// 00533e89: PUSH 0x2f68188
//   Label: LAB_00533e89
//   XREF to: 02f68188 (DATA)
// 00533e8e: PUSH EBP
// 00533e8f: MOV EDX,0x63af2c
//   XREF to: 0063af2c (DATA)
// 00533e94: MOV ECX,0xd72
// 00533e99: PUSH 0x63af3d
//   XREF to: 0063af3d (DATA)
// 00533e9e: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00533ea4: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00533eaa: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00533eaf: ADD ESP,0xc
// 00533eb2: JMP 0x00533dc9
//   XREF to: 00533dc9 (UNCONDITIONAL_JUMP)
// 00533eb7: MOV ESI,dword ptr [EDX + 0x2f68290]
//   Label: LAB_00533eb7
//   XREF to: 02f68290 (DATA)
// 00533ebd: CMP ESI,dword ptr [EBX + 0x2f68290]
//   XREF to: 02f68290 (READ)
// 00533ec3: JNZ 0x00533e2e
//   XREF to: 00533e2e (CONDITIONAL_JUMP)
// 00533ec9: JMP 0x00533e56
//   XREF to: 00533e56 (UNCONDITIONAL_JUMP)
// 00533ecb: CMP EAX,-0x1
//   Label: LAB_00533ecb
// 00533ece: JNZ 0x00533f5a
//   XREF to: 00533f5a (CONDITIONAL_JUMP)
// 00533ed4: MOV EDX,dword ptr [EBX + 0x2f68aac]
//   XREF to: 02f68aac (READ)
// 00533eda: MOV dword ptr [EBX + 0x2f6829c],EAX
//   XREF to: 02f6829c (WRITE)
// 00533ee0: CMP EDX,0x401
// 00533ee6: JNC 0x00533f30
//   XREF to: 00533f30 (CONDITIONAL_JUMP)
// 00533ee8: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00533ee8
//   XREF to: Stack[-0x14] (READ)
// 00533eec: MOV EDI,EBX
// 00533eee: MOV ECX,EBX
// 00533ef0: MOV EDX,dword ptr [EBX + 0x2f68aac]
//   XREF to: 02f68aac (READ)
// 00533ef6: XOR ESI,ESI
// 00533ef8: MOV EAX,dword ptr [EAX + 0x680184]
//   XREF to: 00680184 (DATA)
// 00533efe: TEST EDX,EDX
// 00533f00: JBE 0x00533e56
//   XREF to: 00533e56 (CONDITIONAL_JUMP)
// 00533f06: MOV EDX,EAX
//   Label: LAB_00533f06
// 00533f08: MOV DL,byte ptr [EDX]
// 00533f0a: INC EAX
// 00533f0b: MOV byte ptr [ECX + 0x2f682a8],DL
//   XREF to: 02f682a8 (WRITE)
//   XREF to: 02f682aa (WRITE)
// 00533f11: MOV EDX,EAX
// 00533f13: ADD ECX,0x2
// 00533f16: MOV DL,byte ptr [EDX]
// 00533f18: MOV byte ptr [ECX + 0x2f682a7],DL
//   XREF to: 02f682a9 (WRITE)
//   XREF to: 02f682ab (WRITE)
// 00533f1e: INC ESI
// 00533f1f: MOV EDX,dword ptr [EDI + 0x2f68aac]
//   XREF to: 02f68aac (READ)
// 00533f25: INC EAX
// 00533f26: CMP ESI,EDX
// 00533f28: JNC 0x00533e56
//   XREF to: 00533e56 (CONDITIONAL_JUMP)
// 00533f2e: JMP 0x00533f06
//   XREF to: 00533f06 (UNCONDITIONAL_JUMP)
// 00533f30: PUSH 0x2f68188
//   Label: LAB_00533f30
//   XREF to: 02f68188 (DATA)
// 00533f35: MOV ECX,0x63af93
//   XREF to: 0063af93 (DATA)
// 00533f3a: MOV ESI,0xd85
// 00533f3f: PUSH 0x63afa4
//   XREF to: 0063afa4 (DATA)
// 00533f44: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00533f4a: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00533f50: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00533f55: ADD ESP,0x8
// 00533f58: JMP 0x00533ee8
//   XREF to: 00533ee8 (UNCONDITIONAL_JUMP)
// 00533f5a: PUSH 0x2f68188
//   Label: LAB_00533f5a
//   XREF to: 02f68188 (DATA)
// 00533f5f: PUSH EBP
// 00533f60: MOV ESI,0x63afc9
//   XREF to: 0063afc9 (DATA)
// 00533f65: MOV EDI,0xd94
// 00533f6a: PUSH 0x63afda
//   XREF to: 0063afda (DATA)
// 00533f6f: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00533f75: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00533f7b: JMP 0x00533e4e
//   XREF to: 00533e4e (UNCONDITIONAL_JUMP)
