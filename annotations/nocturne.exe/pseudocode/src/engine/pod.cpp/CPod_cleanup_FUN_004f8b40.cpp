// Name: engine_pod.cpp_CPod_cleanup_FUN_004f8b40
// Address: 004f8b40
// Address Range: [[004f8b40, 004f8b88]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_cleanup_FUN_004f8b40(int *param_1)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_cleanup_FUN_004f8b40(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1;
  if (0 < *param_1) {
    do {
      if (piVar2[1] != 0) {
        uVar1 = engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(piVar2[1],0);
        FUN_00564494(uVar1);
      }
      piVar2[1] = 0;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *param_1);
  }
  *param_1 = 0;
  return;
}
