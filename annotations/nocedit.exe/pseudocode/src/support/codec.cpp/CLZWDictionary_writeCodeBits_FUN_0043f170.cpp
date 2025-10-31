// Name: support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
// Address: 0043f170
// Address Range: [[0043f170, 0043f1f2]]
// Convention: __cdecl
// Signature: void support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170(CLZWDictionary * this_ptr, int code_value, SBitBuffer * bit_buffer, FILE * output_stream)
// Cross-references:
//   support_codec.cpp_CLZWCompress_finalize_FUN_0043f440 (0043f440) at 0043f474 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWCompress_process_FUN_0043f360 (0043f360) at 0043f3ed [UNCONDITIONAL_CALL]
// Function calls:
//   support_codec.cpp_writeBitsToStream_FUN_0043e6c0

#include "nocturne.h"

void __cdecl
support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
          (CLZWDictionary *this_ptr,int code_value,SBitBuffer *bit_buffer,FILE *output_stream)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = this_ptr->max_entries;
  uVar3 = 1 << ((char)this_ptr->current_num_bits - 1U & 0x1f);
  if (uVar3 != 0) {
    do {
      if ((iVar1 - 1U & uVar3) != 0) {
        if ((code_value & uVar3) == 0) break;
        support_codec_cpp_writeBitsToStream_FUN_0043e6c0(bit_buffer,1,1,output_stream);
      }
      uVar3 = (int)uVar3 >> 1;
      if (uVar3 == 0) {
        return;
      }
    } while( true );
  }
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 & code_value;
      uVar3 = (int)uVar3 >> 1;
      support_codec_cpp_writeBitsToStream_FUN_0043e6c0
                (bit_buffer,1,(uint)(uVar2 != 0),output_stream);
    } while (uVar3 != 0);
    return;
  }
  return;
}


// Assembly code:
// 0043f170: PUSH EBX
//   Label: support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
// 0043f171: PUSH ESI
// 0043f172: PUSH EDI
// 0043f173: PUSH EBP
// 0043f174: MOV EBP,ESP
// 0043f176: SUB ESP,0x4
// 0043f179: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043f17c: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0043f17f: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0043f182: MOV EBX,0x1
// 0043f187: MOV ECX,dword ptr [EAX + 0x8]
// 0043f18a: MOV EAX,dword ptr [EAX + 0xc]
// 0043f18d: DEC ECX
// 0043f18e: DEC EAX
// 0043f18f: SHL EBX,CL
// 0043f191: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043f194: TEST EBX,EBX
// 0043f196: JZ 0x0043f1a2
//   XREF to: 0043f1a2 (CONDITIONAL_JUMP)
// 0043f198: TEST dword ptr [EBP + -0x4],EBX
//   Label: LAB_0043f198
//   XREF to: Stack[-0x14] (READ)
// 0043f19b: JZ 0x0043f1bb
//   XREF to: 0043f1bb (CONDITIONAL_JUMP)
// 0043f19d: TEST dword ptr [EBP + 0x18],EBX
//   XREF to: Stack[0x8] (READ)
// 0043f1a0: JNZ 0x0043f1ad
//   XREF to: 0043f1ad (CONDITIONAL_JUMP)
// 0043f1a2: TEST EBX,EBX
//   Label: LAB_0043f1a2
// 0043f1a4: JNZ 0x0043f1cc
//   XREF to: 0043f1cc (CONDITIONAL_JUMP)
// 0043f1a6: MOV ESP,EBP
// 0043f1a8: POP EBP
// 0043f1a9: POP EDI
// 0043f1aa: POP ESI
// 0043f1ab: POP EBX
// 0043f1ac: RET
// 0043f1ad: PUSH EDI
//   Label: LAB_0043f1ad
// 0043f1ae: PUSH 0x1
// 0043f1b0: PUSH 0x1
// 0043f1b2: PUSH ESI
// 0043f1b3: CALL support_codec.cpp_writeBitsToStream_FUN_0043e6c0
//   XREF to: 0043e6c0 (UNCONDITIONAL_CALL)
// 0043f1b8: ADD ESP,0x10
// 0043f1bb: SAR EBX,0x1
//   Label: LAB_0043f1bb
// 0043f1bd: TEST EBX,EBX
// 0043f1bf: JNZ 0x0043f198
//   XREF to: 0043f198 (CONDITIONAL_JUMP)
// 0043f1c1: TEST EBX,EBX
// 0043f1c3: JNZ 0x0043f1cc
//   XREF to: 0043f1cc (CONDITIONAL_JUMP)
// 0043f1c5: MOV ESP,EBP
// 0043f1c7: POP EBP
// 0043f1c8: POP EDI
// 0043f1c9: POP ESI
// 0043f1ca: POP EBX
// 0043f1cb: RET
// 0043f1cc: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_0043f1cc
//   XREF to: Stack[0x8] (READ)
// 0043f1cf: PUSH EDI
// 0043f1d0: TEST EBX,EDX
// 0043f1d2: SETNZ AL
// 0043f1d5: AND EAX,0xff
// 0043f1da: PUSH EAX
// 0043f1db: PUSH 0x1
// 0043f1dd: PUSH ESI
// 0043f1de: SAR EBX,0x1
// 0043f1e0: CALL support_codec.cpp_writeBitsToStream_FUN_0043e6c0
//   XREF to: 0043e6c0 (UNCONDITIONAL_CALL)
// 0043f1e5: ADD ESP,0x10
// 0043f1e8: TEST EBX,EBX
// 0043f1ea: JNZ 0x0043f1cc
//   XREF to: 0043f1cc (CONDITIONAL_JUMP)
// 0043f1ec: MOV ESP,EBP
// 0043f1ee: POP EBP
// 0043f1ef: POP EDI
// 0043f1f0: POP ESI
// 0043f1f1: POP EBX
// 0043f1f2: RET
