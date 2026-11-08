// Name: FUN_0051a2d0
// Address: 0051a2d0
// Address Range: [[0051a2d0, 0051a391]]
// Convention: unknown
// Signature: void FUN_0051a2d0(int param_1)

#include "nocturne.h"

void FUN_0051a2d0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  *(uint *)(param_1 + 0x1008) = 0;
  *(uint *)(param_1 + 0x1118) = 0;
  *(uint *)(param_1 + 0x111c) = 0;
  *(uint *)(param_1 + 0x112c) = 0xffffffff;
  pcVar2 = "fangs";
  *(uint *)(param_1 + 0x1128) = 0;
  pcVar3 = &DAT_01d33b88;
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1128);
  *(uint *)(param_1 + 0x1120) = *(uint *)(param_1 + 0x1124);
  *(byte *)(param_1 + 0x1018) = 0;
  *(uint *)(param_1 + 0x1130) = 0;
  DAT_01d33b20 = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x1454) = 0xffffffff;
  *(uint *)(param_1 + 0x1010) = 0;
  *(uint *)(param_1 + 0x1458) = 0;
  *(uint *)(param_1 + 0x145c) = 0;
  *(uint *)(param_1 + 0x100c) = 0xffffffff;
  *(uint *)(param_1 + 0x1014) = 0;
  return;
}
