// Name: support_codec.cpp_flushBitBuffer_FUN_0043e7e0
// Address: 0043e7e0
// Address Range: [[0043e7e0, 0043e83d]]
// Convention: __cdecl
// Signature: void support_codec.cpp_flushBitBuffer_FUN_0043e7e0(SBitBuffer * bit_buffer, FILE * output_stream)
// Cross-references:
//   support_codec.cpp_CLZWCompress_finalize_FUN_0043f440 (0043f440) at 0043f456 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fputc_FUN_005ff2d7

#include "nocturne.h"

void __cdecl
support_codec_cpp_flushBitBuffer_FUN_0043e7e0(SBitBuffer *bit_buffer,FILE *output_stream)

{
  int iVar1;
  
  iVar1 = bit_buffer->bits_available;
  while (7 < iVar1) {
    crt_stdio_c_fputc_FUN_005ff2d7(output_stream,(uint)(byte)bit_buffer->accumulated_bits);
    iVar1 = bit_buffer->bits_available + -8;
    bit_buffer->accumulated_bits = (uint)bit_buffer->accumulated_bits >> 8;
    bit_buffer->bits_available = iVar1;
  }
  if (bit_buffer->bits_available < 1) {
    return;
  }
  crt_stdio_c_fputc_FUN_005ff2d7(output_stream,(uint)(byte)bit_buffer->accumulated_bits);
  bit_buffer->accumulated_bits = 0;
  bit_buffer->bits_available = 0;
  return;
}


// Assembly code:
// 0043e7e0: PUSH EBX
//   Label: support_codec.cpp_flushBitBuffer_FUN_0043e7e0
// 0043e7e1: PUSH ESI
// 0043e7e2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0043e7e6: MOV EDX,dword ptr [EBX]
// 0043e7e8: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0043e7ec: CMP EDX,0x8
// 0043e7ef: JL 0x0043e817
//   XREF to: 0043e817 (CONDITIONAL_JUMP)
// 0043e7f1: PUSH EDI
// 0043e7f2: XOR EAX,EAX
//   Label: LAB_0043e7f2
// 0043e7f4: MOV AL,byte ptr [EBX + 0x4]
// 0043e7f7: PUSH EAX
// 0043e7f8: PUSH ESI
// 0043e7f9: CALL crt_stdio.c_fputc_FUN_005ff2d7
//   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)
// 0043e7fe: MOV ECX,dword ptr [EBX + 0x4]
// 0043e801: MOV EDI,dword ptr [EBX]
// 0043e803: SHR ECX,0x8
// 0043e806: SUB EDI,0x8
// 0043e809: MOV dword ptr [EBX + 0x4],ECX
// 0043e80c: ADD ESP,0x8
// 0043e80f: MOV dword ptr [EBX],EDI
// 0043e811: CMP EDI,0x8
// 0043e814: JGE 0x0043e7f2
//   XREF to: 0043e7f2 (CONDITIONAL_JUMP)
// 0043e816: POP EDI
// 0043e817: CMP dword ptr [EBX],0x0
//   Label: LAB_0043e817
// 0043e81a: JG 0x0043e81f
//   XREF to: 0043e81f (CONDITIONAL_JUMP)
// 0043e81c: POP ESI
// 0043e81d: POP EBX
// 0043e81e: RET
// 0043e81f: XOR EAX,EAX
//   Label: LAB_0043e81f
// 0043e821: MOV AL,byte ptr [EBX + 0x4]
// 0043e824: PUSH EAX
// 0043e825: PUSH ESI
// 0043e826: CALL crt_stdio.c_fputc_FUN_005ff2d7
//   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)
// 0043e82b: MOV dword ptr [EBX + 0x4],0x0
// 0043e832: ADD ESP,0x8
// 0043e835: MOV dword ptr [EBX],0x0
// 0043e83b: POP ESI
// 0043e83c: POP EBX
// 0043e83d: RET
