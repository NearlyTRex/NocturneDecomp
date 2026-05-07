// Name: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
// Address: 0059ddc0
// MANUAL RECONSTRUCTION
// Address Range: [[0059ddc0, 0059de38]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CDeformableModelInstance_ptr_88 pvVar2;
  
  pCVar1 = (CDeformableModelInstance *)
           core_motion_cpp_CMotionController_ctor_FUN_0052d570(&this_ptr->motion_controller);
  pvVar2 = __arrinit(pCVar1->transformed_vertices,100,&g_CVectorTypeInfo);
  ADJ(pvVar2)->motion_controller.vtable = &g_CDeformableModelInstanceVTable;
  ADJ(pvVar2)->model_name[0] = '\0';
  ADJ(pvVar2)->model_ptr = (CDeformableModel *)0x0;
  ADJ(pvVar2)->skinned_vertices_buffer = (CVector3i *)0x0;
  ADJ(pvVar2)->cached_skinned_lod_index = -1;
  ADJ(pvVar2)->bone_update_mode = 0;
  (ADJ(pvVar2)->accumulated_root_motion).x = 0.0f;
  (ADJ(pvVar2)->accumulated_root_motion).y = 0.0f;
  (ADJ(pvVar2)->accumulated_root_motion).z = 0.0f;
  ADJ(pvVar2)->scale_factor = 1.0;
  return ADJ(pvVar2);
}
