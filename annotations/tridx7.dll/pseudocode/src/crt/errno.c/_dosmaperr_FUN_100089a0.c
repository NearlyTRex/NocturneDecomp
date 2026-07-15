// Name: crt_errno.c__dosmaperr_FUN_100089a0
// Address: 100089a0
// Address Range: [[100089a0, 10008a12]]
// Convention: __cdecl
// Signature: void __cdecl crt_errno_c__dosmaperr_FUN_100089a0(ulong oserrno)

#include "nocturne.h"

void __cdecl _dosmaperr(ulong oserrno)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = __doserrno();
  iVar3 = 0;
  *puVar1 = oserrno;
  puVar1 = &DAT_10017310;
  do {
    if (*puVar1 == oserrno) {
      piVar2 = _errno();
      *piVar2 = *(int *)(iVar3 * 8 + 0x10017314);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar1 < &DAT_10017478);
  if ((0x12 < oserrno) && (oserrno < 0x25)) {
    piVar2 = _errno();
    *piVar2 = 0xd;
    return;
  }
  if ((0xbb < oserrno) && (oserrno < 0xcb)) {
    piVar2 = _errno();
    *piVar2 = 8;
    return;
  }
  piVar2 = _errno();
  *piVar2 = 0x16;
  return;
}
