// Name: sound_mp3.cpp_initializeHuffmanTables_FUN_00533f80
// Address: 00533f80
// Address Range: [[00533f80, 00534209]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_initializeHuffmanTables_FUN_00533f80(void)
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
//   TerminatedCString s_sound_mp3_cpp_0063b00c
//   TerminatedCString s_decoder_table_read_error_0063b01d
//   SHuffmanTableSource[34] g_HuffmanTableSources
//   undefined4 DAT_00680174
//   undefined4 DAT_00680178
//   undefined4 DAT_0068017c
//   undefined4 DAT_00680180
//   undefined4 DAT_00680184
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_HuffmanTablesInitialized
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

void __cdecl sound_mp3_cpp_initializeHuffmanTables_FUN_00533f80(void)

{
  SHuffmanTable *str;
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000004;
  char *pcVar8;
  SHuffmanTable *local_c;
  int local_8;
  
  bVar7 = 0;
  if (g_HuffmanTablesInitialized == 0) {
    local_8 = g_HuffmanTablesInitialized;
    iVar3 = 0;
    iVar4 = 0;
    local_c = g_HuffmanTables;
    do {
      str = local_c;
      crt_stdio_c_sprintf_FUN_005fdbd0(local_c->table_id,"%d",iVar4);
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
      crt_stdio_c_sscanf_FUN_0060013c(str->table_id,"%u",&local_c);
      if (iVar4 != local_8) {
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd72;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("wrong table number %u.  File: %s",iVar4,g_CurrentMp3Filename);
      }
      iVar2 = *(int *)((int)&g_HuffmanTableSources[0].reference_index + in_stack_00000004);
      if (iVar2 < 0) {
        if (iVar2 != -1) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd94;
          pcVar8 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_005340a4;
        }
        uVar5 = *(uint *)((int)&g_HuffmanTables[0].table_size + iVar3);
        pcVar8 = g_HuffmanTables[0].huffman_data + iVar3 + -0xc;
        pcVar8[0] = -1;
        pcVar8[1] = -1;
        pcVar8[2] = -1;
        pcVar8[3] = -1;
        if (0x400 < uVar5) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd85;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("MP3 Huffman tree overflow!  File: %s",g_CurrentMp3Filename);
        }
        uVar5 = 0;
        pcVar8 = *(char **)((int)&g_HuffmanTableSources[0].huffman_data_ptr + in_stack_00000004);
        iVar2 = iVar3;
        if (*(int *)((int)&g_HuffmanTables[0].table_size + iVar3) != 0) {
          do {
            g_HuffmanTables[0].huffman_data[iVar2] = *pcVar8;
            g_HuffmanTables[0].huffman_data[iVar2 + 1] = pcVar8[1];
            uVar5 = uVar5 + 1;
            pcVar8 = pcVar8 + 2;
            iVar2 = iVar2 + 2;
          } while (uVar5 < *(uint *)((int)&g_HuffmanTables[0].table_size + iVar3));
        }
      }
      else {
        *(int *)(g_HuffmanTables[0].huffman_data + iVar3 + -0xc) = iVar2;
        pcVar8 = g_HuffmanTables[iVar2].huffman_data;
        pcVar6 = g_HuffmanTables[0].huffman_data + iVar3;
        for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + ((uint)bVar7 * -2 + 1) * 4;
          pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
        }
        for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
          *pcVar6 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar7 * -2 + 1;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
        }
        *(int *)((int)&g_HuffmanTables[0].table_size + iVar3) = g_HuffmanTables[iVar2].table_size;
        if ((*(int *)(g_HuffmanTables[0].table_id + iVar3 + 4) != g_HuffmanTables[iVar2].xlen) ||
           (g_HuffmanTables[iVar2].ylen != *(int *)(g_HuffmanTables[0].table_id + iVar3 + 8))) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd7d;
          pcVar8 = "wrong table %u reference.  File: %s";
LAB_005340a4:
          core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar8,iVar4,g_CurrentMp3Filename);
        }
      }
      iVar3 = iVar3 + 0x828;
      iVar4 = iVar4 + 1;
      local_8 = local_8 + 0x18;
      local_c = local_c + 1;
    } while (iVar4 < 0x22);
    if (iVar4 != 0x22) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0xda8;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("decoder table read error.  File: %s",g_CurrentMp3Filename);
    }
    g_HuffmanTablesInitialized = 1;
  }
  return;
}


