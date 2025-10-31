// Name: crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0
// Address: 0060bdc0
// Address Range: [[0060bdc0, 0060bddc]]
// Convention: __cdecl
// Signature: void crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0(ios * stream_ptr)
// Cross-references:
//   crt_iostream.cpp_ios_dtor_FUN_0060632c (0060632c) at 00606340 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_iostream.cpp_freeBuffer_FUN_0060d7a0

#include "nocturne.h"

void __cdecl crt_iostream_cpp_ios_freeBufferChain_FUN_0060bdc0(ios *stream_ptr)

{
  undefined4 *puVar1;
  undefined4 *buffer;
  
  buffer = *(undefined4 **)&stream_ptr->__fill_character;
  while (buffer != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*buffer;
    crt_iostream_cpp_freeBuffer_FUN_0060d7a0(buffer);
    buffer = puVar1;
  }
  return;
}


// Assembly code:
// 0060bdc0: PUSH EBX
//   Label: crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0
// 0060bdc1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060bdc5: MOV EAX,dword ptr [EAX + 0x20]
// 0060bdc8: TEST EAX,EAX
//   Label: LAB_0060bdc8
// 0060bdca: JNZ 0x0060bdce
//   XREF to: 0060bdce (CONDITIONAL_JUMP)
// 0060bdcc: POP EBX
// 0060bdcd: RET
// 0060bdce: PUSH EAX
//   Label: LAB_0060bdce
// 0060bdcf: MOV EBX,dword ptr [EAX]
// 0060bdd1: CALL crt_iostream.cpp_freeBuffer_FUN_0060d7a0
//   XREF to: 0060d7a0 (UNCONDITIONAL_CALL)
// 0060bdd6: ADD ESP,0x4
// 0060bdd9: MOV EAX,EBX
// 0060bddb: JMP 0x0060bdc8
//   XREF to: 0060bdc8 (UNCONDITIONAL_JUMP)
