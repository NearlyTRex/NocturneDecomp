// Name: engine_pod.cpp_FUN_0053c750
// Address: 0053c750
// Address Range: [[0053c750, 0053c7f7]]
// Convention: unknown
// Signature: void engine_pod_cpp_FUN_0053c750(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_pod_cpp_FUN_0053c750(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte auStack_310 [512];
  char acStack_110 [256];
  
  iVar4 = 0;
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      pcVar6 = acStack_110;
      pcVar5 = (char *)(piVar3[1] + 4);
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar2 = engine_pod_cpp_FUN_0053b250(piVar3[1],acStack_110,auStack_310);
      if (iVar2 == 0) {
        _DAT_01d1d404 = 0x474;
        _DAT_01d1d400 = "..\\engine\\pod.cpp";
        core_main_c_FUN_005030e0("Can't re-mount %s: %s",acStack_110,auStack_310);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *param_1);
  }
  return;
}
