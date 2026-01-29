// Name: crt_io.c_ConvertCreationDisposition_FUN_0060c894
// Address: 0060c894
// Address Range: [[0060c894, 0060c8f3]]
// Convention: __cdecl
// Signature: void __cdecl crt_io_c_ConvertCreationDisposition_FUN_0060c894(DWORD mode_flags,DWORD *creation_disposition)

#include "nocturne.h"

void __cdecl
ConvertCreationDisposition(DWORD mode_flags,DWORD *creation_disposition)

{
  uint uVar1;
  
  uVar1 = mode_flags & 0x70;
  if (uVar1 < 0x20) {
    if (uVar1 != 0) {
      if (uVar1 != 0x10) {
        return;
      }
      *creation_disposition = 0;
      return;
    }
    *creation_disposition = 1;
    if ((mode_flags & 7) == 0) {
      *(byte *)creation_disposition = (byte)*creation_disposition | 2;
      return;
    }
  }
  else {
    if (uVar1 < 0x21) {
      *creation_disposition = 1;
      return;
    }
    if (0x2f < uVar1) {
      if (uVar1 < 0x31) {
        *creation_disposition = 2;
        return;
      }
      if (uVar1 != 0x40) {
        return;
      }
      *creation_disposition = 3;
    }
  }
  return;
}
