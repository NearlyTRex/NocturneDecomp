// Name: core_boxactor.cpp_CBoxActor_FUN_00421ef0
// Address: 00421ef0
// Address Range: [[00421ef0, 00421fcd]]
// Convention: __cdecl
// Signature: int core_boxactor.cpp_CBoxActor_FUN_00421ef0(CBoxActor * this_ptr)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CBoxActor_FUN_00421ef0(CBoxActor *this_ptr)

{
  CKeyFramedModel *pCVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  CBoundingBox3D local_20;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  if (pCVar1->poly_count < 1) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr1,&(this_ptr->base_actor).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr1,(CVector3i *)&(this_ptr->base_actor).orient,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base_actor).vtable._ub)->getBoundingBox)
                          (&this_ptr->base_actor,&local_20);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  if (this_ptr->dont_use_normals != 0) {
    g_CDemonSetPtr->unk_lighting_param2 = 1;
  }
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)this_ptr->model_name,(float)this_ptr->field7_0x310,-1);
  }
  if (this_ptr->dont_use_normals != 0) {
    g_CDemonSetPtr->unk_lighting_param2 = 0;
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar2;
}
