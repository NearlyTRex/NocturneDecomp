// Name: engine_pod.cpp_findFilesByExtension_FUN_00550ce0
// Address: 00550ce0
// Address Range: [[00550ce0, 00550e98]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_findFilesByExtension_FUN_00550ce0(CPod *pod,char *extension,char *output_buffer,int max_results,int result_string_length)

#include "nocturne.h"

int __cdecl engine_pod_cpp_findFilesByExtension_FUN_00550ce0(CPod *pod,char *extension,char *output_buffer,int max_results,int result_string_length)

{
  char cVar2;
  char *filename;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar5;
  uint uVar6;
  int iVar6;
  int iVar7;
  char *pcVar7;
  CPod **ppCVar8;
  char *pcVar9;
  char *pcVar8;
  char *pcVar10;
  byte bVar11;
  char local_50 [12];
  char local_44 [12];
  int local_38;
  int local_34;
  SIZE_T local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char *local_1c;
  int local_18;
  int local_14;
  char cVar1;
  
  bVar11 = 0;
  uVar5 = 0xffffffff;
  pcVar9 = extension;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  iVar5 = ~uVar5 - 1;
  local_14 = 0;
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      iVar6 = iVar7 + 1;
      iVar2 = toupper((uint)(byte)*extension);
      extension = extension + 1;
      local_44[iVar7] = (char)iVar2;
      iVar7 = iVar6;
    } while (iVar6 < iVar5);
  }
  local_50[~uVar5 + 0xb] = '\0';
  local_38 = 0;
  if (0 < pod->pod_file_count) {
    local_34 = 0;
    do {
      local_20 = 0;
      local_1c = output_buffer + local_14 * result_string_length;
      for (local_18 = 0; iVar7 = *(int *)((int)pod->pod_files + local_34),
          local_18 < *(int *)(iVar7 + 0x410); local_18 = local_18 + 1) {
        filename = *(char **)(*(int *)(iVar7 + 0x414) + local_20);
        uVar6 = 0xffffffff;
        pcVar8 = filename;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar11 * -2 + 1;
        } while (cVar2 != '\0');
        pcVar7 = filename + ((~uVar6 - 1) - iVar5);
        pcVar10 = local_50;
        do {
          cVar2 = *pcVar7;
          *pcVar10 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar10[1] = cVar2;
          pcVar10 = pcVar10 + 2;
        } while (cVar2 != '\0');
        iVar3 = _strcmp(local_50,local_44);
        if (iVar3 == 0) {
          iVar7 = 0;
          ppCVar8 = (CPod **)pod;
          if (0 < local_38) {
            do {
              iVar4 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140
                                ((CPodFile *)ppCVar8[1],filename);
              if (-1 < iVar4) break;
              iVar7 = iVar7 + 1;
              ppCVar8 = ppCVar8 + 1;
            } while (iVar7 < local_38);
          }
          if (iVar7 == local_38) {
            _strncpy(local_1c,filename,result_string_length - 1);
            local_1c = local_1c + result_string_length;
            local_14 = local_14 + 1;
            if (max_results <= local_14) {
              return local_14;
            }
          }
        }
        local_20 = local_20 + 0x14;
      }
      local_34 = local_34 + 4;
      local_38 = local_38 + 1;
    } while (local_38 < pod->pod_file_count);
  }
  return local_14;
}
