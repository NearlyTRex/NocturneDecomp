// Name: core_door.cpp_CDoor_renderOpaque_FUN_004807d0
// Address: 004807d0
// Address Range: [[004807d0, 004809dc]]
// Convention: __cdecl
// Signature: int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_004807d0(CDoor *this_ptr)

#include "nocturne.h"

int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_004807d0(CDoor *this_ptr)

{
  CDoor *this_ptr_00;
  CBoundingBox3D *pCVar1;
  int iVar2;
  int iVar3;
  CQuaternion4f *pCVar4;
  int in_stack_ffffffa0;
  float fVar5;
  float in_stack_ffffffa4;
  float in_stack_ffffffa8;
  CBoundingBox3D CStack_44;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  
  if (2 < this_ptr->one_shot) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  pCVar1 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                     (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffa4);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar1);
  if (iVar2 != 0) {
    if (this_ptr->plot_as_box_in_shadow != 0) {
      iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
      if (iVar3 != 0) {
        pCVar1 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_44);
        core_box_cpp_CBoundingBox3D_render_FUN_004210b0
                  (pCVar1,in_stack_ffffffa0,(int)in_stack_ffffffa4,(int)in_stack_ffffffa8);
        goto LAB_0048085a;
      }
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
  }
LAB_0048085a:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  if ((iVar2 != 0) && (g_CDemonMissionPtr->is_in_editor != 0)) {
    iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if ((iVar3 == 0) &&
       (this_ptr_00 = (CDoor *)g_CDemonMissionPtr->selected_actor, this_ptr == this_ptr_00)) {
      fVar5 = this_ptr_00->param;
      if (0.0 < fVar5) {
        this_ptr_00->param = 0.0;
        core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr_00);
        core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940((CDemonActor *)this_ptr_00,2);
      }
      if (fVar5 < this_ptr->max_param) {
        this_ptr->param = this_ptr->max_param;
        core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
        core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(&this_ptr->base,1);
      }
      this_ptr->param = 0.0;
      core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
      iVar3 = 2;
      g_ActiveRenderColor = 2;
      pCVar4 = (CQuaternion4f *)
               core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base,&CStack_2c,(CVector3f *)this_ptr->unk3);
      shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
                (g_CEditorToolsPtr,pCVar4,iVar3);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
      this_ptr->param = this_ptr->max_param;
      core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
      iVar3 = 2;
      g_ActiveRenderColor = 1;
      pCVar4 = (CQuaternion4f *)
               core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base,&CStack_20,(CVector3f *)this_ptr->unk3);
      shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
                (g_CEditorToolsPtr,pCVar4,iVar3);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
      this_ptr->param = fVar5;
      core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
    }
  }
  return iVar2;
}
