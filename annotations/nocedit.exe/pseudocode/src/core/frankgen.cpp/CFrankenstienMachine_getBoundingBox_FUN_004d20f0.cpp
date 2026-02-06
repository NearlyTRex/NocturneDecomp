// Name: core_frankgen.cpp_CFrankenstienMachine_getBoundingBox_FUN_004d20f0
// Address: 004d20f0
// Address Range: [[004d20f0, 004d2165]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_frankgen_cpp_CFrankenstienMachine_getBoundingBox_FUN_004d20f0 (CFrankenstienMachine *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_frankgen_cpp_CFrankenstienMachine_getBoundingBox_FUN_004d20f0
          (CFrankenstienMachine *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  double dVar3;
  
  dVar3 = round((double)this_ptr->unk1);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->bed_model);
  pCVar2 = pCVar1->frame_bounds + (int)ROUND(dVar3) * 2;
  (out_box->min).x = pCVar2->x;
  (out_box->min).y = pCVar2->y;
  (out_box->min).z = pCVar2->z;
  (out_box->max).x = pCVar2[1].x;
  (out_box->max).y = pCVar2[1].y;
  (out_box->max).z = pCVar2[1].z;
  return out_box;
}
