// Name: core_fire.cpp_CSmokeParticle_render_FUN_00496f60
// Address: 00496f60
// Address Range: [[00496f60, 0049728d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_00496f60(CSmokeParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_00496f60(CSmokeParticle *this_ptr)

{
  CVector3f *world_position;
  SProjectedVertex *output;
  longlong lVar1;
  int iVar2;
  float10 fVar3;
  CVector3i local_70;
  CVector3i local_64;
  float local_58;
  float local_54;
  uint local_50;
  CVector3i local_4c;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  float local_1c;
  int local_18;
  float local_14;
  
  output = (SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr;
  local_64.x = (int)ROUND((this_ptr->position).x * _DAT_005df8e4);
  local_64.y = (int)ROUND((this_ptr->position).y * _DAT_005df8e4);
  local_64.z = (int)ROUND((this_ptr->position).z * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c(output,&local_64);
  iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046e6b0
                    (DAT_005f2afc,(SRenderVertex *)output);
  if (iVar2 != 0) {
    fVar3 = (float10)this_ptr->age;
    round();
    local_18 = (int)ROUND(fVar3);
    if ((local_18 < 0) || (0x27 < local_18)) {
      _DAT_01d71de0 = "..\\core\\fire.cpp";
      _DAT_01d71de4 = 0x127;
      core_main_c_FUN_004e4330("CSmokeParticle::render - Frame out of range");
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)(&DAT_005fc5a4 + local_18 * 0x18));
    world_position = &this_ptr->position;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
              (DAT_005f2afc,(CVector3i *)&DAT_01c73658,(CVector3i *)0x0);
    local_14 = this_ptr->drag_factor;
    local_50 = 0;
    local_58 = -local_14;
    local_28.x = (int)ROUND(local_58 * _DAT_005df8e4);
    local_28.y = (int)ROUND(local_58 * _DAT_005df8e4);
    local_28.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    local_54 = local_58;
    local_1c = local_58;
    engine_special_cpp_FUN_005632a3((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&local_28);
    local_58 = local_14;
    local_54 = local_1c;
    local_50 = 0;
    local_70.x = (int)ROUND(local_14 * _DAT_005df8e4);
    local_70.y = (int)ROUND(local_1c * _DAT_005df8e4);
    local_70.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x30),&local_70);
    local_50 = 0;
    local_58 = local_14;
    local_54 = local_14;
    local_34.x = (int)ROUND(local_14 * _DAT_005df8e4);
    local_34.y = (int)ROUND(local_14 * _DAT_005df8e4);
    local_34.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x60),&local_34);
    local_58 = local_1c;
    local_54 = local_14;
    local_50 = 0;
    local_4c.x = (int)ROUND(local_1c * _DAT_005df8e4);
    local_4c.y = (int)ROUND(local_14 * _DAT_005df8e4);
    local_4c.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x90),&local_4c);
    DAT_0060b02c = 0x80000;
    _DAT_0060b030 = 0xf80000;
    _DAT_0060b05c = 0xf80000;
    _DAT_0060b060 = 0xf80000;
    _DAT_0060b08c = 0xf80000;
    DAT_0060b090 = 0x80000;
    _DAT_0060b0bc = 0x80000;
    _DAT_0060b0c0 = 0x80000;
    local_40.x = (int)ROUND(world_position->x * _DAT_005df8e4);
    local_40.y = (int)ROUND((this_ptr->position).y * _DAT_005df8e4);
    local_40.z = (int)ROUND((this_ptr->position).z * _DAT_005df8e4);
    core_set_cpp_CDemonSet_computeLighting_FUN_00538400
              (g_CDemonSetPtr,&local_40,(CVector3i *)&DAT_01c73664,0,4);
    (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,world_position,0);
    lVar1 = (longlong)(0xffff - _DAT_01c6e24c) * (longlong)this_ptr->alpha_value;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
              (DAT_005f2afc,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
              (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1c73670);
    engine_matrix_c_pop_FUN_0046d080();
  }
  return;
}
