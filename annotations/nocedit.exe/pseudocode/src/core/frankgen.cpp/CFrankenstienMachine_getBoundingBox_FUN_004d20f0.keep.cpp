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
  float fVar1;

  fVar1 = this_ptr->part_frame;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->bed_model);
  *out_box = pCVar2->frame_bounds[(int)ROUND(ROUND(fVar1))];
  return out_box;
}
