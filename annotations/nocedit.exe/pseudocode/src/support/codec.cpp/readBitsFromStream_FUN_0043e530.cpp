// Name: support_codec.cpp_readBitsFromStream_FUN_0043e530
// Address: 0043e530
// Address Range: [[0043e530, 0043e6b8]]
// Convention: __cdecl
// Signature: int support_codec.cpp_readBitsFromStream_FUN_0043e530(SBitBuffer * bit_buffer, int bit_count, FILE * file_stream, int * bytes_remaining)
// Cross-references:
//   support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030 (0043f030) at 0043f069 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fgetc_FUN_005ff245

#include "nocturne.h"

int __cdecl
support_codec_cpp_readBitsFromStream_FUN_0043e530
          (SBitBuffer *bit_buffer,int bit_count,FILE *file_stream,int *bytes_remaining)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  uint uVar6;
  uchar local_18 [4];
  byte local_14 [4];
  
  if (bit_count < bit_buffer->bits_available) {
    uVar6 = bit_buffer->accumulated_bits;
    bit_buffer->accumulated_bits = uVar6 >> ((byte)bit_count & 0x1f);
    uVar6 = ~(-1 << ((byte)bit_count & 0x1f)) & uVar6;
    bit_buffer->bits_available = bit_buffer->bits_available - bit_count;
  }
  else if (bit_count == bit_buffer->bits_available) {
    bit_buffer->bits_available = 0;
    uVar6 = bit_buffer->accumulated_bits;
    bit_buffer->accumulated_bits = 0;
  }
  else {
    iVar2 = bit_buffer->bits_available;
    uVar6 = bit_buffer->accumulated_bits;
    iVar1 = bit_buffer->bits_available;
    bit_buffer->bits_available = 0;
    bit_buffer->accumulated_bits = 0;
    piVar4 = (int *)(bit_count - iVar1);
    uVar6 = ~(-1 << ((byte)iVar2 & 0x1f)) & uVar6;
    iVar2 = iVar1;
    while( true ) {
      iVar5 = iVar1;
      if ((int)piVar4 < 8) {
        if (0 < (int)piVar4) {
          if ((*bytes_remaining < 1) ||
             (crt_stdio_c_fgetc_FUN_005ff245(file_stream,local_18),
             *(int *)((int)&file_stream->_handle + *(int *)(file_stream->_ptr + 4)) != 0)) {
            uVar3 = 0xffffffff;
          }
          else {
            *bytes_remaining = *bytes_remaining + -1;
            uVar3 = (uint)local_14[0];
          }
          piVar4[1] = uVar3;
          if ((int)uVar3 < 0) {
            piVar4[1] = uVar6;
            *piVar4 = iVar5;
            return -1;
          }
          uVar6 = uVar6 | (~(-1 << ((byte)file_stream & 0x1f)) & piVar4[1]) << ((byte)iVar5 & 0x1f);
          piVar4[1] = (uint)piVar4[1] >> ((byte)file_stream & 0x1f);
          *piVar4 = 8 - (int)file_stream;
        }
        return uVar6;
      }
      if ((*bytes_remaining < 1) ||
         (crt_stdio_c_fgetc_FUN_005ff245(file_stream,local_14),
         *(int *)((int)&file_stream->_handle + *(int *)(file_stream->_ptr + 4)) != 0)) break;
      *bytes_remaining = *bytes_remaining + -1;
      uVar6 = uVar6 | (uint)local_14[0] << ((byte)iVar2 & 0x1f);
      piVar4 = piVar4 + -2;
      iVar5 = iVar2 + 8;
      iVar2 = iVar5;
    }
    bit_buffer->accumulated_bits = uVar6;
    bit_buffer->bits_available = iVar2;
    uVar6 = 0xffffffff;
  }
  return uVar6;
}


