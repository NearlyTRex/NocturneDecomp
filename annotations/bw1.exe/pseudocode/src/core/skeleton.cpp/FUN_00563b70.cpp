// Name: core_skeleton.cpp_FUN_00563b70
// Address: 00563b70
// Address Range: [[00563b70, 00563ba6]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00563b70(int param_1,char *param_2)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00563b70(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 0x355c);
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x35ac) = 0;
  return;
}
