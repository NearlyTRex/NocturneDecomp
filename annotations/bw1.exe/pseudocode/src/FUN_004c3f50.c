// Name: FUN_004c3f50
// Address: 004c3f50
// Address Range: [[004c3f50, 004c4023]]
// Convention: unknown
// Signature: int FUN_004c3f50(int param_1,char *param_2)

#include "nocturne.h"

int FUN_004c3f50(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = param_2;
  if (*(int *)(param_1 + 0x4210) != 0) {
    do {
      pcVar5 = pcVar4;
      if (*pcVar4 == '\n') goto LAB_004c3fd4;
      if (*pcVar4 == '\0') break;
      pcVar5 = pcVar4 + 1;
      if (*pcVar5 == '\n') goto LAB_004c3fd4;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
LAB_004c3fd4:
    if (pcVar5 == (char *)0x0) {
      iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x4214) + 0x6a44) + 0xc))
                        (*(int *)(param_1 + 0x4214),param_2);
      return iVar3;
    }
  }
  cVar1 = *param_2;
  iVar3 = 0;
  while( true ) {
    if (cVar1 == '\0') {
      return iVar3;
    }
    if (*param_2 == '\n') break;
    iVar2 = FUN_004c4510(param_1,*param_2);
    if (iVar3 < iVar2) {
      iVar3 = FUN_004c4510(param_1,*param_2);
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x41f0);
  do {
    iVar3 = iVar3 + *(int *)(param_1 + 0x41f8) + *(int *)(param_1 + 0x41f0);
    pcVar4 = param_2 + 1;
    do {
      param_2 = pcVar4;
      if (*pcVar4 == '\n') goto LAB_004c3fac;
      if (*pcVar4 == '\0') break;
      param_2 = pcVar4 + 1;
      if (*param_2 == '\n') goto LAB_004c3fac;
      pcVar4 = pcVar4 + 2;
    } while (*param_2 != '\0');
    param_2 = (char *)0x0;
LAB_004c3fac:
    if (param_2 == (char *)0x0) {
      return iVar3;
    }
  } while( true );
}
