// Name: crt_stdio.c_fgetcInternal_FUN_0056b2b4
// Address: 0056b2b4
// Address Range: [[0056b2b4, 0056b326]]
// Convention: __watcallStack
// Signature: _FILE * __watcallStack crt_stdio_c_fgetcInternal_FUN_0056b2b4(_FILE *stream,byte *output_byte)

#include "nocturne.h"

_FILE * __watcallStack fgetcInternal(_FILE *stream,byte *output_byte)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4));
  if (*(uint *)(iVar1 + 0x10) <= *(uint *)(iVar1 + 0x14)) {
    iVar4 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x10))(iVar1);
    if (iVar4 == -1) {
      uVar3 = 0xffffffff;
      goto LAB_0056b2df;
    }
  }
  pbVar2 = *(byte **)(iVar1 + 0x14);
  *(byte **)(iVar1 + 0x14) = pbVar2 + 1;
  uVar3 = (uint)*pbVar2;
LAB_0056b2df:
  if (uVar3 != 0xffffffff) {
    *output_byte = (byte)uVar3;
    stream->_cnt = 1;
    return stream;
  }
  reportStreamError
            ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),6);
  stream->_cnt = 0;
  return stream;
}
