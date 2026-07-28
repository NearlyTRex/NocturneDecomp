// Name: crt_stdio.c_fgetc_buffered_FUN_00571c60
// Address: 00571c60
// Address Range: [[00571c60, 00571cc5]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_fgetc_buffered_FUN_00571c60(_FILE *stream)

#include "nocturne.h"

int __watcallStack fgetc_buffered(_FILE *stream)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0056ce57(stream,1);
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = *(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4));
  if (*(byte **)(iVar1 + 0x14) < *(byte **)(iVar1 + 0x10)) {
    uVar2 = (uint)**(byte **)(iVar1 + 0x14);
  }
  else {
    uVar2 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x10))(iVar1);
  }
  if (uVar2 != 0xffffffff) {
    return uVar2;
  }
  reportStreamError
            ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),4);
  return -1;
}
