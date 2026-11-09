// Name: unkafter_2d.cpp_FUN_005b0a70
// Address: 005b0a70
// Address Range: [[005b0a70, 005b0bad]]
// Convention: unknown
// Signature: void unkafter_2d_cpp_FUN_005b0a70(void)

#include "nocturne.h"

void unkafter_2d_cpp_FUN_005b0a70(void)

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
        if (*pcVar5 == ':') goto LAB_005b0ab3;
        if (*pcVar5 == '\0') break;
        pcVar4 = pcVar5 + 1;
        if (*pcVar4 == ':') goto LAB_005b0ab3;
        pcVar5 = pcVar5 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_005b0ab3:
      _strncpy(acStack_20,pcVar1,(int)pcVar4 - (int)pcVar1);
      acStack_20[(int)pcVar4 - (int)pcVar1] = '\0';
      pcVar4 = pcVar4 + 1;
      uVar2 = unkafter_2d_cpp_FUN_005b121c(acStack_20,0,0x10);
      pcVar1 = pcVar4;
      do {
        pcVar5 = pcVar1;
        if (*pcVar1 == ':') goto LAB_005b0afe;
        if (*pcVar1 == '\0') break;
        pcVar5 = pcVar1 + 1;
        if (*pcVar5 == ':') goto LAB_005b0afe;
        pcVar1 = pcVar1 + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_005b0afe:
      _strncpy(acStack_20,pcVar4,(int)pcVar5 - (int)pcVar4);
      acStack_20[(int)pcVar5 - (int)pcVar4] = '\0';
      pcVar5 = pcVar5 + 1;
      uStack_14 = unkafter_2d_cpp_FUN_005b121c(acStack_20,0,0x10);
      pcVar4 = pcVar5;
      do {
        pcVar1 = pcVar4;
        if (*pcVar4 == '*') goto LAB_005b0b4b;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 == '*') goto LAB_005b0b4b;
        pcVar4 = pcVar4 + 2;
      } while (*pcVar1 != '\0');
      pcVar1 = (char *)0x0;
LAB_005b0b4b:
      _strncpy(acStack_20,pcVar5,(int)pcVar1 - (int)pcVar5);
      acStack_20[(int)pcVar1 - (int)pcVar5] = '\0';
      uVar3 = unkafter_2d_cpp_FUN_005b121c(acStack_20,0,0x10);
      FUN_005aba8c(uStack_14,uVar2);
      pcVar1 = pcVar1 + 1;
      FUN_005ab978(uVar2,uVar3);
    }
    unkafter_2d_cpp_FUN_005b12a0("C_FILE_INFO=");
  }
  return;
}
