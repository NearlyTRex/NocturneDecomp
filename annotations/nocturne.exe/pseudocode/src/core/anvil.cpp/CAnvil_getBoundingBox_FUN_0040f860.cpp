// Name: core_anvil.cpp_CAnvil_getBoundingBox_FUN_0040f860
// Address: 0040f860
// Address Range: [[0040f860, 0040f8ad]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_anvil_cpp_CAnvil_getBoundingBox_FUN_0040f860(CAnvil *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_anvil_cpp_CAnvil_getBoundingBox_FUN_0040f860(CAnvil *this_ptr,CBoundingBox3D *out_box)

{
  float *pfVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
  pfVar1 = (float *)pCVar2->texture_list[7].textures[2].base.count;
  (out_box->min).x = *pfVar1;
  (out_box->min).y = pfVar1[1];
  (out_box->min).z = pfVar1[2];
  (out_box->max).x = pfVar1[3];
  (out_box->max).y = pfVar1[4];
  (out_box->max).z = pfVar1[5];
  return out_box;
}
