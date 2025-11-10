// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
// Address: 00531680
// Address Range: [[00531680, 00531d4d]]
// Convention: __cdecl
// Signature: uint sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680(CMP3Decoder * this_ptr, float * spectral_dest, SMpegLayer3Granule * granule_info, int channel, int granule, SMpegFrame * frame, int bit_budget)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 (00534d40) at 00535858 [UNCONDITIONAL_CALL]
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
//   undefined4 DAT_0067e6cc
//   undefined4 DAT_0067e6d0
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
//   sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
//   sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
//   sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
//   sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0

#include "nocturne.h"

uint __cdecl
sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
          (CMP3Decoder *this_ptr,float *spectral_dest,SMpegLayer3Granule *granule_info,int channel,
          int granule,SMpegFrame *frame,int bit_budget)

{
  uint uVar1;
  int iVar2;
  SHuffmanTable *huffman_table;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  char *pcVar8;
  uint unaff_ESI;
  uint uVar9;
  int unaff_EDI;
  int iVar10;
  char *pcVar11;
  byte bVar12;
  CMP3Decoder *in_stack_00000020;
  CMP3Decoder *in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  char *pcVar13;
  char *in_stack_ffffffbc;
  int *w_out;
  int in_stack_ffffffc4;
  char *in_stack_ffffffd0;
  SHuffmanTable *local_1c;
  int local_14;
  
  bVar12 = 0;
  iVar3 = (*(int **)bit_budget)[4] + **(int **)bit_budget * 3;
  if (g_HuffmanTablesInitialized == 0) {
    iVar7 = 0;
    pcVar8 = (char *)0x0;
    local_1c = g_HuffmanTables;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_1c->table_id,"%d",pcVar8);
      *(undefined4 *)((int)&g_HuffmanTables[0].table_size + iVar7) =
           *(undefined4 *)((int)&g_HuffmanTableSources[0].table_size + local_14);
      *(undefined4 *)(g_HuffmanTables[0].table_id + iVar7 + 4) =
           *(undefined4 *)((int)&g_HuffmanTableSources[0].field1_0x4 + local_14);
      *(undefined4 *)(g_HuffmanTables[0].table_id + iVar7 + 8) =
           *(undefined4 *)((int)&g_HuffmanTableSources[0].field2_0x8 + local_14);
      *(undefined4 *)(g_HuffmanTables[0].table_id + iVar7 + 0xc) =
           *(undefined4 *)((int)&g_HuffmanTableSources[0].bits + local_14);
      *(int *)(g_HuffmanTables[0].table_id + iVar7 + 0x10) =
           (1 << (g_HuffmanTables[0].table_id[iVar7 + 0xc] & 0x1fU)) + -1;
      crt_stdio_c_sscanf_FUN_0060013c(local_1c->table_id,"%u",&stack0xffffffcc);
      if (pcVar8 != in_stack_ffffffd0) {
        in_stack_ffffffbc = g_CurrentMp3Filename;
        g_CurrentFilename = "..\\sound\\mp3.cpp";
        g_CurrentLineNumber = 0xd72;
        core_main_c_displayErrorAndQuit_FUN_00506f10("wrong table number %u.  File: %s",pcVar8);
      }
      iVar5 = *(int *)((int)&g_HuffmanTableSources[0].reference_index + unaff_EDI);
      if (iVar5 < 0) {
        if (iVar5 != -1) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd94;
          pcVar13 = "huffman decodertable error at table %d.  File: %s";
          goto LAB_00531a14;
        }
        uVar9 = *(uint *)((int)&g_HuffmanTables[0].table_size + iVar7);
        pcVar13 = g_HuffmanTables[0].huffman_data + iVar7 + -0xc;
        pcVar13[0] = -1;
        pcVar13[1] = -1;
        pcVar13[2] = -1;
        pcVar13[3] = -1;
        if (0x400 < uVar9) {
          in_stack_ffffffbc = "MP3 Huffman tree overflow!  File: %s";
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd85;
          core_main_c_displayErrorAndQuit_FUN_00506f10("MP3 Huffman tree overflow!  File: %s");
        }
        uVar9 = 0;
        pcVar13 = *(char **)((int)&g_HuffmanTableSources[0].huffman_data_ptr + unaff_EDI);
        iVar5 = iVar7;
        if (*(int *)((int)&g_HuffmanTables[0].table_size + iVar7) != 0) {
          do {
            g_HuffmanTables[0].huffman_data[iVar5] = *pcVar13;
            g_HuffmanTables[0].huffman_data[iVar5 + 1] = pcVar13[1];
            uVar9 = uVar9 + 1;
            pcVar13 = pcVar13 + 2;
            iVar5 = iVar5 + 2;
          } while (uVar9 < *(uint *)((int)&g_HuffmanTables[0].table_size + iVar7));
        }
      }
      else {
        *(int *)(g_HuffmanTables[0].huffman_data + iVar7 + -0xc) = iVar5;
        pcVar13 = g_HuffmanTables[iVar5].huffman_data;
        pcVar11 = g_HuffmanTables[0].huffman_data + iVar7;
        for (iVar10 = 0x200; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + ((uint)bVar12 * -2 + 1) * 4;
          pcVar11 = pcVar11 + ((uint)bVar12 * -2 + 1) * 4;
        }
        for (iVar10 = 2; iVar10 != 0; iVar10 = iVar10 + -1) {
          *pcVar11 = *pcVar13;
          pcVar13 = pcVar13 + (uint)bVar12 * -2 + 1;
          pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
        }
        *(int *)((int)&g_HuffmanTables[0].table_size + iVar7) = g_HuffmanTables[iVar5].table_size;
        if ((*(int *)(g_HuffmanTables[0].table_id + iVar7 + 4) != g_HuffmanTables[iVar5].xlen) ||
           (g_HuffmanTables[iVar5].ylen != *(int *)(g_HuffmanTables[0].table_id + iVar7 + 8))) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0xd7d;
          pcVar13 = "wrong table %u reference.  File: %s";
LAB_00531a14:
          in_stack_ffffffbc = pcVar8;
          core_main_c_displayErrorAndQuit_FUN_00506f10(pcVar13);
        }
      }
      iVar7 = iVar7 + 0x828;
      pcVar8 = pcVar8 + 1;
      local_1c = local_1c + 1;
    } while ((int)pcVar8 < 0x22);
    if (pcVar8 != (char *)0x22) {
      g_CurrentFilename = "..\\sound\\mp3.cpp";
      g_CurrentLineNumber = 0xda8;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("decoder table read error.  File: %s",g_CurrentMp3Filename);
    }
    g_HuffmanTablesInitialized = 1;
  }
  if ((granule_info[channel].table_select[granule * 0x12 + -3] == 0) ||
     (granule_info[channel].table_select[granule * 0x12 + -2] != 2)) {
    iVar7 = *(int *)(&DAT_0067e6d0 +
                    (granule_info[channel].subblock_gain[granule * 0x12 + 4] +
                    granule_info[channel].subblock_gain[granule * 0x12 + 3]) * 4 + iVar3 * 0x94);
  }
  else {
    iVar7 = 0x240;
  }
  uVar9 = 0;
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(this_ptr);
  iVar10 = granule * 0x48;
  iVar5 = 1;
  while( true ) {
    if ((uint)(*(int *)(granule_info[channel].field2_0x8 + iVar10 + 0x14) * 2) <= uVar9) break;
    if ((int)uVar9 < (int)local_1c) {
      huffman_table = g_HuffmanTables + *(int *)((int)granule_info[channel].table_select + iVar10);
    }
    else if ((int)uVar9 < iVar7) {
      huffman_table =
           g_HuffmanTables + *(int *)((int)granule_info[channel].table_select + iVar10 + 4);
    }
    else {
      huffman_table =
           g_HuffmanTables + *(int *)((int)granule_info[channel].table_select + iVar10 + 8);
    }
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
              ((CMP3Decoder *)spectral_dest,huffman_table,(int *)&stack0xffffffbc,
               (int *)&stack0xffffffc0,(int *)&stack0xffffffc4,(int *)&stack0xffffffc8);
    *(char **)(channel + ((int)uVar9 / 0x12) * 0x48 + ((int)uVar9 % 0x12) * 4) = in_stack_ffffffbc;
    iVar6 = iVar5 / 0x12;
    iVar2 = iVar5 % 0x12;
    uVar9 = uVar9 + 2;
    iVar5 = iVar5 + 2;
    *(int *)(channel + iVar6 * 0x48 + iVar2 * 4) = in_stack_ffffffc4;
  }
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160((CMP3Decoder *)spectral_dest);
  iVar7 = uVar9 + 3;
  iVar5 = uVar9 + 2;
  iVar6 = uVar9 + 1;
  for (; (uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
                            ((CMP3Decoder *)granule_info), uVar1 < unaff_ESI && ((int)uVar9 < 0x240)
         ); uVar9 = uVar9 + 4) {
    w_out = (int *)&stack0xffffffd0;
    sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
              ((CMP3Decoder *)channel,local_1c,(int *)&stack0xffffffc4,(int *)&stack0xffffffc8,
               (int *)&stack0xffffffcc,w_out);
    *(char **)((int)frame + ((int)uVar9 % 0x12) * 4 + ((int)uVar9 / 0x12) * 0x48) =
         in_stack_ffffffd0;
    *(int *)((int)frame + (iVar6 % 0x12) * 4 + (iVar6 / 0x12) * 0x48) = iVar10;
    *(int **)((int)frame + (iVar5 % 0x12) * 4 + (iVar5 / 0x12) * 0x48) = w_out;
    iVar2 = iVar7 / 0x12;
    iVar4 = iVar7 % 0x12;
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 4;
    iVar7 = iVar7 + 4;
    *(int *)((int)frame + iVar4 * 4 + iVar2 * 0x48) = iVar3;
  }
  iVar7 = (int)in_stack_00000020 * 0x48 + bit_budget * 0xa0;
  sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160((CMP3Decoder *)channel);
  iVar3 = *(int *)((int)frame + iVar7 + 0x18);
  uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160((CMP3Decoder *)granule);
  if ((uint)(in_stack_00000028 + iVar3) < uVar1) {
    uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160((CMP3Decoder *)frame);
    uVar9 = uVar9 - 4;
    sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_0052f2c0
              ((CMP3Decoder *)bit_budget,
               (uVar1 - in_stack_00000030) - *(int *)((int)frame + iVar7 + 0x18));
  }
  iVar3 = in_stack_00000034 +
          *(int *)(in_stack_00000028 + in_stack_0000002c * 0xa0 + 0x18 + in_stack_00000030 * 0x48);
  uVar1 = sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(in_stack_00000020);
  if ((int)uVar1 < iVar3) {
    uVar1 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_0052f170(in_stack_00000024,iVar3 - uVar1);
  }
  for (; (int)uVar9 < 0x240; uVar9 = uVar9 + 1) {
    uVar1 = (int)uVar9 / 0x12;
    *(undefined4 *)(in_stack_0000002c + ((int)uVar9 / 0x12) * 0x48 + ((int)uVar9 % 0x12) * 4) = 0;
  }
  return uVar1;
}


