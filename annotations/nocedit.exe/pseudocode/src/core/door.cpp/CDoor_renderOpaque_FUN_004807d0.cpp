// Name: core_door.cpp_CDoor_renderOpaque_FUN_004807d0
// Address: 004807d0
// Address Range: [[004807d0, 004809dc]]
// Convention: __cdecl
// Signature: int core_door.cpp_CDoor_renderOpaque_FUN_004807d0(CDoor * this_ptr)

#include "nocturne.h"

int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_004807d0(CDoor *this_ptr)

{
  CDoor *this_ptr_00;
  CBoundingBox3D *pCVar1;
  int iVar2;
  int iVar3;
  CQuaternion4f *pCVar4;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float in_stack_00000010;
  float fStack_50;
  int in_stack_ffffffd4;
  int in_stack_ffffffd8;
  float in_stack_ffffffdc;
  float in_stack_ffffffe8;
  
  if (2 < this_ptr->one_shot) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  pCVar1 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                     (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffa8);
  fStack_50 = 6.615051e-39;
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar1);
  if (iVar2 != 0) {
    if (this_ptr->plot_as_box_in_shadow != 0) {
      iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
      if (iVar3 != 0) {
        pCVar1 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                           (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffdc);
        core_box_cpp_CBoundingBox3D_render_FUN_004210b0
                  (pCVar1,in_stack_ffffffd4,in_stack_ffffffd8,(int)in_stack_ffffffdc);
        goto LAB_0048085a;
      }
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
  }
LAB_0048085a:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  if ((iVar2 != 0) && (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0)) {
    iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if ((iVar3 == 0) &&
       (this_ptr_00 = *(CDoor **)(g_CDemonMissionPtr->field2_0xc + 0x1c), this_ptr == this_ptr_00))
    {
      if (0.0 < this_ptr_00->param) {
        this_ptr_00->param = 0.0;
        core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr_00);
        core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(&this_ptr_00->base_actor,2);
      }
      if (in_stack_ffffffe8 < this_ptr->max_param) {
        this_ptr->param = this_ptr->max_param;
        core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
        core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(&this_ptr->base_actor,1);
      }
      this_ptr->param = 0.0;
      core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
      g_ActiveRenderColor = 2;
      pCVar4 = (CQuaternion4f *)
               core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base_actor,(CVector3f *)&stack0x00000024,
                          (CVector3f *)this_ptr->field17_0x9bc);
      shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
                (g_CEditorToolsPtr,pCVar4,(int)unaff_EBP);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
      this_ptr->param = this_ptr->max_param;
      core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
      g_ActiveRenderColor = 1;
      pCVar4 = (CQuaternion4f *)
               core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base_actor,(CVector3f *)&stack0x00000044,
                          (CVector3f *)this_ptr->field17_0x9bc);
      shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
                (g_CEditorToolsPtr,pCVar4,(int)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
      this_ptr->param = in_stack_00000010;
      core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
    }
  }
  return iVar2;
}
