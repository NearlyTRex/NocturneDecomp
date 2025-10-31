// Name: support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0
// Address: 0043f0d0
// Address Range: [[0043f0d0, 0043f16c]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, byte * output_stream, int * bytes_remaining, int code_value)
// Cross-references:
//   support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0 (0043f5d0) at 0043f645 [UNCONDITIONAL_CALL]
// Function calls:
//   support_codec.cpp_extractBitsFromBuffer_FUN_0043e840

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0
          (CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,byte *output_stream,int *bytes_remaining,
          int code_value)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = this_ptr->max_entries;
  uVar3 = 1 << ((char)this_ptr->current_num_bits - 1U & 0x1f);
  if (uVar3 == 0) goto LAB_0043f119;
  do {
    if ((iVar2 - 1U & uVar3) != 0) {
      iVar1 = support_codec_cpp_extractBitsFromBuffer_FUN_0043e840
                        (bit_buffer,1,(byte **)output_stream,bytes_remaining);
      if (iVar1 < 0) {
        return -1;
      }
      if (iVar1 == 0) {
        while( true ) {
          uVar3 = (int)uVar3 >> 1;
LAB_0043f119:
          if (uVar3 == 0) break;
          while( true ) {
            iVar2 = support_codec_cpp_extractBitsFromBuffer_FUN_0043e840
                              (bit_buffer,1,(byte **)output_stream,bytes_remaining);
            if (iVar2 < 0) {
              return -1;
            }
            if (iVar2 == 0) break;
            uVar4 = uVar4 | uVar3;
            uVar3 = (int)uVar3 >> 1;
            if (uVar3 == 0) {
              return uVar4;
            }
          }
        }
        return uVar4;
      }
      uVar4 = uVar4 | uVar3;
    }
    uVar3 = (int)uVar3 >> 1;
    if (uVar3 == 0) {
      return uVar4;
    }
  } while( true );
}


// Assembly code:
// 0043f0d0: PUSH EBX
//   Label: support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0
// 0043f0d1: PUSH ESI
// 0043f0d2: PUSH EDI
// 0043f0d3: PUSH EBP
// 0043f0d4: SUB ESP,0x4
// 0043f0d7: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043f0db: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0043f0df: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0043f0e3: MOV EBX,0x1
// 0043f0e8: MOV ECX,dword ptr [EAX + 0x8]
// 0043f0eb: XOR ESI,ESI
// 0043f0ed: MOV EAX,dword ptr [EAX + 0xc]
// 0043f0f0: DEC ECX
// 0043f0f1: DEC EAX
// 0043f0f2: SHL EBX,CL
// 0043f0f4: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0043f0f7: TEST EBX,EBX
// 0043f0f9: JZ 0x0043f119
//   XREF to: 0043f119 (CONDITIONAL_JUMP)
// 0043f0fb: TEST dword ptr [ESP],EBX
//   Label: LAB_0043f0fb
//   XREF to: Stack[-0x14] (DATA)
// 0043f0fe: JZ 0x0043f130
//   XREF to: 0043f130 (CONDITIONAL_JUMP)
// 0043f100: PUSH EBP
// 0043f101: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0043f105: PUSH ECX
// 0043f106: PUSH 0x1
// 0043f108: PUSH EDI
// 0043f109: CALL support_codec.cpp_extractBitsFromBuffer_FUN_0043e840
//   XREF to: 0043e840 (UNCONDITIONAL_CALL)
// 0043f10e: ADD ESP,0x10
// 0043f111: TEST EAX,EAX
// 0043f113: JL 0x0043f127
//   XREF to: 0043f127 (CONDITIONAL_JUMP)
// 0043f115: JNZ 0x0043f12e
//   XREF to: 0043f12e (CONDITIONAL_JUMP)
// 0043f117: SAR EBX,0x1
//   Label: LAB_0043f117
// 0043f119: TEST EBX,EBX
//   Label: LAB_0043f119
// 0043f11b: JNZ 0x0043f144
//   XREF to: 0043f144 (CONDITIONAL_JUMP)
// 0043f11d: MOV EAX,ESI
// 0043f11f: ADD ESP,0x4
//   Label: LAB_0043f11f
// 0043f122: POP EBP
// 0043f123: POP EDI
// 0043f124: POP ESI
// 0043f125: POP EBX
// 0043f126: RET
// 0043f127: MOV EAX,0xffffffff
//   Label: LAB_0043f127
// 0043f12c: JMP 0x0043f11f
//   XREF to: 0043f11f (UNCONDITIONAL_JUMP)
// 0043f12e: OR ESI,EBX
//   Label: LAB_0043f12e
// 0043f130: SAR EBX,0x1
//   Label: LAB_0043f130
// 0043f132: TEST EBX,EBX
// 0043f134: JNZ 0x0043f0fb
//   XREF to: 0043f0fb (CONDITIONAL_JUMP)
// 0043f136: TEST EBX,EBX
// 0043f138: JNZ 0x0043f144
//   XREF to: 0043f144 (CONDITIONAL_JUMP)
// 0043f13a: MOV EAX,ESI
// 0043f13c: ADD ESP,0x4
// 0043f13f: POP EBP
// 0043f140: POP EDI
// 0043f141: POP ESI
// 0043f142: POP EBX
// 0043f143: RET
// 0043f144: PUSH EBP
//   Label: LAB_0043f144
// 0043f145: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0043f149: PUSH EAX
// 0043f14a: PUSH 0x1
// 0043f14c: PUSH EDI
// 0043f14d: CALL support_codec.cpp_extractBitsFromBuffer_FUN_0043e840
//   XREF to: 0043e840 (UNCONDITIONAL_CALL)
// 0043f152: ADD ESP,0x10
// 0043f155: TEST EAX,EAX
// 0043f157: JL 0x0043f127
//   XREF to: 0043f127 (CONDITIONAL_JUMP)
// 0043f159: JZ 0x0043f117
//   XREF to: 0043f117 (CONDITIONAL_JUMP)
// 0043f15b: OR ESI,EBX
// 0043f15d: SAR EBX,0x1
// 0043f15f: TEST EBX,EBX
// 0043f161: JNZ 0x0043f144
//   XREF to: 0043f144 (CONDITIONAL_JUMP)
// 0043f163: MOV EAX,ESI
// 0043f165: ADD ESP,0x4
// 0043f168: POP EBP
// 0043f169: POP EDI
// 0043f16a: POP ESI
// 0043f16b: POP EBX
// 0043f16c: RET
