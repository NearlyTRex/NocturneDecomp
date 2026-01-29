// Name: crt_string.c_mb_get_last_char_FUN_00605aa0
// Address: 00605aa0
// Address Range: [[00605aa0, 00605b22]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_mb_get_last_char_FUN_00605aa0(char *start,char *end)

#include "nocturne.h"

char * __cdecl mb_get_last_char(char *start,char *end)

{
  byte *pbVar1;
  char *pcVar2;
  
  if (start < end) {
    pbVar1 = (byte *)(end + -1);
    if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[*pbVar1] & 1U) != 0)) {
      return end + -2;
    }
    while (pbVar1 = pbVar1 + -1, start <= pbVar1) {
      if ((g_MultibyteLocaleActive == 0) || ((g_LeadByteTable[*pbVar1] & 1U) == 0)) break;
    }
    pcVar2 = end + (-1 - ((int)end - (int)pbVar1) % 2);
  }
  else {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}
