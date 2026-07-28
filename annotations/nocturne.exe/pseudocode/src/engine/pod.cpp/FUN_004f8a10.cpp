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
  CPodFile *pCVar6;
  int iVar7;
  int *piVar8;
  SFoundFileInfo *pSVar9;
  SFoundFileInfo local_220;
  
  pSVar9 = &local_220;
  do {
    cVar1 = *param_2;
    pSVar9->found_path[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    *(char *)((int)pSVar9 + 1) = cVar1;
    pSVar9 = (SFoundFileInfo *)((int)pSVar9 + 2);
  } while (cVar1 != '\0');
  iVar3 = engine_dosio_cpp_findFileNormally_FUN_00456800(&local_220);
  if (iVar3 != 0) {
    iVar3 = 0;
    piVar8 = param_1;
    if (0 < *param_1) {
      do {
        iVar4 = _stricmp((char *)(piVar8[1] + 4),local_220.target_path);
        if (iVar4 == 0) {
          if ((CPodFile *)piVar8[1] != (CPodFile *)0x0) {
            pCVar6 = engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0((CPodFile *)piVar8[1],0);
            FUN_00564494(pCVar6);
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
