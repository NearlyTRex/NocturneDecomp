// Name: core_fire.cpp_CGlassParticle_init_FUN_00496c60
// Address: 00496c60
// Address Range: [[00496c60, 00497044]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGlassParticle_init_FUN_00496c60(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGlassParticle_init_FUN_00496c60(CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

{
  CVector3f *pCVar1;
  int iVar2;
  SMRGLTextureBasic *pSVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_10e8 [1015];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3f local_c4;
  float local_b8;
  float local_b4 [2];
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90 [2];
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar4 = 0;
  local_f4 = triangle_vertices->vertices[0].x + triangle_vertices->vertices[1].x;
  local_f0 = triangle_vertices->vertices[0].y + triangle_vertices->vertices[1].y;
  local_ec = triangle_vertices->vertices[0].z + triangle_vertices->vertices[1].z;
  local_a0 = local_f4 + triangle_vertices->vertices[2].x;
  local_9c = local_f0 + triangle_vertices->vertices[2].y;
  local_98 = local_ec + triangle_vertices->vertices[2].z;
  local_88.x = local_a0 * _DAT_005d5452;
  local_88.y = local_9c * _DAT_005d5452;
  local_88.z = local_98 * _DAT_005d5452;
  if (&local_c4 != (CVector3f *)(local_90 + 2)) {
    local_c4.x = local_88.x;
    local_c4.y = local_88.y;
    local_c4.z = local_88.z;
  }
  (this_ptr->uv_u_per_vertex).x = uv_u_per_vertex->x;
  (this_ptr->uv_u_per_vertex).y = uv_u_per_vertex->y;
  (this_ptr->uv_u_per_vertex).z = uv_u_per_vertex->z;
  (this_ptr->uv_v_per_vertex).x = uv_v_per_vertex->x;
  (this_ptr->uv_v_per_vertex).y = uv_v_per_vertex->y;
  (this_ptr->uv_v_per_vertex).z = uv_v_per_vertex->z;
  local_dc = local_f4;
  local_d8 = local_f0;
  local_d4 = local_ec;
  local_7c = local_a0;
  local_78 = local_9c;
  local_74 = local_98;
  local_70 = local_88.x;
  local_6c = local_88.y;
  local_68 = local_88.z;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,3.1415927);
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = local_18;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  (this_ptr->euler_angles).y = local_18;
  local_b8 = triangle_vertices->vertices[0].x - local_c4.x;
  local_b4[0] = triangle_vertices->vertices[0].y - local_c4.y;
  local_b4[1] = triangle_vertices->vertices[0].z - local_c4.z;
  local_64 = local_b8;
  local_60[(uint)bVar4 * -2] = local_b4[(uint)bVar4 * -2];
  local_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (&this_ptr->triangle_delta != (STriangleVertices *)&local_64) {
    (this_ptr->triangle_delta).vertices[0].x = local_64;
    (this_ptr->triangle_delta).vertices[0].y = local_60[0];
    (this_ptr->triangle_delta).vertices[0].z = local_60[1];
  }
  pCVar1 = (this_ptr->triangle_delta).vertices + 1;
  local_d0 = triangle_vertices->vertices[1].x - local_c4.x;
  local_cc = triangle_vertices->vertices[1].y - local_c4.y;
  local_c8 = triangle_vertices->vertices[1].z - local_c4.z;
  local_4c = local_d0;
  local_60[(uint)bVar4 * -2 + 6] = (&stack0xffffff34)[(uint)bVar4 * 0xfffffffe];
  local_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       *(float *)((int)&stack0xffffff38 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (pCVar1 != (CVector3f *)(local_60 + 5)) {
    pCVar1->x = local_4c;
    (this_ptr->triangle_delta).vertices[1].y = local_48;
    (this_ptr->triangle_delta).vertices[1].z = local_44;
  }
  pCVar1 = (this_ptr->triangle_delta).vertices + 2;
  local_60[2] = triangle_vertices->vertices[2].x - local_c4.x;
  local_60[3] = triangle_vertices->vertices[2].y - local_c4.y;
  local_50 = triangle_vertices->vertices[2].z - local_c4.z;
  local_100 = local_60[2];
  (&stack0xffffff04)[(uint)bVar4 * 0xfffffffe] = local_60[(uint)bVar4 * -2 + 3];
  *(float *)((int)&stack0xffffff08 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       local_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  if (pCVar1 != (CVector3f *)&stack0xffffff00) {
    pCVar1->x = local_100;
    (this_ptr->triangle_delta).vertices[2].y = local_fc;
    (this_ptr->triangle_delta).vertices[2].z = local_f8;
  }
  pSVar3 = &this_ptr->texture;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pSVar3->base).type = (texture->base).type;
    texture = (SMRGLTextureBasic *)((int)texture + (uint)bVar4 * -8 + 4);
    pSVar3 = (SMRGLTextureBasic *)((int)pSVar3 + (uint)bVar4 * -8 + 4);
  }
  this_ptr->lifetime = lifetime;
  local_e8 = (this_ptr->triangle_delta).vertices[2].x - (this_ptr->triangle_delta).vertices[0].x;
  local_e4 = (this_ptr->triangle_delta).vertices[2].y - (this_ptr->triangle_delta).vertices[0].y;
  local_e0 = (this_ptr->triangle_delta).vertices[2].z - (this_ptr->triangle_delta).vertices[0].z;
  local_94 = local_e8;
  local_90[(uint)bVar4 * -2] = (&stack0xffffff1c)[(uint)bVar4 * 0xfffffffe];
  local_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&stack0xffffff20 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  local_1c = SQRT(local_90[1] * local_90[1] + local_94 * local_94 + local_90[0] * local_90[0]) *
             (float)_DAT_005d545a;
  local_30 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.7853982,1.5707964);
  local_18 = local_30;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fVar5 = (float10)fcos((float10)local_18);
  fVar6 = (float10)fcos((float10)local_30);
  fVar7 = (float10)fsin((float10)local_18);
  fVar8 = (float10)fsin((float10)local_30);
  local_28 = (float)fVar5;
  local_2c = (float)fVar7;
  local_24 = (float)fVar8;
  local_ac.y = local_1c * local_24;
  local_20 = (float)fVar6;
  local_ac.x = local_1c * local_28 * local_20;
  local_ac.z = local_1c * local_2c * local_20;
  core_particle_cpp_CParticle_setup_FUN_00510e00(&this_ptr->base,&local_c4,&local_ac);
  return;
}
