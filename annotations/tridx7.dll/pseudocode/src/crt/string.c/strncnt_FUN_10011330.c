// Name: crt_string.c_strncnt_FUN_10011330
// Address: 10011330
// Address Range: [[10011330, 1001135b]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c_strncnt_FUN_10011330(char *str,int count)

#include "nocturne.h"

int __cdecl strncnt(char *str,int count)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = str;
  iVar1 = count;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*pcVar2 == '\0') goto LAB_10011355;
    pcVar2 = pcVar2 + 1;
  }
  if (*pcVar2 == '\0') {
LAB_10011355:
    count = (int)pcVar2 - (int)str;
  }
  return count;
}
