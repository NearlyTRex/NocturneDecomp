// Name: core_xform.cpp_getTranslation_FUN_0055bc00
// Address: 0055bc00
// Address Range: [[0055bc00, 0055bc2d]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_getTranslation_FUN_0055bc00(int param_1,undefined4 *param_2)

#include "nocturne.h"

void __cdecl core_xform_cpp_getTranslation_FUN_0055bc00(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x2c);
  param_2[1] = *(uint *)(param_1 + 0x1c);
  *param_2 = uVar1;
  param_2[2] = uVar2;
  return;
}
