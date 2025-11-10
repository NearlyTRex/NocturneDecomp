// Name: sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
// Address: 0052ee50
// Address Range: [[0052ee50, 0052ef3b]]
// Convention: __cdecl
// Signature: uint sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream * this_ptr)
// Cross-references:
//   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0 (0052f5b0) at 0052f643 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 (00534d40) at 005352e8 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_005307a0 (005307a0) at 005309a2 [UNCONDITIONAL_CALL]
// Globals:
//   uint[8] g_MpegBitMaskTableSingleBit
//   undefined4 DAT_0067e5dc
// Function calls:
//   crt_stdio.c_fread_FUN_005fd990

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(CFileBitStream *this_ptr)

{
  byte bVar1;
  uint uVar2;
  SIZE_T SVar3;
  char *buffer;
  int iVar4;
  
  this_ptr->total_bits_read = this_ptr->total_bits_read + 1;
  if (this_ptr->bits_available == 0) {
    this_ptr->bits_available = 8;
    iVar4 = this_ptr->current_byte_index + -1;
    this_ptr->current_byte_index = iVar4;
    if ((iVar4 < 4) || (iVar4 < this_ptr->end_of_stream_flag)) {
      if (this_ptr->end_of_stream_flag == 0) {
        for (iVar4 = this_ptr->current_byte_index; -1 < iVar4; iVar4 = iVar4 + -1) {
          this_ptr->buffer[((this_ptr->buffer_size + -1) - this_ptr->current_byte_index) + iVar4] =
               this_ptr->buffer[iVar4];
        }
        iVar4 = (this_ptr->buffer_size + -2) - this_ptr->current_byte_index;
        while ((-1 < iVar4 && (this_ptr->end_of_stream_flag == 0))) {
          SVar3 = 0;
          if (0 < this_ptr->bytes_remaining) {
            buffer = this_ptr->buffer + iVar4;
            iVar4 = iVar4 + -1;
            SVar3 = crt_stdio_c_fread_FUN_005fd990(buffer,1,1,this_ptr->file_handle);
          }
          if (SVar3 == 1) {
            this_ptr->bytes_remaining = this_ptr->bytes_remaining + -1;
          }
          else {
            this_ptr->end_of_stream_flag = iVar4 + 1;
          }
        }
        this_ptr->current_byte_index = this_ptr->buffer_size + -1;
      }
      else {
        this_ptr->error_flag = 1;
      }
    }
  }
  iVar4 = this_ptr->bits_available + -1;
  bVar1 = this_ptr->buffer[this_ptr->current_byte_index];
  uVar2 = g_MpegBitMaskTableSingleBit[iVar4];
  this_ptr->bits_available = iVar4;
  return (uVar2 & bVar1) >> ((byte)iVar4 & 0x1f);
}


