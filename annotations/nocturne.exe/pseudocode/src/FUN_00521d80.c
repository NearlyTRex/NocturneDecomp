// Name: FUN_00521d80
// Address: 00521d80
// Address Range: [[00521d80, 00521e0d]]
// Convention: unknown
// Signature: void FUN_00521d80(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00521d80(void)

{
  char cVar1;
  byte *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char *in_stack_00000004;
  
  bVar6 = 0;
  puVar2 = (byte *)strstr();
  pcVar4 = in_stack_00000004;
  if (puVar2 != (byte *)0x0) {
    *puVar2 = 0;
  }
  do {
    pcVar5 = pcVar4;
    if (*pcVar4 == '\0') goto joined_r0x00521dbc;
    if (*pcVar4 == '\0') break;
    pcVar5 = pcVar4 + 1;
    if (*pcVar5 == '\0') goto joined_r0x00521dbc;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
joined_r0x00521dbc:
  while ((in_stack_00000004 < pcVar5 && (((&DAT_005c168c)[(byte)(pcVar5[-1] + 1)] & 2) != 0))) {
    pcVar5 = pcVar5 + -1;
  }
  *pcVar5 = '\0';
  do {
    if (((&DAT_005c168c)[(byte)(*in_stack_00000004 + 1)] & 2) == 0) {
      return;
    }
    iVar3 = -1;
    pcVar4 = in_stack_00000004;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    memmove();
  } while( true );
}
