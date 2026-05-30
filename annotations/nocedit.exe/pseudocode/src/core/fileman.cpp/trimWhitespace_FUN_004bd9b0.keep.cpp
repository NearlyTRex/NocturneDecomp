// Name: core_fileman.cpp_trimWhitespace_FUN_004bd9b0
// Address: 004bd9b0
// MANUAL RECONSTRUCTION
// Address Range: [[004bd9b0, 004bda14]]
// Convention: __cdecl
// Signature: void __cdecl core_fileman_cpp_trimWhitespace_FUN_004bd9b0(char *str)

#include "nocturne.h"

void __cdecl core_fileman_cpp_trimWhitespace_FUN_004bd9b0(char *str)

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
