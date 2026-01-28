// Name: crt_string.c_wcsdup_FUN_0060a660
// Address: 0060a660
// Address Range: [[0060a660, 0060a699]]
// Convention: __watcallRegister
// Signature: WCHAR * crt_string_c_wcsdup_FUN_0060a660(WCHAR *str)

#include "nocturne.h"

WCHAR * crt_string_c_wcsdup_FUN_0060a660(WCHAR *str)

{
  ulong uVar1;
  WCHAR *dest;
  LPWSTR in_stack_00000004;
  
  uVar1 = crt_string_c_wcslen_FUN_0060cd30(in_stack_00000004);
  uVar1 = (uVar1 + 1) * 2;
  dest = crt_memory_c_malloc_FUN_00601bb0(uVar1);
  if (dest != (WCHAR *)0x0) {
    crt_string_c_memcpy_FUN_0060cd60(dest,in_stack_00000004,uVar1);
  }
  return dest;
}