// Assembly code:
// 00533f80: PUSH EBP
//   Label: sound_mp3.cpp_initializeHuffmanTables_FUN_00533f80
// 00533f81: SUB ESP,0xc
// 00533f84: MOV EDX,dword ptr [0x02f45980]
//   XREF to: 02f45980 (READ)
// 00533f8a: TEST EDX,EDX
// 00533f8c: JNZ 0x00534117
//   XREF to: 00534117 (CONDITIONAL_JUMP)
// 00533f92: PUSH EDI
// 00533f93: PUSH ESI
// 00533f94: PUSH EBX
// 00533f95: MOV ECX,0x2f68288
//   XREF to: 02f68288 (DATA)
// 00533f9a: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 00533f9e: XOR EBX,EBX
// 00533fa0: XOR EBP,EBP
// 00533fa2: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: 02f68288 (DATA)
//   XREF to: Stack[-0xc] (WRITE)
// 00533fa6: PUSH EBP
//   Label: LAB_00533fa6
// 00533fa7: PUSH 0x63af26
//   XREF to: 0063af26 (DATA)
// 00533fac: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0xc] (READ)
// 00533fb0: PUSH EDI
//   XREF to: 02f68288 (DATA)
//   XREF to: 02f68ab0 (DATA)
// 00533fb1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00533fb6: ADD ESP,0xc
// 00533fb9: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 00533fbd: MOV EAX,dword ptr [EAX + 0x680170]
//   XREF to: 00680170 (DATA)
// 00533fc3: MOV dword ptr [EBX + 0x2f68aac],EAX
//   XREF to: 02f68aac (WRITE)
// 00533fc9: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 00533fcd: MOV EAX,dword ptr [EAX + 0x680174]
//   XREF to: 00680174 (DATA)
// 00533fd3: MOV dword ptr [EBX + 0x2f6828c],EAX
//   XREF to: 02f6828c (WRITE)
// 00533fd9: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 00533fdd: MOV EAX,dword ptr [EAX + 0x680178]
//   XREF to: 00680178 (DATA)
// 00533fe3: MOV dword ptr [EBX + 0x2f68290],EAX
//   XREF to: 02f68290 (WRITE)
// 00533fe9: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 00533fed: MOV EAX,dword ptr [EAX + 0x68017c]
//   XREF to: 0068017c (DATA)
// 00533ff3: MOV dword ptr [EBX + 0x2f68294],EAX
//   XREF to: 02f68294 (WRITE)
// 00533ff9: MOV EAX,0x1
// 00533ffe: MOV CL,byte ptr [EBX + 0x2f68294]
//   XREF to: 02f68294 (READ)
// 00534004: SHL EAX,CL
// 00534006: DEC EAX
// 00534007: MOV dword ptr [EBX + 0x2f68298],EAX
//   XREF to: 02f68298 (WRITE)
// 0053400d: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x10] (DATA)
// 00534011: PUSH EAX
// 00534012: PUSH 0x63af29
//   XREF to: 0063af29 (DATA)
// 00534017: PUSH EDI
//   XREF to: 02f68288 (DATA)
// 00534018: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0053401d: ADD ESP,0xc
// 00534020: CMP EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 00534024: JNZ 0x0053411c
//   XREF to: 0053411c (CONDITIONAL_JUMP)
// 0053402a: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0053402a
//   XREF to: Stack[-0x8] (READ)
// 0053402e: MOV EAX,dword ptr [EAX + 0x680180]
//   XREF to: 00680180 (DATA)
// 00534034: TEST EAX,EAX
// 00534036: JL 0x00534161
//   XREF to: 00534161 (CONDITIONAL_JUMP)
// 0053403c: MOV dword ptr [EBX + 0x2f6829c],EAX
//   XREF to: 02f6829c (WRITE)
// 00534042: IMUL EDX,EAX,0x828
// 00534048: MOV ESI,0x2f68288
//   XREF to: 02f68288 (DATA)
// 0053404d: MOV EDI,0x2f68288
//   XREF to: 02f68288 (DATA)
// 00534052: MOV ECX,0x802
// 00534057: ADD EDI,EBX
// 00534059: ADD ESI,EDX
// 0053405b: ADD EDI,0x20
// 0053405e: ADD ESI,0x20
// 00534061: PUSH EDI
//   XREF to: 02f682a8 (DATA)
// 00534062: MOV EAX,ECX
// 00534064: SHR ECX,0x2
// 00534067: MOVSD.REP ES:EDI,ESI
//   XREF to: 02f682a8 (WRITE)
//   XREF to: 02f682ac (DATA)
//   XREF to: 02f682ac (WRITE)
// 00534069: MOV CL,AL
// 0053406b: AND CL,0x3
// 0053406e: MOVSB.REP ES:EDI,ESI
//   XREF to: 02f682ac (WRITE)
//   XREF to: 02f682ad (DATA)
//   XREF to: 02f682ad (WRITE)
// 00534070: POP EDI
// 00534071: MOV EAX,dword ptr [EDX + 0x2f68aac]
//   XREF to: 02f68aac (DATA)
// 00534077: MOV dword ptr [EBX + 0x2f68aac],EAX
//   XREF to: 02f68aac (WRITE)
// 0053407d: MOV EAX,dword ptr [EBX + 0x2f6828c]
//   XREF to: 02f6828c (READ)
// 00534083: CMP EAX,dword ptr [EDX + 0x2f6828c]
//   XREF to: 02f6828c (DATA)
// 00534089: JZ 0x0053414a
//   XREF to: 0053414a (CONDITIONAL_JUMP)
// 0053408f: PUSH 0x2f68188
//   Label: LAB_0053408f
//   XREF to: 02f68188 (DATA)
// 00534094: PUSH EBP
// 00534095: MOV EDI,0x63af5e
//   XREF to: 0063af5e (DATA)
// 0053409a: MOV EAX,0xd7d
// 0053409f: PUSH 0x63af6f
//   XREF to: 0063af6f (DATA)
// 005340a4: MOV dword ptr [0x02f0ca48],EDI
//   Label: LAB_005340a4
//   XREF to: 02f0ca48 (WRITE)
// 005340aa: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005340af: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005340b4: ADD ESP,0xc
// 005340b7: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_005340b7
//   XREF to: Stack[-0x8] (READ)
// 005340bb: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (READ)
// 005340bf: ADD EBX,0x828
// 005340c5: INC EBP
// 005340c6: ADD ESI,0x18
// 005340c9: ADD ECX,0x828
// 005340cf: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x8] (WRITE)
// 005340d3: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: 02f68ab0 (DATA)
//   XREF to: Stack[-0xc] (WRITE)
// 005340d7: CMP EBP,0x22
// 005340da: JL 0x00533fa6
//   XREF to: 00533fa6 (CONDITIONAL_JUMP)
// 005340e0: JZ 0x0053410a
//   XREF to: 0053410a (CONDITIONAL_JUMP)
// 005340e2: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 005340e7: MOV EDI,0x63b00c
//   XREF to: 0063b00c (DATA)
// 005340ec: MOV EBP,0xda8
// 005340f1: PUSH 0x63b01d
//   XREF to: 0063b01d (DATA)
// 005340f6: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005340fc: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00534102: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00534107: ADD ESP,0x8
// 0053410a: MOV dword ptr [0x02f45980],0x1
//   Label: LAB_0053410a
//   XREF to: 02f45980 (WRITE)
// 00534114: POP EBX
// 00534115: POP ESI
// 00534116: POP EDI
// 00534117: ADD ESP,0xc
//   Label: LAB_00534117
// 0053411a: POP EBP
// 0053411b: RET
// 0053411c: PUSH 0x2f68188
//   Label: LAB_0053411c
//   XREF to: 02f68188 (DATA)
// 00534121: PUSH EBP
// 00534122: MOV ECX,0x63af2c
//   XREF to: 0063af2c (DATA)
// 00534127: MOV ESI,0xd72
// 0053412c: PUSH 0x63af3d
//   XREF to: 0063af3d (DATA)
// 00534131: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00534137: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0053413d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00534142: ADD ESP,0xc
// 00534145: JMP 0x0053402a
//   XREF to: 0053402a (UNCONDITIONAL_JUMP)
// 0053414a: MOV ESI,dword ptr [EDX + 0x2f68290]
//   Label: LAB_0053414a
//   XREF to: 02f68290 (DATA)
// 00534150: CMP ESI,dword ptr [EBX + 0x2f68290]
//   XREF to: 02f68290 (READ)
// 00534156: JNZ 0x0053408f
//   XREF to: 0053408f (CONDITIONAL_JUMP)
// 0053415c: JMP 0x005340b7
//   XREF to: 005340b7 (UNCONDITIONAL_JUMP)
// 00534161: CMP EAX,-0x1
//   Label: LAB_00534161
// 00534164: JNZ 0x005341f0
//   XREF to: 005341f0 (CONDITIONAL_JUMP)
// 0053416a: MOV ECX,dword ptr [EBX + 0x2f68aac]
//   XREF to: 02f68aac (READ)
// 00534170: MOV dword ptr [EBX + 0x2f6829c],EAX
//   XREF to: 02f6829c (WRITE)
// 00534176: CMP ECX,0x401
// 0053417c: JNC 0x005341c6
//   XREF to: 005341c6 (CONDITIONAL_JUMP)
// 0053417e: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0053417e
//   XREF to: Stack[-0x8] (READ)
// 00534182: MOV EDI,EBX
// 00534184: MOV ECX,EBX
// 00534186: MOV EDX,dword ptr [EBX + 0x2f68aac]
//   XREF to: 02f68aac (READ)
// 0053418c: XOR ESI,ESI
// 0053418e: MOV EAX,dword ptr [EAX + 0x680184]
//   XREF to: 00680184 (DATA)
// 00534194: TEST EDX,EDX
// 00534196: JBE 0x005340b7
//   XREF to: 005340b7 (CONDITIONAL_JUMP)
// 0053419c: MOV EDX,EAX
//   Label: LAB_0053419c
// 0053419e: MOV DL,byte ptr [EDX]
// 005341a0: INC EAX
// 005341a1: MOV byte ptr [ECX + 0x2f682a8],DL
//   XREF to: 02f682a8 (WRITE)
//   XREF to: 02f682aa (WRITE)
// 005341a7: MOV EDX,EAX
// 005341a9: ADD ECX,0x2
// 005341ac: MOV DL,byte ptr [EDX]
// 005341ae: MOV byte ptr [ECX + 0x2f682a7],DL
//   XREF to: 02f682a9 (WRITE)
//   XREF to: 02f682ab (WRITE)
// 005341b4: INC ESI
// 005341b5: MOV EDX,dword ptr [EDI + 0x2f68aac]
//   XREF to: 02f68aac (READ)
// 005341bb: INC EAX
// 005341bc: CMP ESI,EDX
// 005341be: JNC 0x005340b7
//   XREF to: 005340b7 (CONDITIONAL_JUMP)
// 005341c4: JMP 0x0053419c
//   XREF to: 0053419c (UNCONDITIONAL_JUMP)
// 005341c6: PUSH 0x2f68188
//   Label: LAB_005341c6
//   XREF to: 02f68188 (DATA)
// 005341cb: MOV ESI,0x63af93
//   XREF to: 0063af93 (DATA)
// 005341d0: MOV EDI,0xd85
// 005341d5: PUSH 0x63afa4
//   XREF to: 0063afa4 (DATA)
// 005341da: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005341e0: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005341e6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005341eb: ADD ESP,0x8
// 005341ee: JMP 0x0053417e
//   XREF to: 0053417e (UNCONDITIONAL_JUMP)
// 005341f0: PUSH 0x2f68188
//   Label: LAB_005341f0
//   XREF to: 02f68188 (DATA)
// 005341f5: PUSH EBP
// 005341f6: MOV EDI,0x63afc9
//   XREF to: 0063afc9 (DATA)
// 005341fb: MOV EAX,0xd94
// 00534200: PUSH 0x63afda
//   XREF to: 0063afda (DATA)
// 00534205: JMP 0x005340a4
//   XREF to: 005340a4 (UNCONDITIONAL_JUMP)
