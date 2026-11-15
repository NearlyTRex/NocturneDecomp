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
  SRenderVertex *vertex_ptr;
  longlong lVar1;
  int iVar2;
  double dVar3;
  CVector3i local_64;
  float local_58;
  uint local_54;
  CVector3i local_50;
  CVector3i local_44;
  CVector3i local_38;
  CVector3i local_2c;
  float local_20;
  int local_1c;
  float local_18;
  
  vertex_ptr = DAT_005f2afc->vertex_buffer_ptr;
  local_64.x = (int)ROUND((this_ptr->position).x * _DAT_005df8e4);
  local_64.y = (int)ROUND((this_ptr->position).y * _DAT_005df8e4);
  local_64.z = (int)ROUND((this_ptr->position).z * _DAT_005df8e4);
  engine_special_cpp_transformPoint_FUN_0056356c(&vertex_ptr->projected_vertex,&local_64);
  iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046e6b0(DAT_005f2afc,vertex_ptr);
  if (iVar2 != 0) {
    dVar3 = round((double)this_ptr->age);
    local_1c = (int)ROUND(dVar3);
    if ((local_1c < 0) || (0x27 < local_1c)) {
      _DAT_01d71de0 = "..\\core\\fire.cpp";
      _DAT_01d71de4 = 0x127;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CSmokeParticle::render - Frame out of range");
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)(&DAT_005fc5a4 + local_1c * 0x18));
    world_position = &this_ptr->position;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (DAT_005f2afc,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
              (DAT_005f2afc,(CVector3i *)&DAT_01c73658,(CVector3i *)0x0);
    local_18 = this_ptr->drag_factor;
    local_54 = 0;
    local_64.z = (int)-local_18;
    local_2c.x = (int)ROUND((float)local_64.z * _DAT_005df8e4);
    local_2c.y = (int)ROUND((float)local_64.z * _DAT_005df8e4);
    local_2c.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    local_58 = (float)local_64.z;
    local_20 = (float)local_64.z;
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_2c);
    local_64.z = (int)local_18;
    local_58 = local_20;
    local_54 = 0;
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&stack0xffffff8c);
    local_54 = 0;
    local_64.z = (int)local_18;
    local_58 = local_18;
    local_38.x = (int)ROUND(local_18 * _DAT_005df8e4);
    local_38.y = (int)ROUND(local_18 * _DAT_005df8e4);
    local_38.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_38);
    local_64.z = (int)local_20;
    local_58 = local_18;
    local_54 = 0;
    local_50.x = (int)ROUND(local_20 * _DAT_005df8e4);
    local_50.y = (int)ROUND(local_18 * _DAT_005df8e4);
    local_50.z = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_005632a3
              (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_50);
    DAT_0060b02c = 0x80000;
    _DAT_0060b030 = 0xf80000;
    _DAT_0060b05c = 0xf80000;
    _DAT_0060b060 = 0xf80000;
    _DAT_0060b08c = 0xf80000;
    DAT_0060b090 = 0x80000;
    _DAT_0060b0bc = 0x80000;
    _DAT_0060b0c0 = 0x80000;
    local_44.x = (int)ROUND(world_position->x * _DAT_005df8e4);
    local_44.y = (int)ROUND((this_ptr->position).y * _DAT_005df8e4);
    local_44.z = (int)ROUND((this_ptr->position).z * _DAT_005df8e4);
    core_set_cpp_CDemonSet_computeLighting_FUN_00538400
              (g_CDemonSetPtr,&local_44,(CVector3i *)&DAT_01c73664,0,4);
    (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,world_position,0);
    lVar1 = (longlong)(0xffff - _DAT_01c6e24c) * (longlong)this_ptr->alpha_value;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
              (DAT_005f2afc,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
              (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1c73670);
    engine_drender_cpp_pop_FUN_0046d080();
  }
  return;
}
