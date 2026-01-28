// Name: crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c
// Address: 00602f7c
// Address Range: [[00602f7c, 00602ff7]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_WideStringToMultiByteLen_FUN_00602f7c (wchar_t *wide_string_offset,ushort segment,int max_chars)

#include "nocturne.h"

int __cdecl
crt_stdio_c_WideStringToMultiByteLen_FUN_00602f7c
          (wchar_t *wide_string_offset,ushort segment,int max_chars)

{
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  byte local_14 [8];
  
  iVar3 = 0;
  if (max_chars == -1) {
    while (wVar1 = *wide_string_offset, wVar1 != L'\0') {
      wide_string_offset = wide_string_offset + 1;
      iVar2 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                        ((wchar_t)local_14,(char *)(uint)(ushort)wVar1);
      if (iVar2 != -1) {
        iVar3 = iVar3 + iVar2;
      }
    }
  }
  else {
    while ((wVar1 = *wide_string_offset, wVar1 != L'\0' && (iVar3 <= max_chars))) {
      wide_string_offset = wide_string_offset + 1;
      iVar2 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                        ((wchar_t)local_14,(char *)(uint)(ushort)wVar1);
      if (iVar2 != -1) {
        iVar3 = iVar3 + iVar2;
      }
    }
    if (max_chars < iVar3) {
      return max_chars;
    }
  }
  return iVar3;
}
