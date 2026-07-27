// Name: core_cloth.cpp_CCloth_dtor_FUN_00435160
// Address: 00435160
// Address Range: [[00435160, 004351a1]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_dtor_FUN_00435160(int param_1)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_dtor_FUN_00435160(int param_1)

{
  int iVar1;
  
  core_cloth_cpp_FUN_00435210(param_1);
  iVar1 = core_cloth_cpp_SClothBone_arrdtor_FUN_00438a20(param_1 + 0x37b50,0);
  iVar1 = core_cloth_cpp_SClothVertex_arrdtor_FUN_00438a00(iVar1 + -0x377b8,0);
  core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00452630(iVar1 + -0x398,1);
  return;
}
