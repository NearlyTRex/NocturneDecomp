// Name: crt_env.c_getenv_FUN_10010c50
// Address: 10010c50
// Address Range: [[10010c50, 10010ce5]]
// Convention: __cdecl
// Signature: char * __cdecl crt_env_c_getenv_FUN_10010c50(char *name)

#include "nocturne.h"

char * __cdecl getenv(char *name)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (DAT_10016d80 == (int *)0x0) {
    if ((DAT_10016d88 != 0) && (iVar2 = _build_ansi_environ(), iVar2 != 0)) {
      return (char *)0x0;
    }
    if (DAT_10016d80 == (int *)0x0) {
      return (char *)0x0;
    }
  }
  if (name != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = name;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    iVar2 = *DAT_10016d80;
    piVar5 = DAT_10016d80;
    while (iVar2 != 0) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)*piVar5;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      if (((uVar3 < ~uVar4 - 1) && (((char *)*piVar5)[uVar3] == '=')) &&
         (iVar2 = __env_compare((char *)*piVar5,name,uVar3), iVar2 == 0)) {
        return (char *)(*piVar5 + 1 + uVar3);
      }
      piVar5 = piVar5 + 1;
      iVar2 = *piVar5;
    }
  }
  return (char *)0x0;
}
