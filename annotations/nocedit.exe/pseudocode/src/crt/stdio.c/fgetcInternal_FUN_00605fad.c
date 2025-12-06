// Name: crt_stdio.c_fgetcInternal_FUN_00605fad
// Address: 00605fad
// Address Range: [[00605fad, 0060601f]]
// Convention: __watcallStack
// Signature: FILE * crt_stdio.c_fgetcInternal_FUN_00605fad(FILE * stream, byte * output_byte)

#include "nocturne.h"

FILE * __watcallStack crt_stdio_c_fgetcInternal_FUN_00605fad(FILE *stream,byte *output_byte)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4));
  if (*(uint *)(iVar1 + 0x10) <= *(uint *)(iVar1 + 0x14)) {
    iVar4 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x10))();
    if (iVar4 == -1) {
      uVar3 = 0xffffffff;
      goto LAB_00605fd8;
    }
  }
  pbVar2 = *(byte **)(iVar1 + 0x14);
  *(byte **)(iVar1 + 0x14) = pbVar2 + 1;
  uVar3 = (uint)*pbVar2;
LAB_00605fd8:
  if (uVar3 != 0xffffffff) {
    *output_byte = (byte)uVar3;
    stream->_cnt = 1;
    return stream;
  }
  crt_stdio_c_reportStreamError_FUN_00606020
            ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),6);
  stream->_cnt = 0;
  return stream;
}
