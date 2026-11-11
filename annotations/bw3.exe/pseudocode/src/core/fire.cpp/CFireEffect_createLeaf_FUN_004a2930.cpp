// Name: core_fire.cpp_CFireEffect_createLeaf_FUN_004a2930
// Address: 004a2930
// Address Range: [[004a2930, 004a29c5]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLeaf_FUN_004a2930(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createLeaf_FUN_004a2930(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4 ,float param_5)

{
  int iVar1;
  CLeaf *this_ptr_00;
  
  iVar1 = _DAT_01cf3b84 + 1;
  this_ptr_00 = CLeaf_ARRAY_01cf3b88 + _DAT_01cf3b84;
  _DAT_01cf3b84 = iVar1;
  if (0x3f < iVar1) {
    _DAT_01cf3b84 = 0;
  }
  if (param_4 == (CKeyFramedModel *)0x0) {
    iVar1 = rand();
    param_4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                        ((CKeyFramedModelInstance *)((iVar1 % 4) * 0x17c + 0x1c73c88));
  }
  core_fire_cpp_CLeaf_init_FUN_0049a140(this_ptr_00,param_2,param_3,param_4,param_5);
  return;
}