// Assembly code:
// 00531680: PUSH EBX
//   Label: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680
// 00531681: PUSH ESI
// 00531682: PUSH EDI
// 00531683: PUSH EBP
// 00531684: SUB ESP,0x38
// 00531687: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x1c] (READ)
// 0053168b: MOV ECX,dword ptr [ECX]
// 0053168d: MOV EDX,dword ptr [ECX]
// 0053168f: LEA EAX,[EDX*0x4 + 0x0]
// 00531696: SUB EAX,EDX
// 00531698: MOV EDX,dword ptr [ECX + 0x10]
// 0053169b: ADD EDX,EAX
// 0053169d: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 005316a1: MOV EDX,dword ptr [0x02f45980]
//   XREF to: 02f45980 (READ)
// 005316a7: TEST EDX,EDX
// 005316a9: JZ 0x005318e0
//   XREF to: 005318e0 (CONDITIONAL_JUMP)
// 005316af: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_005316af
//   XREF to: Stack[0x10] (READ)
// 005316b3: LEA EAX,[EDX*0x4 + 0x0]
// 005316ba: ADD EAX,EDX
// 005316bc: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 005316c0: SHL EAX,0x5
// 005316c3: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x14] (READ)
// 005316c7: ADD ECX,EAX
// 005316c9: LEA EAX,[EDX*0x8 + 0x0]
// 005316d0: ADD EAX,EDX
// 005316d2: SHL EAX,0x3
// 005316d5: ADD EAX,ECX
// 005316d7: CMP dword ptr [EAX + 0x28],0x0
// 005316db: JZ 0x00531b44
//   XREF to: 00531b44 (CONDITIONAL_JUMP)
// 005316e1: CMP dword ptr [EAX + 0x2c],0x2
// 005316e5: JNZ 0x00531b44
//   XREF to: 00531b44 (CONDITIONAL_JUMP)
// 005316eb: MOV EBX,0x24
// 005316f0: MOV EBP,0x240
// 005316f5: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 005316f9: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_005316f9
//   XREF to: Stack[0x10] (READ)
// 005316fd: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 00531701: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00531705: LEA EAX,[EDX*0x4 + 0x0]
// 0053170c: PUSH ESI
// 0053170d: ADD EAX,EDX
// 0053170f: XOR ESI,ESI
// 00531711: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x14] (READ)
// 00531715: SHL EAX,0x5
// 00531718: LEA EDI,[EDX*0x8 + 0x0]
// 0053171f: ADD EBX,EAX
// 00531721: ADD EDI,EDX
// 00531723: CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
//   XREF to: 0052f160 (UNCONDITIONAL_CALL)
// 00531728: ADD ESP,0x4
// 0053172b: SHL EDI,0x3
// 0053172e: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00531732: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 00531736: MOV EBX,0x1
// 0053173b: MOV EDI,dword ptr [ESP + 0x24]
//   Label: LAB_0053173b
//   XREF to: Stack[-0x24] (READ)
// 0053173f: ADD EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 00531743: MOV EAX,dword ptr [EDI + 0x1c]
// 00531746: ADD EAX,EAX
// 00531748: CMP ESI,EAX
// 0053174a: JC 0x00531ba0
//   XREF to: 00531ba0 (CONDITIONAL_JUMP)
// 00531750: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00531754: PUSH EDX
// 00531755: CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
//   XREF to: 0052f160 (UNCONDITIONAL_CALL)
// 0053175a: MOV EDX,dword ptr [EDI + 0x5c]
// 0053175d: ADD EDX,0x20
// 00531760: MOV EAX,EDX
// 00531762: SHL EAX,0x6
// 00531765: ADD EAX,EDX
// 00531767: SHL EAX,0x2
// 0053176a: ADD EAX,EDX
// 0053176c: MOV EDX,0x2f68288
//   XREF to: 02f68288 (DATA)
// 00531771: SHL EAX,0x3
// 00531774: ADD ESP,0x4
// 00531777: ADD EDX,EAX
// 00531779: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0053177d: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x10] (READ)
// 00531781: LEA EAX,[EDX*0x4 + 0x0]
// 00531788: ADD EAX,EDX
// 0053178a: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 0053178e: SHL EAX,0x5
// 00531791: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x14] (READ)
// 00531795: ADD ECX,EAX
// 00531797: LEA EAX,[EDX*0x8 + 0x0]
// 0053179e: ADD EAX,EDX
// 005317a0: LEA EDI,[ESI + 0x3]
// 005317a3: SHL EAX,0x3
// 005317a6: LEA EBP,[ESI + 0x2]
// 005317a9: ADD ECX,EAX
// 005317ab: LEA EBX,[ESI + 0x1]
// 005317ae: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005317b2: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_005317b2
//   XREF to: Stack[-0x2c] (READ)
// 005317b6: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x18] (READ)
// 005317ba: MOV ECX,dword ptr [EDX + 0x18]
// 005317bd: ADD EAX,ECX
// 005317bf: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005317c3: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 005317c7: PUSH EAX
// 005317c8: CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
//   XREF to: 0052f160 (UNCONDITIONAL_CALL)
// 005317cd: ADD ESP,0x4
// 005317d0: CMP EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 005317d4: JNC 0x00531c4c
//   XREF to: 00531c4c (CONDITIONAL_JUMP)
// 005317da: CMP ESI,0x240
// 005317e0: JGE 0x00531c4c
//   XREF to: 00531c4c (CONDITIONAL_JUMP)
// 005317e6: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3c] (DATA)
// 005317ea: PUSH EAX
// 005317eb: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 005317ef: PUSH EAX
// 005317f0: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x44] (DATA)
// 005317f4: PUSH EAX
// 005317f5: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x48] (DATA)
// 005317f9: PUSH EAX
// 005317fa: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 005317fe: PUSH EAX
// 005317ff: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 00531803: PUSH EDX
// 00531804: CALL sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
//   XREF to: 0052f350 (UNCONDITIONAL_CALL)
// 00531809: MOV ECX,0x12
// 0053180e: MOV EDX,ESI
// 00531810: MOV EAX,ESI
// 00531812: SAR EDX,0x1f
// 00531815: IDIV ECX
// 00531817: IMUL EAX,EAX,0x48
// 0053181a: ADD ESP,0x18
// 0053181d: MOV dword ptr [ESP + 0x34],0x12
//   XREF to: Stack[-0x14] (WRITE)
// 00531825: MOV EDX,ESI
// 00531827: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0053182b: SAR EDX,0x1f
// 0053182e: ADD ECX,EAX
// 00531830: MOV EAX,ESI
// 00531832: IDIV dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 00531836: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 0053183a: MOV dword ptr [ECX + EDX*0x4],EAX
// 0053183d: MOV ECX,0x12
// 00531842: MOV EDX,EBX
// 00531844: MOV EAX,EBX
// 00531846: SAR EDX,0x1f
// 00531849: IDIV ECX
// 0053184b: IMUL EAX,EAX,0x48
// 0053184e: MOV dword ptr [ESP + 0x34],0x12
//   XREF to: Stack[-0x14] (WRITE)
// 00531856: MOV EDX,EBX
// 00531858: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0053185c: SAR EDX,0x1f
// 0053185f: ADD ECX,EAX
// 00531861: MOV EAX,EBX
// 00531863: IDIV dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 00531867: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 0053186b: MOV dword ptr [ECX + EDX*0x4],EAX
// 0053186e: MOV ECX,0x12
// 00531873: MOV EDX,EBP
// 00531875: MOV EAX,EBP
// 00531877: SAR EDX,0x1f
// 0053187a: IDIV ECX
// 0053187c: IMUL EAX,EAX,0x48
// 0053187f: MOV dword ptr [ESP + 0x34],0x12
//   XREF to: Stack[-0x14] (WRITE)
// 00531887: MOV EDX,EBP
// 00531889: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0053188d: SAR EDX,0x1f
// 00531890: ADD ECX,EAX
// 00531892: MOV EAX,EBP
// 00531894: IDIV dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 00531898: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 0053189b: MOV dword ptr [ECX + EDX*0x4],EAX
// 0053189e: MOV ECX,0x12
// 005318a3: MOV EDX,EDI
// 005318a5: MOV EAX,EDI
// 005318a7: SAR EDX,0x1f
// 005318aa: IDIV ECX
// 005318ac: IMUL EAX,EAX,0x48
// 005318af: MOV dword ptr [ESP + 0x34],0x12
//   XREF to: Stack[-0x14] (WRITE)
// 005318b7: MOV EDX,EDI
// 005318b9: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 005318bd: SAR EDX,0x1f
// 005318c0: ADD ECX,EAX
// 005318c2: MOV EAX,EDI
// 005318c4: IDIV dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 005318c8: ADD ESI,0x4
// 005318cb: ADD EBX,0x4
// 005318ce: ADD EBP,0x4
// 005318d1: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (READ)
// 005318d5: ADD EDI,0x4
// 005318d8: MOV dword ptr [ECX + EDX*0x4],EAX
// 005318db: JMP 0x005317b2
//   XREF to: 005317b2 (UNCONDITIONAL_JUMP)
// 005318e0: MOV ECX,0x2f68288
//   Label: LAB_005318e0
//   XREF to: 02f68288 (DATA)
// 005318e5: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005318e9: XOR EBX,EBX
// 005318eb: XOR EBP,EBP
// 005318ed: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
//   XREF to: 02f68288 (DATA)
// 005318f1: PUSH EBP
//   Label: LAB_005318f1
// 005318f2: PUSH 0x63af26
//   XREF to: 0063af26 (DATA)
// 005318f7: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 005318fb: PUSH EDI
//   XREF to: 02f68288 (DATA)
//   XREF to: 02f68ab0 (DATA)
// 005318fc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00531901: ADD ESP,0xc
// 00531904: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 00531908: MOV EAX,dword ptr [EAX + 0x680170]
//   XREF to: 00680170 (DATA)
// 0053190e: MOV dword ptr [EBX + 0x2f68aac],EAX
//   XREF to: 02f68aac (WRITE)
// 00531914: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 00531918: MOV EAX,dword ptr [EAX + 0x680174]
//   XREF to: 00680174 (DATA)
// 0053191e: MOV dword ptr [EBX + 0x2f6828c],EAX
//   XREF to: 02f6828c (WRITE)
// 00531924: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 00531928: MOV EAX,dword ptr [EAX + 0x680178]
//   XREF to: 00680178 (DATA)
// 0053192e: MOV dword ptr [EBX + 0x2f68290],EAX
//   XREF to: 02f68290 (WRITE)
// 00531934: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 00531938: MOV EAX,dword ptr [EAX + 0x68017c]
//   XREF to: 0068017c (DATA)
// 0053193e: MOV dword ptr [EBX + 0x2f68294],EAX
//   XREF to: 02f68294 (WRITE)
// 00531944: MOV EAX,0x1
// 00531949: MOV CL,byte ptr [EBX + 0x2f68294]
//   XREF to: 02f68294 (READ)
// 0053194f: SHL EAX,CL
// 00531951: DEC EAX
// 00531952: MOV dword ptr [EBX + 0x2f68298],EAX
//   XREF to: 02f68298 (WRITE)
// 00531958: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x38] (DATA)
// 0053195c: PUSH EAX
// 0053195d: PUSH 0x63af29
//   XREF to: 0063af29 (DATA)
// 00531962: PUSH EDI
//   XREF to: 02f68288 (DATA)
// 00531963: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00531968: ADD ESP,0xc
// 0053196b: CMP EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (READ)
// 0053196f: JZ 0x0053199a
//   XREF to: 0053199a (CONDITIONAL_JUMP)
// 00531971: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 00531976: PUSH EBP
// 00531977: MOV ECX,0x63af2c
//   XREF to: 0063af2c (PARAM)
// 0053197c: MOV ESI,0xd72
// 00531981: PUSH 0x63af3d
//   XREF to: 0063af3d (DATA)
// 00531986: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0053198c: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00531992: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00531997: ADD ESP,0xc
// 0053199a: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0053199a
//   XREF to: Stack[-0x18] (READ)
// 0053199e: MOV EAX,dword ptr [EAX + 0x680180]
//   XREF to: 00680180 (DATA)
// 005319a4: TEST EAX,EAX
// 005319a6: JL 0x00531a9d
//   XREF to: 00531a9d (CONDITIONAL_JUMP)
// 005319ac: MOV dword ptr [EBX + 0x2f6829c],EAX
//   XREF to: 02f6829c (WRITE)
// 005319b2: IMUL EDX,EAX,0x828
// 005319b8: MOV ESI,0x2f68288
//   XREF to: 02f68288 (DATA)
// 005319bd: MOV EDI,0x2f68288
//   XREF to: 02f68288 (DATA)
// 005319c2: MOV ECX,0x802
// 005319c7: ADD EDI,EBX
// 005319c9: ADD ESI,EDX
// 005319cb: ADD EDI,0x20
// 005319ce: ADD ESI,0x20
// 005319d1: PUSH EDI
//   XREF to: 02f682a8 (DATA)
// 005319d2: MOV EAX,ECX
// 005319d4: SHR ECX,0x2
// 005319d7: MOVSD.REP ES:EDI,ESI
//   XREF to: 02f682ac (WRITE)
//   XREF to: 02f682a8 (WRITE)
//   XREF to: 02f682ac (DATA)
// 005319d9: MOV CL,AL
// 005319db: AND CL,0x3
// 005319de: MOVSB.REP ES:EDI,ESI
//   XREF to: 02f682ad (WRITE)
//   XREF to: 02f682ac (WRITE)
//   XREF to: 02f682ad (DATA)
// 005319e0: POP EDI
// 005319e1: MOV EAX,dword ptr [EDX + 0x2f68aac]
//   XREF to: 02f68aac (DATA)
// 005319e7: MOV dword ptr [EBX + 0x2f68aac],EAX
//   XREF to: 02f68aac (WRITE)
// 005319ed: MOV EAX,dword ptr [EBX + 0x2f6828c]
//   XREF to: 02f6828c (READ)
// 005319f3: CMP EAX,dword ptr [EDX + 0x2f6828c]
//   XREF to: 02f6828c (DATA)
// 005319f9: JZ 0x00531a89
//   XREF to: 00531a89 (CONDITIONAL_JUMP)
// 005319ff: PUSH 0x2f68188
//   Label: LAB_005319ff
//   XREF to: 02f68188 (DATA)
// 00531a04: PUSH EBP
// 00531a05: MOV EDI,0x63af5e
//   XREF to: 0063af5e (DATA)
// 00531a0a: MOV EAX,0xd7d
// 00531a0f: PUSH 0x63af6f
//   XREF to: 0063af6f (DATA)
// 00531a14: MOV dword ptr [0x02f0ca48],EDI
//   Label: LAB_00531a14
//   XREF to: 02f0ca48 (WRITE)
// 00531a1a: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00531a1f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00531a24: ADD ESP,0xc
// 00531a27: MOV ESI,dword ptr [ESP + 0x30]
//   Label: LAB_00531a27
//   XREF to: Stack[-0x18] (READ)
// 00531a2b: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 00531a2f: ADD EBX,0x828
// 00531a35: INC EBP
// 00531a36: ADD ESI,0x18
// 00531a39: ADD ECX,0x828
// 00531a3f: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00531a43: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
//   XREF to: 02f68ab0 (DATA)
// 00531a47: CMP EBP,0x22
// 00531a4a: JL 0x005318f1
//   XREF to: 005318f1 (CONDITIONAL_JUMP)
// 00531a50: JZ 0x00531a7a
//   XREF to: 00531a7a (CONDITIONAL_JUMP)
// 00531a52: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 00531a57: MOV EDI,0x63b00c
//   XREF to: 0063b00c (DATA)
// 00531a5c: MOV EBP,0xda8
// 00531a61: PUSH 0x63b01d
//   XREF to: 0063b01d (DATA)
// 00531a66: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00531a6c: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00531a72: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00531a77: ADD ESP,0x8
// 00531a7a: MOV dword ptr [0x02f45980],0x1
//   Label: LAB_00531a7a
//   XREF to: 02f45980 (WRITE)
// 00531a84: JMP 0x005316af
//   XREF to: 005316af (UNCONDITIONAL_JUMP)
// 00531a89: MOV ESI,dword ptr [EDX + 0x2f68290]
//   Label: LAB_00531a89
//   XREF to: 02f68290 (DATA)
// 00531a8f: CMP ESI,dword ptr [EBX + 0x2f68290]
//   XREF to: 02f68290 (READ)
// 00531a95: JNZ 0x005319ff
//   XREF to: 005319ff (CONDITIONAL_JUMP)
// 00531a9b: JMP 0x00531a27
//   XREF to: 00531a27 (UNCONDITIONAL_JUMP)
// 00531a9d: CMP EAX,-0x1
//   Label: LAB_00531a9d
// 00531aa0: JNZ 0x00531b2a
//   XREF to: 00531b2a (CONDITIONAL_JUMP)
// 00531aa6: MOV ECX,dword ptr [EBX + 0x2f68aac]
//   XREF to: 02f68aac (READ)
// 00531aac: MOV dword ptr [EBX + 0x2f6829c],EAX
//   XREF to: 02f6829c (WRITE)
// 00531ab2: CMP ECX,0x401
// 00531ab8: JC 0x00531ae2
//   XREF to: 00531ae2 (CONDITIONAL_JUMP)
// 00531aba: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 00531abf: MOV ESI,0x63af93
//   XREF to: 0063af93 (DATA)
// 00531ac4: MOV EDI,0xd85
// 00531ac9: PUSH 0x63afa4
//   XREF to: 0063afa4 (DATA)
// 00531ace: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00531ad4: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00531ada: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00531adf: ADD ESP,0x8
// 00531ae2: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_00531ae2
//   XREF to: Stack[-0x18] (READ)
// 00531ae6: MOV EDI,EBX
// 00531ae8: MOV ECX,EBX
// 00531aea: MOV EDX,dword ptr [EBX + 0x2f68aac]
//   XREF to: 02f68aac (READ)
// 00531af0: XOR ESI,ESI
// 00531af2: MOV EAX,dword ptr [EAX + 0x680184]
//   XREF to: 00680184 (DATA)
// 00531af8: TEST EDX,EDX
// 00531afa: JBE 0x00531a27
//   XREF to: 00531a27 (CONDITIONAL_JUMP)
// 00531b00: MOV EDX,EAX
//   Label: LAB_00531b00
// 00531b02: MOV DL,byte ptr [EDX]
// 00531b04: INC EAX
// 00531b05: MOV byte ptr [ECX + 0x2f682a8],DL
//   XREF to: 02f682a8 (WRITE)
//   XREF to: 02f682aa (WRITE)
// 00531b0b: MOV EDX,EAX
// 00531b0d: ADD ECX,0x2
// 00531b10: MOV DL,byte ptr [EDX]
// 00531b12: MOV byte ptr [ECX + 0x2f682a7],DL
//   XREF to: 02f682a9 (WRITE)
//   XREF to: 02f682ab (WRITE)
// 00531b18: INC ESI
// 00531b19: MOV EDX,dword ptr [EDI + 0x2f68aac]
//   XREF to: 02f68aac (READ)
// 00531b1f: INC EAX
// 00531b20: CMP ESI,EDX
// 00531b22: JNC 0x00531a27
//   XREF to: 00531a27 (CONDITIONAL_JUMP)
// 00531b28: JMP 0x00531b00
//   XREF to: 00531b00 (UNCONDITIONAL_JUMP)
// 00531b2a: PUSH 0x2f68188
//   Label: LAB_00531b2a
//   XREF to: 02f68188 (DATA)
// 00531b2f: PUSH EBP
// 00531b30: MOV EDI,0x63afc9
//   XREF to: 0063afc9 (DATA)
// 00531b35: MOV EAX,0xd94
// 00531b3a: PUSH 0x63afda
//   XREF to: 0063afda (DATA)
// 00531b3f: JMP 0x00531a14
//   XREF to: 00531a14 (UNCONDITIONAL_JUMP)
// 00531b44: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_00531b44
//   XREF to: Stack[0x10] (READ)
// 00531b48: LEA EAX,[EDX*0x4 + 0x0]
// 00531b4f: ADD EAX,EDX
// 00531b51: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 00531b55: SHL EAX,0x5
// 00531b58: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x14] (READ)
// 00531b5c: ADD ECX,EAX
// 00531b5e: LEA EAX,[EDX*0x8 + 0x0]
// 00531b65: ADD EAX,EDX
// 00531b67: SHL EAX,0x3
// 00531b6a: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x34] (READ)
// 00531b6e: ADD ECX,EAX
// 00531b70: LEA EAX,[EDX*0x8 + 0x0]
// 00531b77: ADD EAX,EDX
// 00531b79: SHL EAX,0x2
// 00531b7c: ADD EAX,EDX
// 00531b7e: MOV EBX,dword ptr [ECX + 0x4c]
// 00531b81: SHL EAX,0x2
// 00531b84: MOV EDX,dword ptr [EAX + EBX*0x4 + 0x67e6cc]
//   XREF to: 0067e6cc (DATA)
// 00531b8b: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00531b8f: MOV EDX,dword ptr [ECX + 0x50]
// 00531b92: ADD EDX,EBX
// 00531b94: MOV EBP,dword ptr [EAX + EDX*0x4 + 0x67e6d0]
//   XREF to: 0067e6d0 (DATA)
// 00531b9b: JMP 0x005316f9
//   XREF to: 005316f9 (UNCONDITIONAL_JUMP)
// 00531ba0: CMP ESI,dword ptr [ESP + 0x28]
//   Label: LAB_00531ba0
//   XREF to: Stack[-0x20] (READ)
// 00531ba4: JGE 0x00531bb4
//   XREF to: 00531bb4 (CONDITIONAL_JUMP)
// 00531ba6: IMUL EAX,dword ptr [EDI + 0x34],0x828
// 00531bad: ADD EAX,0x2f68288
//   XREF to: 02f68288 (DATA)
// 00531bb2: JMP 0x00531bd2
//   XREF to: 00531bd2 (UNCONDITIONAL_JUMP)
// 00531bb4: CMP ESI,EBP
//   Label: LAB_00531bb4
// 00531bb6: JGE 0x00531bc6
//   XREF to: 00531bc6 (CONDITIONAL_JUMP)
// 00531bb8: IMUL EAX,dword ptr [EDI + 0x38],0x828
// 00531bbf: ADD EAX,0x2f68288
//   XREF to: 02f68288 (DATA)
// 00531bc4: JMP 0x00531bd2
//   XREF to: 00531bd2 (UNCONDITIONAL_JUMP)
// 00531bc6: IMUL EAX,dword ptr [EDI + 0x3c],0x828
//   Label: LAB_00531bc6
// 00531bcd: ADD EAX,0x2f68288
//   XREF to: 02f68288 (DATA)
// 00531bd2: LEA EDX,[ESP + 0xc]
//   Label: LAB_00531bd2
//   XREF to: Stack[-0x3c] (DATA)
// 00531bd6: PUSH EDX
// 00531bd7: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x40] (DATA)
// 00531bdb: PUSH EDX
// 00531bdc: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x44] (DATA)
// 00531be0: PUSH EDX
// 00531be1: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x48] (DATA)
// 00531be5: PUSH EDX
// 00531be6: PUSH EAX
// 00531be7: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 00531beb: PUSH ECX
// 00531bec: CALL sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_0052f350
//   XREF to: 0052f350 (UNCONDITIONAL_CALL)
// 00531bf1: MOV ECX,0x12
// 00531bf6: MOV EDX,ESI
// 00531bf8: MOV EAX,ESI
// 00531bfa: SAR EDX,0x1f
// 00531bfd: IDIV ECX
// 00531bff: IMUL EAX,EAX,0x48
// 00531c02: MOV EDI,0x12
// 00531c07: ADD ESP,0x18
// 00531c0a: MOV EDX,ESI
// 00531c0c: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 00531c10: SAR EDX,0x1f
// 00531c13: ADD ECX,EAX
// 00531c15: MOV EAX,ESI
// 00531c17: IDIV EDI
// 00531c19: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 00531c1c: MOV dword ptr [ECX + EDX*0x4],EAX
// 00531c1f: MOV EDX,EBX
// 00531c21: MOV EAX,EBX
// 00531c23: SAR EDX,0x1f
// 00531c26: IDIV EDI
// 00531c28: IMUL EAX,EAX,0x48
// 00531c2b: MOV EDX,EBX
// 00531c2d: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 00531c31: SAR EDX,0x1f
// 00531c34: ADD ECX,EAX
// 00531c36: MOV EAX,EBX
// 00531c38: IDIV EDI
// 00531c3a: ADD ESI,0x2
// 00531c3d: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (READ)
// 00531c41: ADD EBX,0x2
// 00531c44: MOV dword ptr [ECX + EDX*0x4],EAX
// 00531c47: JMP 0x0053173b
//   XREF to: 0053173b (UNCONDITIONAL_JUMP)
// 00531c4c: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_00531c4c
//   XREF to: Stack[0x10] (READ)
// 00531c50: LEA EAX,[EDX*0x4 + 0x0]
// 00531c57: ADD EAX,EDX
// 00531c59: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 00531c5d: SHL EAX,0x5
// 00531c60: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x14] (READ)
// 00531c64: ADD EBX,EAX
// 00531c66: LEA EAX,[EDX*0x8 + 0x0]
// 00531c6d: ADD EAX,EDX
// 00531c6f: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00531c73: SHL EAX,0x3
// 00531c76: PUSH ECX
// 00531c77: ADD EBX,EAX
// 00531c79: CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
//   XREF to: 0052f160 (UNCONDITIONAL_CALL)
// 00531c7e: ADD ESP,0x4
// 00531c81: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00531c85: PUSH EAX
// 00531c86: MOV EBP,dword ptr [EBX + 0x18]
// 00531c89: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x18] (READ)
// 00531c8d: CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
//   XREF to: 0052f160 (UNCONDITIONAL_CALL)
// 00531c92: ADD EDI,EBP
// 00531c94: ADD ESP,0x4
// 00531c97: CMP EAX,EDI
// 00531c99: JBE 0x00531cc4
//   XREF to: 00531cc4 (CONDITIONAL_JUMP)
// 00531c9b: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00531c9f: PUSH EDX
// 00531ca0: CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
//   XREF to: 0052f160 (UNCONDITIONAL_CALL)
// 00531ca5: ADD ESP,0x4
// 00531ca8: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x18] (READ)
// 00531cac: MOV EDI,dword ptr [EBX + 0x18]
// 00531caf: SUB EAX,ECX
// 00531cb1: SUB EAX,EDI
// 00531cb3: PUSH EAX
// 00531cb4: MOV EBP,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 00531cb8: PUSH EBP
// 00531cb9: SUB ESI,0x4
// 00531cbc: CALL sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0
//   XREF to: 0052f2c0 (UNCONDITIONAL_CALL)
// 00531cc1: ADD ESP,0x8
// 00531cc4: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_00531cc4
//   XREF to: Stack[0x10] (READ)
// 00531cc8: LEA EAX,[EDX*0x4 + 0x0]
// 00531ccf: ADD EAX,EDX
// 00531cd1: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 00531cd5: SHL EAX,0x5
// 00531cd8: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x14] (READ)
// 00531cdc: ADD ECX,EAX
// 00531cde: LEA EAX,[EDX*0x8 + 0x0]
// 00531ce5: ADD EAX,EDX
// 00531ce7: MOV EDX,dword ptr [ECX + EAX*0x8 + 0x18]
// 00531ceb: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00531cef: MOV EBX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x18] (READ)
// 00531cf3: PUSH ECX
// 00531cf4: ADD EBX,EDX
// 00531cf6: CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
//   XREF to: 0052f160 (UNCONDITIONAL_CALL)
// 00531cfb: ADD ESP,0x4
// 00531cfe: CMP EAX,EBX
// 00531d00: JL 0x00531d34
//   XREF to: 00531d34 (CONDITIONAL_JUMP)
// 00531d02: MOV EBX,0x12
//   Label: LAB_00531d02
// 00531d07: CMP ESI,0x240
//   Label: LAB_00531d07
// 00531d0d: JGE 0x00531d46
//   XREF to: 00531d46 (CONDITIONAL_JUMP)
// 00531d0f: MOV EDX,ESI
// 00531d11: MOV EAX,ESI
// 00531d13: SAR EDX,0x1f
// 00531d16: IDIV EBX
// 00531d18: IMUL EAX,EAX,0x48
// 00531d1b: MOV EDX,ESI
// 00531d1d: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 00531d21: SAR EDX,0x1f
// 00531d24: ADD ECX,EAX
// 00531d26: MOV EAX,ESI
// 00531d28: IDIV EBX
// 00531d2a: INC ESI
// 00531d2b: MOV dword ptr [ECX + EDX*0x4],0x0
// 00531d32: JMP 0x00531d07
//   XREF to: 00531d07 (UNCONDITIONAL_JUMP)
// 00531d34: SUB EBX,EAX
//   Label: LAB_00531d34
// 00531d36: PUSH EBX
// 00531d37: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 00531d3b: PUSH EBX
// 00531d3c: CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
//   XREF to: 0052f170 (UNCONDITIONAL_CALL)
// 00531d41: ADD ESP,0x8
// 00531d44: JMP 0x00531d02
//   XREF to: 00531d02 (UNCONDITIONAL_JUMP)
// 00531d46: ADD ESP,0x38
//   Label: LAB_00531d46
// 00531d49: POP EBP
// 00531d4a: POP EDI
// 00531d4b: POP ESI
// 00531d4c: POP EBX
// 00531d4d: RET
