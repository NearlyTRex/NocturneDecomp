// Name: crt_stdio.c_fputc_FUN_005ff2d7
// Address: 005ff2d7
// Address Range: [[005ff2d7, 005ff383]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fputc_FUN_005ff2d7(FILE * stream, int character)

#include "nocturne.h"

int __cdecl crt_stdio_c_fputc_FUN_005ff2d7(FILE *stream,int character)

{
  int iVar1;
  byte *pbVar2;
  BOOL BVar3;
  uint uVar4;
  byte local_c;
  
  if ((*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0) &&
     (((*(int *)((int)&stream->_link + *(int *)(stream->_ptr + 4)) == 0 &&
       ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 0x4000) == 0)) ||
      (BVar3 = crt_stdio_c_prepare_stream_for_write_FUN_00606055(stream), BVar3 != 0)))) {
    iVar1 = *(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4));
    pbVar2 = *(byte **)(iVar1 + 0x20);
    if (pbVar2 < *(byte **)(iVar1 + 0x1c)) {
      *(byte **)(iVar1 + 0x20) = pbVar2 + 1;
      local_c = (byte)character;
      *pbVar2 = local_c;
      uVar4 = (uint)*pbVar2;
    }
    else {
      uVar4 = (**(code **)(*(int *)(iVar1 + 0x28) + 0xc))();
    }
    if (uVar4 == 0xffffffff) {
      crt_stdio_c_reportStreamError_FUN_00606020
                ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),2);
    }
    if ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 0x2000) != 0) {
      crt_stdio_c_stream_flush_FUN_006060bb(stream);
    }
  }
  return (int)stream;
}
