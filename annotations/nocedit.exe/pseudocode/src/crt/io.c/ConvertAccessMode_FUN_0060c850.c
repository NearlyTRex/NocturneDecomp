// Name: crt_io.c_ConvertAccessMode_FUN_0060c850
// Address: 0060c850
// Address Range: [[0060c850, 0060c890]]
// Convention: __cdecl
// Signature: void crt_io.c_ConvertAccessMode_FUN_0060c850(int access_mode, DWORD * desired_access, DWORD * share_mode)

#include "nocturne.h"

void __cdecl
crt_io_c_ConvertAccessMode_FUN_0060c850(int access_mode,DWORD *desired_access,DWORD *share_mode)

{
  if (access_mode == 2) {
    *desired_access = SYSTEM_GENERIC_READ_WRITE;
    *share_mode = 0x80;
    return;
  }
  if (access_mode == 1) {
    *desired_access = SYSTEM_GENERIC_WRITE;
    *share_mode = 0x80;
    return;
  }
  *desired_access = 0x80000000;
  *share_mode = 1;
  return;
}
