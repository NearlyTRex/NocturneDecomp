// Name: crt_unknown.c_FUN_005740b0
// Address: 005740b0
// Address Range: [[005740b0, 00574260]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005740b0(wchar_t *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005740b0(wchar_t *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  void *ptr;
  void *ptr_00;
  char *dest;
  
  pwVar1 = (wchar_t *)FUN_00574540(param_1,0x3d);
  if (pwVar1 == (wchar_t *)0x0) {
    iVar2 = -1;
  }
  else {
    if (pwVar1 == param_1) {
      return -1;
    }
    iVar2 = ((int)pwVar1 - (int)param_1 >> 1) * 2;
    ptr = malloc(iVar2 + 2);
    if (ptr == (void *)0x0) {
      return -1;
    }
    FUN_00571410(ptr,param_1,iVar2);
    *(ushort *)((int)ptr + iVar2) = 0;
    iVar2 = FUN_005713e0(pwVar1 + 1);
    if (iVar2 == 0) {
      ptr_00 = (void *)0x0;
    }
    else {
      iVar2 = iVar2 * 2;
      ptr_00 = malloc(iVar2 + 2);
      if (ptr_00 == (void *)0x0) {
        free(ptr);
        return -1;
      }
      FUN_00571410(ptr_00,pwVar1 + 1,iVar2);
      *(ushort *)((int)ptr_00 + iVar2) = 0;
    }
    iVar2 = FUN_00574570(ptr,ptr_00);
    free(ptr);
    free(ptr_00);
    if (iVar2 == 0) {
      return -1;
    }
    if (_DAT_02de54a8 == 0) {
      FUN_00574680();
    }
    iVar2 = FUN_00574264(param_1);
    if (iVar2 != 0) {
      return -1;
    }
    iVar2 = FUN_005713e0(param_1);
    dest = (char *)malloc((iVar2 + 1) * 2);
    if (dest == (char *)0x0) {
      convertWindowsErrorToErrno(5);
      return -1;
    }
    iVar2 = wcstombs(dest,param_1,(iVar2 + 1) * 2);
    if (iVar2 == -1) {
      free(dest);
      return -1;
    }
    iVar2 = updateEnvironTable(dest);
  }
  return iVar2;
}
