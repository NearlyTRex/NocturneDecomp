// Name: core_script.cpp_trimString_FUN_00559360
// Address: 00559360
// MANUAL RECONSTRUCTION
// Address Range: [[00559360, 005593c4]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_trimString_FUN_00559360(char *str)

#include "nocturne.h"

void __cdecl core_script_cpp_trimString_FUN_00559360(char *str)

{
  char *pcVar2;
  SIZE_T n;

  n = strlen(str);
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
