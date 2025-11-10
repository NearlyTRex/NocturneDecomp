// Name: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
// Address: 005307a0
// Address Range: [[005307a0, 00530d19]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0(CMP3Decoder * this_ptr, CFileBitStream * bit_stream, SMpegLayer3Granule * side_info_array, SMpegFrame * frame)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 (00534d40) at 0053560c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063ae92
//   TerminatedCString s_Side_info_bad_block_type_0063aea3
//   TerminatedCString s_sound_mp3_cpp_0063aedc
//   TerminatedCString s_Side_info_bad_block_type_0063aeed
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   char[256] g_CurrentMp3Filename
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
//   sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
          (CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3Granule *side_info_array,
          SMpegFrame *frame)

{
  int iVar1;
  CFileBitStream *pCVar2;
  SMpegFrameHeader *pSVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  FILE *pFVar7;
  SMpegLayer3Granule *pSVar8;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  int unaff_EDI;
  uint uVar13;
  int unaff_retaddr;
  CFileBitStream *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_00000034;
  int iVar14;
  int *piVar15;
  int *piVar16;
  CFileBitStream *pCVar17;
  CFileBitStream *pCVar18;
  int in_stack_ffffffb8;
  int in_stack_ffffffbc;
  CFileBitStream *pCVar19;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  if (frame->header->mpeg_version == 0) {
    pSVar3 = (SMpegFrameHeader *)sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
    frame->header = pSVar3;
    if (in_stack_ffffffb8 == 1) {
      iVar14 = 1;
    }
    else {
      iVar14 = 2;
    }
    pcVar4 = (char *)sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,iVar14);
    in_stack_00000014->buffer = pcVar4;
    pCVar17 = in_stack_00000014;
    if (0 < in_stack_ffffffbc) {
      do {
        uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,0xc);
        *(uint *)(local_1c + 0x18) = uVar5;
        uRam0000001c = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
        uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
        *(uint *)(local_14 + 0x20) = uVar5;
        uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
        *(uint *)(unaff_EBP + 0x24) = uVar5;
        uRam00000028 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        iVar14 = local_24 * 0xa0 + in_stack_00000018;
        if (uRam00000028 == 0) {
          iVar12 = 0;
          do {
            uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
            iVar1 = iVar12 + iVar14;
            iVar12 = iVar12 + 4;
            *(uint *)((int)frame + iVar1 + 0x34) = uVar5;
          } while (iVar12 != 0xc);
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
          *(uint *)((int)frame + iVar14 + 0x4c) = uVar5;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
          *(undefined4 *)((int)frame + iVar14 + 0x2c) = 0;
          *(uint *)((int)frame + iVar14 + 0x50) = uVar5;
        }
        else {
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,2);
          *(uint *)(unaff_ESI + 0x2c) = uVar5;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(unaff_EBX + 0x30) = uVar5;
          uVar13 = (int)pCVar17 + iVar14 + 8;
          uVar5 = (int)pCVar17 + iVar14;
          do {
            uVar11 = uVar5 + 4;
            uVar6 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
            *(uint *)(uVar5 + 0x34) = uVar6;
            uVar5 = uVar11;
          } while (uVar11 != uVar13);
          uVar11 = uVar11 ^ uVar13;
          iVar14 = unaff_ESI * 0xa0 + in_stack_00000034;
          do {
            uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
            iVar12 = uVar11 + iVar14;
            uVar11 = uVar11 + 4;
            *(uint *)((int)bit_stream + iVar12 + 0x40) = uVar5;
          } while (uVar11 != 0xc);
          iVar12 = *(int *)((int)bit_stream + iVar14 + 0x2c);
          if (iVar12 == 0) {
            g_CurrentFilename = "..\\sound\\mp3.cpp";
            g_CurrentLineNumber = 0x68f;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Side info bad: block_type == 0 in split block.  File: %s",g_CurrentMp3Filename);
          }
          else if ((iVar12 == 2) && (*(int *)((int)bit_stream + iVar14 + 0x30) == 0)) {
            *(undefined4 *)((int)bit_stream + iVar14 + 0x4c) = 8;
          }
          else {
            in_stack_00000014[1].stream_start_position = 7;
          }
          *(int *)(unaff_EBP + 0x50) = 0x14 - *(int *)(unaff_EBP + 0x4c);
        }
        uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        *(uint *)(unaff_ESI + 0x58) = uVar5;
        pCVar17 = bit_stream;
        uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
        this_ptr = (CMP3Decoder *)(this_ptr->filename + 1);
        *(uint *)(unaff_EBX + 0x5c) = uVar5;
        local_14 = local_14 + 0xa0;
        unaff_ESI = unaff_ESI + 0xa0;
        unaff_EBX = unaff_EBX + 0xa0;
      } while ((int)this_ptr < 0);
    }
  }
  else {
    pSVar3 = (SMpegFrameHeader *)sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
    frame->header = pSVar3;
    if (in_stack_ffffffb8 == 1) {
      iVar14 = 5;
    }
    else {
      iVar14 = 3;
    }
    pcVar4 = (char *)sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,iVar14);
    in_stack_00000014->buffer = pcVar4;
    iVar14 = 0;
    if (0 < in_stack_ffffffbc) {
      piVar15 = &in_stack_00000014->current_byte_index;
      do {
        puVar9 = (undefined1 *)((int)in_stack_00000014 + iVar14 * 0xa0);
        piVar16 = piVar15;
        do {
          puVar10 = puVar9 + 4;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(puVar9 + 8) = uVar5;
          puVar9 = puVar10;
        } while ((int *)puVar10 != piVar15);
        piVar15 = piVar16 + 0x28;
        iVar14 = iVar14 + 1;
      } while (iVar14 < in_stack_ffffffbc);
    }
    pCVar17 = (CFileBitStream *)0x0;
    do {
      pCVar2 = in_stack_00000014;
      pCVar19 = (CFileBitStream *)0x0;
      pCVar18 = pCVar17;
      if (0 < in_stack_ffffffbc) {
        do {
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,0xc);
          *(uint *)(local_18 + 0x18) = uVar5;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,9);
          pCVar17->error_flag = uVar5;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,8);
          pCVar17->stream_start_position = uVar5;
          pCVar18 = bit_stream;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
          *(uint *)(unaff_EDI + 0x24) = uVar5;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          iVar14 = local_28 * 0xa0 + in_stack_00000018;
          *(uint *)(unaff_ESI + 0x28) = uVar5;
          if (uVar5 == 0) {
            iVar12 = 0;
            do {
              uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
              iVar1 = iVar12 + iVar14;
              iVar12 = iVar12 + 4;
              *(uint *)((int)bit_stream + iVar1 + 0x34) = uVar5;
            } while (iVar12 != 0xc);
            in_stack_ffffffbc = 0x530a93;
            uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,4);
            *(uint *)((int)bit_stream + iVar14 + 0x4c) = uVar5;
            uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
            *(undefined4 *)((int)bit_stream + iVar14 + 0x2c) = 0;
            *(uint *)((int)bit_stream + iVar14 + 0x50) = uVar5;
          }
          else {
            uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,2);
            *(uint *)(unaff_EBX + 0x2c) = uVar5;
            uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
            *(uint *)(unaff_retaddr + 0x30) = uVar5;
            uVar13 = (int)pCVar19 + iVar14 + 8;
            uVar5 = (int)pCVar19 + iVar14;
            do {
              uVar11 = uVar5 + 4;
              uVar6 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,5);
              *(uint *)(uVar5 + 0x34) = uVar6;
              uVar5 = uVar11;
            } while (uVar11 != uVar13);
            uVar11 = uVar11 ^ uVar13;
            iVar14 = unaff_EDI * 0xa0 + in_stack_00000034;
            do {
              in_stack_ffffffbc = 0x530941;
              uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(bit_stream,3);
              iVar12 = uVar11 + iVar14;
              uVar11 = uVar11 + 4;
              *(uint *)((int)frame + iVar12 + 0x40) = uVar5;
            } while (uVar11 != 0xc);
            iVar12 = *(int *)((int)frame + iVar14 + 0x2c);
            if (iVar12 == 0) {
              g_CurrentFilename = "..\\sound\\mp3.cpp";
              g_CurrentLineNumber = 0x660;
              core_main_c_displayErrorAndQuit_FUN_00506f10
                        ("Side info bad: block_type == 0 in split block.  File: %s",g_CurrentMp3Filename);
            }
            else if ((iVar12 == 2) && (*(int *)((int)frame + iVar14 + 0x30) == 0)) {
              *(undefined4 *)((int)frame + iVar14 + 0x4c) = 8;
            }
            else {
              *(undefined4 *)((int)&pCVar2[1].stream_start_position + (int)&pCVar17->file_handle) =
                   7;
            }
            pCVar17[1].stream_length = 0x14 - pCVar17[1].stream_start_position;
          }
          uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          *(uint *)(this_ptr->filename + 0x54) = uVar5;
          pFVar7 = (FILE *)sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          bit_stream[2].file_handle = pFVar7;
          pCVar19 = bit_stream;
          uVar5 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(bit_stream);
          in_stack_00000014 = (CFileBitStream *)&in_stack_00000014[3].error_flag;
          pSVar8 = side_info_array + 1;
          this_ptr = (CMP3Decoder *)(this_ptr->filename + 1);
          side_info_array->count_1_table_select = uVar5;
          unaff_EDI = unaff_EDI + 0xa0;
          unaff_ESI = unaff_ESI + 0xa0;
          side_info_array = pSVar8;
        } while ((int)this_ptr < (int)pCVar17);
      }
      pCVar17 = (CFileBitStream *)&pCVar18[1].error_flag;
    } while (pCVar17 != (CFileBitStream *)0x90);
  }
  return;
}


