// Name: crt_file.c_normalize_path_separator_FUN_005febe0
// Address: 005febe0
// Address Range: [[005febe0, 005febfb]]
// Convention: __cdecl
// Signature: wchar_t __cdecl crt_file_c_normalize_path_separator_FUN_005febe0(wchar_t ch,wchar_t *preferred_separator)

#include "nocturne.h"

wchar_t __cdecl
crt_file_c_normalize_path_separator_FUN_005febe0(wchar_t ch,wchar_t *preferred_separator)

{
  ushort in_stack_00000006;
  
  if ((_ch == 0x5c) || (_ch == 0x2f)) {
    if (*(int *)preferred_separator == 0) {
      *(int *)preferred_separator = _ch;
    }
    _ch = *(int *)preferred_separator;
  }
  return (wchar_t)_ch;
}
