// Name: crt_string.c_mb_get_last_char_FUN_0056dab0
// Address: 0056dab0
// Address Range: [[0056dab0, 0056db32]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_mb_get_last_char_FUN_0056dab0(char *start,char *end)

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
