// Name: engine_pod.cpp_FUN_004f8a10
// Address: 004f8a10
// Address Range: [[004f8a10, 004f8ae3]]
// Convention: unknown
// Signature: void engine_pod_cpp_FUN_004f8a10(int *param_1,char *param_2)

#include "nocturne.h"

void engine_pod_cpp_FUN_004f8a10(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  char local_220 [256];
  byte local_120 [276];
  
  pcVar9 = local_220;
  do {
    cVar1 = *param_2;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  iVar3 = engine_dosio_cpp_findFileNormally_FUN_00456800(local_220);
  if (iVar3 != 0) {
    iVar3 = 0;
    piVar8 = param_1;
    if (0 < *param_1) {
      do {
        iVar4 = _stricmp(piVar8[1] + 4,local_120);
        if (iVar4 == 0) {
          if (piVar8[1] != 0) {
            uVar6 = engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(piVar8[1],0);
            FUN_00564494(uVar6);
          }
          piVar5 = param_1 + iVar3;
          for (iVar4 = iVar3; iVar2 = *param_1, iVar7 = iVar2 + -1, iVar4 < iVar7; iVar4 = iVar4 + 1
              ) {
            piVar5[1] = piVar5[2];
            piVar5 = piVar5 + 1;
          }
          *param_1 = iVar7;
          param_1[iVar2] = 0;
        }
        else {
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 1;
        }
      } while (iVar3 < *param_1);
    }
    engine_texture_cpp_FUN_005459f0();
  }
  return;
}
