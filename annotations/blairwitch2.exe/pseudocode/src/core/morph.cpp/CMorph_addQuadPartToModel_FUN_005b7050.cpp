// Name: core_morph.cpp_CMorph_addQuadPartToModel_FUN_005b7050
// Address: 005b7050
// Address Range: [[005b7050, 005b709c]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_addQuadPartToModel_FUN_005b7050(CMorph *this_ptr,int param_2,int param_3,CVector3i *param_4,int param_5,SMRGLHeaderPrimitive *param_6,SMRGLTextureModel *param_7,int *param_8)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_addQuadPartToModel_FUN_005b7050(CMorph *this_ptr,int param_2,int param_3,CVector3i *param_4,int param_5,SMRGLHeaderPrimitive *param_6,SMRGLTextureModel *param_7,int *param_8)

{
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_005b6090
            (this_ptr->models + param_2,param_3,param_4,param_5,param_6,0x48,param_7,param_8);
  return;
}
