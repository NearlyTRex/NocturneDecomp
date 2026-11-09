// Name: core_mission.cpp_FUN_004fb380
// Address: 004fb380
// Address Range: [[004fb380, 004fb437]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004fb380(int param_1)

#include "nocturne.h"

void core_mission_cpp_FUN_004fb380(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  *(uint *)(param_1 + 0x1008) = 0;
  *(uint *)(param_1 + 0x1114) = 0;
  *(uint *)(param_1 + 0x1118) = 0;
  *(uint *)(param_1 + 0x1128) = 0xffffffff;
  pcVar2 = ">test_logo" + 1;
  *(uint *)(param_1 + 0x1124) = 0;
  pcVar3 = &DAT_01d1c698;
  *(uint *)(param_1 + 0x1120) = *(uint *)(param_1 + 0x1124);
  *(uint *)(param_1 + 0x111c) = *(uint *)(param_1 + 0x1120);
  *(byte *)(param_1 + 0x1014) = 0;
  *(uint *)(param_1 + 0x112c) = 0;
  DAT_01d1c630 = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x1450) = 0xffffffff;
  *(uint *)(param_1 + 0x1010) = 0;
  *(uint *)(param_1 + 0x1454) = 0;
  *(uint *)(param_1 + 0x1458) = 0;
  *(uint *)(param_1 + 0x100c) = 0xffffffff;
  return;
}
