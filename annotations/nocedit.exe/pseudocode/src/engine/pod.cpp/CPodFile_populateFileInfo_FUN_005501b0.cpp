// Name: engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0
// Address: 005501b0
// Address Range: [[005501b0, 0055022a]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPodFile_populateFileInfo_FUN_005501b0(CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPodFile_populateFileInfo_FUN_005501b0(CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info)

{
  char cVar1;
  CPodDirectoryEntry *pCVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = this_ptr->filename;
  pCVar2 = this_ptr->directory_entries;
  pcVar5 = output_info->target_path;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  output_info->file_offset = pCVar2[file_index].offset;
  output_info->file_size = pCVar2[file_index].size;
  output_info->timestamp = pCVar2[file_index].timestamp;
  uVar3 = this_ptr->timestamp;
  output_info->is_archive = 1;
  output_info->container_timestamp = uVar3;
  return;
}