// Assembly code:
// 0043e530: PUSH EBX
//   Label: support_codec.cpp_readBitsFromStream_FUN_0043e530
// 0043e531: PUSH ESI
// 0043e532: PUSH EDI
// 0043e533: PUSH EBP
// 0043e534: SUB ESP,0x8
// 0043e537: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0043e53b: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 0043e53f: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0043e543: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043e547: MOV EDX,dword ptr [ECX]
// 0043e549: CMP EAX,EDX
// 0043e54b: JL 0x0043e5a4
//   XREF to: 0043e5a4 (CONDITIONAL_JUMP)
// 0043e54d: JZ 0x0043e5d1
//   XREF to: 0043e5d1 (CONDITIONAL_JUMP)
// 0043e553: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0043e557: MOV EBP,0xffffffff
// 0043e55c: MOV CL,byte ptr [ECX]
// 0043e55e: MOV EDX,dword ptr [EAX + 0x4]
// 0043e561: MOV EBX,dword ptr [EAX]
// 0043e563: SHL EBP,CL
// 0043e565: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043e569: MOV dword ptr [EAX],0x0
// 0043e56f: NOT EBP
// 0043e571: MOV dword ptr [EAX + 0x4],0x0
// 0043e578: SUB ECX,EBX
// 0043e57a: AND EBP,EDX
// 0043e57c: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[0x8] (WRITE)
// 0043e580: CMP ECX,0x8
// 0043e583: JL 0x0043e62a
//   XREF to: 0043e62a (CONDITIONAL_JUMP)
// 0043e589: CMP dword ptr [ESI],0x1
//   Label: LAB_0043e589
// 0043e58c: JGE 0x0043e5e3
//   XREF to: 0043e5e3 (CONDITIONAL_JUMP)
// 0043e58e: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0043e58e
//   XREF to: Stack[0x4] (READ)
// 0043e592: MOV dword ptr [EAX + 0x4],EBP
// 0043e595: MOV dword ptr [EAX],EBX
// 0043e597: MOV EAX,0xffffffff
// 0043e59c: ADD ESP,0x8
//   Label: LAB_0043e59c
// 0043e59f: POP EBP
// 0043e5a0: POP EDI
// 0043e5a1: POP ESI
// 0043e5a2: POP EBX
// 0043e5a3: RET
// 0043e5a4: MOV EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_0043e5a4
//   XREF to: Stack[0x4] (READ)
// 0043e5a8: MOV EDX,dword ptr [EBX + 0x4]
// 0043e5ab: MOV CL,byte ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043e5af: MOV ESI,EDX
// 0043e5b1: SHR ESI,CL
// 0043e5b3: MOV EAX,0xffffffff
// 0043e5b8: MOV dword ptr [EBX + 0x4],ESI
// 0043e5bb: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0043e5bf: SHL EAX,CL
// 0043e5c1: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043e5c5: MOV EDI,dword ptr [ESI]
// 0043e5c7: NOT EAX
// 0043e5c9: SUB EDI,EBX
// 0043e5cb: AND EAX,EDX
// 0043e5cd: MOV dword ptr [ESI],EDI
// 0043e5cf: JMP 0x0043e59c
//   XREF to: 0043e59c (UNCONDITIONAL_JUMP)
// 0043e5d1: MOV dword ptr [ECX],0x0
//   Label: LAB_0043e5d1
// 0043e5d7: MOV EAX,dword ptr [ECX + 0x4]
// 0043e5da: MOV dword ptr [ECX + 0x4],0x0
// 0043e5e1: JMP 0x0043e59c
//   XREF to: 0043e59c (UNCONDITIONAL_JUMP)
// 0043e5e3: LEA EAX,[ESP + 0x4]
//   Label: LAB_0043e5e3
//   XREF to: Stack[-0x14] (DATA)
// 0043e5e7: PUSH EAX
// 0043e5e8: PUSH EDI
// 0043e5e9: CALL crt_stdio.c_fgetc_FUN_005ff245
//   XREF to: 005ff245 (UNCONDITIONAL_CALL)
// 0043e5ee: MOV EAX,dword ptr [EDI]
// 0043e5f0: MOV EAX,dword ptr [EAX + 0x4]
// 0043e5f3: MOV EDX,dword ptr [EDI + EAX*0x1 + 0x10]
// 0043e5f7: ADD ESP,0x8
// 0043e5fa: TEST EDX,EDX
// 0043e5fc: JNZ 0x0043e58e
//   XREF to: 0043e58e (CONDITIONAL_JUMP)
// 0043e5fe: MOV ECX,dword ptr [ESI]
// 0043e600: DEC ECX
// 0043e601: XOR EAX,EAX
// 0043e603: MOV dword ptr [ESI],ECX
// 0043e605: MOV AL,byte ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0043e609: TEST EAX,EAX
// 0043e60b: JL 0x0043e58e
//   XREF to: 0043e58e (CONDITIONAL_JUMP)
// 0043e60d: MOV CL,BL
// 0043e60f: SHL EAX,CL
// 0043e611: OR EBP,EAX
// 0043e613: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043e617: SUB EAX,0x8
// 0043e61a: ADD EBX,0x8
// 0043e61d: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[0x8] (WRITE)
// 0043e621: CMP EAX,0x8
// 0043e624: JGE 0x0043e589
//   XREF to: 0043e589 (CONDITIONAL_JUMP)
// 0043e62a: CMP dword ptr [ESP + 0x20],0x0
//   Label: LAB_0043e62a
//   XREF to: Stack[0x8] (READ)
// 0043e62f: JLE 0x0043e679
//   XREF to: 0043e679 (CONDITIONAL_JUMP)
// 0043e631: CMP dword ptr [ESI],0x1
// 0043e634: JGE 0x0043e683
//   XREF to: 0043e683 (CONDITIONAL_JUMP)
// 0043e636: MOV EAX,0xffffffff
//   Label: LAB_0043e636
// 0043e63b: MOV ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_0043e63b
//   XREF to: Stack[0x4] (READ)
// 0043e63f: MOV dword ptr [ESI + 0x4],EAX
// 0043e642: TEST EAX,EAX
// 0043e644: JL 0x0043e6a7
//   XREF to: 0043e6a7 (CONDITIONAL_JUMP)
// 0043e646: MOV CL,byte ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043e64a: MOV EAX,0xffffffff
// 0043e64f: SHL EAX,CL
// 0043e651: NOT EAX
// 0043e653: AND EAX,dword ptr [ESI + 0x4]
// 0043e656: MOV CL,BL
// 0043e658: MOV EBX,dword ptr [ESI + 0x4]
// 0043e65b: SHL EAX,CL
// 0043e65d: MOV CL,byte ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043e661: OR EBP,EAX
// 0043e663: SHR EBX,CL
// 0043e665: MOV EAX,0x8
// 0043e66a: MOV dword ptr [ESI + 0x4],EBX
// 0043e66d: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043e671: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0043e675: SUB EAX,ESI
// 0043e677: MOV dword ptr [EBX],EAX
// 0043e679: MOV EAX,EBP
//   Label: LAB_0043e679
// 0043e67b: ADD ESP,0x8
// 0043e67e: POP EBP
// 0043e67f: POP EDI
// 0043e680: POP ESI
// 0043e681: POP EBX
// 0043e682: RET
// 0043e683: MOV EAX,ESP
//   Label: LAB_0043e683
// 0043e685: PUSH EAX
// 0043e686: PUSH EDI
// 0043e687: CALL crt_stdio.c_fgetc_FUN_005ff245
//   XREF to: 005ff245 (UNCONDITIONAL_CALL)
// 0043e68c: MOV EAX,dword ptr [EDI]
// 0043e68e: ADD EDI,dword ptr [EAX + 0x4]
// 0043e691: MOV ECX,dword ptr [EDI + 0x10]
// 0043e694: ADD ESP,0x8
// 0043e697: TEST ECX,ECX
// 0043e699: JNZ 0x0043e636
//   XREF to: 0043e636 (CONDITIONAL_JUMP)
// 0043e69b: MOV EDI,dword ptr [ESI]
// 0043e69d: DEC EDI
// 0043e69e: XOR EAX,EAX
// 0043e6a0: MOV dword ptr [ESI],EDI
// 0043e6a2: MOV AL,byte ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0043e6a5: JMP 0x0043e63b
//   XREF to: 0043e63b (UNCONDITIONAL_JUMP)
// 0043e6a7: MOV dword ptr [ESI + 0x4],EBP
//   Label: LAB_0043e6a7
// 0043e6aa: MOV EAX,0xffffffff
// 0043e6af: MOV dword ptr [ESI],EBX
// 0043e6b1: ADD ESP,0x8
// 0043e6b4: POP EBP
// 0043e6b5: POP EDI
// 0043e6b6: POP ESI
// 0043e6b7: POP EBX
// 0043e6b8: RET
