// Name: FUN_10008e80
// Address: 10008e80
// Address Range: [[10008e80, 10008f21]]
// Convention: unknown
// Signature: undefined4 FUN_10008e80(uint param_1)

#include "nocturne.h"

uint FUN_10008e80(uint param_1)

{
  int *piVar1;
  int iVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD *pDVar4;
  uint *puVar5;
  DWORD DVar6;
  uint uVar7;
  
  if (DAT_10241970 <= param_1) {
LAB_10008f0e:
    puVar5 = (uint *)FUN_10008a20();
    *puVar5 = 9;
    return 0xffffffff;
  }
  piVar1 = (int *)((int)&DAT_10241870 + ((int)(param_1 & 0xffffffe7) >> 3));
  iVar2 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)(*piVar1 + 4 + iVar2) & 1) == 0) goto LAB_10008f0e;
  __lock_fhandle(param_1);
  if ((*(byte *)(*piVar1 + 4 + iVar2) & 1) != 0) {
    DVar6 = 0;
    hFile = (HANDLE)FUN_10008cd0(param_1);
    BVar3 = FlushFileBuffers(hFile);
    if (BVar3 == 0) {
      DVar6 = GetLastError();
    }
    uVar7 = 0;
    if (DVar6 == 0) goto LAB_10008eff;
    pDVar4 = (DWORD *)FUN_10008a30();
    *pDVar4 = DVar6;
  }
  uVar7 = 0xffffffff;
  puVar5 = (uint *)FUN_10008a20();
  *puVar5 = 9;
LAB_10008eff:
  __unlock_fhandle(param_1);
  return uVar7;
}
