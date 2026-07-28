// Name: crt_strstream.cpp_strstreambuf_doallocate_FUN_00570272
// Address: 00570272
// Address Range: [[00570272, 0057040f]]
// Convention: unknown
// Signature: undefined4 crt_strstream_cpp_strstreambuf_doallocate_FUN_00570272(streambuf *param_1)

#include "nocturne.h"

uint crt_strstream_cpp_strstreambuf_doallocate_FUN_00570272(streambuf *param_1)

{
  char *ptr;
  char *pcVar1;
  char *new_buffer;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char *local_18;
  
  bVar11 = 0;
  if ((((uint)param_1[1].__get_ptr & 2) != 0) && (((uint)param_1[1].__get_ptr & 1) == 0)) {
    ptr = param_1->__reserve_base;
    iVar6 = (int)param_1->__reserve_end - (int)ptr;
    local_18 = param_1[1].__get_base;
    if ((int)local_18 <= iVar6) {
      local_18 = (char *)(iVar6 + 0x200);
    }
    if (param_1[1].__reserve_base == (char *)0x0) {
      new_buffer = shape_memdbg_cpp_malloc_FUN_00564c18((SIZE_T)local_18);
    }
    else {
      new_buffer = (char *)(*(code *)param_1[1].__reserve_base)(local_18);
    }
    if (new_buffer != (char *)0x0) {
      crt_iostream_cpp_setBuffer_FUN_00571df8(param_1,new_buffer,local_18 + (int)new_buffer,0);
      pcVar8 = param_1->__get_base;
      if (pcVar8 != (char *)0x0) {
        pcVar1 = param_1->__get_ptr;
        iVar2 = (int)param_1->__get_end - (int)ptr;
        uVar3 = iVar2 - ((int)pcVar8 - (int)ptr);
        pcVar7 = pcVar8;
        pcVar9 = new_buffer + ((int)pcVar8 - (int)ptr);
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(uint *)pcVar9 = *(uint *)pcVar7;
          pcVar7 = pcVar7 + (uint)bVar11 * -8 + 4;
          pcVar9 = pcVar9 + (uint)bVar11 * -8 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
          pcVar9 = pcVar9 + (uint)bVar11 * -2 + 1;
        }
        param_1->__get_base = new_buffer + ((int)pcVar8 - (int)ptr);
        param_1->__get_ptr = new_buffer + ((int)pcVar1 - (int)ptr);
        param_1->__get_end = new_buffer + iVar2;
      }
      pcVar8 = param_1->__put_base;
      if (pcVar8 == (char *)0x0) {
        param_1->__put_base = new_buffer;
        param_1->__put_ptr = new_buffer;
        param_1->__put_end = local_18 + (int)new_buffer;
      }
      else {
        iVar2 = (int)pcVar8 - (int)ptr;
        pcVar7 = param_1->__put_ptr;
        pcVar9 = param_1->__put_end;
        pcVar5 = pcVar9 + (-iVar2 - (int)ptr);
        pcVar1 = new_buffer + iVar2;
        pcVar10 = pcVar1;
        for (uVar4 = (uint)pcVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(uint *)pcVar10 = *(uint *)pcVar8;
          pcVar8 = pcVar8 + (uint)bVar11 * -8 + 4;
          pcVar10 = pcVar10 + (uint)bVar11 * -8 + 4;
        }
        for (uVar4 = (uint)pcVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar11 * -2 + 1;
          pcVar10 = pcVar10 + (uint)bVar11 * -2 + 1;
        }
        param_1->__put_base = pcVar1;
        param_1->__put_ptr = pcVar1;
        param_1->__put_end = new_buffer + (int)(pcVar9 + (int)(local_18 + (-iVar6 - (int)ptr)));
        param_1->__put_ptr = param_1->__put_ptr + (int)(pcVar7 + (-iVar2 - (int)ptr));
      }
      if (ptr != (char *)0x0) {
        if (param_1[1].__reserve_end == (char *)0x0) {
          shape_memdbg_cpp_free_FUN_00564486(ptr);
        }
        else {
          (*(code *)param_1[1].__reserve_end)(ptr);
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}
