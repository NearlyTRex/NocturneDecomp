// Name: core_trash.cpp_CTrash_FUN_005df550
// Address: 005df550
// Address Range: [[005df550, 005df5f3]]
// Convention: __cdecl
// Signature: int core_trash.cpp_CTrash_FUN_005df550(CTrash * this_ptr)

#include "nocturne.h"

int __cdecl core_trash_cpp_CTrash_FUN_005df550(CTrash *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CVector3f CStack_1c;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffc4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return 0;
  }
  CStack_1c.y = *(float *)(this_ptr->field4_0x2e0 + 0x30);
  CStack_1c.x = 0.0;
  CStack_1c.z = 0.0;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (&this_ptr->base_actor,(CVector3f *)&stack0xfffffff0,&CStack_1c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&g_ZeroVector,(CVector3i *)&stack0xfffffff0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)&this_ptr->model_name,0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  return iVar1;
}
