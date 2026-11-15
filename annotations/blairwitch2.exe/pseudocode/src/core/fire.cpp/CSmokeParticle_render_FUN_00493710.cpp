// Name: core_fire.cpp_CSmokeParticle_render_FUN_00493710
// Address: 00493710
// Address Range: [[00493710, 00493a3d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_00493710(CSmokeParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_00493710(CSmokeParticle *this_ptr)

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
  
  vertex_ptr = DAT_0060b280->vertex_buffer_ptr;
  local_64.x = (int)ROUND((this_ptr->position).x * _DAT_005f64e4);
  local_64.y = (int)ROUND((this_ptr->position).y * _DAT_005f64e4);
  local_64.z = (int)ROUND((this_ptr->position).z * _DAT_005f64e4);
  engine_special_cpp_transformPoint_FUN_0055d9ec(&vertex_ptr->projected_vertex,&local_64);
  iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0(DAT_0060b280,vertex_ptr);
  if (iVar2 != 0) {
    dVar3 = round((double)this_ptr->age);
    local_1c = (int)ROUND(dVar3);
    if ((local_1c < 0) || (0x27 < local_1c)) {
      _DAT_01d046a0 = "..\\core\\fire.cpp";
      _DAT_01d046a4 = 0x11d;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CSmokeParticle::render - Frame out of range");
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)(&DAT_00614d34 + local_1c * 0x18));
    world_position = &this_ptr->position;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
              (DAT_0060b280,(CVector3i *)&DAT_01c3deb8,(CVector3i *)0x0);
    local_18 = this_ptr->drag_factor;
    local_54 = 0;
    local_64.z = (int)-local_18;
    local_2c.x = (int)ROUND((float)local_64.z * _DAT_005f64e4);
    local_2c.y = (int)ROUND((float)local_64.z * _DAT_005f64e4);
    local_2c.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    local_58 = (float)local_64.z;
    local_20 = (float)local_64.z;
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_2c);
    local_64.z = (int)local_18;
    local_58 = local_20;
    local_54 = 0;
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)&stack0xffffff8c);
    local_54 = 0;
    local_64.z = (int)local_18;
    local_58 = local_18;
    local_38.x = (int)ROUND(local_18 * _DAT_005f64e4);
    local_38.y = (int)ROUND(local_18 * _DAT_005f64e4);
    local_38.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_38);
    local_64.z = (int)local_20;
    local_58 = local_18;
    local_54 = 0;
    local_50.x = (int)ROUND(local_20 * _DAT_005f64e4);
    local_50.y = (int)ROUND(local_18 * _DAT_005f64e4);
    local_50.z = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_50);
    DAT_0062202c = 0x80000;
    _DAT_00622030 = 0xf80000;
    _DAT_0062205c = 0xf80000;
    _DAT_00622060 = 0xf80000;
    _DAT_0062208c = 0xf80000;
    DAT_00622090 = 0x80000;
    _DAT_006220bc = 0x80000;
    _DAT_006220c0 = 0x80000;
    local_44.x = (int)ROUND(world_position->x * _DAT_005f64e4);
    local_44.y = (int)ROUND((this_ptr->position).y * _DAT_005f64e4);
    local_44.z = (int)ROUND((this_ptr->position).z * _DAT_005f64e4);
    core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
              (g_CDemonSetPtr,&local_44,(CVector3i *)&DAT_01c3dec4,0,4);
    (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,world_position,0);
    lVar1 = (longlong)(0xffff - _DAT_01c38aec) * (longlong)this_ptr->alpha_value;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
              (DAT_0060b280,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
              (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1c3ded0);
    engine_drender_cpp_pop_FUN_0046b4a0();
  }
  return;
}
