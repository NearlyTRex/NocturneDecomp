// Name: core_morph.cpp_CMorph_addQuadPartToModel_FUN_004e0240
// Address: 004e0240
// Address Range: [[004e0240, 004e028c]]
// Convention: unknown
// Signature: void core_morph_cpp_CMorph_addQuadPartToModel_FUN_004e0240(int param_1,int param_2,int param_3,CVector3i *param_4,int param_5,SMRGLHeaderPrimitive *param_6,SMRGLTextureLod *param_7,int *param_8)

#include "nocturne.h"

void core_morph_cpp_CMorph_addQuadPartToModel_FUN_004e0240(int param_1,int param_2,int param_3,CVector3i *param_4,int param_5,SMRGLHeaderPrimitive *param_6,SMRGLTextureLod *param_7,int *param_8)

{
  core_morph_cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
            ((CMorphModel *)(param_2 * 0x608 + param_1),param_3,param_4,param_5,param_6,0x48,param_7
             ,param_8);
  return;
}
