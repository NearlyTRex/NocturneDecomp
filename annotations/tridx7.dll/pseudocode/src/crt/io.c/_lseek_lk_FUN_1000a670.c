// Name: crt_io.c__lseek_lk_FUN_1000a670
// Address: 1000a670
// Address Range: [[1000a670, 1000a6f1]]
// Convention: __cdecl
// Signature: long __cdecl crt_io_c__lseek_lk_FUN_1000a670(int fh,long offset,int origin)

#include "nocturne.h"

long __cdecl _lseek_lk(int fh,long offset,int origin)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  ulong oserrno;
  
  hFile = (HANDLE)_get_osfhandle(fh);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = _errno();
    *piVar2 = 9;
    return -1;
  }
  DVar3 = SetFilePointer(hFile,offset,(PLONG)0x0,origin);
  oserrno = 0;
  if (DVar3 == 0xffffffff) {
    oserrno = GetLastError();
  }
  if (oserrno != 0) {
    _dosmaperr(oserrno);
    return -1;
  }
  pbVar1 = (byte *)(*(int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7U) >> 3)) + 4 +
                   (fh & 0x1fU) * 0x24);
  *pbVar1 = *pbVar1 & 0xfd;
  return DVar3;
}
