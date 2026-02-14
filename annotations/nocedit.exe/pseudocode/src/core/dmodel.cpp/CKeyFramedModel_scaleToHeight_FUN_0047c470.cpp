// Name: core_dmodel.cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470
// Address: 0047c470
// Address Range: [[0047c470, 0047c49e]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470(CKeyFramedModel *this_ptr,float desired_height)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470(CKeyFramedModel *this_ptr,float desired_height)

{
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  core_dmodel_cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0
            (this_ptr,desired_height / (this_ptr->frame_bounds[1].y - this_ptr->frame_bounds->y));
  return;
}
