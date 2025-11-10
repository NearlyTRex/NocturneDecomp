// Name: sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
// Address: 0052ef40
// Address Range: [[0052ef40, 0052f0b2]]
// Convention: __cdecl
// Signature: uint sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream * bitstream, int num_bits)
// Cross-references:
//   sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0 (0052f7a0) at 0052f7e4 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670 (0052f670) at 0052f6c8 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0 (0052f5b0) at 0052f603 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50 (0052fc50) at 0052fe42 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50 (0052fb50) at 0052fc24 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_0052f8e0 (0052f8e0) at 0052fae6 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_0052f850 (0052f850) at 0052f8b7 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_0052f0e0 (0052f0e0) at 0052f104 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 (00534d40) at 00535641 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 (00534630) at 005347a5 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0 (005307a0) at 00530c41 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063ad3e
//   TerminatedCString s_Cannot_read_or_write_mor_0063ad4f
//   uint[18] g_MpegBitMaskTableMultiBit
//   undefined4 DAT_0067e600
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   char[256] g_CurrentMp3Filename
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990

#include "nocturne.h"

uint __cdecl
sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(CFileBitStream *bitstream,int num_bits)

{
  SIZE_T SVar1;
  char *buffer;
  int iVar2;
  uint unaff_EBP;
  
  if (0x20 < num_bits) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x267;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Cannot read or write more than %d bits at a time.  File: %s",0x20,g_CurrentMp3Filename,0);
  }
  bitstream->total_bits_read = bitstream->total_bits_read + num_bits;
  if (0 < num_bits) {
    do {
      if (bitstream->bits_available == 0) {
        bitstream->bits_available = 8;
        iVar2 = bitstream->current_byte_index + -1;
        bitstream->current_byte_index = iVar2;
        if ((iVar2 < 4) || (iVar2 < bitstream->end_of_stream_flag)) {
          if (bitstream->end_of_stream_flag == 0) {
            for (iVar2 = bitstream->current_byte_index; -1 < iVar2; iVar2 = iVar2 + -1) {
              bitstream->buffer
              [((bitstream->buffer_size + -1) - bitstream->current_byte_index) + iVar2] =
                   bitstream->buffer[iVar2];
            }
            iVar2 = (bitstream->buffer_size + -2) - bitstream->current_byte_index;
            if (iVar2 < 0) {
LAB_0052f051:
              bitstream->current_byte_index = bitstream->buffer_size + -1;
            }
            else {
              do {
                while( true ) {
                  if (bitstream->end_of_stream_flag != 0) goto LAB_0052f051;
                  SVar1 = 0;
                  if (0 < bitstream->bytes_remaining) {
                    buffer = bitstream->buffer + iVar2;
                    iVar2 = iVar2 + -1;
                    SVar1 = crt_stdio_c_fread_FUN_005fd990(buffer,1,1,bitstream->file_handle);
                  }
                  if (SVar1 != 1) break;
                  bitstream->bytes_remaining = bitstream->bytes_remaining + -1;
                  if (iVar2 < 0) {
                    bitstream->current_byte_index = bitstream->buffer_size + -1;
                    goto LAB_0052ef6c;
                  }
                }
                bitstream->end_of_stream_flag = iVar2 + 1;
              } while (-1 < iVar2);
              bitstream->current_byte_index = bitstream->buffer_size + -1;
            }
          }
          else {
            bitstream->error_flag = 1;
          }
        }
      }
LAB_0052ef6c:
      iVar2 = bitstream->bits_available;
      if (num_bits < iVar2) {
        iVar2 = num_bits;
      }
      num_bits = num_bits - iVar2;
      iVar2 = bitstream->bits_available - iVar2;
      unaff_EBP = unaff_EBP |
                  ((int)((uint)(byte)bitstream->buffer[bitstream->current_byte_index] &
                        g_MpegBitMaskTableMultiBit[bitstream->bits_available]) >>
                  ((byte)iVar2 & 0x1f)) << ((byte)num_bits & 0x1f);
      bitstream->bits_available = iVar2;
    } while (0 < num_bits);
  }
  return unaff_EBP;
}


