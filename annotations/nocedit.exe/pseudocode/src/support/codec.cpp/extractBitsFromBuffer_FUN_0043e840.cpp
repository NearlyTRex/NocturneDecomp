// Name: support_codec.cpp_extractBitsFromBuffer_FUN_0043e840
// Address: 0043e840
// Address Range: [[0043e840, 0043e997]]
// Convention: __cdecl
// Signature: int support_codec.cpp_extractBitsFromBuffer_FUN_0043e840(SBitBuffer * bit_state, int bit_count, byte * * output_pos, int * bytes_remaining)
// Cross-references:
//   support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0 (0043f0d0) at 0043f109 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
support_codec_cpp_extractBitsFromBuffer_FUN_0043e840
          (SBitBuffer *bit_state,int bit_count,byte **output_pos,int *bytes_remaining)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (bit_count < bit_state->bits_available) {
    uVar5 = bit_state->accumulated_bits;
    bit_state->accumulated_bits = (uint)bit_state->accumulated_bits >> ((byte)bit_count & 0x1f);
    bit_state->bits_available = bit_state->bits_available - bit_count;
    return ~(-1 << ((byte)bit_count & 0x1f)) & uVar5;
  }
  if (bit_count == bit_state->bits_available) {
    bit_state->bits_available = 0;
    iVar3 = bit_state->accumulated_bits;
    bit_state->accumulated_bits = 0;
    return iVar3;
  }
  uVar5 = bit_state->accumulated_bits & ~(-1 << ((byte)bit_state->bits_available & 0x1f));
  iVar3 = bit_state->bits_available;
  bit_state->bits_available = 0;
  iVar4 = bit_count - iVar3;
  bit_state->accumulated_bits = 0;
  for (; 7 < iVar4; iVar4 = iVar4 + -8) {
    if (*bytes_remaining < 1) goto LAB_0043e980;
    pbVar1 = *output_pos;
    *output_pos = pbVar1 + 1;
    uVar5 = uVar5 | (uint)*pbVar1 << ((byte)iVar3 & 0x1f);
    iVar3 = iVar3 + 8;
    *bytes_remaining = *bytes_remaining + -1;
  }
  if (0 < iVar4) {
    if (*bytes_remaining < 1) {
LAB_0043e980:
      bit_state->accumulated_bits = uVar5;
      bit_state->bits_available = iVar3;
      return -1;
    }
    pbVar1 = *output_pos;
    *output_pos = pbVar1 + 1;
    bit_state->accumulated_bits = (uint)*pbVar1;
    *bytes_remaining = *bytes_remaining + -1;
    uVar2 = bit_state->accumulated_bits;
    bit_state->accumulated_bits = (uint)bit_state->accumulated_bits >> ((byte)iVar4 & 0x1f);
    uVar5 = uVar5 | (uVar2 & ~(-1 << ((byte)iVar4 & 0x1f))) << ((byte)iVar3 & 0x1f);
    bit_state->bits_available = 8 - iVar4;
  }
  return uVar5;
}


