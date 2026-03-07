// Name: core_boxactor.cpp_CLightActor_setupLightModel_FUN_00422d60
// Address: 00422d60
// Address Range: [[00422d60, 00423067]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_setupLightModel_FUN_00422d60(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_setupLightModel_FUN_00422d60(CLightActor *this_ptr)

{
  CKeyFramedModelInstance *this_ptr_00;
  ELightActorType EVar1;
  float fVar2;
  int iVar3;
  CDemonFilter *this_ptr_01;
  char acStack_d0 [40];
  CBoundingBox3D local_a8;
  CBoundingBox3D local_90;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CDemonLight *local_18;
  
  EVar1 = this_ptr->light_actor_type;
  if (EVar1 != LIGHT_TYPE_CUSTOM) {
    local_18 = &this_ptr->light;
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
      (this_ptr->light_orient).vec.z = 0.0;
      (this_ptr->light_orient).vec.y = (this_ptr->light_orient).vec.z;
      (this_ptr->light_orient).vec.x = (this_ptr->light_orient).vec.y;
      (this_ptr->light).light_enabled_flag = 0;
      (local_18->base).base.focal_length = 56.0;
      (this_ptr->light).base.max_distance = 32.0;
      (this_ptr->base).pickup_type = 3;
      return;
    }
    if (EVar1 == LIGHT_TYPE_LANTERN) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                (this_ptr_00,"lantern.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr_00);
      (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,&local_a8);
      fStack_4c = 0.5f;
      fStack_48 = local_a8.min.x + local_a8.max.x;
      fStack_3c = fStack_48 * 0.5f;
      fStack_44 = local_a8.min.y + local_a8.max.y;
      fStack_40 = local_a8.min.z + local_a8.max.z;
      fStack_38 = fStack_44 * 0.5f;
      fStack_34 = fStack_40 * 0.5f;
      (this_ptr->blight_pos).x = fStack_3c;
      fStack_6c = local_a8.min.x + local_a8.max.x;
      fStack_54 = fStack_6c * fStack_4c;
      fStack_68 = local_a8.min.y + local_a8.max.y;
      fStack_64 = local_a8.min.z + local_a8.max.z;
      fStack_50 = fStack_68 * fStack_4c;
      fStack_4c = fStack_64 * fStack_4c;
      (this_ptr->blight_pos).y = fStack_50;
      (this_ptr->blight_pos).z = local_a8.max.z;
      (this_ptr->light_orient).vec.z = 0.0;
      (this_ptr->light_orient).vec.y = (this_ptr->light_orient).vec.z;
      (this_ptr->light_orient).vec.x = (this_ptr->light_orient).vec.y;
      (this_ptr->light_orient).vec.x = 0.2617994;
      (this_ptr->light).light_enabled_flag = 0;
      (local_18->base).base.focal_length = 56.0;
      (this_ptr->light).base.max_distance = 32.0;
      iVar3 = INT_008229ac;
      (this_ptr->base).pickup_type = 3;
      if (iVar3 == 0) {
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
