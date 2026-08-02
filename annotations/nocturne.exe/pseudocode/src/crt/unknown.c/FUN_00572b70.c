// Name: crt_unknown.c_FUN_00572b70
// Address: 00572b70
// Address Range: [[00572b70, 00572cad]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00572b70(void)

#include "nocturne.h"

void FUN_00572b70(void)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char local_20 [12];
  long lStack_14;
  
  pcVar1 = getenv("C_FILE_INFO");
  if (pcVar1 != (char *)0x0) {
    while( true ) {
      pcVar5 = pcVar1;
      if (*pcVar1 == '\0') break;
      do {
        pcVar4 = pcVar5;
        if (*pcVar5 == ':') goto LAB_00572bb3;
        if (*pcVar5 == '\0') break;
        pcVar4 = pcVar5 + 1;
        if (*pcVar4 == ':') goto LAB_00572bb3;
        pcVar5 = pcVar5 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_00572bb3:
      _strncpy(local_20,pcVar1,(int)pcVar4 - (int)pcVar1);
      local_20[(int)pcVar4 - (int)pcVar1] = '\0';
      pcVar4 = pcVar4 + 1;
      lVar2 = strtol(local_20,(char **)0x0,0x10);
      pcVar1 = pcVar4;
      do {
        pcVar5 = pcVar1;
        if (*pcVar1 == ':') goto LAB_00572bfe;
        if (*pcVar1 == '\0') break;
        pcVar5 = pcVar1 + 1;
        if (*pcVar5 == ':') goto LAB_00572bfe;
        pcVar1 = pcVar1 + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_00572bfe:
      _strncpy(local_20,pcVar4,(int)pcVar5 - (int)pcVar4);
      local_20[(int)pcVar5 - (int)pcVar4] = '\0';
      pcVar5 = pcVar5 + 1;
      lStack_14 = strtol(local_20,(char **)0x0,0x10);
      pcVar4 = pcVar5;
      do {
        pcVar1 = pcVar4;
        if (*pcVar4 == '*') goto LAB_00572c4b;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 == '*') goto LAB_00572c4b;
        pcVar4 = pcVar4 + 2;
      } while (*pcVar1 != '\0');
      pcVar1 = (char *)0x0;
LAB_00572c4b:
      _strncpy(local_20,pcVar5,(int)pcVar1 - (int)pcVar5);
      local_20[(int)pcVar1 - (int)pcVar5] = '\0';
      lVar3 = strtol(local_20,(char **)0x0,0x10);
      FUN_0056e09c(lStack_14,lVar2);
      pcVar1 = pcVar1 + 1;
      FUN_0056f278(lVar2,lVar3);
    }
    putenv_internal("C_FILE_INFO=");
  }
  return;
}
