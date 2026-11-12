// Name: core_doc.cpp_FUN_0045d1f0
// Address: 0045d1f0
// Address Range: [[0045d1f0, 0045d253]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_0045d1f0(int param_1)

#include "nocturne.h"

uint core_doc_cpp_FUN_0045d1f0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x2698);
  if ((iVar1 != 0) &&
     (uVar3 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x7c))(iVar1), (uVar3 & 4) != 0)) {
    return 0;
  }
  uVar2 = 0x41200000;
  if ((*(int *)(param_1 + 0x25698) != 0) && (*(int *)(*(int *)(param_1 + 0x25698) + 0x43c) == 3)) {
    *(uint *)(param_1 + 0x256a4) = 3;
    *(uint *)(param_1 + 0x25650) = uVar2;
    return 1;
  }
  return 0;
}
