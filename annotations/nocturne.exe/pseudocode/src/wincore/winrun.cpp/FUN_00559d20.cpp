// Name: wincore_winrun.cpp_FUN_00559d20
// Address: 00559d20
// Address Range: [[00559d20, 00559d95]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_00559d20(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wincore_winrun_cpp_FUN_00559d20(void)

{
  LSTATUS LVar1;
  LPCSTR in_stack_00000004;
  LPCSTR in_stack_00000008;
  LPBYTE in_stack_0000000c;
  HKEY local_10;
  DWORD local_c [2];
  
  *in_stack_0000000c = '\0';
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000002,in_stack_00000004,0,1,&local_10);
  if (LVar1 != 0) {
    return;
  }
  local_c[1] = 1;
  RegQueryValueExA(local_10,in_stack_00000008,(LPDWORD)0x0,local_c + 1,in_stack_0000000c,local_c);
  RegCloseKey(local_10);
  return;
}
