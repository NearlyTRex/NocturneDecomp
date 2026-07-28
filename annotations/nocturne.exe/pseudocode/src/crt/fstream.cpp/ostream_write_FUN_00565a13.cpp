// Name: crt_fstream.cpp_ostream_write_FUN_00565a13
// Address: 00565a13
// Address Range: [[00565a13, 00565ad4]]
// Convention: __cdecl
// Signature: _ostream * __cdecl crt_fstream_cpp_ostream_write_FUN_00565a13(_ostream *stream,void *buffer,SIZE_T count)

#include "nocturne.h"

_ostream * __cdecl crt_fstream_cpp_ostream_write_FUN_00565a13(_ostream *stream,void *buffer,SIZE_T count)

{
  int iVar1;
  BOOL BVar2;
  SIZE_T SVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((*(int *)((stream->_ios).padding +
               ((stream->_ostream_core).layout_info)->offset_to_base + -0x1d) == 0) &&
     (((iVar1 = ((stream->_ostream_core).layout_info)->offset_to_base,
       *(int *)((stream->_ios).padding + iVar1 + -0x25) == 0 &&
       ((*(uint *)((stream->_ios).padding + iVar1 + -0x21) & 0x4000) == 0)) ||
      (BVar2 = prepare_stream_for_write((_FILE *)stream), BVar2 != 0)))) {
    if (count != 0) {
      iVar1 = *(int *)((stream->_ios).padding +
                      ((stream->_ostream_core).layout_info)->offset_to_base + -0x29);
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
        SVar3 = (**(code **)(*(int *)(iVar1 + 0x28) + 4))(iVar1,buffer,count);
      }
      if (SVar3 != count) {
        reportStreamError
                  ((FileEmbeddedData *)
                   ((stream->_ios).padding +
                   ((stream->_ostream_core).layout_info)->offset_to_base + -0x2d),2);
      }
    }
    if ((*(uint *)((stream->_ios).padding +
                  ((stream->_ostream_core).layout_info)->offset_to_base + -0x21) & 0x2000) != 0) {
      stream_flush((_FILE *)stream);
    }
  }
  return stream;
}
