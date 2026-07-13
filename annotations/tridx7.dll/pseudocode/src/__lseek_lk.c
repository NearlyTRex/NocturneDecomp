// Name: __lseek_lk
// Address: 1000a670
// Address Range: [[1000a670, 1000a6f1]]
// Convention: unknown
// Signature: DWORD __lseek_lk(uint param_1,LONG param_2,DWORD param_3)

#include "nocturne.h"

/* Library Function - Single Match
DWORD __lseek_lk(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  uint *puVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)FUN_10008cd0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar2 = (uint *)FUN_10008a20();
    *puVar2 = 9;
    return 0xffffffff;
  }
  DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  uVar4 = 0;
  if (DVar3 == 0xffffffff) {
    uVar4 = GetLastError();
  }
  if (uVar4 != 0) {
    __dosmaperr(uVar4);
    return 0xffffffff;
  }
  pbVar1 = (byte *)(*(int *)((int)&DAT_10241870 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                   (param_1 & 0x1f) * 0x24);
  *pbVar1 = *pbVar1 & 0xfd;
  return DVar3;
}
