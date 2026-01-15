// Name: core_platfrm.cpp_FUN_0054d9b0
// Address: 0054d9b0
// Address Range: [[0054d9b0, 0054db69]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054d9b0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_platform.cpp_FUN_0054d9b0(uint param_1, uint
   param_2) */

void core_platfrm_cpp_FUN_0054d9b0(void)

{
  float fVar1;
  int iVar2;
  CBoundingBox3D *this_ptr;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 != 0) {
    return;
  }
  if (in_stack_00000008 == 0) {
    return;
  }
  if ((*(int *)(in_stack_00000004[3].create_event + 0x40) < 2) &&
     (*(int *)(in_stack_00000004[3].create_event + 0x48) == 0)) {
    return;
  }
  if (*(int *)(in_stack_00000004[3].create_event + 0x48) != 0) {
    fVar1 = in_stack_00000004[2].location.position.y;
    if ((fVar1 == 4.2039e-45) || (fVar1 == 5.60519e-45)) {
      return;
    }
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)&in_stack_00000004[2].scale);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[2].create_event + 0x2c);
    if (iVar2 != 0) {
      return;
    }
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 == 0) {
    if (*(int *)(in_stack_00000004[3].create_event + 0x48) == 0) {
      in_stack_00000004[3].create_event[0x40] = '\x03';
      in_stack_00000004[3].create_event[0x41] = '\0';
      in_stack_00000004[3].create_event[0x42] = '\0';
      in_stack_00000004[3].create_event[0x43] = '\0';
    }
    else {
      in_stack_00000004[5].was_created = 1;
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffd4);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar2 != 0) {
    if ((in_stack_00000004[3].scale.y == 0) ||
       (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
       iVar2 != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
      return;
    }
    g_CDemonSetPtr->per_pixel_lighting_enabled = 1;
    g_FlatShadingLightLevel = (*((g_CurrentSceneCamera->base).vtable)->calculatePerspective)();
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
    g_CDemonSetPtr->per_pixel_lighting_enabled = 0;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return;
}
