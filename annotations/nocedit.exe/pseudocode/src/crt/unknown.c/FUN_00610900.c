// Name: crt_unknown.c_FUN_00610900
// Address: 00610900
// Address Range: [[00610900, 00610963]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00610900(void)

#include "nocturne.h"

void FUN_00610900(void)

{
  char *pcVar1;
  int iVar2;
  void *ptr;
  char **ppcVar3;
  
  ppcVar3 = g_EnvironmentBlock;
  if (g_EnvironmentBlock != (char **)0x0) {
    while( true ) {
      pcVar1 = *ppcVar3;
      ppcVar3 = ppcVar3 + 1;
      if (pcVar1 == (char *)0x0) break;
      iVar2 = FUN_0060fa90(pcVar1);
      ptr = malloc((iVar2 + 1) * 2);
      if (ptr != (void *)0x0) {
        iVar2 = FUN_0060fac0(ptr,pcVar1,iVar2 + 1);
        if (iVar2 == -1) {
          free(ptr);
        }
        else {
          FUN_0060fcf4(ptr);
        }
      }
    }
  }
  return;
}
