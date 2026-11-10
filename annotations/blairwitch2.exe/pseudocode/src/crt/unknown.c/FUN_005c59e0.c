// Name: crt_unknown.c_FUN_005c59e0
// Address: 005c59e0
// Address Range: [[005c59e0, 005c5b1d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c59e0(void)

#include "nocturne.h"

void FUN_005c59e0(void)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char acStack_20 [12];
  uint uStack_14;
  
  pcVar1 = getenv("C_FILE_INFO");
  if (pcVar1 != (char *)0x0) {
    while( true ) {
      pcVar5 = pcVar1;
      if (*pcVar1 == '\0') break;
      do {
        pcVar4 = pcVar5;
        if (*pcVar5 == ':') goto LAB_005c5a23;
        if (*pcVar5 == '\0') break;
        pcVar4 = pcVar5 + 1;
        if (*pcVar4 == ':') goto LAB_005c5a23;
        pcVar5 = pcVar5 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_005c5a23:
      _strncpy(acStack_20,pcVar1,(int)pcVar4 - (int)pcVar1);
      acStack_20[(int)pcVar4 - (int)pcVar1] = '\0';
      pcVar4 = pcVar4 + 1;
      uVar2 = FUN_005c618c(acStack_20,0,0x10);
      pcVar1 = pcVar4;
      do {
        pcVar5 = pcVar1;
        if (*pcVar1 == ':') goto LAB_005c5a6e;
        if (*pcVar1 == '\0') break;
        pcVar5 = pcVar1 + 1;
        if (*pcVar5 == ':') goto LAB_005c5a6e;
        pcVar1 = pcVar1 + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_005c5a6e:
      _strncpy(acStack_20,pcVar4,(int)pcVar5 - (int)pcVar4);
      acStack_20[(int)pcVar5 - (int)pcVar4] = '\0';
      pcVar5 = pcVar5 + 1;
      uStack_14 = FUN_005c618c(acStack_20,0,0x10);
      pcVar4 = pcVar5;
      do {
        pcVar1 = pcVar4;
        if (*pcVar4 == '*') goto LAB_005c5abb;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 == '*') goto LAB_005c5abb;
        pcVar4 = pcVar4 + 2;
      } while (*pcVar1 != '\0');
      pcVar1 = (char *)0x0;
LAB_005c5abb:
      _strncpy(acStack_20,pcVar5,(int)pcVar1 - (int)pcVar5);
      acStack_20[(int)pcVar1 - (int)pcVar5] = '\0';
      uVar3 = FUN_005c618c(acStack_20,0,0x10);
      FUN_005c098c(uStack_14,uVar2);
      pcVar1 = pcVar1 + 1;
      FUN_005c0878(uVar2,uVar3);
    }
    FUN_005c6210("C_FILE_INFO=");
  }
  return;
}
