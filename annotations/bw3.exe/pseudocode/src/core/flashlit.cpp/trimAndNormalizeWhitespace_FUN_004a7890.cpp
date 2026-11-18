// Name: core_flashlit.cpp_trimAndNormalizeWhitespace_FUN_004a7890
// Address: 004a7890
// Address Range: [[004a7890, 004a791f]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_trimAndNormalizeWhitespace_FUN_004a7890(char *text)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_trimAndNormalizeWhitespace_FUN_004a7890(char *text)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  int iVar4;
  
  uVar3 = 0xffffffff;
  pcVar2 = text;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = text + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  text[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*text + 1)] & 2) != 0) {
    memmove(text,text + 1,n);
    n = n - 1;
  }
  iVar4 = 0;
  if (0 < (int)n) {
    do {
      while ((g_CharacterClassificationTable[(byte)(*text + 1)] & 2) != 0) {
        *text = ' ';
        iVar4 = iVar4 + 1;
        text = text + 1;
        if ((int)n <= iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      text = text + 1;
    } while (iVar4 < (int)n);
  }
  return;
}
