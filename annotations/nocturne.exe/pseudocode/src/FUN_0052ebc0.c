// Name: FUN_0052ebc0
// Address: 0052ebc0
// Address Range: [[0052ebc0, 0052ec71]]
// Convention: unknown
// Signature: float FUN_0052ebc0(undefined4 param_1,char *param_2)

#include "nocturne.h"

float FUN_0052ebc0(uint param_1,char *param_2)

{
  char cVar1;
  double dVar2;
  int iVar3;
  char *pcVar4;
  char local_138 [308];
  
  FUN_00525b70(local_138);
  pcVar4 = local_138;
  cVar1 = *param_2;
  while ((((cVar1 != '\0' && (cVar1 = *param_2, cVar1 != '@')) && (cVar1 != '*')) &&
         (((&DAT_005c168c)[(byte)(cVar1 + 1)] & 2) == 0))) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar4 = cVar1;
    cVar1 = *param_2;
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = '\0';
  iVar3 = FUN_005279e0(local_138);
  if (iVar3 == 0) {
    return -1.0;
  }
  dVar2 = (double)FUN_00525bc0(local_138);
  return (float)dVar2;
}
