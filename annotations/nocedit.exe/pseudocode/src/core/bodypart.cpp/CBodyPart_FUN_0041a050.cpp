// Name: core_bodypart.cpp_CBodyPart_FUN_0041a050
// Address: 0041a050
// Address Range: [[0041a050, 0041a5aa] [0041a615, 0041a628]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041a050(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041a050(CBodyPart *this_ptr)

{
  double dVar1;
  CVector3f *pCVar2;
  SBodyPartModel *pSVar3;
  CVector3i *pCVar4;
  CVector3f *pCVar5;
  float fVar6;
  int iVar7;
  SSurfaceNormal *pSVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  CLocation *pCVar12;
  SSurfaceNormal *output;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  double dVar17;
  CVector3f local_78;
  CVector3f local_6c;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  CVector3f local_48;
  CVector3f local_3c;
  SBodyPartFire *local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  if ((2 < this_ptr->vertex_count) && (0 < this_ptr->tri_count)) {
    core_bodypart_cpp_CBodyPart_FUN_0041aa40(this_ptr);
    local_18 = (float)-((local_54 + local_60) / 2);
    iVar11 = -((local_50 + local_5c) / 2);
    iVar7 = 0;
    iVar13 = -((local_4c + local_58) / 2);
    if (0 < this_ptr->vertex_count) {
      iVar9 = 0;
      do {
        pCVar4 = this_ptr->vertices;
        piVar10 = (int *)((int)&pCVar4->x + iVar9);
        *piVar10 = *piVar10 + (int)local_18;
        piVar10 = (int *)((int)&pCVar4->y + iVar9);
        *piVar10 = *piVar10 + iVar11;
        piVar10 = (int *)((int)&pCVar4->z + iVar9);
        *piVar10 = *piVar10 + iVar13;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 0xc;
      } while (iVar7 < this_ptr->vertex_count);
    }
    local_54 = local_54 + (int)local_18;
    local_50 = local_50 + iVar11;
    local_4c = local_4c + iVar13;
    local_60 = local_60 + (int)local_18;
    local_58 = local_58 + iVar13;
    local_5c = local_5c + iVar11;
    local_6c.x = (float)0.00390625;
    (this_ptr->bounding_box).min.x = (float)local_54 * local_6c.x;
    (this_ptr->bounding_box).min.y = (float)local_50 * local_6c.x;
    (this_ptr->bounding_box).min.z = (float)local_4c * local_6c.x;
    (this_ptr->bounding_box).max.x = (float)local_60 * local_6c.x;
    local_6c.y = (float)iVar11 * local_6c.x;
    (this_ptr->bounding_box).max.y = (float)local_5c * local_6c.x;
    local_6c.z = (float)iVar13 * local_6c.x;
    (this_ptr->bounding_box).max.z = (float)local_58 * local_6c.x;
    local_6c.x = (float)(int)local_18 * local_6c.x;
    local_1c = local_6c.z;
    pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&this_ptr->base,&local_48,&local_6c);
    pCVar12 = &(this_ptr->base).location;
    (pCVar12->position).x = (pCVar12->position).x - pCVar2->x;
    (this_ptr->base).location.position.y = (this_ptr->base).location.position.y - pCVar2->y;
    (this_ptr->base).location.position.z = (this_ptr->base).location.position.z - pCVar2->z;
    iVar7 = 0;
    if (0 < this_ptr->attached_model_count) {
      pSVar3 = this_ptr->attached_models;
      do {
        (pSVar3->scale).x = (int)((float)(pSVar3->scale).x + local_6c.x);
        (pSVar3->scale).y = (int)((float)(pSVar3->scale).y + local_6c.y);
        iVar7 = iVar7 + 1;
        (pSVar3->scale).z = (int)((float)(pSVar3->scale).z + local_6c.z);
        pSVar3 = pSVar3 + 1;
      } while (iVar7 < this_ptr->attached_model_count);
    }
    iVar7 = 0;
    if (0 < this_ptr->fire_count) {
      local_28 = this_ptr->fires;
      pCVar12 = &this_ptr->fires[0].flame.base.location;
      do {
        pCVar2 = &local_28[iVar7].local_position;
        pCVar2->x = pCVar2->x + local_6c.x;
        pCVar2->y = pCVar2->y + local_6c.y;
        pCVar2->z = pCVar2->z + local_6c.z;
        iVar7 = iVar7 + 1;
        pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base,&local_3c,pCVar2);
        (pCVar12->position).x = pCVar2->x;
        (pCVar12->position).y = pCVar2->y;
        (pCVar12->position).z = pCVar2->z;
        pCVar12 = pCVar12 + 0x2b;
      } while (iVar7 < this_ptr->fire_count);
    }
    memset(this_ptr->normals,0,this_ptr->vertex_count * 0xc);
    local_20 = 0;
    if (0 < this_ptr->tri_count) {
      local_24 = 0;
      do {
        output = (SSurfaceNormal *)
                 ((int)&(this_ptr->faces->vertex_indices).vertex_index_0 + local_24);
        output->vertex_count = 3;
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(this_ptr->vertices,output);
        iVar7 = 0;
        pSVar8 = output;
        if (0 < output->vertex_count) {
          do {
            pCVar4 = this_ptr->normals + pSVar8->vertex_index_1;
            pCVar4->x = pCVar4->x + output->normal_x;
            pCVar4->y = pCVar4->y + output->normal_y;
            pCVar4->z = pCVar4->z + output->normal_z;
            iVar7 = iVar7 + 1;
            pSVar8 = (SSurfaceNormal *)&pSVar8->normal_y;
          } while (iVar7 < output->vertex_count);
        }
        local_24 = local_24 + 0x3c;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->tri_count);
    }
    iVar7 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar11 = 0;
      do {
        piVar10 = (int *)((int)&this_ptr->normals->x + iVar11);
        dVar16 = (double)*piVar10;
        iVar13 = piVar10[1];
        dVar1 = (double)iVar13;
        dVar17 = (double)piVar10[2];
        dVar16 = SQRT(dVar17 * dVar17 + dVar1 * dVar1 + dVar16 * dVar16);
        if (dVar16 <= 0.0) {
          piVar10[2] = 0;
          piVar10[1] = piVar10[2];
          *piVar10 = piVar10[2];
        }
        else {
          fVar14 = (float10)65535 / (float10)dVar16;
          fVar15 = (float10)piVar10[2] * fVar14;
          dVar16 = round((double)((float10)*piVar10 * fVar14));
          dVar17 = round((double)((float10)iVar13 * fVar14));
          fVar14 = (float10)dVar17;
          dVar17 = round((double)fVar15);
          *piVar10 = (int)ROUND(dVar16);
          piVar10[1] = (int)ROUND(fVar14);
          piVar10[2] = (int)ROUND(dVar17);
        }
        iVar7 = iVar7 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar7 < this_ptr->vertex_count);
    }
    core_bodypart_cpp_CBodyPart_FUN_0041b070(this_ptr);
    pCVar2 = &(this_ptr->sim_box).linear_velocity;
    if (pCVar2 != &this_ptr->initial_velocity) {
      pCVar2->x = (this_ptr->initial_velocity).x;
      (this_ptr->sim_box).linear_velocity.y = (this_ptr->initial_velocity).y;
      (this_ptr->sim_box).linear_velocity.z = (this_ptr->initial_velocity).z;
    }
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&(this_ptr->sim_box).rotation_matrix,&local_78,&this_ptr->initial_velocity);
    pCVar2 = &(this_ptr->sim_box).linear_velocity_local;
    if (pCVar2 != pCVar5) {
      pCVar2->x = pCVar5->x;
      (this_ptr->sim_box).linear_velocity_local.y = pCVar5->y;
      (this_ptr->sim_box).linear_velocity_local.z = pCVar5->z;
    }
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
    (this_ptr->sim_box).angular_velocity.x = local_18;
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
    (this_ptr->sim_box).angular_velocity.z = local_18;
    fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-9.424778,9.424778);
    (this_ptr->sim_box).angular_velocity.y = fVar6;
    return;
  }
  (this_ptr->base).was_created = 2;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr);
  pCVar2 = &(this_ptr->bounding_box).max;
  if (pCVar2 != &g_ZeroVector) {
    pCVar2->x = g_ZeroVector.x;
    (this_ptr->bounding_box).max.y = g_ZeroVector.y;
    (this_ptr->bounding_box).max.z = g_ZeroVector.z;
  }
  if (&this_ptr->bounding_box != (CBoundingBox3D *)pCVar2) {
    (this_ptr->bounding_box).min.x = pCVar2->x;
    (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
    (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
  }
  return;
}
