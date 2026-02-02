// Name: core_pendulum.cpp_CPendulum_setup_FUN_005494a0
// Address: 005494a0
// Address Range: [[005494a0, 005494bc]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_setup_FUN_005494a0(CPendulum *this_ptr)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_setup_FUN_005494a0(CPendulum *this_ptr)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  byte auStack_44 [20];
  float fStack_30;
  float fStack_8;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  pCVar3 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                     (&this_ptr->base,(CBoundingBox3D *)(auStack_44 + 0x10));
  if ((CBoundingBox3D *)auStack_44 != pCVar3) {
    auStack_44._0_4_ = (pCVar3->min).x;
    auStack_44._4_4_ = (pCVar3->min).y;
    auStack_44._8_4_ = (pCVar3->min).z;
  }
  if ((CVector3f *)(auStack_44 + 0xc) != &pCVar3->max) {
    auStack_44._12_4_ = (pCVar3->max).x;
    auStack_44._16_4_ = (pCVar3->max).y;
    fStack_30 = (pCVar3->max).z;
  }
  *(float *)this_ptr->unk3 =
       SQRT(((float)auStack_44._16_4_ - (float)auStack_44._4_4_) * (float)0.03125) *
       (float)6.2831853070000001;
  fVar1 = ((float)auStack_44._4_4_ + (float)auStack_44._16_4_) * 0.5f;
  fVar2 = ((float)auStack_44._8_4_ + fStack_30) * 0.5f;
  if ((float *)this_ptr->unk2 == &fStack_8) {
    *(uint *)(this_ptr->unk2 + 4) = auStack_44._4_4_;
    return;
  }
  *(float *)this_ptr->unk2 = ((float)auStack_44._0_4_ + (float)auStack_44._12_4_) * 0.5f;
  *(float *)(this_ptr->unk2 + 4) = fVar1;
  *(float *)(this_ptr->unk2 + 8) = fVar2;
  *(uint *)(this_ptr->unk2 + 4) = auStack_44._4_4_;
  return;
}
