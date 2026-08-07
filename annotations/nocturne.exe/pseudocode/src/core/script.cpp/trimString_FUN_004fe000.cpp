// Name: core_script.cpp_trimString_FUN_004fe000
// Address: 004fe000
// Address Range: [[004fe000, 004fe064]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_trimString_FUN_004fe000(char *str)

#include "nocturne.h"

void __cdecl core_script_cpp_trimString_FUN_004fe000(char *str)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  
  uVar3 = 0xffffffff;
  pcVar2 = str;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = str + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  str[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*str + 1)] & 2) != 0) {
    memmove(str,str + 1,n);
    n = n - 1;
  }
  return;
}
