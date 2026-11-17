// Name: core_fire.cpp_CFireEffect_createLeaf_FUN_004b5f00
// Address: 004b5f00
// Address Range: [[004b5f00, 004b5f95]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createLeaf_FUN_004b5f00(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr,float drag)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createLeaf_FUN_004b5f00(CFireEffect *this_ptr,CVector3f *position,CVector3f *velocity,CKeyFramedModel *model_ptr,float drag)

{
  int iVar1;
  CLeaf *this_ptr_00;
  
  iVar1 = g_INT_01cadb64 + 1;
  this_ptr_00 = CLeaf_ARRAY_01cadb68 + g_INT_01cadb64;
  g_INT_01cadb64 = iVar1;
  if (0x3f < iVar1) {
    g_INT_01cadb64 = 0;
  }
  if (model_ptr == (CKeyFramedModel *)0x0) {
    iVar1 = rand();
    model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                          (&g_CKeyFramedModelInstance_01c576a8 + iVar1 % 4);
  }
  core_fire_cpp_CLeaf_init_FUN_004af0f0(this_ptr_00,position,velocity,model_ptr,drag);
  return;
}
