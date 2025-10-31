// Name: crt_strstream.cpp_strstreambuf_overflow_FUN_0060b9bd
// Address: 0060b9bd
// Address Range: [[0060b9bd, 0060ba24]]
// Convention: __watcallStack
// Signature: int crt_strstream.cpp_strstreambuf_overflow_FUN_0060b9bd(strstreambuf * this_ptr, int character)

#include "nocturne.h"

int __watcallStack
crt_strstream_cpp_strstreambuf_overflow_FUN_0060b9bd(strstreambuf *this_ptr,int character)

{
  char **ppcVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  int iVar5;
  char cStack00000014;
  
  pvVar4 = this_ptr[1].streambuf.__b_lock;
  if (((uint)pvVar4 & 2) == 0) {
    return -1;
  }
  if (((uint)pvVar4 & 4) == 0) {
    iVar5 = (*this_ptr->__vtable->doallocate)(&this_ptr->streambuf);
    if (iVar5 != -1) {
      if (_cStack00000014 != -1) {
        *(this_ptr->streambuf).__put_ptr = cStack00000014;
        ppcVar1 = &(this_ptr->streambuf).__put_ptr;
        *ppcVar1 = *ppcVar1 + 1;
      }
      return 0;
    }
  }
  else {
    pcVar2 = (this_ptr->streambuf).__put_ptr;
    pcVar3 = (this_ptr->streambuf).__put_base;
    (this_ptr->streambuf).__put_ptr = pcVar3;
    (this_ptr->streambuf).__put_end = (this_ptr->streambuf).__put_end + 0x200;
    iVar5 = 0;
    (this_ptr->streambuf).__put_ptr = (this_ptr->streambuf).__put_ptr + ((int)pcVar2 - (int)pcVar3);
  }
  return iVar5;
}


// Assembly code:
// 0060b9bd: PUSH EBX
//   Label: crt_strstream.cpp_strstreambuf_overflow_FUN_0060b9bd
// 0060b9be: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060b9c2: MOV AH,byte ptr [EBX + 0x3c]
// 0060b9c5: TEST AH,0x2
// 0060b9c8: JZ 0x0060b9f8
//   XREF to: 0060b9f8 (CONDITIONAL_JUMP)
// 0060b9ca: TEST AH,0x4
// 0060b9cd: JZ 0x0060b9ff
//   XREF to: 0060b9ff (CONDITIONAL_JUMP)
// 0060b9cf: PUSH EDI
// 0060b9d0: PUSH ESI
// 0060b9d1: MOV ECX,dword ptr [EBX + 0x20]
// 0060b9d4: MOV EDX,dword ptr [EBX + 0x1c]
// 0060b9d7: MOV ESI,dword ptr [EBX + 0x18]
// 0060b9da: ADD EDX,0x200
// 0060b9e0: MOV EAX,ESI
// 0060b9e2: MOV dword ptr [EBX + 0x20],ESI
// 0060b9e5: SUB ECX,ESI
// 0060b9e7: MOV EDI,dword ptr [EBX + 0x20]
// 0060b9ea: MOV dword ptr [EBX + 0x1c],EDX
// 0060b9ed: ADD EDI,ECX
// 0060b9ef: XOR EAX,ESI
// 0060b9f1: MOV dword ptr [EBX + 0x20],EDI
// 0060b9f4: POP ESI
// 0060b9f5: POP EDI
// 0060b9f6: POP EBX
//   Label: LAB_0060b9f6
// 0060b9f7: RET
// 0060b9f8: MOV EAX,0xffffffff
//   Label: LAB_0060b9f8
// 0060b9fd: POP EBX
// 0060b9fe: RET
// 0060b9ff: PUSH EBX
//   Label: LAB_0060b9ff
// 0060ba00: MOV EAX,dword ptr [EBX + 0x28]
// 0060ba03: CALL dword ptr [EAX + 0x28]
// 0060ba06: ADD ESP,0x4
// 0060ba09: CMP EAX,-0x1
// 0060ba0c: JZ 0x0060b9f6
//   XREF to: 0060b9f6 (CONDITIONAL_JUMP)
// 0060ba0e: CMP dword ptr [ESP + 0xc],-0x1
// 0060ba13: JZ 0x0060ba21
//   XREF to: 0060ba21 (CONDITIONAL_JUMP)
// 0060ba15: MOV EAX,dword ptr [EBX + 0x20]
// 0060ba18: MOV DL,byte ptr [ESP + 0xc]
// 0060ba1c: MOV byte ptr [EAX],DL
// 0060ba1e: INC dword ptr [EBX + 0x20]
// 0060ba21: XOR EAX,EAX
//   Label: LAB_0060ba21
// 0060ba23: POP EBX
// 0060ba24: RET
