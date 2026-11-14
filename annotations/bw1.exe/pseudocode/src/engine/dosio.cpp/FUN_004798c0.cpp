// Name: engine_dosio.cpp_FUN_004798c0
// Address: 004798c0
// Address Range: [[004798c0, 0047994b]]
// Convention: unknown
// Signature: bool engine_dosio_cpp_FUN_004798c0(char *param_1)

#include "nocturne.h"

bool engine_dosio_cpp_FUN_004798c0(char *param_1)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  byte local_114 [256];
  uint local_14;
  
  pbVar5 = local_114;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    *pbVar5 = cVar1;
    pbVar2 = local_114;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pbVar5[1] = cVar1;
    pbVar5 = pbVar5 + 2;
    pbVar2 = local_114;
  } while (cVar1 != '\0');
  while (local_114[0] != 0) {
    local_14 = (uint)*pbVar2;
    if ((local_14 == 0x2f) || (local_14 == 0x5c)) {
      *pbVar2 = 0;
      _mkdir((char *)local_114);
      *pbVar2 = (byte)local_14;
    }
    local_114[0] = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  iVar3 = _mkdir(param_1);
  return iVar3 == 0;
}
