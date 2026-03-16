// Name: crt_file.c_normalize_path_separator_FUN_005febe0
// Address: 005febe0
// Address Range: [[005febe0, 005febfb]]
// Convention: __cdecl
// Signature: int __cdecl crt_file_c_normalize_path_separator_FUN_005febe0(int ch,int *preferred_separator)

#include "nocturne.h"

int __cdecl normalize_path_separator(int ch,int *preferred_separator)

{
  if ((ch == 0x5c) || (ch == 0x2f)) {
    if (*preferred_separator == 0) {
      *preferred_separator = ch;
    }
    ch = *preferred_separator;
  }
  return ch;
}
