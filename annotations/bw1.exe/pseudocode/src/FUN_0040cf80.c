// Name: FUN_0040cf80
// Address: 0040cf80
// Address Range: [[0040cf80, 0040cfb2]]
// Convention: unknown
// Signature: undefined2 FUN_0040cf80(undefined4 param_1,char *param_2)

#include "nocturne.h"

ushort FUN_0040cf80(uint param_1,char *param_2)

{
  char cVar1;
  byte in_AL;
  ushort uVar2;
  
  cVar1 = *param_2;
  uVar2 = CONCAT11(cVar1,in_AL);
  while (cVar1 != '\0') {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    uVar2 = FUN_0040ce20(param_1,cVar1);
    cVar1 = *param_2;
  }
  return uVar2;
}
