// Name: crt_startup.c__GET_RTERRMSG_FUN_10008800
// Address: 10008800
// Address Range: [[10008800, 1000882f]]
// Convention: __cdecl
// Signature: char * __cdecl crt_startup_c__GET_RTERRMSG_FUN_10008800(int rterrnum)

#include "nocturne.h"

char * __cdecl _GET_RTERRMSG(int rterrnum)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_10016ff8;
  do {
    if (*piVar2 == rterrnum) break;
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + 1;
  } while (piVar2 < &DAT_10017080);
  if ((&DAT_10016ff8)[iVar1 * 2] == rterrnum) {
    return *(char **)(iVar1 * 8 + 0x10016ffc);
  }
  return (char *)0x0;
}
