// Name: crt_stdio.c_fgetc_buffered_FUN_0060d510
// Address: 0060d510
// Address Range: [[0060d510, 0060d575]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_fgetc_buffered_FUN_0060d510(_FILE *stream)

#include "nocturne.h"

int __watcallStack fgetc_buffered(_FILE *stream)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00608cd1(stream,1);
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
