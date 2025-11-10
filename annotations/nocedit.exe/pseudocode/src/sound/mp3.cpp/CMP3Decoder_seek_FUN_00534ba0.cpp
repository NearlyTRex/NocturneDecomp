// Name: sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0
// Address: 00534ba0
// Address Range: [[00534ba0, 00534d06]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0(CMP3Decoder * this_ptr, int sample_offset)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_getTotalSamples_FUN_00534d10 (00534d10) at 00534d1b [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 (00534630) at 00534956 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSample_seek_FUN_005a65a0 (005a65a0) at 005a66bb [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fseek_FUN_005ffacc
//   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0(CMP3Decoder *this_ptr,int sample_offset)

{
  int iVar1;
  
  this_ptr->available_samples = 0;
  this_ptr->decode_buffer_pos = (short *)0x0;
  crt_stdio_c_fseek_FUN_005ffacc
            ((this_ptr->file_bitstream).file_handle,(this_ptr->file_bitstream).stream_start_position
             ,0);
  (this_ptr->file_bitstream).current_byte_index = 0;
  (this_ptr->file_bitstream).bits_available = 0;
  (this_ptr->file_bitstream).total_bits_read = 0;
  (this_ptr->file_bitstream).end_of_stream_flag = 0;
  (this_ptr->file_bitstream).error_flag = 0;
  (this_ptr->file_bitstream).bytes_remaining = (this_ptr->file_bitstream).stream_length;
  this_ptr->field8_0x534c = 0;
  (this_ptr->memory_bitstream).buffer_size_limit = 0;
  (this_ptr->memory_bitstream).total_bits_read = 0;
  (this_ptr->memory_bitstream).current_dword_index = 0;
  (this_ptr->memory_bitstream).bits_available = 8;
  this_ptr->synthesis_buffer_index[0] = 0x40;
  this_ptr->synthesis_buffer_index[1] = 0x40;
  crt_memory_c_memset_FUN_005fde40(this_ptr->synthesis_v_buffer,0,0x2000);
  crt_memory_c_memset_FUN_005fde40(this_ptr->synthesis_history,0,0x1200);
  if (0x8ff < sample_offset) {
    do {
      iVar1 = sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(this_ptr);
      if (iVar1 < 1) {
        return 0;
      }
      sample_offset = sample_offset - iVar1;
    } while (0x8ff < sample_offset);
  }
  if (0 < sample_offset) {
    while( true ) {
      iVar1 = sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(this_ptr);
      this_ptr->available_samples = iVar1;
      if (iVar1 < 1) {
        return 0;
      }
      if (sample_offset < iVar1) break;
      this_ptr->available_samples = 0;
      sample_offset = sample_offset - iVar1;
      if (sample_offset < 1) {
        return 1;
      }
    }
    this_ptr->available_samples = iVar1 - sample_offset;
    this_ptr->decode_buffer_pos = this_ptr->decode_buffer + sample_offset * this_ptr->num_channels;
    return 1;
  }
  return 1;
}


