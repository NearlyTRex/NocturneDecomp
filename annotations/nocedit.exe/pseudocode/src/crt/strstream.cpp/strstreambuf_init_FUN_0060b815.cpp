// Name: crt_strstream.cpp_strstreambuf_init_FUN_0060b815
// Address: 0060b815
// Address Range: [[0060b815, 0060b8d9]]
// Convention: __watcallStack
// Signature: void crt_strstream.cpp_strstreambuf_init_FUN_0060b815(strstreambuf * this_ptr, char * buffer_ptr, int buffer_size, char * put_start)
// Cross-references:
//   crt_strstream.cpp_strstreambase_constructor_FUN_006060fe (006060fe) at 00606133 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambuf_ctor_FUN_0060bbf8 (0060bbf8) at 0060bc16 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_iostream.cpp_setBuffer_FUN_0060d6a8

#include "nocturne.h"

void __watcallStack
crt_strstream_cpp_strstreambuf_init_FUN_0060b815
          (strstreambuf *this_ptr,char *buffer_ptr,int buffer_size,char *put_start)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  this_ptr->__alloc_fn = (void *)0x0;
  this_ptr->__free_fn = (void *)0x0;
  this_ptr->__allocation_size = 0x20;
  bVar2 = *(byte *)&this_ptr[1].streambuf.__b_lock;
  this_ptr->__minbuf_size = 0;
  this_ptr->__bit_flags = '\0';
  this_ptr->padding = '\0';
  *(byte *)&this_ptr[1].streambuf.__b_lock = bVar2 & 0xf8;
  if (buffer_ptr == (char *)0x0) {
    *(byte *)&this_ptr[1].streambuf.__b_lock = *(byte *)&this_ptr[1].streambuf.__b_lock | 2;
    return;
  }
  if (buffer_size < 1) {
    if (buffer_size != 0) {
      pcVar6 = buffer_ptr + 0x200;
      *(byte *)&this_ptr[1].streambuf.__b_lock = *(byte *)&this_ptr[1].streambuf.__b_lock | 4;
      goto LAB_0060b85b;
    }
    uVar4 = 0xffffffff;
    pcVar6 = buffer_ptr;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    buffer_size = ~uVar4 - 1;
  }
  pcVar6 = buffer_ptr + buffer_size;
LAB_0060b85b:
  crt_iostream_cpp_setBuffer_FUN_0060d6a8(&this_ptr->streambuf,buffer_ptr,pcVar6,0);
  if (((put_start == (char *)0x0) || (put_start < buffer_ptr)) ||
     ((pcVar3 = buffer_ptr, pcVar5 = pcVar6, pcVar6 <= put_start &&
      (((uint)this_ptr[1].streambuf.__b_lock & 4) == 0)))) {
    put_start = (char *)0x0;
    pcVar3 = (char *)0x0;
    pcVar5 = (char *)0x0;
  }
  (this_ptr->streambuf).__get_base = buffer_ptr;
  (this_ptr->streambuf).__get_ptr = buffer_ptr;
  (this_ptr->streambuf).__get_end = pcVar6;
  (this_ptr->streambuf).__put_base = pcVar3;
  (this_ptr->streambuf).__put_ptr = pcVar3;
  (this_ptr->streambuf).__put_end = pcVar5;
  if (pcVar3 < put_start) {
    (this_ptr->streambuf).__put_ptr =
         (this_ptr->streambuf).__put_ptr + ((int)put_start - (int)pcVar3);
    return;
  }
  return;
}


