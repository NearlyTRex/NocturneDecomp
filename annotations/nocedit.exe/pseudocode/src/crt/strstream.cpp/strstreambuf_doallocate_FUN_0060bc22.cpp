// Name: crt_strstream.cpp_strstreambuf_doallocate_FUN_0060bc22
// Address: 0060bc22
// Address Range: [[0060bc22, 0060bdbf]]
// Convention: __watcallStack
// Signature: int crt_strstream.cpp_strstreambuf_doallocate_FUN_0060bc22(strstreambuf * this_ptr)
// Function calls:
//   crt_iostream.cpp_setBuffer_FUN_0060d6a8
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_malloc_FUN_006021da

#include "nocturne.h"

int __watcallStack crt_strstream_cpp_strstreambuf_doallocate_FUN_0060bc22(strstreambuf *this_ptr)

{
  char *ptr;
  char *pcVar1;
  void *pvVar2;
  char *new_buffer;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  int buffer_start_offset;
  int read_ptr_offset;
  int data_end_offset;
  SIZE_T current_buffer_size;
  SIZE_T new_buffer_size;
  void *old_buffer_start;
  
  bVar12 = 0;
  pvVar2 = this_ptr[1].streambuf.__b_lock;
  if ((((uint)pvVar2 & 2) != 0) && (((uint)pvVar2 & 1) == 0)) {
    ptr = (this_ptr->streambuf).__reserve_base;
    iVar7 = (int)(this_ptr->streambuf).__reserve_end - (int)ptr;
    new_buffer_size = this_ptr->__allocation_size;
    if ((int)new_buffer_size <= iVar7) {
      new_buffer_size = iVar7 + 0x200;
    }
    if (this_ptr->__alloc_fn == (void *)0x0) {
      new_buffer = (char *)crt_memory_c_malloc_FUN_006021da(new_buffer_size);
    }
    else {
      new_buffer = (char *)(*(code *)this_ptr->__alloc_fn)();
    }
    if (new_buffer != (char *)0x0) {
      crt_iostream_cpp_setBuffer_FUN_0060d6a8
                (&this_ptr->streambuf,new_buffer,new_buffer + new_buffer_size,0);
      pcVar9 = (this_ptr->streambuf).__get_base;
      if (pcVar9 != (char *)0x0) {
        pcVar1 = (this_ptr->streambuf).__get_ptr;
        iVar3 = (int)(this_ptr->streambuf).__get_end - (int)ptr;
        uVar4 = iVar3 - ((int)pcVar9 - (int)ptr);
        pcVar8 = pcVar9;
        pcVar10 = new_buffer + ((int)pcVar9 - (int)ptr);
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + (uint)bVar12 * -8 + 4;
          pcVar10 = pcVar10 + (uint)bVar12 * -8 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
          pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
        }
        (this_ptr->streambuf).__get_base = new_buffer + ((int)pcVar9 - (int)ptr);
        (this_ptr->streambuf).__get_ptr = new_buffer + ((int)pcVar1 - (int)ptr);
        (this_ptr->streambuf).__get_end = new_buffer + iVar3;
      }
      pcVar9 = (this_ptr->streambuf).__put_base;
      if (pcVar9 == (char *)0x0) {
        (this_ptr->streambuf).__put_base = new_buffer;
        (this_ptr->streambuf).__put_ptr = new_buffer;
        (this_ptr->streambuf).__put_end = new_buffer + new_buffer_size;
      }
      else {
        iVar3 = (int)pcVar9 - (int)ptr;
        pcVar8 = (this_ptr->streambuf).__put_ptr;
        pcVar10 = (this_ptr->streambuf).__put_end;
        pcVar6 = pcVar10 + (-iVar3 - (int)ptr);
        pcVar1 = new_buffer + iVar3;
        pcVar11 = pcVar1;
        for (uVar5 = (uint)pcVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + (uint)bVar12 * -8 + 4;
          pcVar11 = pcVar11 + (uint)bVar12 * -8 + 4;
        }
        for (uVar5 = (uint)pcVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
          pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
        }
        (this_ptr->streambuf).__put_base = pcVar1;
        (this_ptr->streambuf).__put_ptr = pcVar1;
        (this_ptr->streambuf).__put_end =
             new_buffer + (int)(pcVar10 + ((new_buffer_size - iVar7) - (int)ptr));
        (this_ptr->streambuf).__put_ptr =
             (this_ptr->streambuf).__put_ptr + (int)(pcVar8 + (-iVar3 - (int)ptr));
      }
      if (ptr != (char *)0x0) {
        if (this_ptr->__free_fn == (void *)0x0) {
          crt_memory_c_free_FUN_005fe659(ptr);
        }
        else {
          (*(code *)this_ptr->__free_fn)();
        }
      }
      return 0;
    }
  }
  return -1;
}


