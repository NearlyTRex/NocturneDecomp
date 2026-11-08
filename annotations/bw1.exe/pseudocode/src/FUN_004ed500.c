// Name: FUN_004ed500
// Address: 004ed500
// Address Range: [[004ed500, 004ed622]]
// Convention: unknown
// Signature: int FUN_004ed500(undefined4 param_1)

#include "nocturne.h"

int FUN_004ed500(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00531670(param_1);
  *(byte ***)(iVar2 + 0x154) = &PTR_FUN_00602174;
  FUN_00569f50(iVar2 + 0x158,"hickdad.dfm");
  *(uint *)(iVar2 + 0x1fe64) = 0;
  *(uint *)(iVar2 + 0x1fe6c) = 0;
  pcVar3 = "true";
  *(uint *)(iVar2 + 0x1fe70) = 0;
  *(uint *)(iVar2 + 0x1fe74) = 0;
  pcVar4 = (char *)(iVar2 + 0x1fabc);
  *(uint *)(iVar2 + 0x1fab8) = 0x40a00000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x1fe78) = 0;
  *(uint *)(iVar2 + 0x26fc) = 0;
  *(uint *)(iVar2 + 0x1fe90) = 0;
  *(uint *)(iVar2 + 0x1fe94) = 0;
  *(byte *)(iVar2 + 0x1fb20) = 0;
  *(byte *)(iVar2 + 0x1fb40) = 0;
  *(byte *)(iVar2 + 0x1fba4) = 0;
  *(byte *)(iVar2 + 0x1fc08) = 0;
  *(byte *)(iVar2 + 0x1fc6c) = 0;
  *(byte *)(iVar2 + 0x1fcd0) = 0;
  *(byte *)(iVar2 + 0x1fd34) = 0;
  *(uint *)(iVar2 + 0x1fe98) = 0;
  *(uint *)(iVar2 + 0x1fe9c) = 0;
  *(uint *)(iVar2 + 0x1fe8c) = 0;
  *(byte *)(iVar2 + 0x2544) = 0;
  *(byte *)(iVar2 + 0x1fd98) = 0;
  *(byte *)(iVar2 + 0x1fdfc) = 0;
  *(uint *)(iVar2 + 0x2540) = 1;
  return iVar2;
}
