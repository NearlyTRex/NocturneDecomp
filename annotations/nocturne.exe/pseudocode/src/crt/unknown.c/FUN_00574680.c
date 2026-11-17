// Name: crt_unknown.c_FUN_00574680
// Address: 00574680
// Address Range: [[00574680, 005746e3]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00574680(void)

#include "nocturne.h"

void FUN_00574680(void)

{
  char *pcVar1;
  int iVar2;
  void *ptr;
  char **ppcVar3;
  
  ppcVar3 = g_CHAR_PTR_PTR_02de54a4;
  if (g_CHAR_PTR_PTR_02de54a4 != (char **)0x0) {
    while( true ) {
      pcVar1 = *ppcVar3;
      ppcVar3 = ppcVar3 + 1;
      if (pcVar1 == (char *)0x0) break;
      iVar2 = FUN_00574000(pcVar1);
      ptr = malloc((iVar2 + 1) * 2);
      if (ptr != (void *)0x0) {
        iVar2 = FUN_00574030(ptr,pcVar1,iVar2 + 1);
        if (iVar2 == -1) {
          free(ptr);
        }
        else {
          FUN_00574264(ptr);
        }
      }
    }
  }
  return;
}
