// Name: core_frankgen.cpp_CFrankenstienMachine_getBoundingBox_FUN_004d20f0
// Address: 004d20f0
// MANUAL RECONSTRUCTION
// Address Range: [[004d20f0, 004d2165]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_frankgen_cpp_CFrankenstienMachine_getBoundingBox_FUN_004d20f0(CFrankenstienMachine *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_frankgen_cpp_CFrankenstienMachine_getBoundingBox_FUN_004d20f0(CFrankenstienMachine *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar2;
  CVector3f *pCVar3;
  float fVar1;
  
  fVar1 = this_ptr->part_frame;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->bed_model);
  pCVar3 = pCVar2->frame_bounds + (int)ROUND(ROUND(fVar1)) * 2;
  (out_box->min).x = pCVar3->x;
  (out_box->min).y = pCVar3->y;
  (out_box->min).z = pCVar3->z;
  (out_box->max).x = pCVar3[1].x;
  (out_box->max).y = pCVar3[1].y;
  (out_box->max).z = pCVar3[1].z;
  return out_box;
}
