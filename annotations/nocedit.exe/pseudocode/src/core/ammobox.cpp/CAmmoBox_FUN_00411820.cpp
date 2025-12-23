// Name: core_ammobox.cpp_CAmmoBox_FUN_00411820
// Address: 00411820
// Address Range: [[00411820, 004118ab]]
// Convention: __cdecl
// Signature: int core_ammobox.cpp_CAmmoBox_FUN_00411820(CAmmoBox * this_ptr)

#include "nocturne.h"

int __cdecl core_ammobox_cpp_CAmmoBox_FUN_00411820(CAmmoBox *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CKeyFramedModel *pCVar2;
  BADSPACEBASE *in_ESP;
  float in_stack_ffffffd8;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffd4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return 0;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)this_ptr->model_name,
             (float)(pCVar2->frame_count + -1) * this_ptr->field5_0x31c,(int)in_stack_ffffffd8);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  return iVar1;
}
