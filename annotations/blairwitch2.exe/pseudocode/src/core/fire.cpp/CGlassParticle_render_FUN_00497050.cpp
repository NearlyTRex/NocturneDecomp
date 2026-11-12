// Name: core_fire.cpp_CGlassParticle_render_FUN_00497050
// Address: 00497050
// Address Range: [[00497050, 0049724e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGlassParticle_render_FUN_00497050(CGlassParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGlassParticle_render_FUN_00497050(CGlassParticle *this_ptr)

{
  SMRGLHeaderPrimitive SStack_68;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  CVector3i CStack_40;
  CVector3i CStack_34;
  CVector3i CStack_28;
  CVector3i CStack_1c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&this_ptr->euler_angles,(CVector3f *)0x0);
  CStack_28.x = (int)ROUND((this_ptr->triangle_delta).vertices[0].x * _DAT_005f64e4);
  CStack_28.y = (int)ROUND((this_ptr->triangle_delta).vertices[0].y * _DAT_005f64e4);
  CStack_28.z = (int)ROUND((this_ptr->triangle_delta).vertices[0].z * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_28);
  CStack_1c.x = (int)ROUND((this_ptr->triangle_delta).vertices[1].x * _DAT_005f64e4);
  CStack_1c.y = (int)ROUND((this_ptr->triangle_delta).vertices[1].y * _DAT_005f64e4);
  CStack_1c.z = (int)ROUND((this_ptr->triangle_delta).vertices[1].z * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_1c);
  CStack_34.x = (int)ROUND((this_ptr->triangle_delta).vertices[2].x * _DAT_005f64e4);
  CStack_34.y = (int)ROUND((this_ptr->triangle_delta).vertices[2].y * _DAT_005f64e4);
  CStack_34.z = (int)ROUND((this_ptr->triangle_delta).vertices[2].z * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_34);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,&this_ptr->texture);
  SStack_68.base.count = 3;
  SStack_68.surface_normal.D.i = 0;
  SStack_68.surface_normal.C.i = 0;
  SStack_68.surface_normal.B.i = 0;
  SStack_68.surface_normal.A.i = 0;
  uStack_50 = 0;
  uStack_4c = 1;
  uStack_48 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,this_ptr->lifetime);
  CStack_40.x = (int)ROUND((this_ptr->base).position.x * _DAT_005f64e4);
  CStack_40.y = (int)ROUND((this_ptr->base).position.y * _DAT_005f64e4);
  CStack_40.z = (int)ROUND((this_ptr->base).position.z * _DAT_005f64e4);
  core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
            (g_CDemonSetPtr,&CStack_40,(CVector3i *)0x0,0,3);
  DAT_0062202c = (this_ptr->uv_u_per_vertex).x;
  _DAT_00622030 = (this_ptr->uv_v_per_vertex).x;
  _DAT_0062205c = (this_ptr->uv_u_per_vertex).y;
  _DAT_00622060 = (this_ptr->uv_v_per_vertex).y;
  _DAT_0062208c = (this_ptr->uv_u_per_vertex).z;
  DAT_00622090 = (this_ptr->uv_v_per_vertex).z;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,&SStack_68);
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
