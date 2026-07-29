// Name: crt_iostream.cpp_streambuf_do_sgetn_FUN_0056ff82
// Address: 0056ff82
// Address Range: [[0056ff82, 00570006]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_iostream_cpp_streambuf_do_sgetn_FUN_0056ff82(streambuf *buffer,void *output_buffer,SIZE_T bytes_to_read)

#include "nocturne.h"

int __watcallStack crt_iostream_cpp_streambuf_do_sgetn_FUN_0056ff82(streambuf *buffer,void *output_buffer,SIZE_T bytes_to_read)

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
      iVar2 = (**(code **)((int)buffer[1].__b_lock + 0x10))(buffer);
      if (iVar2 == -1) {
        return local_14;
      }
      uVar1 = (int)buffer->__get_end - (int)buffer->__get_ptr;
    }
    if ((int)bytes_to_read < (int)uVar1) {
      uVar1 = bytes_to_read;
    }
    pcVar4 = buffer->__get_ptr;
    pcVar5 = output_buffer;
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
    bytes_to_read = bytes_to_read - uVar1;
    output_buffer = (void *)((int)output_buffer + uVar1);
    local_14 = local_14 + uVar1;
    buffer->__get_ptr = buffer->__get_ptr + uVar1;
  } while( true );
}
