// Name: core_fire.cpp_CBulletHole_render_FUN_00482f50
// Address: 00482f50
// Address Range: [[00482f50, 0048328b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_render_FUN_00482f50(CBulletHole *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletHole_render_FUN_00482f50(CBulletHole *this_ptr)

{
  CVector3f *rotation;
  CVector3i local_70;
  CVector3i local_64;
  uint local_58;
  uint local_54;
  uint local_50;
  CVector3i local_4c;
  CVector3i local_40;
  CVector3f local_34;
  CVector3i local_28;
  CVector3i local_1c;
  
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,&this_ptr->position);
    rotation = (CVector3f *)0x0;
  }
  else {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(this_ptr->actor_ptr);
    rotation = &this_ptr->transformed_pos;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&this_ptr->euler_angles,rotation);
  _DAT_005c505c = (this_ptr->texture_index & 1U) * 0x800000;
  local_50 = 0;
  DAT_005c502c = _DAT_005c505c + 0x80000;
  _DAT_005c5090 = (this_ptr->texture_index & 2U) * 0x400000;
  _DAT_005c505c = _DAT_005c505c + 0x780000;
  _DAT_005c5030 = _DAT_005c5090 + 0x780000;
  _DAT_005c5090 = _DAT_005c5090 + 0x80000;
  local_58 = 0xbe2e147b;
  local_54 = 0xbe2e147b;
  local_40.x = (int)ROUND(256.0f * -0.17);
  local_40.y = (int)ROUND(256.0f * -0.17);
  local_40.z = (int)ROUND(256.0f * 0.0);
  _DAT_005c5060 = _DAT_005c5030;
  _DAT_005c508c = _DAT_005c505c;
  _DAT_005c50bc = DAT_005c502c;
  _DAT_005c50c0 = _DAT_005c5090;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&local_40);
  local_58 = 0x3e2e147b;
  local_54 = 0xbe2e147b;
  local_50 = 0;
  local_70.x = (int)ROUND(256.0f * 0.17);
  local_70.y = (int)ROUND(256.0f * -0.17);
  local_70.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_70);
  local_58 = 0x3e2e147b;
  local_54 = 0x3e2e147b;
  local_50 = 0;
  local_1c.x = (int)ROUND(256.0f * 0.17);
  local_1c.y = (int)ROUND(256.0f * 0.17);
  local_1c.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_1c);
  local_58 = 0xbe2e147b;
  local_50 = 0;
  local_54 = 0x3e2e147b;
  local_28.x = (int)ROUND(256.0f * -0.17);
  local_28.y = (int)ROUND(256.0f * 0.17);
  local_28.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_28);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760
              (_DAT_007f7370,(SRenderVertex *)&DAT_005c5014);
    core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760
              (_DAT_007f7370,(SRenderVertex *)&DAT_005c5044);
    core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760
              (_DAT_007f7370,(SRenderVertex *)&DAT_005c5074);
    core_dcamera_cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760
              (_DAT_007f7370,(SRenderVertex *)&DAT_005c50a4);
  }
  else {
    core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
              (this_ptr->actor_ptr,&local_34,&this_ptr->actor_local_space);
    local_64.x = (int)ROUND((this_ptr->position).x * 256.0f);
    local_64.y = (int)ROUND((this_ptr->position).y * 256.0f);
    local_64.z = (int)ROUND((this_ptr->position).z * 256.0f);
    local_4c.x = (int)ROUND(local_34.x * 65536.0f);
    local_4c.y = (int)ROUND(local_34.y * 65536.0f);
    local_4c.z = (int)ROUND(local_34.z * 65536.0f);
    core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50(0x01E57284,&local_64,&local_4c,0,4);
  }
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
            (DAT_005ae704,(SMRGLHeaderPrimitive *)0x1c08d20);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
    return;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(this_ptr->actor_ptr);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return;
}
