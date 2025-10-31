// Name: support_codec.cpp_writeBitsToStream_FUN_0043e6c0
// Address: 0043e6c0
// Address Range: [[0043e6c0, 0043e7d4]]
// Convention: __cdecl
// Signature: void support_codec.cpp_writeBitsToStream_FUN_0043e6c0(SBitBuffer * bit_buffer, int bit_count, int bit_value, FILE * output_stream)
// Cross-references:
//   support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170 (0043f170) at 0043f1e0 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fputc_FUN_005ff2d7

#include "nocturne.h"

void __cdecl
support_codec_cpp_writeBitsToStream_FUN_0043e6c0
          (SBitBuffer *bit_buffer,int bit_count,int bit_value,FILE *output_stream)

{
  int iVar1;
  byte local_14;
  
  iVar1 = bit_buffer->bits_available;
  while (7 < iVar1) {
    crt_stdio_c_fputc_FUN_005ff2d7(output_stream,(uint)(byte)bit_buffer->accumulated_bits);
    iVar1 = bit_buffer->bits_available + -8;
    bit_buffer->accumulated_bits = (uint)bit_buffer->accumulated_bits >> 8;
    bit_buffer->bits_available = iVar1;
  }
  if (0 < bit_buffer->bits_available) {
    iVar1 = 8 - bit_buffer->bits_available;
    if (bit_count < iVar1) {
      iVar1 = bit_buffer->bits_available;
      bit_buffer->bits_available = bit_buffer->bits_available + bit_count;
      bit_buffer->accumulated_bits =
           bit_buffer->accumulated_bits | bit_value << ((byte)iVar1 & 0x1f);
    }
    else {
      if (bit_count != iVar1) {
        crt_stdio_c_fputc_FUN_005ff2d7
                  (output_stream,
                   (uint)(byte)((char)bit_value << ((byte)bit_buffer->bits_available & 0x1f) |
                               (byte)bit_buffer->accumulated_bits));
        bit_buffer->bits_available = 0;
        local_14 = (byte)iVar1;
        bit_buffer->accumulated_bits = 0;
        bit_value = (uint)bit_value >> (local_14 & 0x1f);
        bit_count = bit_count - iVar1;
        goto LAB_0043e753;
      }
      bit_buffer->accumulated_bits =
           bit_buffer->accumulated_bits | bit_value << ((byte)bit_buffer->bits_available & 0x1f);
      crt_stdio_c_fputc_FUN_005ff2d7(output_stream,(uint)(byte)bit_buffer->accumulated_bits);
      bit_buffer->bits_available = 0;
      bit_buffer->accumulated_bits = 0;
    }
    return;
  }
LAB_0043e753:
  for (; 7 < bit_count; bit_count = bit_count + -8) {
    crt_stdio_c_fputc_FUN_005ff2d7(output_stream,bit_value & 0xff);
  }
  bit_buffer->bits_available = bit_count;
  bit_buffer->accumulated_bits = bit_value;
  return;
}


