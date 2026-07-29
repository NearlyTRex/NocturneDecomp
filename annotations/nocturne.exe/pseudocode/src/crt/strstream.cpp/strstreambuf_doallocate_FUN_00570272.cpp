// Name: crt_strstream.cpp_strstreambuf_doallocate_FUN_00570272
// Address: 00570272
// Address Range: [[00570272, 0057040f]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_strstream_cpp_strstreambuf_doallocate_FUN_00570272(strstreambuf *this_ptr)

#include "nocturne.h"

int __watcallStack crt_strstream_cpp_strstreambuf_doallocate_FUN_00570272(strstreambuf *this_ptr)

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
  SIZE_T local_18;
  
  bVar12 = 0;
  pvVar2 = this_ptr[1]._streambuf.__b_lock;
  if ((((uint)pvVar2 & 2) != 0) && (((uint)pvVar2 & 1) == 0)) {
    ptr = (this_ptr->_streambuf).__reserve_base;
    iVar7 = (int)(this_ptr->_streambuf).__reserve_end - (int)ptr;
    local_18 = this_ptr->__allocation_size;
    if ((int)local_18 <= iVar7) {
      local_18 = iVar7 + 0x200;
    }
    if (this_ptr->__alloc_fn == (void *)0x0) {
      new_buffer = shape_memdbg_cpp_malloc_FUN_00564c18(local_18);
    }
    else {
      new_buffer = (char *)(*this_ptr->__alloc_fn)(local_18);
    }
    if (new_buffer != (char *)0x0) {
      crt_iostream_cpp_setBuffer_FUN_00571df8
                (&this_ptr->_streambuf,new_buffer,new_buffer + local_18,0);
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
        (this_ptr->_streambuf).__put_end = new_buffer + local_18;
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
             new_buffer + (int)(pcVar10 + ((local_18 - iVar7) - (int)ptr));
        (this_ptr->_streambuf).__put_ptr =
             (this_ptr->_streambuf).__put_ptr + (int)(pcVar8 + (-iVar3 - (int)ptr));
      }
      if (ptr != (char *)0x0) {
        if (this_ptr->__free_fn == (void *)0x0) {
          shape_memdbg_cpp_free_FUN_00564486(ptr);
        }
        else {
          (*this_ptr->__free_fn)(ptr);
        }
      }
      return 0;
    }
  }
  return -1;
}
