// Name: crt_unknown.c_normalize_path_separator_FUN_00566250
// Address: 00566250
// Address Range: [[00566250, 0056626b]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_normalize_path_separator_FUN_00566250(int ch,int *preferred_separator)

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
