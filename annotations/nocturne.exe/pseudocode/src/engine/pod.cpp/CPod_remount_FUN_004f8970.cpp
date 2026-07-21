// Name: engine_pod.cpp_CPod_remount_FUN_004f8970
// Address: 004f8970
// Address Range: [[004f8970, 004f8a02]]
// Convention: unknown
// Signature: void engine_pod_cpp_CPod_remount_FUN_004f8970(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_pod_cpp_CPod_remount_FUN_004f8970(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char local_110 [256];
  
  iVar4 = 0;
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      pcVar5 = (char *)(piVar3[1] + 4);
      pcVar6 = local_110;
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar2 = FUN_004f7ae0(piVar3[1],local_110);
      if (iVar2 == 0) {
        _DAT_01cc4804 = 0x280;
        _DAT_01cc4800 = "..\\engine\\pod.cpp";
        FUN_004c8440("Can't re-mount %s",local_110);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *param_1);
  }
  return;
}
