// Name: crt_env.c_getenv_FUN_005bac90
// Address: 005bac90
// Address Range: [[005bac90, 005bacea]]
// Convention: __cdecl
// Signature: char * __cdecl crt_env_c_getenv_FUN_005bac90(char *name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl getenv(char *name)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  
  if ((_DAT_026807e4 != (int *)0x0) && (name != (char *)0x0)) {
    uVar4 = 0xffffffff;
    pcVar7 = name;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar4 - 1;
    for (piVar6 = _DAT_026807e4; iVar2 = *piVar6, iVar2 != 0; piVar6 = piVar6 + 1) {
      iVar3 = FUN_005c1b50(iVar2,name,iVar5);
      if ((iVar3 == 0) && (*(char *)(iVar5 + iVar2) == '=')) {
        return (char *)(~uVar4 + iVar2);
      }
    }
  }
  return (char *)0x0;
}
