// Name: crt_strstream.cpp_strstreambuf_doallocate_FUN_0060bc22
// Address: 0060bc22
// Address Range: [[0060bc22, 0060bdbf]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_strstream_cpp_strstreambuf_doallocate_FUN_0060bc22(strstreambuf *this_ptr)

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
  pvVar2 = this_ptr[1]._streambuf.__b_lock;
  if ((((uint)pvVar2 & 2) != 0) && (((uint)pvVar2 & 1) == 0)) {
    ptr = (this_ptr->_streambuf).__reserve_base;
    iVar7 = (int)(this_ptr->_streambuf).__reserve_end - (int)ptr;
    new_buffer_size = this_ptr->__allocation_size;
    if ((int)new_buffer_size <= iVar7) {
      new_buffer_size = iVar7 + 0x200;
    }
    if (this_ptr->__alloc_fn == (void *)0x0) {
      new_buffer = crt_memory_c_malloc_FUN_006021da(new_buffer_size);
    }
    else {
      new_buffer = (char *)(*this_ptr->__alloc_fn)();
    }
    if (new_buffer != (char *)0x0) {
      crt_iostream_cpp_setBuffer_FUN_0060d6a8
                (&this_ptr->_streambuf,new_buffer,new_buffer + new_buffer_size,0);
      pcVar9 = (this_ptr->_streambuf).__get_base;
      if (pcVar9 != (char *)0x0) {
        pcVar1 = (this_ptr->_streambuf).__get_ptr;
        iVar3 = (int)(this_ptr->_streambuf).__get_end - (int)ptr;
        uVar4 = iVar3 - ((int)pcVar9 - (int)ptr);
        pcVar8 = pcVar9;
        pcVar10 = new_buffer + ((int)pcVar9 - (int)ptr);
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)pcVar10 = *(uint *)pcVar8;
          pcVar8 = pcVar8 + (uint)bVar12 * -8 + 4;
          pcVar10 = pcVar10 + (uint)bVar12 * -8 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
          pcVar10 = pcVar10 + (uint)bVar12 * -2 + 1;
        }
        (this_ptr->_streambuf).__get_base = new_buffer + ((int)pcVar9 - (int)ptr);
        (this_ptr->_streambuf).__get_ptr = new_buffer + ((int)pcVar1 - (int)ptr);
        (this_ptr->_streambuf).__get_end = new_buffer + iVar3;
      }
      pcVar9 = (this_ptr->_streambuf).__put_base;
      if (pcVar9 == (char *)0x0) {
        (this_ptr->_streambuf).__put_base = new_buffer;
        (this_ptr->_streambuf).__put_ptr = new_buffer;
        (this_ptr->_streambuf).__put_end = new_buffer + new_buffer_size;
      }
      else {
        iVar3 = (int)pcVar9 - (int)ptr;
        pcVar8 = (this_ptr->_streambuf).__put_ptr;
        pcVar10 = (this_ptr->_streambuf).__put_end;
        pcVar6 = pcVar10 + (-iVar3 - (int)ptr);
        pcVar1 = new_buffer + iVar3;
        pcVar11 = pcVar1;
        for (uVar5 = (uint)pcVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)pcVar11 = *(uint *)pcVar9;
          pcVar9 = pcVar9 + (uint)bVar12 * -8 + 4;
          pcVar11 = pcVar11 + (uint)bVar12 * -8 + 4;
        }
        for (uVar5 = (uint)pcVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
          pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
        }
        (this_ptr->_streambuf).__put_base = pcVar1;
        (this_ptr->_streambuf).__put_ptr = pcVar1;
        (this_ptr->_streambuf).__put_end =
             new_buffer + (int)(pcVar10 + ((new_buffer_size - iVar7) - (int)ptr));
        (this_ptr->_streambuf).__put_ptr =
             (this_ptr->_streambuf).__put_ptr + (int)(pcVar8 + (-iVar3 - (int)ptr));
      }
      if (ptr != (char *)0x0) {
        if (this_ptr->__free_fn == (void *)0x0) {
          crt_memory_c_free_FUN_005fe659(ptr);
        }
        else {
          (*this_ptr->__free_fn)();
        }
      }
      return 0;
    }
  }
  return -1;
}
