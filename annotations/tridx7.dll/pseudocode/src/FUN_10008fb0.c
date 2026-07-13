// Name: FUN_10008fb0
// Address: 10008fb0
// Address Range: [[10008fb0, 100091aa]]
// Convention: unknown
// Signature: int FUN_10008fb0(uint param_1,char *param_2,uint param_3)

#include "nocturne.h"

int FUN_10008fb0(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  ulong local_418;
  DWORD local_414;
  int *local_410;
  int local_40c;
  DWORD local_408;
  char local_404 [1028];
  
  iVar4 = 0;
  local_408 = 0;
  if (param_3 == 0) {
    return 0;
  }
  local_410 = (int *)((int)&DAT_10241870 + ((int)(param_1 & 0xffffffe7) >> 3));
  local_40c = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)(*local_410 + 4 + local_40c) & 0x20) != 0) {
    __lseek_lk(param_1,0,2);
  }
  if ((*(byte *)((uint *)(local_40c + *local_410) + 1) & 0x80) == 0) {
    BVar2 = WriteFile(*(HANDLE *)(local_40c + *local_410),param_2,param_3,&local_414,
                      (LPOVERLAPPED)0x0);
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
    pcVar6 = param_2;
    do {
      if (param_3 <= (uint)((int)pcVar6 - (int)param_2)) break;
      pcVar5 = local_404;
      do {
        if (param_3 <= (uint)((int)pcVar6 - (int)param_2)) break;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        if (cVar1 == '\n') {
          *pcVar5 = '\r';
          iVar4 = iVar4 + 1;
          pcVar5 = pcVar5 + 1;
        }
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while ((int)pcVar5 - (int)local_404 < 0x400);
      BVar2 = WriteFile(*(HANDLE *)(*local_410 + local_40c),local_404,(int)pcVar5 - (int)local_404,
                        &local_414,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) goto LAB_100090e4;
      local_408 = local_408 + local_414;
    } while ((int)pcVar5 - (int)local_404 <= (int)local_414);
  }
  if (local_408 != 0) {
    return local_408 - iVar4;
  }
  if (local_418 == 0) {
    if (((*(byte *)(*local_410 + 4 + local_40c) & 0x40) != 0) && (*param_2 == '\x1a')) {
      return 0;
    }
    puVar3 = (uint *)FUN_10008a20();
    *puVar3 = 0x1c;
    puVar3 = (uint *)FUN_10008a30();
    *puVar3 = 0;
    return -1;
  }
  if (local_418 != 5) {
    __dosmaperr(local_418);
    return -1;
  }
  puVar3 = (uint *)FUN_10008a20();
  *puVar3 = 9;
  puVar3 = (uint *)FUN_10008a30();
  *puVar3 = 5;
  return -1;
}
