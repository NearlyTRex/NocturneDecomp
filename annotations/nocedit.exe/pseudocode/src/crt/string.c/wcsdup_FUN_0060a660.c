// Name: crt_string.c_wcsdup_FUN_0060a660
// Address: 0060a660
// Address Range: [[0060a660, 0060a699]]
// Convention: __watcallRegister
// Signature: WCHAR * __watcallRegister crt_string_c_wcsdup_FUN_0060a660(WCHAR *str)

#include "nocturne.h"

WCHAR * __watcallRegister wcsdup(WCHAR *str)

{
  ulong uVar1;
  WCHAR *dest;
  LPWSTR in_stack_00000004;
  
  uVar1 = wcslen(in_stack_00000004);
  uVar1 = (uVar1 + 1) * 2;
  dest = malloc(uVar1);
  if (dest != (WCHAR *)0x0) {
    memcpy(dest,in_stack_00000004,uVar1);
  }
  return dest;
}
