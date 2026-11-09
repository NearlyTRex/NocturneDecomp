// Name: engine_pod.cpp_CPodFile_populateFileInfo_FUN_00513ca0
// Address: 00513ca0
// Address Range: [[00513ca0, 00513d1a]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPodFile_populateFileInfo_FUN_00513ca0(CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPodFile_populateFileInfo_FUN_00513ca0(CPodFile *this_ptr,int file_index,SFoundFileInfo *output_info)

{
  SFoundFileInfo SVar1;
  uint uVar2;
  int iVar3;
  SFoundFileInfo *pSVar4;
  SFoundFileInfo *pSVar5;
  
  pSVar4 = (SFoundFileInfo *)&this_ptr->field_0x4;
  pSVar5 = output_info + 0x100;
  iVar3 = *(int *)&this_ptr->field_0x414 + file_index * 0x14;
  do {
    SVar1 = *pSVar4;
    *pSVar5 = SVar1;
    if (SVar1 == (SFoundFileInfo)0x0) break;
    SVar1 = pSVar4[1];
    pSVar4 = pSVar4 + 2;
    pSVar5[1] = SVar1;
    pSVar5 = pSVar5 + 2;
  } while (SVar1 != (SFoundFileInfo)0x0);
  *(uint *)(output_info + 0x200) = *(uint *)(iVar3 + 8);
  *(uint *)(output_info + 0x204) = *(uint *)(iVar3 + 4);
  *(uint *)(output_info + 0x20c) = *(uint *)(iVar3 + 0xc);
  uVar2 = *(uint *)&this_ptr->field_0x104;
  *(uint *)(output_info + 0x208) = 1;
  *(uint *)(output_info + 0x210) = uVar2;
  return;
}
