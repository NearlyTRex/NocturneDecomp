// Name: crt_string.c_strncpy_safe_FUN_005ff130
// Address: 005ff130
// Address Range: [[005ff130, 005ff177]]
// Convention: __watcallStack
// Signature: void crt_string.c_strncpy_safe_FUN_005ff130(char * dest, char * src, int length, int maxlen)
// Cross-references:
//   crt_string.c_splitpath_FUN_005ff178 (005ff178) at 005ff201 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_mbstrnbytes_FUN_00605ec0
//   crt_string.c_mbstrncpy_FUN_00605e90
//   crt_string.c_mbstrnlen_FUN_00605e50

#include "nocturne.h"

void __watcallStack
crt_string_c_strncpy_safe_FUN_005ff130(char *dest,char *src,int length,int maxlen)

{
  int iVar1;
  
  if (dest != (char *)0x0) {
    iVar1 = length;
    if (maxlen < length) {
      iVar1 = maxlen;
    }
    iVar1 = crt_string_c_mbstrnlen_FUN_00605e50(src,iVar1);
    crt_string_c_mbstrncpy_FUN_00605e90(dest,(char *)length,iVar1);
    iVar1 = crt_string_c_mbstrnbytes_FUN_00605ec0(dest,iVar1);
    dest[iVar1] = '\0';
  }
  return;
}


// Assembly code:
// 005ff130: PUSH EBX
//   Label: crt_string.c_strncpy_safe_FUN_005ff130
// 005ff131: PUSH ESI
// 005ff132: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ff136: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005ff13a: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 005ff13e: TEST ESI,ESI
// 005ff140: JZ 0x005ff175
//   XREF to: 005ff175 (CONDITIONAL_JUMP)
// 005ff142: CMP EAX,EBX
// 005ff144: JLE 0x005ff148
//   XREF to: 005ff148 (CONDITIONAL_JUMP)
// 005ff146: MOV EAX,EBX
// 005ff148: PUSH EAX
//   Label: LAB_005ff148
// 005ff149: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005ff14d: PUSH EDX
// 005ff14e: CALL crt_string.c_mbstrnlen_FUN_00605e50
//   XREF to: 00605e50 (UNCONDITIONAL_CALL)
// 005ff153: ADD ESP,0x8
// 005ff156: PUSH EAX
// 005ff157: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005ff15b: PUSH ECX
// 005ff15c: PUSH ESI
// 005ff15d: MOV EBX,EAX
// 005ff15f: CALL crt_string.c_mbstrncpy_FUN_00605e90
//   XREF to: 00605e90 (UNCONDITIONAL_CALL)
// 005ff164: ADD ESP,0xc
// 005ff167: PUSH EBX
// 005ff168: PUSH ESI
// 005ff169: CALL crt_string.c_mbstrnbytes_FUN_00605ec0
//   XREF to: 00605ec0 (UNCONDITIONAL_CALL)
// 005ff16e: ADD ESP,0x8
// 005ff171: MOV byte ptr [ESI + EAX*0x1],0x0
// 005ff175: POP ESI
//   Label: LAB_005ff175
// 005ff176: POP EBX
// 005ff177: RET
