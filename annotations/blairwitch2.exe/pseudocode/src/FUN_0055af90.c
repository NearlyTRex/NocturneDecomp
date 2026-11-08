// Name: FUN_0055af90
// Address: 0055af90
// Address Range: [[0055af90, 0055b041]]
// Convention: unknown
// Signature: float FUN_0055af90(undefined4 param_1,char *param_2)

#include "nocturne.h"

float FUN_0055af90(uint param_1,char *param_2)

{
  char cVar1;
  double dVar2;
  int iVar3;
  char *pcVar4;
  char local_160 [348];
  
  FUN_0054fcd0(local_160);
  pcVar4 = local_160;
  cVar1 = *param_2;
  while ((((cVar1 != '\0' && (cVar1 = *param_2, cVar1 != '@')) && (cVar1 != '*')) &&
         (((&DAT_0061ed94)[(byte)(cVar1 + 1)] & 2) == 0))) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar4 = cVar1;
    cVar1 = *param_2;
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = '\0';
  iVar3 = FUN_005519e0(local_160);
  if (iVar3 == 0) {
    return -1.0;
  }
  dVar2 = (double)FUN_0054fd20(local_160);
  return (float)dVar2;
}
