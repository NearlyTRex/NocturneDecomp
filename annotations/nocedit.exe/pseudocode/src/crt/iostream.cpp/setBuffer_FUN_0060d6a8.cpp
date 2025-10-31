// Name: crt_iostream.cpp_setBuffer_FUN_0060d6a8
// Address: 0060d6a8
// Address Range: [[0060d6a8, 0060d724]]
// Convention: __watcallStack
// Signature: void crt_iostream.cpp_setBuffer_FUN_0060d6a8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
// Cross-references:
//   crt_fstream.cpp_filebuf_setbuf_FUN_0060db8c (0060db8c) at 0060dbb3 [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_doallocate_FUN_0060d677 (0060d677) at 0060d69d [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_streambuf_setbuf_FUN_0060d5ff (0060d5ff) at 0060d643 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambuf_doallocate_FUN_0060bc22 (0060bc22) at 0060bc8f [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambuf_init_FUN_0060b815 (0060b815) at 0060b860 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_iostream.cpp_freeBuffer_FUN_0060d7a0

#include "nocturne.h"

void __watcallStack
crt_iostream_cpp_setBuffer_FUN_0060d6a8
          (streambuf *this_ptr,void *new_buffer,void *buffer_end,int ownership_flag)

{
  uint *puVar1;
  byte bVar2;
  int in_stack_00000014;
  
  if ((this_ptr->__flags & 2) != 0) {
    crt_iostream_cpp_freeBuffer_FUN_0060d7a0(this_ptr->__reserve_base);
  }
  if ((buffer_end != (void *)0x0) && (buffer_end < (uint)ownership_flag)) {
    this_ptr->__reserve_base = (char *)buffer_end;
    this_ptr->__reserve_end = (char *)ownership_flag;
    puVar1 = &this_ptr->__flags;
    *(byte *)puVar1 = (byte)*puVar1 & 0xfd;
    *puVar1 = *puVar1 | (uint)(in_stack_00000014 != 0) * 2;
    *(byte *)&this_ptr->__flags = (byte)this_ptr->__flags & 0xfe;
    return;
  }
  this_ptr->__reserve_base = (char *)0x0;
  bVar2 = (byte)this_ptr->__flags & 0xfc;
  *(byte *)&this_ptr->__flags = bVar2;
  this_ptr->__reserve_end = (char *)0x0;
  *(byte *)&this_ptr->__flags = bVar2 | 1;
  return;
}


// Assembly code:
// 0060d6a8: PUSH EBX
//   Label: crt_iostream.cpp_setBuffer_FUN_0060d6a8
// 0060d6a9: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060d6ad: TEST byte ptr [EBX + 0x24],0x2
// 0060d6b1: JNZ 0x0060d6e3
//   XREF to: 0060d6e3 (CONDITIONAL_JUMP)
// 0060d6b3: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_0060d6b3
//   XREF to: Stack[0x8] (READ)
// 0060d6b7: TEST ECX,ECX
// 0060d6b9: JZ 0x0060d6c3
//   XREF to: 0060d6c3 (CONDITIONAL_JUMP)
// 0060d6bb: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060d6bf: CMP EAX,ECX
// 0060d6c1: JA 0x0060d6f1
//   XREF to: 0060d6f1 (CONDITIONAL_JUMP)
// 0060d6c3: MOV AL,byte ptr [EBX + 0x24]
//   Label: LAB_0060d6c3
// 0060d6c6: MOV dword ptr [EBX + 0x4],0x0
// 0060d6cd: AND AL,0xfc
// 0060d6cf: MOV byte ptr [EBX + 0x24],AL
// 0060d6d2: MOV AH,AL
// 0060d6d4: MOV dword ptr [EBX + 0x8],0x0
// 0060d6db: OR AH,0x1
// 0060d6de: MOV byte ptr [EBX + 0x24],AH
// 0060d6e1: POP EBX
// 0060d6e2: RET
// 0060d6e3: MOV EDX,dword ptr [EBX + 0x4]
//   Label: LAB_0060d6e3
// 0060d6e6: PUSH EDX
// 0060d6e7: CALL crt_iostream.cpp_freeBuffer_FUN_0060d7a0
//   XREF to: 0060d7a0 (UNCONDITIONAL_CALL)
// 0060d6ec: ADD ESP,0x4
// 0060d6ef: JMP 0x0060d6b3
//   XREF to: 0060d6b3 (UNCONDITIONAL_JUMP)
// 0060d6f1: PUSH EDI
//   Label: LAB_0060d6f1
// 0060d6f2: MOV dword ptr [EBX + 0x4],ECX
// 0060d6f5: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0060d6f9: MOV dword ptr [EBX + 0x8],EAX
// 0060d6fc: LEA EAX,[EBX + 0x24]
// 0060d6ff: TEST EDI,EDI
// 0060d701: SETNZ DL
// 0060d704: AND EDX,0xff
// 0060d70a: MOV CL,byte ptr [EAX]
// 0060d70c: AND EDX,0xff
// 0060d712: AND CL,0xfd
// 0060d715: AND EDX,0x1
// 0060d718: MOV byte ptr [EAX],CL
// 0060d71a: ADD EDX,EDX
// 0060d71c: OR dword ptr [EAX],EDX
// 0060d71e: AND byte ptr [EBX + 0x24],0xfe
// 0060d722: POP EDI
// 0060d723: POP EBX
// 0060d724: RET
