// Name: engine_pod.cpp_CPodFile_populateFileInfo_FUN_0053bf40
// Address: 0053bf40
// Address Range: [[0053bf40, 0053bfba]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPodFile_populateFileInfo_FUN_0053bf40(CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPodFile_populateFileInfo_FUN_0053bf40(CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info)

{
  SFoundFileInfo SVar1;
  CPodDirectoryEntry *pCVar2;
  uint uVar3;
  SFoundFileInfo *pSVar4;
  SFoundFileInfo *pSVar5;
  
  pSVar4 = (SFoundFileInfo *)this_ptr->filename;
  pCVar2 = this_ptr->directory_entries;
  pSVar5 = output_info + 0x100;
  do {
    SVar1 = *pSVar4;
    *pSVar5 = SVar1;
    if (SVar1 == (SFoundFileInfo)0x0) break;
    SVar1 = pSVar4[1];
    pSVar4 = pSVar4 + 2;
    pSVar5[1] = SVar1;
    pSVar5 = pSVar5 + 2;
  } while (SVar1 != (SFoundFileInfo)0x0);
  *(uint *)(output_info + 0x200) = *(uint *)(pCVar2 + file_index * 0x14 + 8);
  *(uint *)(output_info + 0x204) = *(uint *)(pCVar2 + file_index * 0x14 + 4);
  *(uint *)(output_info + 0x20c) = *(uint *)(pCVar2 + file_index * 0x14 + 0xc);
  uVar3 = this_ptr->timestamp;
  *(uint *)(output_info + 0x208) = 1;
  *(uint *)(output_info + 0x210) = uVar3;
  return;
}
