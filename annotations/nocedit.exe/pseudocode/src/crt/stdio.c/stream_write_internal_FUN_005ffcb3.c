// Name: crt_stdio.c_stream_write_internal_FUN_005ffcb3
// Address: 005ffcb3
// Address Range: [[005ffcb3, 005ffd74]]
// Convention: __cdecl
// Signature: FILE * crt_stdio.c_stream_write_internal_FUN_005ffcb3(FILE * stream, void * buffer, SIZE_T count)

#include "nocturne.h"

FILE * __cdecl
crt_stdio_c_stream_write_internal_FUN_005ffcb3(FILE *stream,void *buffer,SIZE_T count)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  SIZE_T SVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0) &&
     (((*(int *)((int)&stream->_link + *(int *)(stream->_ptr + 4)) == 0 &&
       ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 0x4000) == 0)) ||
      (bVar2 = crt_stdio_c_prepare_stream_for_write_FUN_00606055(stream),
      CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) != 0)))) {
    if (count != 0) {
      iVar1 = *(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4));
      if ((int)count < *(int *)(iVar1 + 0x1c) - (int)*(uint **)(iVar1 + 0x20)) {
        puVar5 = *(uint **)(iVar1 + 0x20);
        for (uVar4 = count >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = *(uint *)buffer;
          buffer = (uint *)((int)buffer + ((uint)bVar6 * -2 + 1) * 4);
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        for (uVar4 = count & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(byte *)puVar5 = *(byte *)buffer;
          buffer = (uint *)((int)buffer + (uint)bVar6 * -2 + 1);
          puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
        }
        *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + count;
        SVar3 = count;
      }
      else {
        SVar3 = (**(code **)(*(int *)(iVar1 + 0x28) + 4))();
      }
      if (SVar3 != count) {
        crt_stdio_c_reportStreamError_FUN_00606020
                  ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),2);
      }
    }
    if ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 0x2000) != 0) {
      crt_stdio_c_stream_flush_FUN_006060bb(stream);
    }
  }
  return stream;
}
