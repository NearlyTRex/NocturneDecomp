// Name: crt_locale.c_wchar_to_bytes_FUN_0056da30
// Address: 0056da30
// Address Range: [[0056da30, 0056da4d]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_locale_c_wchar_to_bytes_FUN_0056da30(wchar_t character,char *output_buffer)

#include "nocturne.h"

void __watcallStack wchar_to_bytes(wchar_t character,char *output_buffer)

{
  char cVar1;
  
  cVar1 = (char)((ushort)character >> 8);
  if (cVar1 != '\0') {
    output_buffer[1] = (char)character;
    *output_buffer = cVar1;
    return;
  }
  *output_buffer = (char)character;
  return;
}
