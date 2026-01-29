// Name: crt_io.c_get_handle_FUN_006109f0
// Address: 006109f0
// Address Range: [[006109f0, 00610a1f]]
// Convention: __cdecl
// Signature: HANDLE __cdecl crt_io_c_get_handle_FUN_006109f0(int fd)

#include "nocturne.h"

HANDLE __cdecl get_handle(int fd)

{
  if ((-1 < fd) && ((uint)fd <= g_MaxHandleCount)) {
    return g_IOControlBlock->standard_handles[fd];
  }
  setErrno(4);
  return (HANDLE)0xffffffff;
}
