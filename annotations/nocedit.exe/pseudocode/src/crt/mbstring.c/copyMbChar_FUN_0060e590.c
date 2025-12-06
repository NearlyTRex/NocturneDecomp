// Name: crt_mbstring.c_copyMbChar_FUN_0060e590
// Address: 0060e590
// Address Range: [[0060e590, 0060e5c8]]
// Convention: __cdecl
// Signature: void crt_mbstring.c_copyMbChar_FUN_0060e590(char * dest, char * src)

#include "nocturne.h"

void __cdecl crt_mbstring_c_copyMbChar_FUN_0060e590(char *dest,char *src)

{
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*src] & 1U) != 0)) {
    *dest = *src;
    dest[1] = src[1];
    return;
  }
  *dest = *src;
  return;
}
