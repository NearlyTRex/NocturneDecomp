// Name: engine_pod.cpp_findFilesByExtension_FUN_00550ce0
// Address: 00550ce0
// MANUAL RECONSTRUCTION
// Address Range: [[00550ce0, 00550e98]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_findFilesByExtension_FUN_00550ce0(CPod *pod,char *extension,char *output_buffer,int max_results,int result_string_length)

#include "nocturne.h"

int __cdecl engine_pod_cpp_findFilesByExtension_FUN_00550ce0(CPod *pod,char *extension,char *output_buffer,int max_results,int result_string_length)

{
  char *filename;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar7;
  CPod **ppCVar8;
  CPodFile *pCurFile;
  char local_50 [12];
  char local_44 [12];
  int local_38;
  char *local_1c;
  int local_18;
  int local_14;
  
  iVar5 = strlen(extension);
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
  local_44[iVar5] = '\0';
  local_38 = 0;
  if (0 < pod->pod_file_count) {
    do {
      local_1c = output_buffer + local_14 * result_string_length;
      for (local_18 = 0; pCurFile = pod->pod_files[local_38],
          local_18 < pCurFile->file_count; local_18 = local_18 + 1) {
        filename = pCurFile->directory_entries[local_18].name;
        pcVar7 = filename + ((int)strlen(filename) - iVar5);
        strcpy(local_50,pcVar7);
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
      }
      local_38 = local_38 + 1;
    } while (local_38 < pod->pod_file_count);
  }
  return local_14;
}
