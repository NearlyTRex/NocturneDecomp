// Name: engine_fileio.cpp_trimWhitespace_FUN_004b1d40
// Address: 004b1d40
// MANUAL RECONSTRUCTION
// Address Range: [[004b1d40, 004b1da4]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_trimWhitespace_FUN_004b1d40(char *string)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_trimWhitespace_FUN_004b1d40(char *string)

{
  char *pcVar2;
  SIZE_T n;

  n = strlen(string);
  if (0 < (int)n) {
    pcVar2 = string + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  string[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*string + 1)] & 2) != 0) {
    memmove(string,string + 1,n);
    n = n - 1;
  }
  return;
}
