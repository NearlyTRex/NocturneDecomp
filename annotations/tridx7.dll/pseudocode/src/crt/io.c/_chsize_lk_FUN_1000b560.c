// Name: crt_io.c__chsize_lk_FUN_1000b560
// Address: 1000b560
// Address Range: [[1000b560, 1000b691]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__chsize_lk_FUN_1000b560(int fh,long size)

#include "nocturne.h"

int __cdecl _chsize_lk(int fh,long size)

{
  long offset;
  long lVar1;
  uint cnt;
  int iVar2;
  ulong *puVar3;
  int *piVar4;
  HANDLE hFile;
  BOOL BVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  byte bVar11;
  uint in_stack_0000100c;
  int in_stack_00001010;
  
  bVar11 = 0;
  _chkstk();
  iVar8 = 0;
  offset = _lseek_lk(in_stack_0000100c,0,1);
  if ((offset == -1) ||
     (lVar1 = _lseek_lk(in_stack_0000100c,0,2), lVar1 == -1)) {
    return -1;
  }
  uVar9 = in_stack_00001010 - lVar1;
  if ((int)uVar9 < 1) {
    if ((int)uVar9 < 0) {
      _lseek_lk(in_stack_0000100c,in_stack_00001010,0);
      hFile = (HANDLE)_get_osfhandle(in_stack_0000100c);
      BVar5 = SetEndOfFile(hFile);
      iVar8 = -(uint)(BVar5 == 0);
      if (iVar8 == -1) {
        piVar4 = _errno();
        *piVar4 = 0xd;
        puVar3 = __doserrno();
        DVar6 = GetLastError();
        *puVar3 = DVar6;
      }
    }
  }
  else {
    plVar10 = &size;
    for (iVar7 = 0x400; iVar7 != 0; iVar7 = iVar7 + -1) {
      *plVar10 = 0;
      plVar10 = plVar10 + (uint)bVar11 * -2 + 1;
    }
    iVar7 = _setmode_lk(in_stack_0000100c,0x8000);
    do {
      cnt = 0x1000;
      if ((int)uVar9 < 0x1000) {
        cnt = uVar9;
      }
      iVar2 = _write_lk(in_stack_0000100c,&size,cnt);
      if (iVar2 == -1) {
        puVar3 = __doserrno();
        if (*puVar3 == 5) {
          piVar4 = _errno();
          *piVar4 = 0xd;
        }
        iVar8 = -1;
        break;
      }
      uVar9 = uVar9 - iVar2;
    } while (0 < (int)uVar9);
    _setmode_lk(in_stack_0000100c,iVar7);
  }
  _lseek_lk(in_stack_0000100c,offset,0);
  return iVar8;
}
