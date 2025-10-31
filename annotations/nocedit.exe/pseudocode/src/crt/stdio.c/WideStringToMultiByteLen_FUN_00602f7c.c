// Name: crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c
// Address: 00602f7c
// Address Range: [[00602f7c, 00602ff7]]
// Convention: __cdecl
// Signature: int crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c(wchar_t * wide_string_offset, ushort segment, int max_chars)
// Cross-references:
//   crt_stdio.c_ConvertFormatSpec_FUN_00603238 (00603238) at 00603581 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_WideCharToSingleByte_FUN_0060acf0

#include "nocturne.h"

int __cdecl
crt_stdio_c_WideStringToMultiByteLen_FUN_00602f7c
          (wchar_t *wide_string_offset,ushort segment,int max_chars)

{
  wchar_t wVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  undefined1 local_14 [8];
  
  iVar3 = 0;
  if (max_chars == -1) {
    while( true ) {
      wVar1 = *wide_string_offset;
      if (wVar1 == L'\0') break;
      wide_string_offset = wide_string_offset + 1;
      iVar2 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                        ((wchar_t)local_14,(char *)(uint)(ushort)wVar1);
      if (iVar2 != -1) {
        iVar3 = iVar3 + iVar2;
      }
    }
  }
  else {
    while( true ) {
      wVar1 = *wide_string_offset;
      if ((wVar1 == L'\0') || (max_chars < iVar3)) break;
      wide_string_offset = wide_string_offset + 1;
      iVar2 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                        ((wchar_t)local_14,(char *)(uint)(ushort)wVar1);
      if (iVar2 != -1) {
        iVar3 = iVar3 + iVar2;
      }
    }
    if (max_chars < iVar3) {
      return max_chars;
    }
  }
  return iVar3;
}


// Assembly code:
// 00602f7c: PUSH EBX
//   Label: crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c
// 00602f7d: PUSH ESI
// 00602f7e: PUSH EDI
// 00602f7f: PUSH ES
// 00602f80: SUB ESP,0x4
// 00602f83: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00602f87: LES EBX,[ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00602f8b: XOR ESI,ESI
// 00602f8d: CMP EDI,-0x1
// 00602f90: JNZ 0x00602fba
//   XREF to: 00602fba (CONDITIONAL_JUMP)
// 00602f92: MOV CX,word ptr ES:[EBX]
//   Label: LAB_00602f92
// 00602f96: TEST CX,CX
// 00602f99: JZ 0x00602fea
//   XREF to: 00602fea (CONDITIONAL_JUMP)
// 00602f9b: XOR EAX,EAX
// 00602f9d: MOV AX,CX
// 00602fa0: PUSH EAX
// 00602fa1: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 00602fa5: PUSH EAX
// 00602fa6: ADD EBX,0x2
// 00602fa9: CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
//   XREF to: 0060acf0 (UNCONDITIONAL_CALL)
// 00602fae: ADD ESP,0x8
// 00602fb1: CMP EAX,-0x1
// 00602fb4: JZ 0x00602f92
//   XREF to: 00602f92 (CONDITIONAL_JUMP)
// 00602fb6: ADD ESI,EAX
// 00602fb8: JMP 0x00602f92
//   XREF to: 00602f92 (UNCONDITIONAL_JUMP)
// 00602fba: MOV DX,word ptr ES:[EBX]
//   Label: LAB_00602fba
// 00602fbe: TEST DX,DX
// 00602fc1: JZ 0x00602fe6
//   XREF to: 00602fe6 (CONDITIONAL_JUMP)
// 00602fc3: CMP ESI,EDI
// 00602fc5: JG 0x00602fe6
//   XREF to: 00602fe6 (CONDITIONAL_JUMP)
// 00602fc7: XOR EAX,EAX
// 00602fc9: MOV AX,DX
// 00602fcc: PUSH EAX
// 00602fcd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 00602fd1: PUSH EAX
// 00602fd2: ADD EBX,0x2
// 00602fd5: CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
//   XREF to: 0060acf0 (UNCONDITIONAL_CALL)
// 00602fda: ADD ESP,0x8
// 00602fdd: CMP EAX,-0x1
// 00602fe0: JZ 0x00602fba
//   XREF to: 00602fba (CONDITIONAL_JUMP)
// 00602fe2: ADD ESI,EAX
// 00602fe4: JMP 0x00602fba
//   XREF to: 00602fba (UNCONDITIONAL_JUMP)
// 00602fe6: CMP ESI,EDI
//   Label: LAB_00602fe6
// 00602fe8: JG 0x00602fee
//   XREF to: 00602fee (CONDITIONAL_JUMP)
// 00602fea: MOV EAX,ESI
//   Label: LAB_00602fea
// 00602fec: JMP 0x00602ff0
//   XREF to: 00602ff0 (UNCONDITIONAL_JUMP)
// 00602fee: MOV EAX,EDI
//   Label: LAB_00602fee
// 00602ff0: ADD ESP,0x4
//   Label: LAB_00602ff0
// 00602ff3: POP ES
// 00602ff4: POP EDI
// 00602ff5: POP ESI
// 00602ff6: POP EBX
// 00602ff7: RET
