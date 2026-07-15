// Name: crt_io.c__write_lk_FUN_10008fb0
// Address: 10008fb0
// Address Range: [[10008fb0, 100091aa]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__write_lk_FUN_10008fb0(int fh,void *buf,uint cnt)

#include "nocturne.h"

int __cdecl _write_lk(int fh,void *buf,uint cnt)

{
  char cVar1;
  BOOL BVar2;
  int *piVar3;
  ulong *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  ulong local_418;
  DWORD local_414;
  int *local_410;
  int local_40c;
  DWORD local_408;
  char local_404 [1028];
  
  iVar5 = 0;
  local_408 = 0;
  if (cnt == 0) {
    return 0;
  }
  local_410 = (int *)((int)&DAT_10241870 + ((int)(fh & 0xffffffe7U) >> 3));
  local_40c = (fh & 0x1fU) * 0x24;
  if ((*(byte *)(*local_410 + 4 + local_40c) & 0x20) != 0) {
    _lseek_lk(fh,0,2);
  }
  if ((*(byte *)((uint *)(local_40c + *local_410) + 1) & 0x80) == 0) {
    BVar2 = WriteFile(*(HANDLE *)(local_40c + *local_410),buf,cnt,&local_414,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
LAB_100090e4:
      local_418 = GetLastError();
    }
    else {
      local_418 = 0;
      local_408 = local_414;
    }
  }
  else {
    local_418 = 0;
    pcVar7 = buf;
    do {
      if (cnt <= (uint)((int)pcVar7 - (int)buf)) break;
      pcVar6 = local_404;
      do {
        if (cnt <= (uint)((int)pcVar7 - (int)buf)) break;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        if (cVar1 == '\n') {
          *pcVar6 = '\r';
          iVar5 = iVar5 + 1;
          pcVar6 = pcVar6 + 1;
        }
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while ((int)pcVar6 - (int)local_404 < 0x400);
      BVar2 = WriteFile(*(HANDLE *)(*local_410 + local_40c),local_404,(int)pcVar6 - (int)local_404,
                        &local_414,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) goto LAB_100090e4;
      local_408 = local_408 + local_414;
    } while ((int)pcVar6 - (int)local_404 <= (int)local_414);
  }
  if (local_408 != 0) {
    return local_408 - iVar5;
  }
  if (local_418 == 0) {
    if (((*(byte *)(*local_410 + 4 + local_40c) & 0x40) != 0) && (*(char *)buf == '\x1a')) {
      return 0;
    }
    piVar3 = _errno();
    *piVar3 = 0x1c;
    puVar4 = __doserrno();
    *puVar4 = 0;
    return -1;
  }
  if (local_418 != 5) {
    _dosmaperr(local_418);
    return -1;
  }
  piVar3 = _errno();
  *piVar3 = 9;
  puVar4 = __doserrno();
  *puVar4 = 5;
  return -1;
}
