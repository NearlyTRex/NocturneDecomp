// Name: crt_unknown.c_FUN_00574570
// Address: 00574570
// Address Range: [[00574570, 00574671]]
// Convention: unknown
// Signature: BOOL crt_unknown_c_FUN_00574570(LPCWSTR param_1,LPCWSTR param_2)

#include "nocturne.h"

BOOL FUN_00574570(LPCWSTR param_1,LPCWSTR param_2)

{
  BOOL BVar1;
  int iVar2;
  char *dest;
  char *dest_00;
  ulong size;
  
  if (DAT_005c1d11 < 0x8000) {
    BVar1 = SetEnvironmentVariableW(param_1,param_2);
    return BVar1;
  }
  iVar2 = FUN_005713e0(param_1);
  size = iVar2 * 2 + 1;
  dest = (char *)malloc(size);
  BVar1 = 0;
  if (dest != (char *)0x0) {
    dest_00 = (char *)0x0;
    if (param_2 != (LPCWSTR)0x0) {
      iVar2 = FUN_005713e0(param_2);
      size = iVar2 * 2 + 1;
      dest_00 = (char *)malloc(size);
      if (dest_00 == (char *)0x0) {
        FUN_005638d0(dest);
        return 0;
      }
    }
    iVar2 = wcstombs(dest,param_1,size);
    if (iVar2 == -1) {
      FUN_005638d0(dest);
      if (dest_00 != (char *)0x0) {
        FUN_005638d0(dest_00);
      }
      return 0;
    }
    if ((dest_00 != (char *)0x0) &&
       (iVar2 = wcstombs(dest_00,param_2,size), iVar2 == -1)) {
      FUN_005638d0(dest_00);
      return 0;
    }
    BVar1 = SetEnvironmentVariableA(dest,dest_00);
    FUN_005638d0(dest);
    if (dest_00 != (char *)0x0) {
      FUN_005638d0(dest_00);
    }
  }
  return BVar1;
}
