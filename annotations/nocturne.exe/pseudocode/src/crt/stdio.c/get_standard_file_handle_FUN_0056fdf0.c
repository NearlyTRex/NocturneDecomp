// Name: crt_stdio.c_get_standard_file_handle_FUN_0056fdf0
// Address: 0056fdf0
// Address Range: [[0056fdf0, 0056fe11]]
// Convention: __cdecl
// Signature: _FILE * __cdecl crt_stdio_c_get_standard_file_handle_FUN_0056fdf0(int fd)

#include "nocturne.h"

_FILE * __cdecl get_standard_file_handle(int fd)

{
  if (3 < (uint)fd) {
    return (_FILE *)0x0;
  }
  return (_FILE *)(&DAT_005c1894 + fd * 0x1a);
}
