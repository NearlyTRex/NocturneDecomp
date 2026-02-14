// Name: crt_unknown.c_FUN_0060fb40
// Address: 0060fb40
// Address Range: [[0060fb40, 0060fcf0]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0060fb40(LPWSTR param_1)

#include "nocturne.h"

int FUN_0060fb40(LPWSTR param_1)

{
  SIZE_T SVar1;
  LPWSTR pWVar2;
  int iVar3;
  void *dest;
  ulong uVar4;
  void *dest_00;
  char *dest_01;
  
  pWVar2 = (LPWSTR)FUN_006107c0(param_1,0x3d);
  if (pWVar2 == (LPWSTR)0x0) {
    iVar3 = -1;
  }
  else {
    if (pWVar2 == param_1) {
      return -1;
    }
    SVar1 = ((int)pWVar2 - (int)param_1 >> 1) * 2;
    dest = malloc(SVar1 + 2);
    if (dest == (void *)0x0) {
      return -1;
    }
    memcpy(dest,param_1,SVar1);
    *(ushort *)((int)dest + SVar1) = 0;
    uVar4 = wcslen(pWVar2 + 1);
    if (uVar4 == 0) {
      dest_00 = (void *)0x0;
    }
    else {
      SVar1 = uVar4 * 2;
      dest_00 = malloc(SVar1 + 2);
      if (dest_00 == (void *)0x0) {
        free(dest);
        return -1;
      }
      memcpy(dest_00,pWVar2 + 1,SVar1);
      *(ushort *)((int)dest_00 + SVar1) = 0;
    }
    iVar3 = FUN_006107f0(dest,dest_00);
    free(dest);
    free(dest_00);
    if (iVar3 == 0) {
      return -1;
    }
    if (g_EnvironInitialized == 0) {
      FUN_00610900();
    }
    iVar3 = FUN_0060fcf4(param_1);
    if (iVar3 != 0) {
      return -1;
    }
    uVar4 = wcslen(param_1);
    dest_01 = malloc((uVar4 + 1) * 2);
    if (dest_01 == (char *)0x0) {
      convertWindowsErrorToErrno(5);
      return -1;
    }
    iVar3 = wcstombs(dest_01,param_1,(uVar4 + 1) * 2);
    if (iVar3 == -1) {
      free(dest_01);
      return -1;
    }
    iVar3 = updateEnvironTable(dest_01);
  }
  return iVar3;
}
