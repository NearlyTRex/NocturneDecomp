// Name: core_xform.cpp_FUN_0055bc30
// Address: 0055bc30
// Address Range: [[0055bc30, 0055bc70]]
// Convention: unknown
// Signature: undefined4 core_xform_cpp_FUN_0055bc30(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint core_xform_cpp_FUN_0055bc30(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_6c [12];
  uint local_3c [12];
  
  bVar4 = 0;
  core_xform_cpp_inverse_FUN_0055bd00(param_1);
  puVar2 = local_6c;
  puVar3 = local_3c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_xform_cpp_getTranslation_FUN_0055bc00(local_3c,param_2);
  return param_2;
}
