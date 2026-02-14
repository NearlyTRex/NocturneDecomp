// Name: crt_iostream.cpp_streambuf_do_sputn_FUN_00606780
// Address: 00606780
// Address Range: [[00606780, 00606831]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_iostream_cpp_streambuf_do_sputn_FUN_00606780(streambuf *buffer,void *input_buffer,SIZE_T bytes_to_write)

#include "nocturne.h"

int __watcallStack crt_iostream_cpp_streambuf_do_sputn_FUN_00606780(streambuf *buffer,void *input_buffer,SIZE_T bytes_to_write)

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
    if ((int)bytes_to_write < 1) {
      return local_14;
    }
    if (buffer->__put_base == (char *)0x0) {
      iVar2 = (**(code **)((int)buffer[1].__b_lock + 0xc))(buffer,*(char *)input_buffer);
      if (iVar2 == -1) {
        return local_14;
      }
      uVar1 = 1;
    }
    else {
      uVar1 = (int)buffer->__put_end - (int)buffer->__put_ptr;
      if ((int)uVar1 < 1) {
        iVar2 = (**(code **)((int)buffer[1].__b_lock + 0xc))(buffer,0xffffffff);
        if (iVar2 == -1) {
          return local_14;
        }
        uVar1 = (int)buffer->__put_end - (int)buffer->__put_ptr;
      }
      if ((int)bytes_to_write < (int)uVar1) {
        uVar1 = bytes_to_write;
      }
      pcVar4 = input_buffer;
      pcVar5 = buffer->__put_ptr;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pcVar5 = *(uint *)pcVar4;
        pcVar4 = pcVar4 + (uint)bVar6 * -8 + 4;
        pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      }
      buffer->__put_ptr = buffer->__put_ptr + uVar1;
    }
    input_buffer = (void *)((int)input_buffer + uVar1);
    local_14 = local_14 + uVar1;
    bytes_to_write = bytes_to_write - uVar1;
  } while( true );
}
