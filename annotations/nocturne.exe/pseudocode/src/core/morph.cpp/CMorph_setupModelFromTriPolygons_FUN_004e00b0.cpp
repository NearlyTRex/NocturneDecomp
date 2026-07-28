// Name: core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0
// Address: 004e00b0
// Address Range: [[004e00b0, 004e0105]]
// Convention: unknown
// Signature: void core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0(int param_1,int param_2,int param_3,CVector3i *param_4,int param_5,SMRGLHeaderPrimitive *param_6,SMRGLTextureLod *param_7,int *param_8)

#include "nocturne.h"

void core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0(int param_1,int param_2,int param_3,CVector3i *param_4,int param_5,SMRGLHeaderPrimitive *param_6,SMRGLTextureLod *param_7,int *param_8)

{
  CMorphModel *this_ptr;
  
  this_ptr = (CMorphModel *)(param_1 + param_2 * 0x608);
  core_morph_cpp_CMorphModel_free_FUN_004df290(this_ptr);
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
            (this_ptr,param_3,param_4,param_5,param_6,0x3c,param_7,param_8);
  return;
}
