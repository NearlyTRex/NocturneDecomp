// Name: FUN_1000f8f0
// Address: 1000f8f0
// Address Range: [[1000f8f0, 1000f94f]]
// Convention: unknown
// Signature: void FUN_1000f8f0(uint param_1,char *param_2,uint param_3,int param_4)

#include "nocturne.h"

void FUN_1000f8f0(uint param_1,char *param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar2 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_1 = -param_1;
    pcVar2 = param_2;
  }
  do {
    pcVar4 = pcVar2;
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / param_3;
    cVar3 = (char)(uVar1 % (ulonglong)param_3);
    if ((uint)(uVar1 % (ulonglong)param_3) < 10) {
      cVar3 = cVar3 + '0';
    }
    else {
      cVar3 = cVar3 + 'W';
    }
    *pcVar4 = cVar3;
    pcVar2 = pcVar4 + 1;
  } while (param_1 != 0);
  pcVar4[1] = '\0';
  do {
    cVar3 = *pcVar4;
    *pcVar4 = *param_2;
    pcVar4 = pcVar4 + -1;
    *param_2 = cVar3;
    param_2 = param_2 + 1;
  } while (param_2 < pcVar4);
  return;
}
