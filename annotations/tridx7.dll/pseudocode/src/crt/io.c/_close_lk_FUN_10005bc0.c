// Name: crt_io.c__close_lk_FUN_10005bc0
// Address: 10005bc0
// Address Range: [[10005bc0, 10005c48]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__close_lk_FUN_10005bc0(int fh)

#include "nocturne.h"

int __cdecl _close_lk(int fh)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD oserrno;
  
  if ((fh == 1) || (fh == 2)) {
    iVar1 = _get_osfhandle(2);
    iVar2 = _get_osfhandle(1);
    if (iVar1 != iVar2) goto LAB_10005bea;
  }
  else {
LAB_10005bea:
    hObject = (HANDLE)_get_osfhandle(fh);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      oserrno = GetLastError();
      goto LAB_10005c0a;
    }
  }
  oserrno = 0;
LAB_10005c0a:
  _free_osfhnd(fh);
  if (oserrno != 0) {
    _dosmaperr(oserrno);
    return -1;
  }
  *(byte *)
   (*(int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7U) >> 3)) + 4 + (fh & 0x1fU) * 0x24) = 0;
  return 0;
}