// Assembly code:
// 0043e840: PUSH EBX
//   Label: support_codec.cpp_extractBitsFromBuffer_FUN_0043e840
// 0043e841: PUSH ESI
// 0043e842: PUSH EDI
// 0043e843: PUSH EBP
// 0043e844: SUB ESP,0x4
// 0043e847: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0043e84b: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0043e84f: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0043e853: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043e857: MOV ECX,dword ptr [EAX]
// 0043e859: CMP EDX,ECX
// 0043e85b: JL 0x0043e930
//   XREF to: 0043e930 (CONDITIONAL_JUMP)
// 0043e861: JZ 0x0043e966
//   XREF to: 0043e966 (CONDITIONAL_JUMP)
// 0043e867: MOV CL,byte ptr [EAX]
// 0043e869: MOV EAX,0xffffffff
// 0043e86e: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043e872: SHL EAX,CL
// 0043e874: MOV ESI,dword ptr [ESI + 0x4]
// 0043e877: NOT EAX
// 0043e879: AND ESI,EAX
// 0043e87b: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043e87f: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043e883: MOV EAX,dword ptr [EAX]
// 0043e885: MOV dword ptr [ECX],0x0
// 0043e88b: SUB EDX,EAX
// 0043e88d: MOV dword ptr [ECX + 0x4],0x0
// 0043e894: CMP EDX,0x8
// 0043e897: JL 0x0043e8cd
//   XREF to: 0043e8cd (CONDITIONAL_JUMP)
// 0043e899: CMP dword ptr [EBX],0x1
//   Label: LAB_0043e899
// 0043e89c: JL 0x0043e980
//   XREF to: 0043e980 (CONDITIONAL_JUMP)
// 0043e8a2: MOV ECX,dword ptr [EDI]
// 0043e8a4: LEA EBP,[ECX + 0x1]
// 0043e8a7: MOV dword ptr [EDI],EBP
// 0043e8a9: MOV CL,byte ptr [ECX]
// 0043e8ab: AND ECX,0xff
// 0043e8b1: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 0043e8b4: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0043e8b7: MOV CL,AL
// 0043e8b9: SHL EBP,CL
// 0043e8bb: OR ESI,EBP
// 0043e8bd: MOV EBP,dword ptr [EBX]
// 0043e8bf: SUB EDX,0x8
// 0043e8c2: DEC EBP
// 0043e8c3: ADD EAX,0x8
// 0043e8c6: MOV dword ptr [EBX],EBP
// 0043e8c8: CMP EDX,0x8
// 0043e8cb: JGE 0x0043e899
//   XREF to: 0043e899 (CONDITIONAL_JUMP)
// 0043e8cd: TEST EDX,EDX
//   Label: LAB_0043e8cd
// 0043e8cf: JLE 0x0043e924
//   XREF to: 0043e924 (CONDITIONAL_JUMP)
// 0043e8d1: CMP dword ptr [EBX],0x1
// 0043e8d4: JL 0x0043e980
//   XREF to: 0043e980 (CONDITIONAL_JUMP)
// 0043e8da: MOV ECX,dword ptr [EDI]
// 0043e8dc: LEA EBP,[ECX + 0x1]
// 0043e8df: MOV dword ptr [EDI],EBP
// 0043e8e1: MOV CL,byte ptr [ECX]
// 0043e8e3: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043e8e7: AND ECX,0xff
// 0043e8ed: MOV dword ptr [EDI + 0x4],ECX
// 0043e8f0: MOV EDI,0xffffffff
// 0043e8f5: MOV CL,DL
// 0043e8f7: SHL EDI,CL
// 0043e8f9: MOV ECX,EDI
// 0043e8fb: DEC dword ptr [EBX]
// 0043e8fd: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043e901: NOT ECX
// 0043e903: MOV EBX,dword ptr [EBX + 0x4]
// 0043e906: AND EBX,ECX
// 0043e908: MOV CL,AL
// 0043e90a: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043e90e: SHL EBX,CL
// 0043e910: MOV CL,DL
// 0043e912: SHR dword ptr [EAX + 0x4],CL
// 0043e915: MOV EAX,0x8
// 0043e91a: SUB EAX,EDX
// 0043e91c: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043e920: OR ESI,EBX
// 0043e922: MOV dword ptr [EDX],EAX
// 0043e924: MOV ECX,ESI
//   Label: LAB_0043e924
// 0043e926: MOV EAX,ECX
// 0043e928: ADD ESP,0x4
// 0043e92b: POP EBP
// 0043e92c: POP EDI
// 0043e92d: POP ESI
// 0043e92e: POP EBX
// 0043e92f: RET
// 0043e930: MOV EAX,0xffffffff
//   Label: LAB_0043e930
// 0043e935: MOV CL,DL
// 0043e937: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043e93b: SHL EAX,CL
// 0043e93d: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043e941: MOV EBP,dword ptr [EBX + 0x4]
// 0043e944: MOV EDI,dword ptr [ECX + 0x4]
// 0043e947: MOV CL,DL
// 0043e949: SHR EBP,CL
// 0043e94b: MOV dword ptr [EBX + 0x4],EBP
// 0043e94e: MOV ECX,EBX
// 0043e950: MOV EBX,dword ptr [EBX]
// 0043e952: NOT EAX
// 0043e954: SUB EBX,EDX
// 0043e956: AND EAX,EDI
// 0043e958: MOV dword ptr [ECX],EBX
// 0043e95a: MOV ECX,EAX
// 0043e95c: MOV EAX,ECX
// 0043e95e: ADD ESP,0x4
// 0043e961: POP EBP
// 0043e962: POP EDI
// 0043e963: POP ESI
// 0043e964: POP EBX
// 0043e965: RET
// 0043e966: MOV dword ptr [EAX],0x0
//   Label: LAB_0043e966
// 0043e96c: MOV ECX,dword ptr [EAX + 0x4]
// 0043e96f: MOV dword ptr [EAX + 0x4],0x0
// 0043e976: MOV EAX,ECX
// 0043e978: ADD ESP,0x4
// 0043e97b: POP EBP
// 0043e97c: POP EDI
// 0043e97d: POP ESI
// 0043e97e: POP EBX
// 0043e97f: RET
// 0043e980: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_0043e980
//   XREF to: Stack[0x4] (READ)
// 0043e984: MOV dword ptr [EDX + 0x4],ESI
// 0043e987: MOV ECX,0xffffffff
// 0043e98c: MOV dword ptr [EDX],EAX
// 0043e98e: MOV EAX,ECX
// 0043e990: ADD ESP,0x4
// 0043e993: POP EBP
// 0043e994: POP EDI
// 0043e995: POP ESI
// 0043e996: POP EBX
// 0043e997: RET
