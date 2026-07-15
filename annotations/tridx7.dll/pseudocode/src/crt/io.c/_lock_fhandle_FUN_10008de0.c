// Name: crt_io.c__lock_fhandle_FUN_10008de0
// Address: 10008de0
// Address Range: [[10008de0, 10008e40]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__lock_fhandle_FUN_10008de0(int filehandle)

#include "nocturne.h"

int __cdecl _lock_fhandle(int filehandle)

{
  int *piVar1;
  int iVar2;
  int extraout_EAX;
  int iVar3;
  
  piVar1 = (int *)((int)&DAT_10241870 + ((int)(filehandle & 0xffffffe7U) >> 3));
  iVar2 = (filehandle & 0x1fU) * 0x24;
  iVar3 = *piVar1 + iVar2;
  if (*(int *)(iVar3 + 8) == 0) {
    _lock(0x11);
    if (*(int *)(iVar3 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0xc));
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    _unlock(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(*piVar1 + iVar2 + 0xc));
  return extraout_EAX;
}
