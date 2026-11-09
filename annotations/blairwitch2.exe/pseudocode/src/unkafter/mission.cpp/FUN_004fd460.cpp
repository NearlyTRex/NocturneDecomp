// Name: unkafter_mission.cpp_FUN_004fd460
// Address: 004fd460
// Address Range: [[004fd460, 004fd487]]
// Convention: unknown
// Signature: void unkafter_mission_cpp_FUN_004fd460(undefined4 param_1,char *param_2)

#include "nocturne.h"

void unkafter_mission_cpp_FUN_004fd460(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01d1c698;
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