// Assembly code:
// 0060bc22: PUSH EBX
//   Label: crt_strstream.cpp_strstreambuf_doallocate_FUN_0060bc22
// 0060bc23: PUSH ESI
// 0060bc24: PUSH EDI
// 0060bc25: PUSH EBP
// 0060bc26: SUB ESP,0x18
// 0060bc29: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0060bc2d: MOV AH,byte ptr [EBX + 0x3c]
// 0060bc30: TEST AH,0x2
// 0060bc33: JZ 0x0060bd27
//   XREF to: 0060bd27 (CONDITIONAL_JUMP)
// 0060bc39: TEST AH,0x1
// 0060bc3c: JNZ 0x0060bd27
//   XREF to: 0060bd27 (CONDITIONAL_JUMP)
// 0060bc42: MOV EAX,dword ptr [EBX + 0x4]
// 0060bc45: MOV EDX,dword ptr [EBX + 0x8]
// 0060bc48: SUB EDX,EAX
// 0060bc4a: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060bc4e: MOV EAX,EDX
// 0060bc50: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0060bc54: MOV EDX,dword ptr [EBX + 0x34]
// 0060bc57: CMP EAX,EDX
// 0060bc59: JGE 0x0060bd2e
//   XREF to: 0060bd2e (CONDITIONAL_JUMP)
// 0060bc5f: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0060bc63: CMP dword ptr [EBX + 0x2c],0x0
//   Label: LAB_0060bc63
// 0060bc67: JNZ 0x0060bd3c
//   XREF to: 0060bd3c (CONDITIONAL_JUMP)
// 0060bc6d: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0060bc71: PUSH EDI
// 0060bc72: CALL crt_memory.c_malloc_FUN_006021da
//   XREF to: 006021da (UNCONDITIONAL_CALL)
// 0060bc77: ADD ESP,0x4
//   Label: LAB_0060bc77
// 0060bc7a: MOV EBP,EAX
// 0060bc7c: TEST EBP,EBP
// 0060bc7e: JZ 0x0060bd27
//   XREF to: 0060bd27 (CONDITIONAL_JUMP)
// 0060bc84: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0060bc88: PUSH 0x0
// 0060bc8a: ADD EAX,EBP
// 0060bc8c: PUSH EAX
// 0060bc8d: PUSH EBP
// 0060bc8e: PUSH EBX
// 0060bc8f: CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8
//   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)
// 0060bc94: MOV ESI,dword ptr [EBX + 0xc]
// 0060bc97: ADD ESP,0x10
// 0060bc9a: TEST ESI,ESI
// 0060bc9c: JZ 0x0060bcec
//   XREF to: 0060bcec (CONDITIONAL_JUMP)
// 0060bc9e: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0060bca2: MOV EAX,ESI
// 0060bca4: SUB EAX,EDX
// 0060bca6: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 0060bca9: MOV EAX,dword ptr [EBX + 0x14]
// 0060bcac: SUB EAX,EDX
// 0060bcae: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0060bcb2: MOV EAX,dword ptr [EBX + 0x10]
// 0060bcb5: SUB EAX,EDX
// 0060bcb7: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0060bcbb: MOV ECX,EAX
// 0060bcbd: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0060bcc0: SUB ECX,EAX
// 0060bcc2: LEA EDX,[EAX + EBP*0x1]
// 0060bcc5: MOV EDI,EDX
// 0060bcc7: PUSH EDI
// 0060bcc8: MOV EAX,ECX
// 0060bcca: SHR ECX,0x2
// 0060bccd: MOVSD.REP ES:EDI,ESI
// 0060bccf: MOV CL,AL
// 0060bcd1: AND CL,0x3
// 0060bcd4: MOVSB.REP ES:EDI,ESI
// 0060bcd6: POP EDI
// 0060bcd7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0060bcdb: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0060bcdf: MOV dword ptr [EBX + 0xc],EDX
// 0060bce2: ADD ECX,EBP
// 0060bce4: ADD EAX,EBP
// 0060bce6: MOV dword ptr [EBX + 0x14],ECX
// 0060bce9: MOV dword ptr [EBX + 0x10],EAX
// 0060bcec: MOV ESI,dword ptr [EBX + 0x18]
//   Label: LAB_0060bcec
// 0060bcef: TEST ESI,ESI
// 0060bcf1: JNZ 0x0060bd49
//   XREF to: 0060bd49 (CONDITIONAL_JUMP)
// 0060bcf3: MOV dword ptr [EBX + 0x18],EBP
// 0060bcf6: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0060bcfa: MOV dword ptr [EBX + 0x20],EBP
// 0060bcfd: ADD EAX,EBP
// 0060bcff: MOV dword ptr [EBX + 0x1c],EAX
// 0060bd02: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_0060bd02
//   XREF to: Stack[-0x14] (READ)
// 0060bd06: TEST ECX,ECX
// 0060bd08: JZ 0x0060bd1d
//   XREF to: 0060bd1d (CONDITIONAL_JUMP)
// 0060bd0a: CMP dword ptr [EBX + 0x30],0x0
// 0060bd0e: JNZ 0x0060bdb7
//   XREF to: 0060bdb7 (CONDITIONAL_JUMP)
// 0060bd14: PUSH ECX
// 0060bd15: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0060bd1a: ADD ESP,0x4
//   Label: LAB_0060bd1a
// 0060bd1d: XOR EAX,EAX
//   Label: LAB_0060bd1d
// 0060bd1f: ADD ESP,0x18
//   Label: LAB_0060bd1f
// 0060bd22: POP EBP
// 0060bd23: POP EDI
// 0060bd24: POP ESI
// 0060bd25: POP EBX
// 0060bd26: RET
// 0060bd27: MOV EAX,0xffffffff
//   Label: LAB_0060bd27
// 0060bd2c: JMP 0x0060bd1f
//   XREF to: 0060bd1f (UNCONDITIONAL_JUMP)
// 0060bd2e: ADD EAX,0x200
//   Label: LAB_0060bd2e
// 0060bd33: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0060bd37: JMP 0x0060bc63
//   XREF to: 0060bc63 (UNCONDITIONAL_JUMP)
// 0060bd3c: MOV ESI,dword ptr [ESP + 0x10]
//   Label: LAB_0060bd3c
//   XREF to: Stack[-0x18] (READ)
// 0060bd40: PUSH ESI
// 0060bd41: CALL dword ptr [EBX + 0x2c]
// 0060bd44: JMP 0x0060bc77
//   XREF to: 0060bc77 (UNCONDITIONAL_JUMP)
// 0060bd49: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_0060bd49
//   XREF to: Stack[-0x14] (READ)
// 0060bd4d: MOV EAX,ESI
// 0060bd4f: SUB EAX,EDX
// 0060bd51: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 0060bd54: MOV EAX,dword ptr [EBX + 0x20]
// 0060bd57: SUB EAX,EDX
// 0060bd59: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0060bd5d: MOV EAX,dword ptr [EBX + 0x1c]
// 0060bd60: SUB EAX,EDX
// 0060bd62: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0060bd66: MOV ECX,EAX
// 0060bd68: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0060bd6b: SUB ECX,EAX
// 0060bd6d: LEA EDX,[EAX + EBP*0x1]
// 0060bd70: MOV EDI,EDX
// 0060bd72: PUSH EDI
// 0060bd73: MOV EAX,ECX
// 0060bd75: SHR ECX,0x2
// 0060bd78: MOVSD.REP ES:EDI,ESI
// 0060bd7a: MOV CL,AL
// 0060bd7c: AND CL,0x3
// 0060bd7f: MOVSB.REP ES:EDI,ESI
// 0060bd81: POP EDI
// 0060bd82: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0060bd86: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0060bd8a: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0060bd8e: SUB EAX,ECX
// 0060bd90: MOV dword ptr [EBX + 0x18],EDX
// 0060bd93: ADD ESI,EAX
// 0060bd95: MOV dword ptr [EBX + 0x20],EDX
// 0060bd98: ADD EBP,ESI
// 0060bd9a: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0060bd9e: MOV dword ptr [EBX + 0x1c],EBP
// 0060bda1: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0060bda4: MOV EDX,dword ptr [EBX + 0x20]
// 0060bda7: SUB EAX,EBP
// 0060bda9: ADD EDX,EAX
// 0060bdab: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0060bdaf: MOV dword ptr [EBX + 0x20],EDX
// 0060bdb2: JMP 0x0060bd02
//   XREF to: 0060bd02 (UNCONDITIONAL_JUMP)
// 0060bdb7: PUSH ECX
//   Label: LAB_0060bdb7
// 0060bdb8: CALL dword ptr [EBX + 0x30]
// 0060bdbb: JMP 0x0060bd1a
//   XREF to: 0060bd1a (UNCONDITIONAL_JUMP)