// Assembly code:
// 0052ee50: PUSH EBX
//   Label: sound_mp3.cpp_CFileBitStream_readBit_FUN_0052ee50
// 0052ee51: PUSH EDI
// 0052ee52: PUSH EBP
// 0052ee53: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0052ee57: MOV EDX,dword ptr [EDI + 0xc]
// 0052ee5a: INC EDX
// 0052ee5b: MOV ECX,dword ptr [EDI + 0x14]
// 0052ee5e: MOV dword ptr [EDI + 0xc],EDX
// 0052ee61: TEST ECX,ECX
// 0052ee63: JNZ 0x0052eefc
//   XREF to: 0052eefc (CONDITIONAL_JUMP)
// 0052ee69: MOV EBX,dword ptr [EDI + 0x10]
// 0052ee6c: MOV dword ptr [EDI + 0x14],0x8
// 0052ee73: DEC EBX
// 0052ee74: MOV dword ptr [EDI + 0x10],EBX
// 0052ee77: CMP EBX,0x4
// 0052ee7a: JGE 0x0052ef20
//   XREF to: 0052ef20 (CONDITIONAL_JUMP)
// 0052ee80: CMP dword ptr [EDI + 0x18],0x0
//   Label: LAB_0052ee80
// 0052ee84: JNZ 0x0052ef2b
//   XREF to: 0052ef2b (CONDITIONAL_JUMP)
// 0052ee8a: PUSH ESI
// 0052ee8b: MOV EBX,dword ptr [EDI + 0x10]
// 0052ee8e: TEST EBX,EBX
// 0052ee90: JL 0x0052eeb0
//   XREF to: 0052eeb0 (CONDITIONAL_JUMP)
// 0052ee92: MOV EAX,dword ptr [EDI + 0x8]
//   Label: LAB_0052ee92
// 0052ee95: MOV EBP,dword ptr [EDI + 0x10]
// 0052ee98: DEC EAX
// 0052ee99: MOV ESI,dword ptr [EDI + 0x4]
// 0052ee9c: SUB EAX,EBP
// 0052ee9e: LEA EDX,[ESI + EBX*0x1]
// 0052eea1: ADD EAX,EBX
// 0052eea3: ADD ESI,EAX
// 0052eea5: MOV AL,byte ptr [EDX]
// 0052eea7: DEC EBX
// 0052eea8: MOV byte ptr [ESI],AL
// 0052eeaa: TEST EBX,EBX
// 0052eeac: JGE 0x0052ee92
//   XREF to: 0052ee92 (CONDITIONAL_JUMP)
// 0052eeae: MOV EAX,EAX
// 0052eeb0: MOV ESI,dword ptr [EDI + 0x8]
//   Label: LAB_0052eeb0
// 0052eeb3: MOV EAX,dword ptr [EDI + 0x10]
// 0052eeb6: SUB ESI,0x2
// 0052eeb9: SUB ESI,EAX
// 0052eebb: MOV EBX,EDI
// 0052eebd: TEST ESI,ESI
// 0052eebf: JL 0x0052eef4
//   XREF to: 0052eef4 (CONDITIONAL_JUMP)
// 0052eec1: CMP dword ptr [EBX + 0x18],0x0
//   Label: LAB_0052eec1
// 0052eec5: JNZ 0x0052eef4
//   XREF to: 0052eef4 (CONDITIONAL_JUMP)
// 0052eec7: MOV ECX,dword ptr [EBX + 0x28]
// 0052eeca: XOR EAX,EAX
// 0052eecc: TEST ECX,ECX
// 0052eece: JLE 0x0052eee8
//   XREF to: 0052eee8 (CONDITIONAL_JUMP)
// 0052eed0: MOV EBP,dword ptr [EBX]
// 0052eed2: PUSH EBP
// 0052eed3: PUSH 0x1
// 0052eed5: MOV EDX,ESI
// 0052eed7: MOV EAX,dword ptr [EBX + 0x4]
// 0052eeda: PUSH 0x1
// 0052eedc: ADD EAX,EDX
// 0052eede: PUSH EAX
// 0052eedf: DEC ESI
// 0052eee0: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0052eee5: ADD ESP,0x10
// 0052eee8: CMP EAX,0x1
//   Label: LAB_0052eee8
// 0052eeeb: JNZ 0x0052ef34
//   XREF to: 0052ef34 (CONDITIONAL_JUMP)
// 0052eeed: DEC dword ptr [EBX + 0x28]
// 0052eef0: TEST ESI,ESI
//   Label: LAB_0052eef0
// 0052eef2: JGE 0x0052eec1
//   XREF to: 0052eec1 (CONDITIONAL_JUMP)
// 0052eef4: MOV EAX,dword ptr [EDI + 0x8]
//   Label: LAB_0052eef4
// 0052eef7: DEC EAX
// 0052eef8: MOV dword ptr [EDI + 0x10],EAX
// 0052eefb: POP ESI
// 0052eefc: MOV EDX,dword ptr [EDI + 0x10]
//   Label: LAB_0052eefc
// 0052eeff: MOV EAX,dword ptr [EDI + 0x4]
// 0052ef02: ADD EAX,EDX
// 0052ef04: MOV EDX,dword ptr [EDI + 0x14]
// 0052ef07: XOR EBX,EBX
// 0052ef09: DEC EDX
// 0052ef0a: MOV BL,byte ptr [EAX]
// 0052ef0c: MOV EAX,dword ptr [EDX*0x4 + 0x67e5c0]
//   XREF to: 0067e5c0 (DATA)
//   XREF to: 0067e5dc (READ)
// 0052ef13: MOV CL,DL
// 0052ef15: AND EAX,EBX
// 0052ef17: MOV dword ptr [EDI + 0x14],EDX
// 0052ef1a: SHR EAX,CL
// 0052ef1c: POP EBP
// 0052ef1d: POP EDI
// 0052ef1e: POP EBX
// 0052ef1f: RET
// 0052ef20: CMP EBX,dword ptr [EDI + 0x18]
//   Label: LAB_0052ef20
// 0052ef23: JL 0x0052ee80
//   XREF to: 0052ee80 (CONDITIONAL_JUMP)
// 0052ef29: JMP 0x0052eefc
//   XREF to: 0052eefc (UNCONDITIONAL_JUMP)
// 0052ef2b: MOV dword ptr [EDI + 0x1c],0x1
//   Label: LAB_0052ef2b
// 0052ef32: JMP 0x0052eefc
//   XREF to: 0052eefc (UNCONDITIONAL_JUMP)
// 0052ef34: LEA EAX,[ESI + 0x1]
//   Label: LAB_0052ef34
// 0052ef37: MOV dword ptr [EBX + 0x18],EAX
// 0052ef3a: JMP 0x0052eef0
//   XREF to: 0052eef0 (UNCONDITIONAL_JUMP)
