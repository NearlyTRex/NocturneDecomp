// Name: core_script.cpp_trimString_FUN_004fe000
// Address: 004fe000
// Address Range: [[004fe000, 004fe064]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_trimString_FUN_004fe000(char *param_1)

#include "nocturne.h"

void __cdecl core_script_cpp_trimString_FUN_004fe000(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  if (0 < iVar4) {
    pcVar2 = param_1 + iVar4;
    do {
      if (((&DAT_005c168c)[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      iVar4 = iVar4 + -1;
      pcVar2 = pcVar2 + -1;
    } while (0 < iVar4);
  }
  param_1[iVar4] = '\0';
  while (((&DAT_005c168c)[(byte)(*param_1 + 1)] & 2) != 0) {
    memmove(param_1,param_1 + 1,iVar4);
    iVar4 = iVar4 + -1;
  }
  return;
}
