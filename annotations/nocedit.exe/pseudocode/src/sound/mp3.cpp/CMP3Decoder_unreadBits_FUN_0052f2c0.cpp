// Name: sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0
// Address: 0052f2c0
// Address Range: [[0052f2c0, 0052f316]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0(CMP3Decoder * this_ptr, int num_bits)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680 (00531680) at 00531cbc [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_0052f2c0(CMP3Decoder *this_ptr,int num_bits)

{
  uint uVar1;
  
  uVar1 = (this_ptr->memory_bitstream).bits_available + num_bits;
  (this_ptr->memory_bitstream).bits_available = uVar1;
  (this_ptr->memory_bitstream).total_bits_read =
       (this_ptr->memory_bitstream).total_bits_read - num_bits;
  while (7 < uVar1) {
    (this_ptr->memory_bitstream).bits_available = (this_ptr->memory_bitstream).bits_available - 8;
    uVar1 = (this_ptr->memory_bitstream).bits_available;
    (this_ptr->memory_bitstream).current_dword_index =
         (this_ptr->memory_bitstream).current_dword_index - 1;
  }
  return;
}


// Assembly code:
// 0052f2c0: PUSH EBX
//   Label: sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0
// 0052f2c1: PUSH EBP
// 0052f2c2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052f2c6: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052f2ca: MOV EBX,dword ptr [EAX + 0x531c]
// 0052f2d0: MOV ECX,dword ptr [EAX + 0x1314]
// 0052f2d6: ADD EBX,EDX
// 0052f2d8: SUB ECX,EDX
// 0052f2da: MOV dword ptr [EAX + 0x531c],EBX
// 0052f2e0: MOV dword ptr [EAX + 0x1314],ECX
// 0052f2e6: CMP EBX,0x8
// 0052f2e9: JC 0x0052f314
//   XREF to: 0052f314 (CONDITIONAL_JUMP)
// 0052f2eb: PUSH EDI
// 0052f2ec: MOV EDI,dword ptr [EAX + 0x531c]
//   Label: LAB_0052f2ec
// 0052f2f2: SUB EDI,0x8
// 0052f2f5: MOV EBP,dword ptr [EAX + 0x1318]
// 0052f2fb: MOV dword ptr [EAX + 0x531c],EDI
// 0052f301: DEC EBP
// 0052f302: MOV EDX,dword ptr [EAX + 0x531c]
// 0052f308: MOV dword ptr [EAX + 0x1318],EBP
// 0052f30e: CMP EDX,0x8
// 0052f311: JNC 0x0052f2ec
//   XREF to: 0052f2ec (CONDITIONAL_JUMP)
// 0052f313: POP EDI
// 0052f314: POP EBP
//   Label: LAB_0052f314
// 0052f315: POP EBX
// 0052f316: RET
