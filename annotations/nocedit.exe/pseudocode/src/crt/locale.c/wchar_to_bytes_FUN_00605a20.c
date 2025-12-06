// Name: crt_locale.c_wchar_to_bytes_FUN_00605a20
// Address: 00605a20
// Address Range: [[00605a20, 00605a3d]]
// Convention: __watcallStack
// Signature: void crt_locale.c_wchar_to_bytes_FUN_00605a20(wchar_t character, char * output_buffer)

#include "nocturne.h"

void __watcallStack crt_locale_c_wchar_to_bytes_FUN_00605a20(wchar_t character,char *output_buffer)

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
