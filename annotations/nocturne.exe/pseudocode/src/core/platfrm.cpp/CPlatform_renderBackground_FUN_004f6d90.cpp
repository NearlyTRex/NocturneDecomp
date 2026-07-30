// Name: core_platfrm.cpp_CPlatform_renderBackground_FUN_004f6d90
// Address: 004f6d90
// Address Range: [[004f6d90, 004f6f4b]]
// Convention: unknown
// Signature: void core_platfrm_cpp_CPlatform_renderBackground_FUN_004f6d90(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_platfrm_cpp_CPlatform_renderBackground_FUN_004f6d90(CDemonActor *param_1,int param_2)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  CBoundingBox3D local_2c;
  CVector3i CStack_14;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 != 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if ((*(int *)(param_1[3].create_event + 0x50) < 2) &&
     (*(int *)(param_1[3].create_event + 0x58) == 0)) {
    return;
  }
  if (*(int *)(param_1[3].create_event + 0x58) != 0) {
    iVar1 = param_1[2].location.area_id;
    if ((iVar1 == 3) || (iVar1 == 4)) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,(char *)&param_1[2].scale.z);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1[2].create_event + 0x34);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 == 0) {
    if (*(int *)(param_1[3].create_event + 0x58) == 0) {
      param_1[3].create_event[0x50] = '\x03';
      param_1[3].create_event[0x51] = '\0';
      param_1[3].create_event[0x52] = '\0';
      param_1[3].create_event[0x53] = '\0';
    }
    else {
      param_1[5].create_event[0x14] = '\x01';
      param_1[5].create_event[0x15] = '\0';
      param_1[5].create_event[0x16] = '\0';
      param_1[5].create_event[0x17] = '\0';
    }
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_2c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar1 != 0) {
    if ((*(int *)param_1[3].footstep_sound_code == 0) ||
       (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
       iVar1 != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
      return;
    }
    *(uint *)(0x01E57284 + 0x15a890) = 1;
    CStack_14.x = (int)ROUND((param_1->location).position.x * _DAT_005a1360);
    CStack_14.y = (int)ROUND((param_1->location).position.y * _DAT_005a1360);
    CStack_14.z = (int)ROUND((param_1->location).position.z * _DAT_005a1360);
    _DAT_014b7190 =
         core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
                   (_DAT_007f7370,&CStack_14,(SProjectedVertex *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
    *(uint *)(0x01E57284 + 0x15a890) = 0;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return;
}
