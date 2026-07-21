// Name: engine_pod.cpp_CPodFile_findFileIndex_FUN_004f8150
// Address: 004f8150
// Address Range: [[004f8150, 004f81bb]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPodFile_findFileIndex_FUN_004f8150(int param_1,undefined4 param_2)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPodFile_findFileIndex_FUN_004f8150(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x208) + -1;
  iVar4 = 0;
  if (-1 < iVar3) {
    do {
      while( true ) {
        iVar1 = (iVar4 + iVar3) / 2;
        iVar2 = _stricmp
                          (param_2,*(uint *)(*(int *)(param_1 + 0x20c) + iVar1 * 0x14));
        if (iVar2 == 0) {
          return iVar1;
        }
        if (-1 < iVar2) break;
        iVar3 = iVar1 + -1;
        if (iVar3 < iVar4) {
          return -1;
        }
      }
      iVar4 = iVar1 + 1;
    } while (iVar4 <= iVar3);
  }
  return -1;
}
