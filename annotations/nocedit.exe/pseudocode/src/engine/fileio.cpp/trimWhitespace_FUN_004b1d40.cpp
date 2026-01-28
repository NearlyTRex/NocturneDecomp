// Name: engine_fileio.cpp_trimWhitespace_FUN_004b1d40
// Address: 004b1d40
// Address Range: [[004b1d40, 004b1da4]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_trimWhitespace_FUN_004b1d40(char *string)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_trimWhitespace_FUN_004b1d40(char *string)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  
  uVar3 = 0xffffffff;
  pcVar2 = string;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = string + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  string[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*string + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(string,string + 1,n);
    n = n - 1;
  }
  return;
}
