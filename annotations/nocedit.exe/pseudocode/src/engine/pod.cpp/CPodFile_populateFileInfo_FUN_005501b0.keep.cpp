// Name: engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0
// Address: 005501b0
// MANUAL RECONSTRUCTION
// Address Range: [[005501b0, 0055022a]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPodFile_populateFileInfo_FUN_005501b0(CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPodFile_populateFileInfo_FUN_005501b0(CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info)

{
  CPodDirectoryEntry *pCVar2;

  pCVar2 = this_ptr->directory_entries;
  strcpy(output_info->target_path,this_ptr->filename);
  output_info->file_offset = pCVar2[file_index].offset;
  output_info->file_size = pCVar2[file_index].size;
  output_info->timestamp = pCVar2[file_index].timestamp;
  output_info->is_archive = 1;
  output_info->container_timestamp = this_ptr->timestamp;
  return;
}