// Assembly code:
// 00534ba0: PUSH EBX
//   Label: sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0
// 00534ba1: PUSH ESI
// 00534ba2: PUSH EDI
// 00534ba3: PUSH EBP
// 00534ba4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00534ba8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00534bac: MOV dword ptr [EBX + 0x108],0x0
// 00534bb6: LEA EDI,[EBX + 0x5320]
// 00534bbc: MOV dword ptr [EBX + 0x10c],0x0
// 00534bc6: PUSH 0x0
// 00534bc8: MOV EDX,dword ptr [EDI + 0x20]
// 00534bcb: PUSH EDX
// 00534bcc: MOV ECX,dword ptr [EDI]
// 00534bce: PUSH ECX
// 00534bcf: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 00534bd4: MOV dword ptr [EDI + 0x10],0x0
// 00534bdb: MOV dword ptr [EDI + 0x14],0x0
// 00534be2: MOV dword ptr [EDI + 0xc],0x0
// 00534be9: MOV dword ptr [EDI + 0x18],0x0
// 00534bf0: MOV dword ptr [EDI + 0x1c],0x0
// 00534bf7: MOV EAX,dword ptr [EDI + 0x24]
// 00534bfa: MOV dword ptr [EDI + 0x28],EAX
// 00534bfd: MOV dword ptr [EBX + 0x534c],0x0
// 00534c07: MOV dword ptr [EBX + 0x1310],0x0
// 00534c11: ADD ESP,0xc
// 00534c14: MOV dword ptr [EBX + 0x1314],0x0
// 00534c1e: PUSH 0x2000
// 00534c23: MOV dword ptr [EBX + 0x1318],0x0
// 00534c2d: PUSH 0x0
// 00534c2f: MOV dword ptr [EBX + 0x531c],0x8
// 00534c39: LEA EAX,[EBX + 0x5350]
// 00534c3f: MOV dword ptr [EBX + 0x7350],0x40
// 00534c49: PUSH EAX
// 00534c4a: MOV dword ptr [EBX + 0x7354],0x40
// 00534c54: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00534c59: ADD ESP,0xc
// 00534c5c: PUSH 0x1200
// 00534c61: PUSH 0x0
// 00534c63: LEA EAX,[EBX + 0x7430]
// 00534c69: PUSH EAX
// 00534c6a: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00534c6f: ADD ESP,0xc
// 00534c72: CMP ESI,0x900
// 00534c78: JL 0x00534c93
//   XREF to: 00534c93 (CONDITIONAL_JUMP)
// 00534c7a: PUSH 0x0
//   Label: LAB_00534c7a
// 00534c7c: PUSH EBX
// 00534c7d: CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
//   XREF to: 00534d40 (UNCONDITIONAL_CALL)
// 00534c82: ADD ESP,0x8
// 00534c85: TEST EAX,EAX
// 00534c87: JLE 0x00534ca7
//   XREF to: 00534ca7 (CONDITIONAL_JUMP)
// 00534c89: SUB ESI,EAX
// 00534c8b: CMP ESI,0x900
// 00534c91: JGE 0x00534c7a
//   XREF to: 00534c7a (CONDITIONAL_JUMP)
// 00534c93: LEA EDI,[EBX + 0x110]
//   Label: LAB_00534c93
// 00534c99: TEST ESI,ESI
// 00534c9b: JG 0x00534cae
//   XREF to: 00534cae (CONDITIONAL_JUMP)
// 00534c9d: MOV EAX,0x1
// 00534ca2: POP EBP
// 00534ca3: POP EDI
// 00534ca4: POP ESI
// 00534ca5: POP EBX
// 00534ca6: RET
// 00534ca7: XOR EAX,EAX
//   Label: LAB_00534ca7
// 00534ca9: POP EBP
// 00534caa: POP EDI
// 00534cab: POP ESI
// 00534cac: POP EBX
// 00534cad: RET
// 00534cae: PUSH EDI
//   Label: LAB_00534cae
// 00534caf: PUSH EBX
// 00534cb0: CALL sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40
//   XREF to: 00534d40 (UNCONDITIONAL_CALL)
// 00534cb5: ADD ESP,0x8
// 00534cb8: MOV dword ptr [EBX + 0x108],EAX
// 00534cbe: TEST EAX,EAX
// 00534cc0: JLE 0x00534ca7
//   XREF to: 00534ca7 (CONDITIONAL_JUMP)
// 00534cc2: CMP ESI,EAX
// 00534cc4: JL 0x00534ce0
//   XREF to: 00534ce0 (CONDITIONAL_JUMP)
// 00534cc6: MOV dword ptr [EBX + 0x108],0x0
// 00534cd0: SUB ESI,EAX
// 00534cd2: TEST ESI,ESI
// 00534cd4: JG 0x00534cae
//   XREF to: 00534cae (CONDITIONAL_JUMP)
// 00534cd6: MOV EAX,0x1
// 00534cdb: POP EBP
// 00534cdc: POP EDI
// 00534cdd: POP ESI
// 00534cde: POP EBX
// 00534cdf: RET
// 00534ce0: MOV ECX,EAX
//   Label: LAB_00534ce0
// 00534ce2: MOV EBP,dword ptr [EBX + 0x104]
// 00534ce8: SUB ECX,ESI
// 00534cea: IMUL ESI,EBP
// 00534ced: ADD ESI,ESI
// 00534cef: MOV dword ptr [EBX + 0x108],ECX
// 00534cf5: ADD EDI,ESI
// 00534cf7: MOV dword ptr [EBX + 0x10c],EDI
// 00534cfd: MOV EAX,0x1
// 00534d02: POP EBP
// 00534d03: POP EDI
// 00534d04: POP ESI
// 00534d05: POP EBX
// 00534d06: RET
