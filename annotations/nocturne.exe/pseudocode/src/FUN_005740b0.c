// Name: FUN_005740b0
// Address: 005740b0
// Address Range: [[005740b0, 00574260]]
// Convention: unknown
// Signature: int FUN_005740b0(wchar_t *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005740b0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  char *dest;
  int iVar5;
  int iVar6;
  void *pvVar7;
  
  iVar5 = 2;
  iVar6 = 2;
  pwVar1 = (wchar_t *)FUN_00574540(param_1,0x3d);
  if (pwVar1 == (wchar_t *)0x0) {
    iVar5 = -1;
  }
  else {
    if (pwVar1 == param_1) {
      return -1;
    }
    iVar3 = ((int)pwVar1 - (int)param_1 >> 1) * 2;
    pvVar2 = malloc(iVar3 + 2);
    if (pvVar2 == (void *)0x0) {
      return -1;
    }
    pvVar7 = pvVar2;
    FUN_00571410(pvVar2,param_1,iVar3,iVar5,iVar6,pvVar2);
    *(ushort *)((int)pvVar2 + iVar3) = 0;
    iVar3 = FUN_005713e0(pwVar1 + 1);
    if (iVar3 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      iVar3 = iVar3 * 2;
      pvVar4 = malloc(iVar3 + 2);
      if (pvVar4 == (void *)0x0) {
        FUN_005638d0(pvVar2);
        return -1;
      }
      FUN_00571410(pvVar4,pwVar1 + 1,iVar3);
      *(ushort *)((int)pvVar4 + iVar3) = 0;
    }
    iVar3 = FUN_00574570(pvVar7,pvVar4);
    FUN_005638d0(pvVar7);
    FUN_005638d0(pvVar4);
    if (iVar3 == 0) {
      return -1;
    }
    if (_DAT_02de54a8 == 0) {
      FUN_00574680();
    }
    iVar3 = FUN_00574264(param_1);
    if (iVar3 != 0) {
      return -1;
    }
    iVar3 = FUN_005713e0(param_1);
    dest = (char *)malloc(iVar5 * (iVar3 + 1));
    if (dest == (char *)0x0) {
      convertWindowsErrorToErrno(5);
      return -1;
    }
    iVar5 = wcstombs(dest,param_1,(iVar3 + 1) * iVar6);
    if (iVar5 == -1) {
      FUN_005638d0(dest);
      return -1;
    }
    iVar5 = updateEnvironTable(dest);
  }
  return iVar5;
}