// Assembly code:
// 0043e6c0: PUSH EBX
//   Label: support_codec.cpp_writeBitsToStream_FUN_0043e6c0
// 0043e6c1: PUSH ESI
// 0043e6c2: PUSH EDI
// 0043e6c3: PUSH EBP
// 0043e6c4: SUB ESP,0x4
// 0043e6c7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043e6cb: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0043e6cf: MOV EDX,dword ptr [EBX]
// 0043e6d1: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0043e6d5: CMP EDX,0x8
// 0043e6d8: JL 0x0043e700
//   XREF to: 0043e700 (CONDITIONAL_JUMP)
// 0043e6da: XOR EAX,EAX
//   Label: LAB_0043e6da
// 0043e6dc: MOV AL,byte ptr [EBX + 0x4]
// 0043e6df: PUSH EAX
// 0043e6e0: PUSH EDI
// 0043e6e1: CALL crt_stdio.c_fputc_FUN_005ff2d7
//   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)
// 0043e6e6: MOV ECX,dword ptr [EBX + 0x4]
// 0043e6e9: MOV EBP,dword ptr [EBX]
// 0043e6eb: SHR ECX,0x8
// 0043e6ee: SUB EBP,0x8
// 0043e6f1: MOV dword ptr [EBX + 0x4],ECX
// 0043e6f4: ADD ESP,0x8
// 0043e6f7: MOV dword ptr [EBX],EBP
// 0043e6f9: CMP EBP,0x8
// 0043e6fc: JGE 0x0043e6da
//   XREF to: 0043e6da (CONDITIONAL_JUMP)
// 0043e6fe: MOV EAX,EAX
// 0043e700: MOV EDX,dword ptr [EBX]
//   Label: LAB_0043e700
// 0043e702: TEST EDX,EDX
// 0043e704: JLE 0x0043e753
//   XREF to: 0043e753 (CONDITIONAL_JUMP)
// 0043e706: MOV EAX,0x8
// 0043e70b: SUB EAX,EDX
// 0043e70d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0043e710: CMP ESI,EAX
// 0043e712: JL 0x0043e778
//   XREF to: 0043e778 (CONDITIONAL_JUMP)
// 0043e714: JZ 0x0043e796
//   XREF to: 0043e796 (CONDITIONAL_JUMP)
// 0043e71a: MOV AL,byte ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0043e71e: MOV CL,byte ptr [EBX]
// 0043e720: SHL AL,CL
// 0043e722: OR AL,byte ptr [EBX + 0x4]
// 0043e725: AND EAX,0xff
// 0043e72a: PUSH EAX
// 0043e72b: PUSH EDI
// 0043e72c: CALL crt_stdio.c_fputc_FUN_005ff2d7
//   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)
// 0043e731: ADD ESP,0x8
// 0043e734: MOV dword ptr [EBX],0x0
// 0043e73a: MOV CL,byte ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0043e73d: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0043e741: MOV dword ptr [EBX + 0x4],0x0
// 0043e748: SHR EDX,CL
// 0043e74a: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0043e74d: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[0xc] (WRITE)
// 0043e751: SUB ESI,ECX
// 0043e753: CMP ESI,0x8
//   Label: LAB_0043e753
// 0043e756: JL 0x0043e7c4
//   XREF to: 0043e7c4 (CONDITIONAL_JUMP)
// 0043e758: XOR EAX,EAX
// 0043e75a: MOV AL,byte ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0043e75e: PUSH EAX
// 0043e75f: PUSH EDI
// 0043e760: CALL crt_stdio.c_fputc_FUN_005ff2d7
//   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)
// 0043e765: ADD ESP,0x8
// 0043e768: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0043e76c: SHR EAX,0x8
// 0043e76f: SUB ESI,0x8
// 0043e772: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[0xc] (WRITE)
// 0043e776: JMP 0x0043e753
//   XREF to: 0043e753 (UNCONDITIONAL_JUMP)
// 0043e778: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0043e778
//   XREF to: Stack[0xc] (READ)
// 0043e77c: MOV CL,byte ptr [EBX]
// 0043e77e: MOV EDI,dword ptr [EBX + 0x4]
// 0043e781: MOV EBP,dword ptr [EBX]
// 0043e783: SHL EAX,CL
// 0043e785: ADD EBP,ESI
// 0043e787: OR EDI,EAX
// 0043e789: MOV dword ptr [EBX],EBP
// 0043e78b: MOV dword ptr [EBX + 0x4],EDI
// 0043e78e: ADD ESP,0x4
//   Label: LAB_0043e78e
// 0043e791: POP EBP
// 0043e792: POP EDI
// 0043e793: POP ESI
// 0043e794: POP EBX
// 0043e795: RET
// 0043e796: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0043e796
//   XREF to: Stack[0xc] (READ)
// 0043e79a: MOV CL,byte ptr [EBX]
// 0043e79c: MOV ESI,dword ptr [EBX + 0x4]
// 0043e79f: SHL EAX,CL
// 0043e7a1: OR ESI,EAX
// 0043e7a3: XOR EAX,EAX
// 0043e7a5: MOV dword ptr [EBX + 0x4],ESI
// 0043e7a8: MOV AL,byte ptr [EBX + 0x4]
// 0043e7ab: PUSH EAX
// 0043e7ac: PUSH EDI
// 0043e7ad: CALL crt_stdio.c_fputc_FUN_005ff2d7
//   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)
// 0043e7b2: MOV dword ptr [EBX],0x0
// 0043e7b8: ADD ESP,0x8
// 0043e7bb: MOV dword ptr [EBX + 0x4],0x0
// 0043e7c2: JMP 0x0043e78e
//   XREF to: 0043e78e (UNCONDITIONAL_JUMP)
// 0043e7c4: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0043e7c4
//   XREF to: Stack[0xc] (READ)
// 0043e7c8: MOV dword ptr [EBX],ESI
// 0043e7ca: MOV dword ptr [EBX + 0x4],EAX
// 0043e7cd: ADD ESP,0x4
// 0043e7d0: POP EBP
// 0043e7d1: POP EDI
// 0043e7d2: POP ESI
// 0043e7d3: POP EBX
// 0043e7d4: RET
