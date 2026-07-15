// Name: crt_io.c__commit_FUN_10008e80
// Address: 10008e80
// Address Range: [[10008e80, 10008f21]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__commit_FUN_10008e80(int fh)

#include "nocturne.h"

int __cdecl _commit(int fh)

{
  HANDLE hFile;
  BOOL BVar1;
  ulong *puVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_10241970 <= (uint)fh) {
LAB_10008f0e:
    piVar3 = _errno();
    *piVar3 = 9;
    return -1;
  }
  piVar3 = (int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7U) >> 3));
  iVar5 = (fh & 0x1fU) * 0x24;
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) == 0) goto LAB_10008f0e;
  _lock_fhandle(fh);
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) != 0) {
    DVar4 = 0;
    hFile = (HANDLE)_get_osfhandle(fh);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar4 = GetLastError();
    }
    iVar5 = 0;
    if (DVar4 == 0) goto LAB_10008eff;
    puVar2 = __doserrno();
    *puVar2 = DVar4;
  }
  iVar5 = -1;
  piVar3 = _errno();
  *piVar3 = 9;
LAB_10008eff:
  _unlock_fhandle(fh);
  return iVar5;
}
