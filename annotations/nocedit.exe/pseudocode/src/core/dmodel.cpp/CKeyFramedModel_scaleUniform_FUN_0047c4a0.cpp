// Name: core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0
// Address: 0047c4a0
// Address Range: [[0047c4a0, 0047c4c5]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0(CKeyFramedModel *this_ptr,float uniform_scale)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0(CKeyFramedModel *this_ptr,float uniform_scale)

{
  CVector3f local_c;
  
  local_c.z = uniform_scale;
  local_c.y = uniform_scale;
  local_c.x = uniform_scale;
  core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(this_ptr,&local_c);
  return;
}
