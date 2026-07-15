// Name: crt_string.c__strncnt_FUN_1000c570
// Address: 1000c570
// Address Range: [[1000c570, 1000c59b]]
// Convention: __cdecl
// Signature: size_t __cdecl crt_string_c__strncnt_FUN_1000c570(char *str,size_t count)

#include "nocturne.h"

size_t __cdecl _strncnt(char *str,size_t count)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = str;
  sVar1 = count;
  while (sVar1 != 0) {
    sVar1 = sVar1 - 1;
    if (*pcVar2 == '\0') goto LAB_1000c595;
    pcVar2 = pcVar2 + 1;
  }
  if (*pcVar2 == '\0') {
LAB_1000c595:
    count = (int)pcVar2 - (int)str;
  }
  return count;
}
