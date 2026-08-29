// Name: core_fire.cpp_CGlassParticle_init_FUN_004c1c00
// Address: 004c1c00
// MANUAL RECONSTRUCTION
// Address Range: [[004c1c00, 004c1ee1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGlassParticle_init_FUN_004c1c00(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGlassParticle_init_FUN_004c1c00(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

{
  CVector3f *pCVar2;
  float fVar3;
  float fVar4;
  float fVar9;
  int iVar2;
  SMRGLTextureBasic *pSVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  CVector3f local_80;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f *pCVar1;

  bVar4 = 0;
  local_80.x = (triangle_vertices->vertices[0].x + triangle_vertices->vertices[1].x +
               triangle_vertices->vertices[2].x) / 3.0f;
  local_80.y = (triangle_vertices->vertices[0].y + triangle_vertices->vertices[1].y +
               triangle_vertices->vertices[2].y) * 0.3333333f;
  local_80.z = (triangle_vertices->vertices[0].z + triangle_vertices->vertices[1].z +
               triangle_vertices->vertices[2].z) * 0.3333333f;
  local_50 = local_80;
  this_ptr->uv_u_per_vertex = *uv_u_per_vertex;
  this_ptr->uv_v_per_vertex = *uv_v_per_vertex;
#if NOCTURNE_AUTHENTIC_RNG
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,3.1415927);
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = fVar3;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,6.2831855);
#else
  fVar3 = nocturne_rng_fx_range(0.0,3.1415927);
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = fVar3;
  fVar3 = nocturne_rng_fx_range(0.0,6.2831855);
#endif
  (this_ptr->euler_angles).y = fVar3;
  local_5c = triangle_vertices->vertices[0].x - local_50.x;
  local_58 = triangle_vertices->vertices[0].y - local_50.y;
  local_54 = triangle_vertices->vertices[0].z - local_50.z;
  (this_ptr->triangle_delta).vertices[0].x = local_5c;
  (this_ptr->triangle_delta).vertices[0].y = local_58;
  (this_ptr->triangle_delta).vertices[0].z = local_54;
  local_a4 = triangle_vertices->vertices[1].x - local_50.x;
  local_a0 = triangle_vertices->vertices[1].y - local_50.y;
  pCVar1 = (this_ptr->triangle_delta).vertices + 1;
  local_9c = triangle_vertices->vertices[1].z - local_50.z;
  if (pCVar1 != (CVector3f *)&local_a4) {
    pCVar1->x = local_a4;
    (this_ptr->triangle_delta).vertices[1].y = local_a0;
    (this_ptr->triangle_delta).vertices[1].z = local_9c;
  }
  local_98 = triangle_vertices->vertices[2].x - local_50.x;
  local_94 = triangle_vertices->vertices[2].y - local_50.y;
  local_90 = triangle_vertices->vertices[2].z - local_50.z;
  pCVar2 = (this_ptr->triangle_delta).vertices + 2;
  if (pCVar2 != (CVector3f *)&local_98) {
    pCVar2->x = local_98;
    (this_ptr->triangle_delta).vertices[2].y = local_94;
    (this_ptr->triangle_delta).vertices[2].z = local_90;
  }
  this_ptr->texture = *texture;
  this_ptr->lifetime = lifetime;
  local_8c = (this_ptr->triangle_delta).vertices[2].x - (this_ptr->triangle_delta).vertices[0].x;
  local_88 = (this_ptr->triangle_delta).vertices[2].y - (this_ptr->triangle_delta).vertices[0].y;
  local_84 = (this_ptr->triangle_delta).vertices[2].z - (this_ptr->triangle_delta).vertices[0].z;
  fVar3 = SQRT(local_84 * local_84 + local_8c * local_8c + local_88 * local_88) *
          (float)10;
#if NOCTURNE_AUTHENTIC_RNG
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.7853982,1.5707964);
  fVar9 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,6.2831855);
#else
  fVar4 = nocturne_rng_fx_range(0.7853982,1.5707964);
  fVar9 = nocturne_rng_fx_range(0.0,6.2831855);
#endif
  fVar5 = (float10)fcos((float10)fVar9);
  fVar6 = (float10)fcos((float10)fVar4);
  fVar7 = (float10)fsin((float10)fVar9);
  fVar8 = (float10)fsin((float10)fVar4);
  local_68.y = (float)(fVar8 * (float10)fVar3);
  local_68.x = (float)((float10)fVar3 * fVar5 * fVar6);
  local_68.z = (float)((float10)fVar3 * fVar7 * fVar6);
  core_particle_cpp_CParticle_setup_FUN_00545680(&this_ptr->base,&local_50,&local_68);
  return;
}
