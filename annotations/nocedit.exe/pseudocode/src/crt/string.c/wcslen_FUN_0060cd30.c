// Name: crt_string.c_wcslen_FUN_0060cd30
// Address: 0060cd30
// Address Range: [[0060cd30, 0060cd50]]
// Convention: __cdecl
// Signature: ulong crt_string.c_wcslen_FUN_0060cd30(LPWSTR str)

#include "nocturne.h"

ulong __cdecl crt_string_c_wcslen_FUN_0060cd30(LPWSTR str)

{
  WCHAR *pWVar1;
  WCHAR WVar2;
  LPWSTR pWVar3;
  
  WVar2 = *str;
  pWVar3 = str;
  while (WVar2 != L'\0') {
    pWVar1 = pWVar3 + 1;
    pWVar3 = pWVar3 + 1;
    WVar2 = *pWVar1;
  }
  return (int)pWVar3 - (int)str >> 1;
}
