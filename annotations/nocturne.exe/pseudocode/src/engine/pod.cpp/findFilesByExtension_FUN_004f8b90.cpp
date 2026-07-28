// Name: engine_pod.cpp_findFilesByExtension_FUN_004f8b90
// Address: 004f8b90
// Address Range: [[004f8b90, 004f8d48]]
// Convention: unknown
// Signature: int engine_pod_cpp_findFilesByExtension_FUN_004f8b90(int *param_1,byte *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

int engine_pod_cpp_findFilesByExtension_FUN_004f8b90(int *param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  char *filename;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  byte *pbVar10;
  char *pcVar11;
  byte bVar12;
  char acStack_50 [12];
  char acStack_44 [12];
  int iStack_38;
  int iStack_34;
  SIZE_T SStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  char *pcStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar12 = 0;
  uVar6 = 0xffffffff;
  pbVar10 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar1 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar1 != 0);
  iStack_24 = ~uVar6 - 1;
  iStack_14 = 0;
  iVar4 = 0;
  if (0 < iStack_24) {
    do {
      iVar7 = iVar4 + 1;
      iVar3 = toupper((uint)*param_2);
      iVar5 = iStack_24;
      param_2 = param_2 + 1;
      acStack_44[iVar4] = (char)iVar3;
      iVar4 = iVar7;
    } while (iVar7 < iVar5);
  }
  acStack_44[iStack_24] = '\0';
  iStack_38 = 0;
  if (0 < *param_1) {
    SStack_30 = param_5 - 1;
    iStack_34 = 0;
    do {
      iStack_2c = iStack_34;
      iStack_28 = param_5;
      iStack_20 = 0;
      pcStack_1c = (char *)(iStack_14 * param_5 + param_3);
      for (iStack_18 = 0; iVar4 = *(int *)((int)param_1 + iStack_2c + 4),
          iStack_18 < *(int *)(iVar4 + 0x208); iStack_18 = iStack_18 + 1) {
        filename = *(char **)(*(int *)(iVar4 + 0x20c) + iStack_20);
        uVar6 = 0xffffffff;
        pcVar8 = filename;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
        } while (cVar2 != '\0');
        pcVar8 = filename + ((~uVar6 - 1) - iStack_24);
        pcVar11 = acStack_50;
        do {
          cVar2 = *pcVar8;
          *pcVar11 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar11[1] = cVar2;
          pcVar11 = pcVar11 + 2;
        } while (cVar2 != '\0');
        iVar4 = _strcmp(acStack_50,acStack_44);
        if (iVar4 == 0) {
          iVar4 = 0;
          piVar9 = param_1;
          if (0 < iStack_38) {
            do {
              iVar5 = engine_pod_cpp_CPodFile_findFileIndex_FUN_004f8150
                                ((CPodFile *)piVar9[1],filename);
              if (-1 < iVar5) break;
              iVar4 = iVar4 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar4 < iStack_38);
          }
          pcVar8 = pcStack_1c;
          if (iVar4 == iStack_38) {
            _strncpy(pcStack_1c,filename,SStack_30);
            pcStack_1c = pcVar8 + iStack_28;
            iStack_14 = iStack_14 + 1;
            if (param_4 <= iStack_14) {
              return iStack_14;
            }
          }
        }
        iStack_20 = iStack_20 + 0x14;
      }
      iStack_34 = iStack_34 + 4;
      iStack_38 = iStack_38 + 1;
    } while (iStack_38 < *param_1);
  }
  return iStack_14;
}
