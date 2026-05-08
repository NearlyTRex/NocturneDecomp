// Name: core_simbox.cpp_CSimBox_getBoundingBox_FUN_00589160
// Address: 00589160
// MANUAL RECONSTRUCTION
// Address Range: [[00589160, 005891ad]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_simbox_cpp_CSimBox_getBoundingBox_FUN_00589160(CSimBox *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_simbox_cpp_CSimBox_getBoundingBox_FUN_00589160(CSimBox *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CKeyFramedModel *pCVar2;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar2->frame_bounds;
  *out_box = *pCVar1;
  return out_box;
}
