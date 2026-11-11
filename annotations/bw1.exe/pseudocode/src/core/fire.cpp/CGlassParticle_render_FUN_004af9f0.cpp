// Name: core_fire.cpp_CGlassParticle_render_FUN_004af9f0
// Address: 004af9f0
// Address Range: [[004af9f0, 004afbee]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGlassParticle_render_FUN_004af9f0(CGlassParticle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGlassParticle_render_FUN_004af9f0(CGlassParticle *this_ptr)

{
  SMRGLHeaderPrimitive SStack_68;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  CVector3i CStack_40;
  CVector3i CStack_34;
  CVector3i CStack_28;
  CVector3i CStack_1c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&this_ptr->euler_angles,(CVector3f *)0x0);
  CStack_28.x = (int)ROUND((this_ptr->triangle_delta).vertices[0].x * _DAT_005fff94);
  CStack_28.y = (int)ROUND((this_ptr->triangle_delta).vertices[0].y * _DAT_005fff94);
  CStack_28.z = (int)ROUND((this_ptr->triangle_delta).vertices[0].z * _DAT_005fff94);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_28);
  CStack_1c.x = (int)ROUND((this_ptr->triangle_delta).vertices[1].x * _DAT_005fff94);
  CStack_1c.y = (int)ROUND((this_ptr->triangle_delta).vertices[1].y * _DAT_005fff94);
  CStack_1c.z = (int)ROUND((this_ptr->triangle_delta).vertices[1].z * _DAT_005fff94);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_1c);
  CStack_34.x = (int)ROUND((this_ptr->triangle_delta).vertices[2].x * _DAT_005fff94);
  CStack_34.y = (int)ROUND((this_ptr->triangle_delta).vertices[2].y * _DAT_005fff94);
  CStack_34.z = (int)ROUND((this_ptr->triangle_delta).vertices[2].z * _DAT_005fff94);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_34);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,&this_ptr->texture);
  SStack_68.base.count = 3;
  SStack_68.surface_normal.D.i = 0;
  SStack_68.surface_normal.C.i = 0;
  SStack_68.surface_normal.B.i = 0;
  SStack_68.surface_normal.A.i = 0;
  uStack_50 = 0;
  uStack_4c = 1;
  uStack_48 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,this_ptr->lifetime);
  CStack_40.x = (int)ROUND((this_ptr->base).position.x * _DAT_005fff94);
  CStack_40.y = (int)ROUND((this_ptr->base).position.y * _DAT_005fff94);
  CStack_40.z = (int)ROUND((this_ptr->base).position.z * _DAT_005fff94);
  core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
            (g_CDemonSetPtr,&CStack_40,(CVector3i *)0x0,0,3);
  DAT_0062902c = (this_ptr->uv_u_per_vertex).x;
  _DAT_00629030 = (this_ptr->uv_v_per_vertex).x;
  _DAT_0062905c = (this_ptr->uv_u_per_vertex).y;
  _DAT_00629060 = (this_ptr->uv_v_per_vertex).y;
  _DAT_0062908c = (this_ptr->uv_u_per_vertex).z;
  DAT_00629090 = (this_ptr->uv_v_per_vertex).z;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(DAT_00612560,&SStack_68);
  engine_matrix_c_pop_FUN_004839a0();
  return;
}
