// Name: crt_stdio.c_prepare_stream_for_write_FUN_00606055
// Address: 00606055
// Address Range: [[00606055, 006060ba]]
// Convention: __cdecl
// Signature: BOOL __cdecl crt_stdio_c_prepare_stream_for_write_FUN_00606055(FILE *stream)

#include "nocturne.h"

BOOL __cdecl crt_stdio_c_prepare_stream_for_write_FUN_00606055(FILE *stream)

{
  FILE *pFVar1;
  
  pFVar1 = *(FILE **)((int)&stream->_link + *(int *)(stream->_ptr + 4));
  if (pFVar1 != (FILE *)0x0) {
    crt_stdio_c_stream_flush_FUN_006060bb(pFVar1);
  }
  if ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 0x4000) != 0) {
    pFVar1 = crt_stdio_c_get_standard_file_handle_FUN_0060b7a0(1);
    crt_stdio_c_fflushInternal_FUN_006039d0(pFVar1);
    pFVar1 = crt_stdio_c_get_standard_file_handle_FUN_0060b7a0(2);
    crt_stdio_c_fflushInternal_FUN_006039d0(pFVar1);
  }
  return (uint)(*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0);
}