// Assembly code:
// 0052ef40: PUSH EBX
//   Label: sound_mp3.cpp_CFileBitStream_readBits_FUN_0052ef40
// 0052ef41: PUSH ESI
// 0052ef42: PUSH EDI
// 0052ef43: PUSH EBP
// 0052ef44: SUB ESP,0x4
// 0052ef47: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0052ef4b: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0052ef4f: XOR EDX,EDX
// 0052ef51: MOV EBP,EBX
// 0052ef53: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 0052ef56: CMP EBX,0x20
// 0052ef59: JG 0x0052efb9
//   XREF to: 0052efb9 (CONDITIONAL_JUMP)
// 0052ef5b: ADD dword ptr [EDI + 0xc],EBX
//   Label: LAB_0052ef5b
// 0052ef5e: TEST EBP,EBP
// 0052ef60: JLE 0x0052efae
//   XREF to: 0052efae (CONDITIONAL_JUMP)
// 0052ef62: CMP dword ptr [EDI + 0x14],0x0
//   Label: LAB_0052ef62
// 0052ef66: JZ 0x0052efe8
//   XREF to: 0052efe8 (CONDITIONAL_JUMP)
// 0052ef6c: MOV ECX,dword ptr [EDI + 0x14]
//   Label: LAB_0052ef6c
// 0052ef6f: CMP EBP,ECX
// 0052ef71: JGE 0x0052f0ac
//   XREF to: 0052f0ac (CONDITIONAL_JUMP)
// 0052ef77: MOV EAX,EBP
// 0052ef79: MOV EDX,dword ptr [EDI + 0x4]
//   Label: LAB_0052ef79
// 0052ef7c: ADD EDX,dword ptr [EDI + 0x10]
// 0052ef7f: XOR EBX,EBX
// 0052ef81: MOV BL,byte ptr [EDX]
// 0052ef83: MOV EDX,dword ptr [EDI + 0x14]
// 0052ef86: SUB EBP,EAX
// 0052ef88: MOV ESI,dword ptr [EDX*0x4 + 0x67e5e0]
//   XREF to: 0067e5e0 (DATA)
//   XREF to: 0067e600 (READ)
// 0052ef8f: SUB EDX,EAX
// 0052ef91: AND EBX,ESI
// 0052ef93: MOV CL,DL
// 0052ef95: MOV EAX,EBP
// 0052ef97: SAR EBX,CL
// 0052ef99: MOV CL,AL
// 0052ef9b: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0052ef9e: SHL EBX,CL
// 0052efa0: OR EBP,EBX
// 0052efa2: MOV dword ptr [EDI + 0x14],EDX
// 0052efa5: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x14] (DATA)
// 0052efa8: MOV EBP,EAX
// 0052efaa: TEST EAX,EAX
// 0052efac: JG 0x0052ef62
//   XREF to: 0052ef62 (CONDITIONAL_JUMP)
// 0052efae: MOV EAX,dword ptr [ESP]
//   Label: LAB_0052efae
//   XREF to: Stack[-0x14] (DATA)
// 0052efb1: ADD ESP,0x4
// 0052efb4: POP EBP
// 0052efb5: POP EDI
// 0052efb6: POP ESI
// 0052efb7: POP EBX
// 0052efb8: RET
// 0052efb9: PUSH 0x2f68188
//   Label: LAB_0052efb9
//   XREF to: 02f68188 (DATA)
// 0052efbe: PUSH 0x20
// 0052efc0: MOV ECX,0x63ad3e
//   XREF to: 0063ad3e (PARAM)
// 0052efc5: MOV ESI,0x267
// 0052efca: PUSH 0x63ad4f
//   XREF to: 0063ad4f (DATA)
// 0052efcf: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052efd5: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0052efdb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052efe0: ADD ESP,0xc
// 0052efe3: JMP 0x0052ef5b
//   XREF to: 0052ef5b (UNCONDITIONAL_JUMP)
// 0052efe8: MOV EDX,dword ptr [EDI + 0x10]
//   Label: LAB_0052efe8
// 0052efeb: MOV dword ptr [EDI + 0x14],0x8
// 0052eff2: DEC EDX
// 0052eff3: MOV dword ptr [EDI + 0x10],EDX
// 0052eff6: CMP EDX,0x4
// 0052eff9: JGE 0x0052f00d
//   XREF to: 0052f00d (CONDITIONAL_JUMP)
// 0052effb: CMP dword ptr [EDI + 0x18],0x0
//   Label: LAB_0052effb
// 0052efff: JZ 0x0052f017
//   XREF to: 0052f017 (CONDITIONAL_JUMP)
// 0052f001: MOV dword ptr [EDI + 0x1c],0x1
// 0052f008: JMP 0x0052ef6c
//   XREF to: 0052ef6c (UNCONDITIONAL_JUMP)
// 0052f00d: CMP EDX,dword ptr [EDI + 0x18]
//   Label: LAB_0052f00d
// 0052f010: JL 0x0052effb
//   XREF to: 0052effb (CONDITIONAL_JUMP)
// 0052f012: JMP 0x0052ef6c
//   XREF to: 0052ef6c (UNCONDITIONAL_JUMP)
// 0052f017: MOV EBX,dword ptr [EDI + 0x10]
//   Label: LAB_0052f017
// 0052f01a: TEST EBX,EBX
// 0052f01c: JL 0x0052f03a
//   XREF to: 0052f03a (CONDITIONAL_JUMP)
// 0052f01e: MOV EAX,dword ptr [EDI + 0x8]
//   Label: LAB_0052f01e
// 0052f021: MOV ECX,dword ptr [EDI + 0x10]
// 0052f024: DEC EAX
// 0052f025: MOV ESI,dword ptr [EDI + 0x4]
// 0052f028: SUB EAX,ECX
// 0052f02a: LEA EDX,[ESI + EBX*0x1]
// 0052f02d: ADD EAX,EBX
// 0052f02f: ADD ESI,EAX
// 0052f031: MOV AL,byte ptr [EDX]
// 0052f033: DEC EBX
// 0052f034: MOV byte ptr [ESI],AL
// 0052f036: TEST EBX,EBX
// 0052f038: JGE 0x0052f01e
//   XREF to: 0052f01e (CONDITIONAL_JUMP)
// 0052f03a: MOV ESI,dword ptr [EDI + 0x8]
//   Label: LAB_0052f03a
// 0052f03d: MOV EAX,dword ptr [EDI + 0x10]
// 0052f040: SUB ESI,0x2
// 0052f043: SUB ESI,EAX
// 0052f045: MOV EBX,EDI
// 0052f047: TEST ESI,ESI
// 0052f049: JL 0x0052f051
//   XREF to: 0052f051 (CONDITIONAL_JUMP)
// 0052f04b: CMP dword ptr [EBX + 0x18],0x0
//   Label: LAB_0052f04b
// 0052f04f: JZ 0x0052f05d
//   XREF to: 0052f05d (CONDITIONAL_JUMP)
// 0052f051: MOV EAX,dword ptr [EDI + 0x8]
//   Label: LAB_0052f051
// 0052f054: DEC EAX
// 0052f055: MOV dword ptr [EDI + 0x10],EAX
// 0052f058: JMP 0x0052ef6c
//   XREF to: 0052ef6c (UNCONDITIONAL_JUMP)
// 0052f05d: MOV ECX,dword ptr [EBX + 0x28]
//   Label: LAB_0052f05d
// 0052f060: XOR EAX,EAX
// 0052f062: TEST ECX,ECX
// 0052f064: JLE 0x0052f07e
//   XREF to: 0052f07e (CONDITIONAL_JUMP)
// 0052f066: MOV EAX,dword ptr [EBX]
// 0052f068: PUSH EAX
// 0052f069: PUSH 0x1
// 0052f06b: MOV EDX,dword ptr [EBX + 0x4]
// 0052f06e: MOV EAX,ESI
// 0052f070: PUSH 0x1
// 0052f072: ADD EAX,EDX
// 0052f074: PUSH EAX
// 0052f075: DEC ESI
// 0052f076: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0052f07b: ADD ESP,0x10
// 0052f07e: CMP EAX,0x1
//   Label: LAB_0052f07e
// 0052f081: JNZ 0x0052f096
//   XREF to: 0052f096 (CONDITIONAL_JUMP)
// 0052f083: SUB dword ptr [EBX + 0x28],EAX
// 0052f086: TEST ESI,ESI
// 0052f088: JGE 0x0052f04b
//   XREF to: 0052f04b (CONDITIONAL_JUMP)
// 0052f08a: MOV EAX,dword ptr [EDI + 0x8]
// 0052f08d: DEC EAX
// 0052f08e: MOV dword ptr [EDI + 0x10],EAX
// 0052f091: JMP 0x0052ef6c
//   XREF to: 0052ef6c (UNCONDITIONAL_JUMP)
// 0052f096: LEA EAX,[ESI + 0x1]
//   Label: LAB_0052f096
// 0052f099: MOV dword ptr [EBX + 0x18],EAX
// 0052f09c: TEST ESI,ESI
// 0052f09e: JGE 0x0052f04b
//   XREF to: 0052f04b (CONDITIONAL_JUMP)
// 0052f0a0: MOV EAX,dword ptr [EDI + 0x8]
// 0052f0a3: DEC EAX
// 0052f0a4: MOV dword ptr [EDI + 0x10],EAX
// 0052f0a7: JMP 0x0052ef6c
//   XREF to: 0052ef6c (UNCONDITIONAL_JUMP)
// 0052f0ac: MOV EAX,ECX
//   Label: LAB_0052f0ac
// 0052f0ae: JMP 0x0052ef79
//   XREF to: 0052ef79 (UNCONDITIONAL_JUMP)
