// Name: engine_pod.cpp_CPod_locateFile_FUN_00514c20
// Address: 00514c20
// Address Range: [[00514c20, 00514ca2]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_locateFile_FUN_00514c20(CPod *this_ptr,undefined4 param_2,undefined4 param_3,int *param_4)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_locateFile_FUN_00514c20(CPod *this_ptr,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  CPod *pCVar3;
  char acStack_224 [532];
  
  iVar2 = 0;
  engine_dosio_cpp_FUN_00465660(acStack_224,param_2,param_3);
  pCVar3 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      iVar1 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00513c30(pCVar3->pod_files[0],acStack_224);
      if (-1 < iVar1) {
        if (param_4 != (int *)0x0) {
          *param_4 = iVar1;
        }
        return (int)this_ptr->pod_files[iVar2];
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CPod *)pCVar3->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  return 0;
}
