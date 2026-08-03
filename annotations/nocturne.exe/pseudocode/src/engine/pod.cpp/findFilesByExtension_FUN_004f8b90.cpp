// Name: engine_pod.cpp_findFilesByExtension_FUN_004f8b90
// Address: 004f8b90
// Address Range: [[004f8b90, 004f8d48]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_findFilesByExtension_FUN_004f8b90(CPod *pod,char *extension,char *output_buffer,int max_results,int result_string_length)

#include "nocturne.h"

int __cdecl engine_pod_cpp_findFilesByExtension_FUN_004f8b90(CPod *pod,char *extension,char *output_buffer,int max_results,int result_string_length)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  CPod *pCVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
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
  
  bVar11 = 0;
  uVar5 = 0xffffffff;
  pcVar9 = extension;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  iStack_24 = ~uVar5 - 1;
  iStack_14 = 0;
  iVar3 = 0;
  if (0 < iStack_24) {
    do {
      iVar6 = iVar3 + 1;
      iVar2 = toupper((uint)(byte)*extension);
      iVar4 = iStack_24;
      extension = extension + 1;
      acStack_44[iVar3] = (char)iVar2;
      iVar3 = iVar6;
    } while (iVar6 < iVar4);
  }
  acStack_44[iStack_24] = '\0';
  iStack_38 = 0;
  if (0 < pod->pod_file_count) {
    SStack_30 = result_string_length - 1;
    iStack_34 = 0;
    do {
      iStack_2c = iStack_34;
      iStack_28 = result_string_length;
      iStack_20 = 0;
      pcStack_1c = output_buffer + iStack_14 * result_string_length;
      for (iStack_18 = 0; iVar3 = *(int *)((int)pod->pod_files + iStack_2c),
          iStack_18 < *(int *)(iVar3 + 0x208); iStack_18 = iStack_18 + 1) {
        pcVar9 = *(char **)(*(int *)(iVar3 + 0x20c) + iStack_20);
        uVar5 = 0xffffffff;
        pcVar7 = pcVar9;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
        } while (cVar1 != '\0');
        pcVar7 = pcVar9 + ((~uVar5 - 1) - iStack_24);
        pcVar10 = acStack_50;
        do {
          cVar1 = *pcVar7;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        iVar3 = _strcmp(acStack_50,acStack_44);
        if (iVar3 == 0) {
          iVar3 = 0;
          pCVar8 = pod;
          if (0 < iStack_38) {
            do {
              iVar4 = engine_pod_cpp_CPodFile_findFileIndex_FUN_004f8150
                                (pCVar8->pod_files[0],pcVar9);
              if (-1 < iVar4) break;
              iVar3 = iVar3 + 1;
              pCVar8 = (CPod *)pCVar8->pod_files;
            } while (iVar3 < iStack_38);
          }
          pcVar7 = pcStack_1c;
          if (iVar3 == iStack_38) {
            _strncpy(pcStack_1c,pcVar9,SStack_30);
            pcStack_1c = pcVar7 + iStack_28;
            iStack_14 = iStack_14 + 1;
            if (max_results <= iStack_14) {
              return iStack_14;
            }
          }
        }
        iStack_20 = iStack_20 + 0x14;
      }
      iStack_34 = iStack_34 + 4;
      iStack_38 = iStack_38 + 1;
    } while (iStack_38 < pod->pod_file_count);
  }
  return iStack_14;
}
