// Name: crt_stdio.c_prepare_stream_for_write_FUN_0056b35c
// Address: 0056b35c
// Address Range: [[0056b35c, 0056b3c1]]
// Convention: __cdecl
// Signature: BOOL __cdecl crt_stdio_c_prepare_stream_for_write_FUN_0056b35c(_FILE *stream)

#include "nocturne.h"

BOOL __cdecl prepare_stream_for_write(_FILE *stream)

{
  _FILE *p_Var1;
  
  p_Var1 = *(_FILE **)((int)&stream->_link + *(int *)(stream->_ptr + 4));
  if (p_Var1 != (_FILE *)0x0) {
    stream_flush(p_Var1);
  }
  if ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 0x4000) != 0) {
    p_Var1 = get_standard_file_handle(1);
    FUN_00568890(p_Var1);
    p_Var1 = get_standard_file_handle(2);
    FUN_00568890(p_Var1);
  }
  return (uint)(*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0);
}
