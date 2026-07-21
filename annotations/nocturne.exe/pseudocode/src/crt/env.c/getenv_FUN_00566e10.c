// Name: crt_env.c_getenv_FUN_00566e10
// Address: 00566e10
// Address Range: [[00566e10, 00566e6a]]
// Convention: __cdecl
// Signature: int __cdecl crt_env_c_getenv_FUN_00566e10(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl getenv(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  
  if ((_DAT_02de54a4 != (int *)0x0) && (param_1 != (char *)0x0)) {
    uVar4 = 0xffffffff;
    pcVar7 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar4 - 1;
    for (piVar6 = _DAT_02de54a4; iVar2 = *piVar6, iVar2 != 0; piVar6 = piVar6 + 1) {
      iVar3 = FUN_0056dcd0(iVar2,param_1,iVar5);
      if ((iVar3 == 0) && (*(char *)(iVar5 + iVar2) == '=')) {
        return ~uVar4 + iVar2;
      }
    }
  }
  return 0;
}
