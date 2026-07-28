// Name: crt_env.c_getenv_FUN_00566e10
// Address: 00566e10
// Address Range: [[00566e10, 00566e6a]]
// Convention: __cdecl
// Signature: char * __cdecl crt_env_c_getenv_FUN_00566e10(char *name)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl getenv(char *name)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  SIZE_T count;
  uint *puVar4;
  char *pcVar5;
  
  if ((_DAT_02de54a4 != (uint *)0x0) && (name != (char *)0x0)) {
    uVar3 = 0xffffffff;
    pcVar5 = name;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    count = ~uVar3 - 1;
    for (puVar4 = _DAT_02de54a4; pcVar5 = (char *)*puVar4, pcVar5 != (char *)0x0;
        puVar4 = puVar4 + 1) {
      iVar2 = _mbstrnicmp(pcVar5,name,count);
      if ((iVar2 == 0) && (pcVar5[count] == '=')) {
        return pcVar5 + ~uVar3;
      }
    }
  }
  return (char *)0x0;
}
