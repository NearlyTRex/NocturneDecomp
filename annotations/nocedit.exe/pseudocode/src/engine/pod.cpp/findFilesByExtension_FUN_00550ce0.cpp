// Name: engine_pod.cpp_findFilesByExtension_FUN_00550ce0
// Address: 00550ce0
// Address Range: [[00550ce0, 00550e98]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_findFilesByExtension_FUN_00550ce0 (CPod **pod_array,char *extension,char *output_buffer,int max_results, int result_string_length)

#include "nocturne.h"

int __cdecl
engine_pod_cpp_findFilesByExtension_FUN_00550ce0
          (CPod **pod_array,char *extension,char *output_buffer,int max_results,
          int result_string_length)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  CPod **ppCVar8;
  char *pcVar9;
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
  
  bVar11 = 0;
  uVar5 = 0xffffffff;
  pcVar9 = extension;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  local_24 = ~uVar5 - 1;
  local_14 = 0;
  iVar3 = 0;
  if (0 < local_24) {
    do {
      iVar6 = iVar3 + 1;
      iVar2 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)*extension);
      iVar4 = local_24;
      extension = (char *)((byte *)extension + 1);
      local_44[iVar3] = (char)iVar2;
      iVar3 = iVar6;
    } while (iVar6 < iVar4);
  }
  local_44[local_24] = '\0';
  local_38 = 0;
  if (0 < (int)*pod_array) {
    local_30 = result_string_length - 1;
    local_34 = 0;
    do {
      local_2c = local_34;
      local_28 = result_string_length;
      local_20 = 0;
      local_1c = output_buffer + local_14 * result_string_length;
      for (local_18 = 0; iVar3 = *(int *)((int)pod_array + local_2c + 4),
          local_18 < *(int *)(iVar3 + 0x410); local_18 = local_18 + 1) {
        pcVar9 = *(char **)(*(int *)(iVar3 + 0x414) + local_20);
        uVar5 = 0xffffffff;
        pcVar7 = pcVar9;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar11 * -2 + 1;
        } while (cVar1 != '\0');
        pcVar7 = pcVar9 + ((~uVar5 - 1) - local_24);
        pcVar10 = local_50;
        do {
          cVar1 = *pcVar7;
          *pcVar10 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar10[1] = cVar1;
          pcVar10 = pcVar10 + 2;
        } while (cVar1 != '\0');
        iVar3 = crt_string_c_strcmp_FUN_005fef20(local_50,local_44);
        if (iVar3 == 0) {
          iVar3 = 0;
          ppCVar8 = pod_array;
          if (0 < local_38) {
            do {
              iVar4 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140
                                ((CPodFile *)ppCVar8[1],pcVar9);
              if (-1 < iVar4) break;
              iVar3 = iVar3 + 1;
              ppCVar8 = ppCVar8 + 1;
            } while (iVar3 < local_38);
          }
          pcVar7 = local_1c;
          if (iVar3 == local_38) {
            crt_string_c_strncpy_FUN_00600f40(local_1c,pcVar9,local_30);
            local_1c = pcVar7 + local_28;
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
    } while (local_38 < (int)*pod_array);
  }
  return local_14;
}
