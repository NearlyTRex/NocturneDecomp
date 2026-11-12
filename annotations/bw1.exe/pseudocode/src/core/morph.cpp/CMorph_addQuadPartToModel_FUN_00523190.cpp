// Name: core_morph.cpp_CMorph_addQuadPartToModel_FUN_00523190
// Address: 00523190
// Address Range: [[00523190, 005231dc]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_addQuadPartToModel_FUN_00523190(CMorph *this_ptr,int param_2,int param_3,CVector3i *param_4,int param_5,SMRGLHeaderPrimitive *param_6,SMRGLTextureModel *param_7,int *param_8)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_addQuadPartToModel_FUN_00523190(CMorph *this_ptr,int param_2,int param_3,CVector3i *param_4,int param_5,SMRGLHeaderPrimitive *param_6,SMRGLTextureModel *param_7,int *param_8)

{
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_005221d0
            (this_ptr->models + param_2,param_3,param_4,param_5,param_6,0x48,param_7,param_8);
  return;
}
