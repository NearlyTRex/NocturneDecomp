// Name: crt_iostream.cpp_streambuf_do_sgetn_FUN_0060b932
// Address: 0060b932
// Address Range: [[0060b932, 0060b9b6]]
// Convention: __watcallStack
// Signature: int crt_iostream.cpp_streambuf_do_sgetn_FUN_0060b932(streambuf * buffer, void * output_buffer, SIZE_T bytes_to_read)

#include "nocturne.h"

int __watcallStack
crt_iostream_cpp_streambuf_do_sgetn_FUN_0060b932
          (streambuf *buffer,void *output_buffer,SIZE_T bytes_to_read)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  do {
    if ((int)bytes_to_read < 1) {
      return local_14;
    }
    uVar1 = (int)buffer->__get_end - (int)buffer->__get_ptr;
    if ((int)uVar1 < 1) {
      iVar2 = (**(code **)((int)buffer[1].__b_lock + 0x10))();
      if (iVar2 == -1) {
        return local_14;
      }
      uVar1 = (int)buffer->__get_end - (int)buffer->__get_ptr;
    }
    if ((int)bytes_to_read < (int)uVar1) {
      uVar1 = bytes_to_read;
    }
    pcVar4 = buffer->__get_ptr;
    pcVar5 = (char *)output_buffer;
    for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + (uint)bVar6 * -8 + 4;
      pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    }
    bytes_to_read = bytes_to_read - uVar1;
    output_buffer = (void *)((int)output_buffer + uVar1);
    local_14 = local_14 + uVar1;
    buffer->__get_ptr = buffer->__get_ptr + uVar1;
  } while( true );
}


// Assembly code:
// 0060b932: PUSH EBX
//   Label: crt_iostream.cpp_streambuf_do_sgetn_FUN_0060b932
// 0060b933: PUSH ESI
// 0060b934: PUSH EDI
// 0060b935: PUSH EBP
// 0060b936: SUB ESP,0x4
// 0060b939: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0060b93d: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0060b941: XOR EDX,EDX
// 0060b943: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 0060b946: TEST EBP,EBP
//   Label: LAB_0060b946
// 0060b948: JLE 0x0060b9ac
//   XREF to: 0060b9ac (CONDITIONAL_JUMP)
// 0060b94a: MOV EAX,dword ptr [EBX + 0x10]
// 0060b94d: MOV EDX,dword ptr [EBX + 0x14]
// 0060b950: SUB EAX,EDX
// 0060b952: MOV EDX,EAX
// 0060b954: TEST EAX,EAX
// 0060b956: JLE 0x0060b991
//   XREF to: 0060b991 (CONDITIONAL_JUMP)
// 0060b958: CMP EDX,EBP
//   Label: LAB_0060b958
// 0060b95a: JLE 0x0060b95e
//   XREF to: 0060b95e (CONDITIONAL_JUMP)
// 0060b95c: MOV EDX,EBP
// 0060b95e: MOV EDI,dword ptr [ESP + 0x1c]
//   Label: LAB_0060b95e
//   XREF to: Stack[0x8] (READ)
// 0060b962: MOV ECX,EDX
// 0060b964: MOV ESI,dword ptr [EBX + 0x14]
// 0060b967: PUSH EDI
// 0060b968: MOV EAX,ECX
// 0060b96a: SHR ECX,0x2
// 0060b96d: MOVSD.REP ES:EDI,ESI
// 0060b96f: MOV CL,AL
// 0060b971: AND CL,0x3
// 0060b974: MOVSB.REP ES:EDI,ESI
// 0060b976: POP EDI
// 0060b977: SUB EBP,EDX
// 0060b979: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0060b97c: ADD EDI,EDX
// 0060b97e: MOV ECX,dword ptr [EBX + 0x14]
// 0060b981: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[0x8] (WRITE)
// 0060b985: ADD ESI,EDX
// 0060b987: ADD ECX,EDX
// 0060b989: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 0060b98c: MOV dword ptr [EBX + 0x14],ECX
// 0060b98f: JMP 0x0060b946
//   XREF to: 0060b946 (UNCONDITIONAL_JUMP)
// 0060b991: PUSH EBX
//   Label: LAB_0060b991
// 0060b992: MOV EAX,dword ptr [EBX + 0x28]
// 0060b995: CALL dword ptr [EAX + 0x10]
// 0060b998: ADD ESP,0x4
// 0060b99b: CMP EAX,-0x1
// 0060b99e: JZ 0x0060b9ac
//   XREF to: 0060b9ac (CONDITIONAL_JUMP)
// 0060b9a0: MOV EAX,dword ptr [EBX + 0x10]
// 0060b9a3: MOV EDX,dword ptr [EBX + 0x14]
// 0060b9a6: SUB EAX,EDX
// 0060b9a8: MOV EDX,EAX
// 0060b9aa: JMP 0x0060b958
//   XREF to: 0060b958 (UNCONDITIONAL_JUMP)
// 0060b9ac: MOV EAX,dword ptr [ESP]
//   Label: LAB_0060b9ac
//   XREF to: Stack[-0x14] (DATA)
// 0060b9af: ADD ESP,0x4
// 0060b9b2: POP EBP
// 0060b9b3: POP EDI
// 0060b9b4: POP ESI
// 0060b9b5: POP EBX
// 0060b9b6: RET
