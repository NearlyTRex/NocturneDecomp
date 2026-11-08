// Name: FUN_00540d50
// Address: 00540d50
// Address Range: [[00540d50, 00540db4]]
// Convention: unknown
// Signature: void FUN_00540d50(int param_1)

#include "nocturne.h"

void FUN_00540d50(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  param_1 = param_1 + 0x1fae8;
  FUN_004f7050(param_1);
  pcVar3 = "BaronProxy";
  pcVar2 = (char *)FUN_0040c2b0("CBaronWeapon");
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  FUN_004f7690(param_1,pcVar2,1);
  FUN_004f8dc0(param_1,0,5,1);
  return;
}
