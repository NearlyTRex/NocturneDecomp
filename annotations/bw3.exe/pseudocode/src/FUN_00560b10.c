// Name: FUN_00560b10
// Address: 00560b10
// Address Range: [[00560b10, 00560bc1]]
// Convention: unknown
// Signature: float FUN_00560b10(undefined4 param_1,char *param_2)

#include "nocturne.h"

float FUN_00560b10(uint param_1,char *param_2)

{
  char cVar1;
  double dVar2;
  int iVar3;
  char *pcVar4;
  char local_160 [348];
  
  FUN_00555840(local_160);
  pcVar4 = local_160;
  cVar1 = *param_2;
  while ((((cVar1 != '\0' && (cVar1 = *param_2, cVar1 != '@')) && (cVar1 != '*')) &&
         (((&DAT_006074b8)[(byte)(cVar1 + 1)] & 2) == 0))) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar4 = cVar1;
    cVar1 = *param_2;
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = '\0';
  iVar3 = FUN_00557570(local_160);
  if (iVar3 == 0) {
    return -1.0;
  }
  dVar2 = (double)FUN_00555890(local_160);
  return (float)dVar2;
}