// Assembly code:
// 0060b815: PUSH EBX
//   Label: crt_strstream.cpp_strstreambuf_init_FUN_0060b815
// 0060b816: PUSH ESI
// 0060b817: PUSH EDI
// 0060b818: PUSH EBP
// 0060b819: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0060b81d: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060b821: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0060b825: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0060b829: MOV dword ptr [EBX + 0x2c],0x0
// 0060b830: MOV dword ptr [EBX + 0x30],0x0
// 0060b837: MOV dword ptr [EBX + 0x34],0x20
// 0060b83e: MOV AH,byte ptr [EBX + 0x3c]
// 0060b841: MOV dword ptr [EBX + 0x38],0x0
// 0060b848: AND AH,0xf8
// 0060b84b: MOV byte ptr [EBX + 0x3c],AH
// 0060b84e: TEST EDX,EDX
// 0060b850: JZ 0x0060b88d
//   XREF to: 0060b88d (CONDITIONAL_JUMP)
// 0060b852: MOV ESI,EDX
// 0060b854: TEST ECX,ECX
// 0060b856: JLE 0x0060b896
//   XREF to: 0060b896 (CONDITIONAL_JUMP)
// 0060b858: LEA EDI,[EDX + ECX*0x1]
//   Label: LAB_0060b858
// 0060b85b: PUSH 0x0
//   Label: LAB_0060b85b
// 0060b85d: PUSH EDI
// 0060b85e: PUSH ESI
// 0060b85f: PUSH EBX
// 0060b860: CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8
//   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)
// 0060b865: ADD ESP,0x10
// 0060b868: TEST EBP,EBP
// 0060b86a: JNZ 0x0060b8b7
//   XREF to: 0060b8b7 (CONDITIONAL_JUMP)
// 0060b86c: XOR EBP,EBP
//   Label: LAB_0060b86c
// 0060b86e: XOR EAX,EAX
// 0060b870: XOR EDX,EDX
// 0060b872: MOV dword ptr [EBX + 0xc],ESI
//   Label: LAB_0060b872
// 0060b875: MOV dword ptr [EBX + 0x14],ESI
// 0060b878: MOV dword ptr [EBX + 0x10],EDI
// 0060b87b: MOV dword ptr [EBX + 0x18],EAX
// 0060b87e: MOV dword ptr [EBX + 0x20],EAX
// 0060b881: MOV dword ptr [EBX + 0x1c],EDX
// 0060b884: CMP EBP,EAX
// 0060b886: JA 0x0060b8cb
//   XREF to: 0060b8cb (CONDITIONAL_JUMP)
// 0060b888: POP EBP
// 0060b889: POP EDI
// 0060b88a: POP ESI
// 0060b88b: POP EBX
// 0060b88c: RET
// 0060b88d: OR byte ptr [EBX + 0x3c],0x2
//   Label: LAB_0060b88d
// 0060b891: POP EBP
// 0060b892: POP EDI
// 0060b893: POP ESI
// 0060b894: POP EBX
// 0060b895: RET
// 0060b896: JZ 0x0060b8a9
//   Label: LAB_0060b896
//   XREF to: 0060b8a9 (CONDITIONAL_JUMP)
// 0060b898: MOV CL,byte ptr [EBX + 0x3c]
// 0060b89b: OR CL,0x4
// 0060b89e: LEA EDI,[EDX + 0x200]
// 0060b8a4: MOV byte ptr [EBX + 0x3c],CL
// 0060b8a7: JMP 0x0060b85b
//   XREF to: 0060b85b (UNCONDITIONAL_JUMP)
// 0060b8a9: MOV EDI,EDX
//   Label: LAB_0060b8a9
// 0060b8ab: SUB ECX,ECX
// 0060b8ad: DEC ECX
// 0060b8ae: XOR EAX,EAX
// 0060b8b0: SCASB.REPNE ES:EDI
// 0060b8b2: NOT ECX
// 0060b8b4: DEC ECX
// 0060b8b5: JMP 0x0060b858
//   XREF to: 0060b858 (UNCONDITIONAL_JUMP)
// 0060b8b7: CMP EBP,ESI
//   Label: LAB_0060b8b7
// 0060b8b9: JC 0x0060b86c
//   XREF to: 0060b86c (CONDITIONAL_JUMP)
// 0060b8bb: CMP EBP,EDI
// 0060b8bd: JC 0x0060b8c5
//   XREF to: 0060b8c5 (CONDITIONAL_JUMP)
// 0060b8bf: TEST byte ptr [EBX + 0x3c],0x4
// 0060b8c3: JZ 0x0060b86c
//   XREF to: 0060b86c (CONDITIONAL_JUMP)
// 0060b8c5: MOV EAX,ESI
//   Label: LAB_0060b8c5
// 0060b8c7: MOV EDX,EDI
// 0060b8c9: JMP 0x0060b872
//   XREF to: 0060b872 (UNCONDITIONAL_JUMP)
// 0060b8cb: MOV EDX,dword ptr [EBX + 0x20]
//   Label: LAB_0060b8cb
// 0060b8ce: SUB EBP,EAX
// 0060b8d0: ADD EDX,EBP
// 0060b8d2: MOV dword ptr [EBX + 0x20],EDX
// 0060b8d5: POP EBP
// 0060b8d6: POP EDI
// 0060b8d7: POP ESI
// 0060b8d8: POP EBX
// 0060b8d9: RET
