// Name: core_emitter.cpp_CEmitter_renderOpaque_FUN_004a8860
// Address: 004a8860
// Address Range: [[004a8860, 004a8a71]]
// Convention: __cdecl
// Signature: int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_004a8860(CEmitter *this_ptr)

#include "nocturne.h"

int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_004a8860(CEmitter *this_ptr)

{
  int iVar1;
  CQuaternion4f *world_position;
  CVector3f *label_offset;
  uint *param5;
  SLaserInfo local_7c;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    if ((this_ptr->emitter_type == 3) && (this_ptr->emitter_state != 0)) {
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base);
      core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0(&local_7c);
      local_7c.unk._8_4_ = this_ptr->laser_type;
      local_7c.unk._12_4_ = this_ptr->laser_r;
      local_7c.unk._16_4_ = this_ptr->laser_g;
      local_7c.unk._20_4_ = this_ptr->laser_b;
      local_7c.unk[0x18] = '\0';
      local_7c.unk[0x19] = '\0';
      local_7c.unk[0x1a] = '\0';
      local_7c.unk[0x1b] = '\0';
      local_7c.unk[0x1c] = '\0';
      local_7c.unk[0x1d] = '\0';
      local_7c.unk[0x1e] = '\0';
      local_7c.unk[0x1f] = '\0';
      local_7c.unk[0] = '\0';
      local_7c.unk[1] = '\0';
      local_7c.unk[2] = -0x80;
      local_7c.unk[3] = '?';
      local_1c.x = 0.0;
      local_1c.y = 0.0;
      local_1c.z = 100.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(&this_ptr->base,&local_28,&local_1c);
      core_fire_cpp_CFireEffect_FUN_004c8230(g_CFireEffectPtr);
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      return 1;
    }
    if (g_CDemonMissionPtr->is_in_editor != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
      if (iVar1 == 0) {
        core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(&this_ptr->base,0xfb);
        if ((((this_ptr->emitter_type == 3) && (INT_02cf2b5c != 0)) && (this_ptr == DAT_02cf2b78))
           && (DAT_02cf2b78 == (CEmitter *)g_CDemonMissionPtr->selected_actor)) {
          param5 = &DAT_02cf2b6c;
          label_offset = &CVector3f_02cf2b60;
          world_position =
               (CQuaternion4f *)
               shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                         (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
                    (g_CEditorToolsPtr,0x3f800000,world_position,(CQuaternion4f *)label_offset,
                     param5);
          return 0;
        }
      }
    }
  }
  return 0;
}