// Assembly code:
// 005307a0: PUSH EBX
//   Label: sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0
// 005307a1: PUSH ESI
// 005307a2: PUSH EDI
// 005307a3: PUSH EBP
// 005307a4: SUB ESP,0x4c
// 005307a7: MOV EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x8] (READ)
// 005307ab: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x10] (READ)
// 005307af: MOV EDX,dword ptr [EAX + 0x10]
// 005307b2: MOV EAX,dword ptr [EAX]
// 005307b4: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 005307b8: CMP dword ptr [EAX],0x0
// 005307bb: JZ 0x00530ab3
//   XREF to: 00530ab3 (CONDITIONAL_JUMP)
// 005307c1: PUSH 0x9
// 005307c3: PUSH EBX
// 005307c4: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 005307c9: ADD ESP,0x8
// 005307cc: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 005307d0: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 005307d4: MOV dword ptr [EDX],EAX
// 005307d6: CMP ESI,0x1
// 005307d9: JNZ 0x00530a3c
//   XREF to: 00530a3c (CONDITIONAL_JUMP)
// 005307df: PUSH 0x5
// 005307e1: PUSH EBX
//   Label: LAB_005307e1
// 005307e2: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 005307e7: ADD ESP,0x8
// 005307ea: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 005307ee: MOV dword ptr [EDX + 0x4],EAX
// 005307f1: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 005307f5: XOR EBP,EBP
// 005307f7: TEST EDI,EDI
// 005307f9: JLE 0x0053083b
//   XREF to: 0053083b (CONDITIONAL_JUMP)
// 005307fb: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 005307ff: ADD EAX,0x10
// 00530802: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x5c] (DATA)
// 00530805: IMUL EAX,EBP,0xa0
//   Label: LAB_00530805
// 0053080b: MOV ESI,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 0053080f: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x5c] (DATA)
// 00530812: ADD ESI,EAX
// 00530814: PUSH EBX
//   Label: LAB_00530814
// 00530815: ADD ESI,0x4
// 00530818: CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 0053081d: ADD ESP,0x4
// 00530820: MOV dword ptr [ESI + 0x4],EAX
// 00530823: CMP ESI,EDI
// 00530825: JNZ 0x00530814
//   XREF to: 00530814 (CONDITIONAL_JUMP)
// 00530827: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x5c] (DATA)
// 0053082a: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 0053082e: ADD EAX,0xa0
// 00530833: INC EBP
// 00530834: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x5c] (DATA)
// 00530837: CMP EBP,EDX
// 00530839: JL 0x00530805
//   XREF to: 00530805 (CONDITIONAL_JUMP)
// 0053083b: XOR ECX,ECX
//   Label: LAB_0053083b
// 0053083d: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 00530841: XOR ESI,ESI
//   Label: LAB_00530841
// 00530843: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 00530847: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 0053084b: TEST EDI,EDI
// 0053084d: JLE 0x00530a1d
//   XREF to: 00530a1d (CONDITIONAL_JUMP)
// 00530853: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x58] (READ)
// 00530857: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 0053085b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0053085f: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00530863: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00530867: ADD EAX,EDX
// 00530869: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0053086d: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00530871: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00530875: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00530879: PUSH 0xc
//   Label: LAB_00530879
// 0053087b: PUSH EBX
// 0053087c: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530881: ADD ESP,0x8
// 00530884: IMUL EBP,dword ptr [ESP + 0x28],0xa0
//   XREF to: Stack[-0x34] (READ)
// 0053088c: PUSH 0x9
// 0053088e: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 00530892: PUSH EBX
// 00530893: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0xc] (READ)
// 00530897: MOV dword ptr [EDX + 0x18],EAX
// 0053089a: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0053089f: ADD ESP,0x8
// 005308a2: PUSH 0x8
// 005308a4: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 005308a8: PUSH EBX
// 005308a9: MOV dword ptr [EDX + 0x1c],EAX
// 005308ac: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 005308b1: ADD ESP,0x8
// 005308b4: PUSH 0x4
// 005308b6: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 005308ba: PUSH EBX
// 005308bb: MOV dword ptr [EDX + 0x20],EAX
// 005308be: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 005308c3: ADD ESP,0x8
// 005308c6: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (READ)
// 005308ca: PUSH EBX
// 005308cb: MOV dword ptr [EDX + 0x24],EAX
// 005308ce: CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 005308d3: ADD ESP,0x4
// 005308d6: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (READ)
// 005308da: ADD EBP,ESI
// 005308dc: MOV dword ptr [EDX + 0x28],EAX
// 005308df: TEST EAX,EAX
// 005308e1: JZ 0x00530a6a
//   XREF to: 00530a6a (CONDITIONAL_JUMP)
// 005308e7: PUSH 0x2
// 005308e9: PUSH EBX
// 005308ea: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 005308ef: ADD ESP,0x8
// 005308f2: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (READ)
// 005308f6: PUSH EBX
// 005308f7: MOV dword ptr [EDX + 0x2c],EAX
// 005308fa: CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 005308ff: ADD ESP,0x4
// 00530902: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x50] (READ)
// 00530906: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (READ)
// 0053090a: ADD EDI,EBP
// 0053090c: MOV dword ptr [EDX + 0x30],EAX
// 0053090f: MOV ESI,EDI
// 00530911: ADD EDI,0x8
// 00530914: PUSH 0x5
//   Label: LAB_00530914
// 00530916: PUSH EBX
// 00530917: ADD ESI,0x4
// 0053091a: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0053091f: ADD ESP,0x8
// 00530922: MOV dword ptr [ESI + 0x30],EAX
// 00530925: CMP ESI,EDI
// 00530927: JNZ 0x00530914
//   XREF to: 00530914 (CONDITIONAL_JUMP)
// 00530929: IMUL EBP,dword ptr [ESP + 0x28],0xa0
//   XREF to: Stack[-0x34] (READ)
// 00530931: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 00530935: XOR ESI,EDI
// 00530937: ADD EBP,EDX
// 00530939: PUSH 0x3
//   Label: LAB_00530939
// 0053093b: PUSH EBX
// 0053093c: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530941: ADD ESP,0x8
// 00530944: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (READ)
// 00530948: ADD EDX,EBP
// 0053094a: LEA EDI,[EDX + ESI*0x1]
// 0053094d: ADD ESI,0x4
// 00530950: MOV dword ptr [EDI + 0x40],EAX
// 00530953: CMP ESI,0xc
// 00530956: JNZ 0x00530939
//   XREF to: 00530939 (CONDITIONAL_JUMP)
// 00530958: MOV ECX,dword ptr [EDX + 0x2c]
// 0053095b: TEST ECX,ECX
// 0053095d: JNZ 0x00530a43
//   XREF to: 00530a43 (CONDITIONAL_JUMP)
// 00530963: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 00530968: MOV EBP,0x63ae92
//   XREF to: 0063ae92 (DATA)
// 0053096d: MOV EAX,0x660
// 00530972: PUSH 0x63aea3
//   XREF to: 0063aea3 (DATA)
// 00530977: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0053097d: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00530982: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00530987: ADD ESP,0x8
// 0053098a: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0053098a
//   XREF to: Stack[-0x40] (READ)
// 0053098e: MOV EDX,0x14
// 00530993: MOV ECX,dword ptr [EAX + 0x4c]
// 00530996: MOV EAX,EDX
// 00530998: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x40] (READ)
// 0053099c: SUB EAX,ECX
// 0053099e: MOV dword ptr [EDX + 0x50],EAX
// 005309a1: PUSH EBX
//   Label: LAB_005309a1
// 005309a2: CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 005309a7: ADD ESP,0x4
// 005309aa: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c] (READ)
// 005309ae: PUSH EBX
// 005309af: MOV dword ptr [EDX + 0x54],EAX
// 005309b2: CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 005309b7: ADD ESP,0x4
// 005309ba: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c] (READ)
// 005309be: PUSH EBX
// 005309bf: MOV dword ptr [EDX + 0x58],EAX
// 005309c2: CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 005309c7: ADD ESP,0x4
// 005309ca: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c] (READ)
// 005309ce: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x24] (READ)
// 005309d2: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x2c] (READ)
// 005309d6: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x34] (READ)
// 005309da: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 005309de: ADD EBP,0xa0
// 005309e4: ADD ECX,0xa0
// 005309ea: INC ESI
// 005309eb: MOV dword ptr [EDX + 0x5c],EAX
// 005309ee: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x44] (READ)
// 005309f2: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x40] (READ)
// 005309f6: MOV dword ptr [ESP + 0x38],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 005309fa: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005309fe: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 00530a02: ADD EAX,0xa0
// 00530a07: ADD EDX,0xa0
// 00530a0d: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00530a11: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 00530a15: CMP ESI,EDI
// 00530a17: JL 0x00530879
//   XREF to: 00530879 (CONDITIONAL_JUMP)
// 00530a1d: MOV EBP,dword ptr [ESP + 0x4]
//   Label: LAB_00530a1d
//   XREF to: Stack[-0x58] (READ)
// 00530a21: ADD EBP,0x48
// 00530a24: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x58] (WRITE)
// 00530a28: CMP EBP,0x90
// 00530a2e: JNZ 0x00530841
//   XREF to: 00530841 (CONDITIONAL_JUMP)
// 00530a34: ADD ESP,0x4c
//   Label: LAB_00530a34
// 00530a37: POP EBP
// 00530a38: POP EDI
// 00530a39: POP ESI
// 00530a3a: POP EBX
// 00530a3b: RET
// 00530a3c: PUSH 0x3
//   Label: LAB_00530a3c
// 00530a3e: JMP 0x005307e1
//   XREF to: 005307e1 (UNCONDITIONAL_JUMP)
// 00530a43: CMP ECX,0x2
//   Label: LAB_00530a43
// 00530a46: JNZ 0x00530a5a
//   XREF to: 00530a5a (CONDITIONAL_JUMP)
// 00530a48: CMP dword ptr [EDX + 0x30],0x0
// 00530a4c: JNZ 0x00530a5a
//   XREF to: 00530a5a (CONDITIONAL_JUMP)
// 00530a4e: MOV dword ptr [EDX + 0x4c],0x8
// 00530a55: JMP 0x0053098a
//   XREF to: 0053098a (UNCONDITIONAL_JUMP)
// 00530a5a: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00530a5a
//   XREF to: Stack[-0x44] (READ)
// 00530a5e: MOV dword ptr [EAX + 0x4c],0x7
// 00530a65: JMP 0x0053098a
//   XREF to: 0053098a (UNCONDITIONAL_JUMP)
// 00530a6a: XOR ESI,ESI
//   Label: LAB_00530a6a
// 00530a6c: PUSH 0x5
//   Label: LAB_00530a6c
// 00530a6e: PUSH EBX
// 00530a6f: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530a74: ADD ESP,0x8
// 00530a77: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x1c] (READ)
// 00530a7b: ADD EDI,EBP
// 00530a7d: LEA EDX,[EDI + ESI*0x1]
// 00530a80: ADD ESI,0x4
// 00530a83: MOV dword ptr [EDX + 0x34],EAX
// 00530a86: CMP ESI,0xc
// 00530a89: JNZ 0x00530a6c
//   XREF to: 00530a6c (CONDITIONAL_JUMP)
// 00530a8b: PUSH 0x4
// 00530a8d: PUSH EBX
// 00530a8e: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530a93: ADD ESP,0x8
// 00530a96: PUSH 0x3
// 00530a98: PUSH EBX
// 00530a99: MOV dword ptr [EDI + 0x4c],EAX
// 00530a9c: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530aa1: MOV dword ptr [EDI + 0x2c],0x0
// 00530aa8: ADD ESP,0x8
// 00530aab: MOV dword ptr [EDI + 0x50],EAX
// 00530aae: JMP 0x005309a1
//   XREF to: 005309a1 (UNCONDITIONAL_JUMP)
// 00530ab3: PUSH 0x8
//   Label: LAB_00530ab3
// 00530ab5: PUSH EBX
// 00530ab6: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530abb: ADD ESP,0x8
// 00530abe: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 00530ac2: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 00530ac6: MOV dword ptr [EDX],EAX
// 00530ac8: CMP ECX,0x1
// 00530acb: JNZ 0x00530c37
//   XREF to: 00530c37 (CONDITIONAL_JUMP)
// 00530ad1: PUSH ECX
// 00530ad2: PUSH EBX
//   Label: LAB_00530ad2
// 00530ad3: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530ad8: ADD ESP,0x8
// 00530adb: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 00530adf: MOV dword ptr [EDX + 0x4],EAX
// 00530ae2: XOR ESI,ESI
// 00530ae4: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 00530ae8: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 00530aec: TEST EDI,EDI
// 00530aee: JLE 0x00530a34
//   XREF to: 00530a34 (CONDITIONAL_JUMP)
// 00530af4: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 00530af8: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x54] (WRITE)
// 00530afc: MOV dword ptr [ESP + 0x48],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00530b00: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00530b04: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00530b08: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00530b0c: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00530b10: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00530b14: PUSH 0xc
//   Label: LAB_00530b14
// 00530b16: PUSH EBX
// 00530b17: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530b1c: ADD ESP,0x8
// 00530b1f: IMUL EBP,dword ptr [ESP + 0x2c],0xa0
//   XREF to: Stack[-0x30] (READ)
// 00530b27: PUSH 0x9
// 00530b29: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00530b2d: PUSH EBX
// 00530b2e: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0xc] (READ)
// 00530b32: MOV dword ptr [EDX + 0x18],EAX
// 00530b35: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530b3a: ADD ESP,0x8
// 00530b3d: PUSH 0x8
// 00530b3f: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00530b43: PUSH EBX
// 00530b44: MOV dword ptr [EDX + 0x1c],EAX
// 00530b47: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530b4c: ADD ESP,0x8
// 00530b4f: PUSH 0x9
// 00530b51: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00530b55: PUSH EBX
// 00530b56: MOV dword ptr [EDX + 0x20],EAX
// 00530b59: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530b5e: ADD ESP,0x8
// 00530b61: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (READ)
// 00530b65: PUSH EBX
// 00530b66: MOV dword ptr [EDX + 0x24],EAX
// 00530b69: CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 00530b6e: ADD ESP,0x4
// 00530b71: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (READ)
// 00530b75: ADD EBP,ESI
// 00530b77: MOV dword ptr [EDX + 0x28],EAX
// 00530b7a: TEST EAX,EAX
// 00530b7c: JNZ 0x00530c3e
//   XREF to: 00530c3e (CONDITIONAL_JUMP)
// 00530b82: XOR ESI,ESI
// 00530b84: PUSH 0x5
//   Label: LAB_00530b84
// 00530b86: PUSH EBX
// 00530b87: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530b8c: ADD ESP,0x8
// 00530b8f: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 00530b93: ADD EDI,EBP
// 00530b95: LEA EDX,[EDI + ESI*0x1]
// 00530b98: ADD ESI,0x4
// 00530b9b: MOV dword ptr [EDX + 0x34],EAX
// 00530b9e: CMP ESI,0xc
// 00530ba1: JNZ 0x00530b84
//   XREF to: 00530b84 (CONDITIONAL_JUMP)
// 00530ba3: PUSH 0x4
// 00530ba5: PUSH EBX
// 00530ba6: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530bab: ADD ESP,0x8
// 00530bae: PUSH 0x3
// 00530bb0: PUSH EBX
// 00530bb1: MOV dword ptr [EDI + 0x4c],EAX
// 00530bb4: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530bb9: MOV dword ptr [EDI + 0x2c],0x0
// 00530bc0: ADD ESP,0x8
// 00530bc3: MOV dword ptr [EDI + 0x50],EAX
// 00530bc6: PUSH EBX
//   Label: LAB_00530bc6
// 00530bc7: CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 00530bcc: ADD ESP,0x4
// 00530bcf: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x38] (READ)
// 00530bd3: PUSH EBX
// 00530bd4: MOV dword ptr [EDX + 0x58],EAX
// 00530bd7: CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 00530bdc: ADD ESP,0x4
// 00530bdf: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x38] (READ)
// 00530be3: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (READ)
// 00530be7: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x38] (READ)
// 00530beb: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x30] (READ)
// 00530bef: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x4c] (READ)
// 00530bf3: ADD EBP,0xa0
// 00530bf9: ADD ECX,0xa0
// 00530bff: INC ESI
// 00530c00: MOV dword ptr [EDX + 0x5c],EAX
// 00530c03: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x48] (READ)
// 00530c07: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x3c] (READ)
// 00530c0b: MOV dword ptr [ESP + 0x34],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 00530c0f: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00530c13: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 00530c17: ADD EAX,0xa0
// 00530c1c: ADD EDX,0xa0
// 00530c22: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00530c26: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 00530c2a: CMP ESI,EDI
// 00530c2c: JGE 0x00530a34
//   XREF to: 00530a34 (CONDITIONAL_JUMP)
// 00530c32: JMP 0x00530b14
//   XREF to: 00530b14 (UNCONDITIONAL_JUMP)
// 00530c37: PUSH 0x2
//   Label: LAB_00530c37
// 00530c39: JMP 0x00530ad2
//   XREF to: 00530ad2 (UNCONDITIONAL_JUMP)
// 00530c3e: PUSH 0x2
//   Label: LAB_00530c3e
// 00530c40: PUSH EBX
// 00530c41: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530c46: ADD ESP,0x8
// 00530c49: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (READ)
// 00530c4d: PUSH EBX
// 00530c4e: MOV dword ptr [EDX + 0x2c],EAX
// 00530c51: CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 00530c56: ADD ESP,0x4
// 00530c59: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x54] (READ)
// 00530c5d: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (READ)
// 00530c61: ADD EDI,EBP
// 00530c63: MOV dword ptr [EDX + 0x30],EAX
// 00530c66: MOV ESI,EDI
// 00530c68: ADD EDI,0x8
// 00530c6b: PUSH 0x5
//   Label: LAB_00530c6b
// 00530c6d: PUSH EBX
// 00530c6e: ADD ESI,0x4
// 00530c71: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530c76: ADD ESP,0x8
// 00530c79: MOV dword ptr [ESI + 0x30],EAX
// 00530c7c: CMP ESI,EDI
// 00530c7e: JNZ 0x00530c6b
//   XREF to: 00530c6b (CONDITIONAL_JUMP)
// 00530c80: IMUL EBP,dword ptr [ESP + 0x2c],0xa0
//   XREF to: Stack[-0x30] (READ)
// 00530c88: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 00530c8c: XOR ESI,EDI
// 00530c8e: ADD EBP,EDX
// 00530c90: PUSH 0x3
//   Label: LAB_00530c90
// 00530c92: PUSH EBX
// 00530c93: CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 00530c98: ADD ESP,0x8
// 00530c9b: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x20] (READ)
// 00530c9f: ADD EDX,EBP
// 00530ca1: LEA EDI,[EDX + ESI*0x1]
// 00530ca4: ADD ESI,0x4
// 00530ca7: MOV dword ptr [EDI + 0x40],EAX
// 00530caa: CMP ESI,0xc
// 00530cad: JNZ 0x00530c90
//   XREF to: 00530c90 (CONDITIONAL_JUMP)
// 00530caf: MOV ECX,dword ptr [EDX + 0x2c]
// 00530cb2: TEST ECX,ECX
// 00530cb4: JNZ 0x00530cf9
//   XREF to: 00530cf9 (CONDITIONAL_JUMP)
// 00530cb6: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 00530cbb: MOV EBP,0x63aedc
//   XREF to: 0063aedc (DATA)
// 00530cc0: MOV EAX,0x68f
// 00530cc5: PUSH 0x63aeed
//   XREF to: 0063aeed (DATA)
// 00530cca: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00530cd0: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00530cd5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00530cda: ADD ESP,0x8
// 00530cdd: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_00530cdd
//   XREF to: Stack[-0x3c] (READ)
// 00530ce1: MOV EDX,0x14
// 00530ce6: MOV ECX,dword ptr [EAX + 0x4c]
// 00530ce9: MOV EAX,EDX
// 00530ceb: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x3c] (READ)
// 00530cef: SUB EAX,ECX
// 00530cf1: MOV dword ptr [EDX + 0x50],EAX
// 00530cf4: JMP 0x00530bc6
//   XREF to: 00530bc6 (UNCONDITIONAL_JUMP)
// 00530cf9: CMP ECX,0x2
//   Label: LAB_00530cf9
// 00530cfc: JNZ 0x00530d0d
//   XREF to: 00530d0d (CONDITIONAL_JUMP)
// 00530cfe: CMP dword ptr [EDX + 0x30],0x0
// 00530d02: JNZ 0x00530d0d
//   XREF to: 00530d0d (CONDITIONAL_JUMP)
// 00530d04: MOV dword ptr [EDX + 0x4c],0x8
// 00530d0b: JMP 0x00530cdd
//   XREF to: 00530cdd (UNCONDITIONAL_JUMP)
// 00530d0d: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00530d0d
//   XREF to: Stack[-0x48] (READ)
// 00530d11: MOV dword ptr [EAX + 0x4c],0x7
// 00530d18: JMP 0x00530cdd
//   XREF to: 00530cdd (UNCONDITIONAL_JUMP)
