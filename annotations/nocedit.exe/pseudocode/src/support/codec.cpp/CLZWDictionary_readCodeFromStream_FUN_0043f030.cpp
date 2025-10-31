// Name: support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030
// Address: 0043f030
// Address Range: [[0043f030, 0043f0cc]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, FILE * input_file, int * bytes_remaining)
// Cross-references:
//   support_codec.cpp_CLZWDecompress_process_FUN_0043f510 (0043f510) at 0043f56e [UNCONDITIONAL_CALL]
// Function calls:
//   support_codec.cpp_readBitsFromStream_FUN_0043e530

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030
          (CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,FILE *input_file,int *bytes_remaining)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = this_ptr->max_entries;
  uVar3 = 1 << ((char)this_ptr->current_num_bits - 1U & 0x1f);
  if (uVar3 == 0) goto LAB_0043f079;
  do {
    if ((iVar2 - 1U & uVar3) != 0) {
      iVar1 = support_codec_cpp_readBitsFromStream_FUN_0043e530
                        (bit_buffer,1,input_file,bytes_remaining);
      if (iVar1 < 0) {
        return -1;
      }
      if (iVar1 == 0) {
        while( true ) {
          uVar3 = (int)uVar3 >> 1;
LAB_0043f079:
          if (uVar3 == 0) break;
          while( true ) {
            iVar2 = support_codec_cpp_readBitsFromStream_FUN_0043e530
                              (bit_buffer,1,input_file,bytes_remaining);
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
// 0043f030: PUSH EBX
//   Label: support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030
// 0043f031: PUSH ESI
// 0043f032: PUSH EDI
// 0043f033: PUSH EBP
// 0043f034: SUB ESP,0x4
// 0043f037: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043f03b: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0043f03f: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0043f043: MOV EBX,0x1
// 0043f048: MOV ECX,dword ptr [EAX + 0x8]
// 0043f04b: XOR ESI,ESI
// 0043f04d: MOV EAX,dword ptr [EAX + 0xc]
// 0043f050: DEC ECX
// 0043f051: DEC EAX
// 0043f052: SHL EBX,CL
// 0043f054: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0043f057: TEST EBX,EBX
// 0043f059: JZ 0x0043f079
//   XREF to: 0043f079 (CONDITIONAL_JUMP)
// 0043f05b: TEST dword ptr [ESP],EBX
//   Label: LAB_0043f05b
//   XREF to: Stack[-0x14] (DATA)
// 0043f05e: JZ 0x0043f090
//   XREF to: 0043f090 (CONDITIONAL_JUMP)
// 0043f060: PUSH EBP
// 0043f061: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0043f065: PUSH ECX
// 0043f066: PUSH 0x1
// 0043f068: PUSH EDI
// 0043f069: CALL support_codec.cpp_readBitsFromStream_FUN_0043e530
//   XREF to: 0043e530 (UNCONDITIONAL_CALL)
// 0043f06e: ADD ESP,0x10
// 0043f071: TEST EAX,EAX
// 0043f073: JL 0x0043f087
//   XREF to: 0043f087 (CONDITIONAL_JUMP)
// 0043f075: JNZ 0x0043f08e
//   XREF to: 0043f08e (CONDITIONAL_JUMP)
// 0043f077: SAR EBX,0x1
//   Label: LAB_0043f077
// 0043f079: TEST EBX,EBX
//   Label: LAB_0043f079
// 0043f07b: JNZ 0x0043f0a4
//   XREF to: 0043f0a4 (CONDITIONAL_JUMP)
// 0043f07d: MOV EAX,ESI
// 0043f07f: ADD ESP,0x4
//   Label: LAB_0043f07f
// 0043f082: POP EBP
// 0043f083: POP EDI
// 0043f084: POP ESI
// 0043f085: POP EBX
// 0043f086: RET
// 0043f087: MOV EAX,0xffffffff
//   Label: LAB_0043f087
// 0043f08c: JMP 0x0043f07f
//   XREF to: 0043f07f (UNCONDITIONAL_JUMP)
// 0043f08e: OR ESI,EBX
//   Label: LAB_0043f08e
// 0043f090: SAR EBX,0x1
//   Label: LAB_0043f090
// 0043f092: TEST EBX,EBX
// 0043f094: JNZ 0x0043f05b
//   XREF to: 0043f05b (CONDITIONAL_JUMP)
// 0043f096: TEST EBX,EBX
// 0043f098: JNZ 0x0043f0a4
//   XREF to: 0043f0a4 (CONDITIONAL_JUMP)
// 0043f09a: MOV EAX,ESI
// 0043f09c: ADD ESP,0x4
// 0043f09f: POP EBP
// 0043f0a0: POP EDI
// 0043f0a1: POP ESI
// 0043f0a2: POP EBX
// 0043f0a3: RET
// 0043f0a4: PUSH EBP
//   Label: LAB_0043f0a4
// 0043f0a5: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0043f0a9: PUSH EAX
// 0043f0aa: PUSH 0x1
// 0043f0ac: PUSH EDI
// 0043f0ad: CALL support_codec.cpp_readBitsFromStream_FUN_0043e530
//   XREF to: 0043e530 (UNCONDITIONAL_CALL)
// 0043f0b2: ADD ESP,0x10
// 0043f0b5: TEST EAX,EAX
// 0043f0b7: JL 0x0043f087
//   XREF to: 0043f087 (CONDITIONAL_JUMP)
// 0043f0b9: JZ 0x0043f077
//   XREF to: 0043f077 (CONDITIONAL_JUMP)
// 0043f0bb: OR ESI,EBX
// 0043f0bd: SAR EBX,0x1
// 0043f0bf: TEST EBX,EBX
// 0043f0c1: JNZ 0x0043f0a4
//   XREF to: 0043f0a4 (CONDITIONAL_JUMP)
// 0043f0c3: MOV EAX,ESI
// 0043f0c5: ADD ESP,0x4
// 0043f0c8: POP EBP
// 0043f0c9: POP EDI
// 0043f0ca: POP ESI
// 0043f0cb: POP EBX
// 0043f0cc: RET
