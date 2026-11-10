// Name: core_fire.cpp_CFireEffect_createGlassParticle_FUN_004a2780
// Address: 004a2780
// Address Range: [[004a2780, 004a27d4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_004a2780(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_004a2780(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

{
  int iVar1;
  CGlassParticle *pCVar2;
  
  iVar1 = _DAT_01cbc0ec + 1;
  pCVar2 = CGlassParticle_ARRAY_01cbc0f0 + _DAT_01cbc0ec;
  _DAT_01cbc0ec = iVar1;
  if (999 < iVar1) {
    _DAT_01cbc0ec = 0;
  }
  core_fire_cpp_FUN_0049a650
            (pCVar2,triangle_vertices,uv_u_per_vertex,uv_v_per_vertex,texture,lifetime);
  return;
}
