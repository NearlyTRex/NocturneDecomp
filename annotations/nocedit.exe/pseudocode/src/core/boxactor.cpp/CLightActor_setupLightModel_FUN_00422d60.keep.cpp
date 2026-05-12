// Name: core_boxactor.cpp_CLightActor_setupLightModel_FUN_00422d60
// Address: 00422d60
// MANUAL RECONSTRUCTION
// Address Range: [[00422d60, 00423067]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_setupLightModel_FUN_00422d60(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_setupLightModel_FUN_00422d60(CLightActor *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  CDemonFilter *this_ptr_01;
  char acStack_d0 [40];
  CBoundingBox3D local_a8;
  CBoundingBox3D local_90;
  float fVar2;
  CKeyFramedModelInstance *this_ptr_00;
  ELightActorType EVar1;
  
  EVar1 = this_ptr->light_actor_type;
  if (EVar1 != LIGHT_TYPE_CUSTOM) {
    this_ptr_00 = &(this_ptr->base).model;
    if (EVar1 < LIGHT_TYPE_LANTERN) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                (this_ptr_00,"flashlit.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr_00);
      (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,&local_90);
      fVar2 = 0.5f;
      (this_ptr->blight_pos).x = (local_90.min.x + local_90.max.x) * 0.5f;
      (this_ptr->blight_pos).y = (local_90.min.y + local_90.max.y) * fVar2;
      (this_ptr->blight_pos).z = local_90.max.z + (float)0.10000000000000001;
      (this_ptr->light_orient).vec.x = 0.0;
      (this_ptr->light_orient).vec.y = 0.0;
      (this_ptr->light_orient).vec.z = 0.0;
      (this_ptr->light).light_enabled_flag = 0;
      (this_ptr->light).base.base.focal_length = 56.0;
      (this_ptr->light).base.max_distance = 32.0;
      (this_ptr->base).pickup_type = 3;
      return;
    }
    if (EVar1 == LIGHT_TYPE_LANTERN) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                (this_ptr_00,"lantern.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr_00);
      (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,&local_a8);
      fVar1 = 0.5f;
      (this_ptr->blight_pos).x = (local_a8.min.x + local_a8.max.x) * 0.5f;
      (this_ptr->blight_pos).y = (local_a8.min.y + local_a8.max.y) * fVar1;
      (this_ptr->blight_pos).z = local_a8.max.z;
      (this_ptr->light_orient).vec.y = 0.0;
      (this_ptr->light_orient).vec.z = 0.0;
      (this_ptr->light_orient).vec.x = 0.2617994;
      (this_ptr->light).light_enabled_flag = 0;
      (this_ptr->light).base.base.focal_length = 56.0;
      (this_ptr->light).base.max_distance = 32.0;
      iVar2 = INT_008229ac;
      (this_ptr->base).pickup_type = 3;
      if (iVar2 == 0) {
        this_ptr_01 = CDemonFilter_ARRAY_008229ec;
        iVar3 = 0;
        do {
          _sprintf(acStack_d0,"lantern%d.raw",iVar3);
          iVar3 = iVar3 + 1;
          core_dfilter_cpp_CDemonFilter_load_FUN_004702f0(this_ptr_01,acStack_d0);
          this_ptr_01 = this_ptr_01 + 1;
        } while (iVar3 < 8);
        INT_008229ac = 1;
      }
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
                (&this_ptr->light,CDemonFilter_ARRAY_008229ec,0,0,0);
      return;
    }
  }
  return;
}
