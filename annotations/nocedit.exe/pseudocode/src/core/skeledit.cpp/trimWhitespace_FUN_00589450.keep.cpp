// Name: core_skeledit.cpp_trimWhitespace_FUN_00589450
// Address: 00589450
// MANUAL RECONSTRUCTION
// Address Range: [[00589450, 005894be]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_trimWhitespace_FUN_00589450(char *str)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_trimWhitespace_FUN_00589450(char *str)

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
