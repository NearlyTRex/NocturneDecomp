// Name: core_fire.cpp_CGlassParticle_init_FUN_004c1c00
// Address: 004c1c00
// Address Range: [[004c1c00, 004c1ce2]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGlassParticle_init_FUN_004c1c00(CGlassParticle * this_ptr, STriangleVertices * triangle_vertices, CVector3f * uv_u_per_vertex, CVector3f * uv_v_per_vertex, SMRGLTextureBasic * texture, int lifetime)

#include "nocturne.h"

void __cdecl
core_fire_cpp_CGlassParticle_init_FUN_004c1c00
          (CGlassParticle *this_ptr,STriangleVertices *triangle_vertices,CVector3f *uv_u_per_vertex,
          CVector3f *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  SMRGLTextureBasic *pSVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int *in_stack_0000001c;
  int in_stack_00000020;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_58;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40 [2];
  float fStack_20;
  float fStack_18;
  float local_10;
  
  bVar7 = 0;
  local_74 = triangle_vertices->vertices[0].x + triangle_vertices->vertices[1].x;
  local_70 = triangle_vertices->vertices[0].y + triangle_vertices->vertices[1].y;
  local_6c = triangle_vertices->vertices[0].z + triangle_vertices->vertices[1].z;
  local_44 = local_74 + triangle_vertices->vertices[2].x;
  local_80 = local_44 / 3f;
  local_40[0].x = local_70 + triangle_vertices->vertices[2].y;
  local_40[0].y = local_6c + triangle_vertices->vertices[2].z;
  local_7c = local_40[0].x * 0.3333333f;
  local_78 = local_40[0].y * 0.3333333f;
  if (&local_58.z != &local_80) {
    local_58.z = local_80;
    local_4c = local_7c;
    local_48 = local_78;
  }
  (this_ptr->uv_u_per_vertex).x = uv_u_per_vertex->x;
  (this_ptr->uv_u_per_vertex).y = uv_u_per_vertex->y;
  (this_ptr->uv_u_per_vertex).z = uv_u_per_vertex->z;
  (this_ptr->uv_v_per_vertex).x = uv_v_per_vertex->x;
  (this_ptr->uv_v_per_vertex).y = uv_v_per_vertex->y;
  (this_ptr->uv_v_per_vertex).z = uv_v_per_vertex->z;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,3.1415927);
  (this_ptr->euler_angles).z = 0.0;
  (this_ptr->euler_angles).x = fVar3;
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
  (this_ptr->euler_angles).y = fVar4;
  local_58.y = triangle_vertices->vertices[0].x - local_48;
  local_58.z = triangle_vertices->vertices[0].y - local_44;
  local_4c = triangle_vertices->vertices[0].z - local_40[0].x;
  if (&this_ptr->triangle_delta != (STriangleVertices *)&local_58.y) {
    (this_ptr->triangle_delta).vertices[0].x = local_58.y;
    (this_ptr->triangle_delta).vertices[0].y = local_58.z;
    (this_ptr->triangle_delta).vertices[0].z = local_4c;
  }
  fVar4 = triangle_vertices->vertices[1].y;
  pCVar1 = (this_ptr->triangle_delta).vertices + 1;
  fVar2 = triangle_vertices->vertices[1].z;
  if (pCVar1 != (CVector3f *)&stack0xffffff64) {
    pCVar1->x = triangle_vertices->vertices[1].x - local_48;
    (this_ptr->triangle_delta).vertices[1].y = fVar4 - local_44;
    (this_ptr->triangle_delta).vertices[1].z = fVar2 - local_40[0].x;
  }
  local_90 = triangle_vertices->vertices[2].x - local_48;
  local_8c = triangle_vertices->vertices[2].y - local_44;
  local_88 = triangle_vertices->vertices[2].z - local_40[0].x;
  pCVar1 = (this_ptr->triangle_delta).vertices + 2;
  if (pCVar1 != (CVector3f *)&local_90) {
    pCVar1->x = local_90;
    (this_ptr->triangle_delta).vertices[2].y = local_8c;
    (this_ptr->triangle_delta).vertices[2].z = local_88;
  }
  pSVar6 = &this_ptr->texture;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    (pSVar6->base).type = *in_stack_0000001c;
    in_stack_0000001c = in_stack_0000001c + (uint)bVar7 * -2 + 1;
    pSVar6 = (SMRGLTextureBasic *)((int)pSVar6 + (uint)bVar7 * -8 + 4);
  }
  this_ptr->lifetime = in_stack_00000020;
  local_84 = (this_ptr->triangle_delta).vertices[2].x - (this_ptr->triangle_delta).vertices[0].x;
  local_80 = (this_ptr->triangle_delta).vertices[2].y - (this_ptr->triangle_delta).vertices[0].y;
  local_7c = (this_ptr->triangle_delta).vertices[2].z - (this_ptr->triangle_delta).vertices[0].z;
  fStack_20 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80) *
              (float)10;
  local_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
  fVar8 = (float10)fcos((float10)fVar4);
  fVar9 = (float10)fcos((float10)fVar3);
  fVar10 = (float10)fsin((float10)fVar4);
  fVar11 = (float10)fsin((float10)fVar3);
  local_58.y = (float)(fVar11 * (float10)fStack_18);
  local_58.x = (float)((float10)fStack_18 * fVar8 * fVar9);
  local_58.z = (float)((float10)fStack_18 * fVar10 * fVar9);
  core_particle_cpp_CParticle_setup_FUN_00545680(&this_ptr->base,local_40,&local_58);
  return;
}
