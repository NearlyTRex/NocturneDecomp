// Name: crt_stdio.c_get_standard_file_handle_FUN_0060b7a0
// Address: 0060b7a0
// Address Range: [[0060b7a0, 0060b7c1]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_get_standard_file_handle_FUN_0060b7a0(int fd)

#include "nocturne.h"

_FILE * __cdecl get_standard_file_handle(int fd)

{
  if (3 < (uint)fd) {
    return (_FILE *)0x0;
  }
  return (_FILE *)((int)&g_StaticFilePoolStart + fd * 0x1a);
}
