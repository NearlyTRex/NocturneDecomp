// Name: core_mission.cpp_FUN_004f7c00
// Address: 004f7c00
// Address Range: [[004f7c00, 004f7c27]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004f7c00(undefined4 param_1,char *param_2)

#include "nocturne.h"

void core_mission_cpp_FUN_004f7c00(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01d88308;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
