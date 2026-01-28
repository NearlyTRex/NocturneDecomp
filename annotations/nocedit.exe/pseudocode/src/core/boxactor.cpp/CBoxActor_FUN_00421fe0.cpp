// Name: core_boxactor.cpp_CBoxActor_FUN_00421fe0
// Address: 00421fe0
// Address Range: [[00421fe0, 00422055]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_boxactor_cpp_CBoxActor_FUN_00421fe0(CBoxActor *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_boxactor_cpp_CBoxActor_FUN_00421fe0(CBoxActor *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  double dVar3;
  
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)(float)this_ptr->unk2);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar2 = pCVar1->frame_bounds + (int)ROUND(dVar3) * 2;
  (out_box->min).x = pCVar2->x;
  (out_box->min).y = pCVar2->y;
  (out_box->min).z = pCVar2->z;
  (out_box->max).x = pCVar2[1].x;
  (out_box->max).y = pCVar2[1].y;
  (out_box->max).z = pCVar2[1].z;
  return out_box;
}
