// Name: crt_stdio.c_FillBufferAndGetChar_FUN_005fe910
// Address: 005fe910
// Address Range: [[005fe910, 005fe93e]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_FillBufferAndGetChar_FUN_005fe910(FILE * file)
// Cross-references:
//   crt_stdio.c_fgetc_FUN_005fe840 (005fe840) at 005fe8a5 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_FillInputBuffer_FUN_005fe940

#include "nocturne.h"

int __watcallStack crt_stdio_c_FillBufferAndGetChar_FUN_005fe910(FILE *file)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = crt_stdio_c_FillInputBuffer_FUN_005fe940(file);
  if (iVar2 == 0) {
    return -1;
  }
  pbVar1 = (byte *)file->_ptr;
  file->_cnt = file->_cnt + -1;
  file->_ptr = (char *)(pbVar1 + 1);
  return (uint)*pbVar1;
}


// Assembly code:
// 005fe910: PUSH EBX
//   Label: crt_stdio.c_FillBufferAndGetChar_FUN_005fe910
// 005fe911: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fe915: PUSH EBX
// 005fe916: CALL crt_stdio.c_FillInputBuffer_FUN_005fe940
//   XREF to: 005fe940 (UNCONDITIONAL_CALL)
// 005fe91b: ADD ESP,0x4
// 005fe91e: TEST EAX,EAX
// 005fe920: JNZ 0x005fe929
//   XREF to: 005fe929 (CONDITIONAL_JUMP)
// 005fe922: MOV EAX,0xffffffff
// 005fe927: POP EBX
// 005fe928: RET
// 005fe929: MOV EDX,dword ptr [EBX + 0x4]
//   Label: LAB_005fe929
// 005fe92c: MOV ECX,dword ptr [EBX]
// 005fe92e: DEC EDX
// 005fe92f: INC ECX
// 005fe930: MOV dword ptr [EBX + 0x4],EDX
// 005fe933: MOV dword ptr [EBX],ECX
// 005fe935: MOV AL,byte ptr [ECX + -0x1]
// 005fe938: AND EAX,0xff
// 005fe93d: POP EBX
// 005fe93e: RET
