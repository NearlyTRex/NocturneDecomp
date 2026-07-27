// Name: engine_pod.cpp_FUN_004f9170
// Address: 004f9170
// Address Range: [[004f9170, 004f91f2]]
// Convention: unknown
// Signature: int engine_pod_cpp_FUN_004f9170(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

#include "nocturne.h"

int engine_pod_cpp_FUN_004f9170(int *param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte local_224 [532];
  
  iVar2 = 0;
  engine_dosio_cpp_getRelativeFilePath_FUN_00456700(local_224,param_2,param_3);
  piVar3 = param_1;
  if (0 < *param_1) {
    do {
      iVar1 = engine_pod_cpp_CPodFile_findFileIndex_FUN_004f8150(piVar3[1],local_224);
      if (-1 < iVar1) {
        if (param_4 != (int *)0x0) {
          *param_4 = iVar1;
        }
        return param_1[iVar2 + 1];
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *param_1);
  }
  return 0;
}
