// Name: support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270
// Address: 0043f270
// Address Range: [[0043f270, 0043f2cf]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270(CLZWDictionary * this_ptr, int code, char * * buffer_ptr_ptr)
// Cross-references:
//   support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0 (0043f5d0) at 0043f601 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270
          (CLZWDictionary *this_ptr,int code,char **buffer_ptr_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = code;
  do {
    iVar4 = iVar4 + 1;
    iVar1 = this_ptr->node_table[iVar2].code;
    iVar2 = this_ptr->node_table[iVar2].prefix_code;
    iVar3 = iVar4;
  } while (-1 < iVar2);
  do {
    (*buffer_ptr_ptr)[iVar3 + -1] = (char)this_ptr->node_table[code].code;
    code = this_ptr->node_table[code].prefix_code;
    iVar3 = iVar3 + -1;
  } while (-1 < code);
  *buffer_ptr_ptr = *buffer_ptr_ptr + iVar4;
  return iVar1;
}


// Assembly code:
// 0043f270: PUSH EBX
//   Label: support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270
// 0043f271: PUSH ESI
// 0043f272: PUSH EDI
// 0043f273: PUSH EBP
// 0043f274: SUB ESP,0x4
// 0043f277: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043f27b: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0043f27f: MOV EAX,EBX
// 0043f281: XOR ESI,ESI
// 0043f283: SHL EAX,0x4
//   Label: LAB_0043f283
// 0043f286: MOV EDX,dword ptr [ECX + 0x10]
// 0043f289: ADD EAX,EDX
// 0043f28b: INC ESI
// 0043f28c: MOV EDX,dword ptr [EAX]
// 0043f28e: MOV EAX,dword ptr [EAX + 0x4]
// 0043f291: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 0043f294: TEST EAX,EAX
// 0043f296: JGE 0x0043f283
//   XREF to: 0043f283 (CONDITIONAL_JUMP)
// 0043f298: MOV EDX,EBX
// 0043f29a: MOV EAX,ESI
// 0043f29c: SHL EDX,0x4
//   Label: LAB_0043f29c
// 0043f29f: MOV EBX,dword ptr [ECX + 0x10]
// 0043f2a2: LEA EBP,[EBX + EDX*0x1]
// 0043f2a5: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0043f2a9: DEC EAX
// 0043f2aa: MOV EBX,dword ptr [EBX]
// 0043f2ac: LEA EDI,[EBX + EAX*0x1]
// 0043f2af: MOV BL,byte ptr [EBP]
// 0043f2b2: MOV byte ptr [EDI],BL
// 0043f2b4: MOV EBX,dword ptr [ECX + 0x10]
// 0043f2b7: MOV EDX,dword ptr [EDX + EBX*0x1 + 0x4]
// 0043f2bb: TEST EDX,EDX
// 0043f2bd: JGE 0x0043f29c
//   XREF to: 0043f29c (CONDITIONAL_JUMP)
// 0043f2bf: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0043f2c3: ADD dword ptr [EAX],ESI
// 0043f2c5: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0043f2c8: ADD ESP,0x4
// 0043f2cb: POP EBP
// 0043f2cc: POP EDI
// 0043f2cd: POP ESI
// 0043f2ce: POP EBX
// 0043f2cf: RET
