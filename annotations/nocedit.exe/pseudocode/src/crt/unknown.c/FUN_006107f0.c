// Name: crt_unknown.c_FUN_006107f0
// Address: 006107f0
// Address Range: [[006107f0, 006108f1]]
// Convention: unknown
// Signature: BOOL crt_unknown_c_FUN_006107f0(void)

#include "nocturne.h"

BOOL FUN_006107f0(void)

{
  BOOL BVar1;
  ulong uVar2;
  char *dest;
  char *dest_00;
  int iVar3;
  LPCWSTR in_stack_00000004;
  LPWSTR in_stack_00000008;
  
  if (g_WindowsPlatformVersion < 0x8000) {
    BVar1 = (*g_SetEnvironmentVariableWFunc)(in_stack_00000004,in_stack_00000008);
    return BVar1;
  }
  uVar2 = wcslen(in_stack_00000004);
  uVar2 = uVar2 * 2 + 1;
  dest = malloc(uVar2);
  BVar1 = 0;
  if (dest != (char *)0x0) {
    dest_00 = (char *)0x0;
    if (in_stack_00000008 != (LPWSTR)0x0) {
      uVar2 = wcslen(in_stack_00000008);
      uVar2 = uVar2 * 2 + 1;
      dest_00 = malloc(uVar2);
      if (dest_00 == (char *)0x0) {
        free(dest);
        return 0;
      }
    }
    iVar3 = wcstombs(dest,in_stack_00000004,uVar2);
    if (iVar3 == -1) {
      free(dest);
      if (dest_00 != (char *)0x0) {
        free(dest_00);
      }
      return 0;
    }
    if ((dest_00 != (char *)0x0) &&
       (iVar3 = wcstombs(dest_00,in_stack_00000008,uVar2), iVar3 == -1)) {
      free(dest_00);
      return 0;
    }
    BVar1 = (*g_SetEnvironmentVariableAFunc)(dest,dest_00);
    free(dest);
    if (dest_00 != (char *)0x0) {
      free(dest_00);
    }
  }
  return BVar1;
}
