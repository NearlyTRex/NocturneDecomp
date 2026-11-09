// Name: core_mission.cpp_FUN_004f5aa0
// Address: 004f5aa0
// Address Range: [[004f5aa0, 004f5b61]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004f5aa0(int param_1)

#include "nocturne.h"

void core_mission_cpp_FUN_004f5aa0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  *(uint *)(param_1 + 0x1008) = 0;
  *(uint *)(param_1 + 0x143c) = 0;
  *(uint *)(param_1 + 0x1440) = 0;
  *(uint *)(param_1 + 0x1450) = 0xffffffff;
  pcVar2 = &DAT_005c8375;
  *(uint *)(param_1 + 0x144c) = 0;
  pcVar3 = &DAT_01d88308;
  *(uint *)(param_1 + 0x1448) = *(uint *)(param_1 + 0x144c);
  *(uint *)(param_1 + 0x1444) = *(uint *)(param_1 + 0x1448);
  *(byte *)(param_1 + 0x133c) = 0;
  *(uint *)(param_1 + 0x1018) = 0;
  DAT_01d882a0 = 0;
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
