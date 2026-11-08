// Name: FUN_005cdce0
// Address: 005cdce0
// Address Range: [[005cdce0, 005cde1d]]
// Convention: unknown
// Signature: void FUN_005cdce0(void)

#include "nocturne.h"

void FUN_005cdce0(void)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte auStack_20 [12];
  uint uStack_14;
  
  pcVar1 = (char *)FUN_005c3050("C_FILE_INFO");
  if (pcVar1 != (char *)0x0) {
    while( true ) {
      pcVar5 = pcVar1;
      if (*pcVar1 == '\0') break;
      do {
        pcVar4 = pcVar5;
        if (*pcVar5 == ':') goto LAB_005cdd23;
        if (*pcVar5 == '\0') break;
        pcVar4 = pcVar5 + 1;
        if (*pcVar4 == ':') goto LAB_005cdd23;
        pcVar5 = pcVar5 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_005cdd23:
      FUN_005c20d0(auStack_20,pcVar1,(int)pcVar4 - (int)pcVar1);
      auStack_20[(int)pcVar4 - (int)pcVar1] = 0;
      pcVar4 = pcVar4 + 1;
      uVar2 = FUN_005ce48c(auStack_20,0,0x10);
      pcVar1 = pcVar4;
      do {
        pcVar5 = pcVar1;
        if (*pcVar1 == ':') goto LAB_005cdd6e;
        if (*pcVar1 == '\0') break;
        pcVar5 = pcVar1 + 1;
        if (*pcVar5 == ':') goto LAB_005cdd6e;
        pcVar1 = pcVar1 + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_005cdd6e:
      FUN_005c20d0(auStack_20,pcVar4,(int)pcVar5 - (int)pcVar4);
      auStack_20[(int)pcVar5 - (int)pcVar4] = 0;
      pcVar5 = pcVar5 + 1;
      uStack_14 = FUN_005ce48c(auStack_20,0,0x10);
      pcVar4 = pcVar5;
      do {
        pcVar1 = pcVar4;
        if (*pcVar4 == '*') goto LAB_005cddbb;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 == '*') goto LAB_005cddbb;
        pcVar4 = pcVar4 + 2;
      } while (*pcVar1 != '\0');
      pcVar1 = (char *)0x0;
LAB_005cddbb:
      FUN_005c20d0(auStack_20,pcVar5,(int)pcVar1 - (int)pcVar5);
      auStack_20[(int)pcVar1 - (int)pcVar5] = 0;
      uVar3 = FUN_005ce48c(auStack_20,0,0x10);
      FUN_005c8c4c(uStack_14,uVar2);
      pcVar1 = pcVar1 + 1;
      FUN_005c8b38(uVar2,uVar3);
    }
    FUN_005ce510("C_FILE_INFO=");
  }
  return;
}
