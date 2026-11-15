// Name: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
// Address: 00419b90
// Address Range: [[00419b90, 0041a1fa]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  double dVar3;
  SBodyPartModel *pSVar4;
  CVector3f *pCVar5;
  CVector3i *pCVar6;
  float fVar7;
  int iVar8;
  SMRGLPrimitiveTriangle *pSVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  SMRGLPrimitiveTriangle *texture;
  int iVar13;
  byte bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float afStackY_1088 [1005];
  CVector3f local_a0;
  float local_94;
  float local_90 [2];
  CVector3f local_88;
  CVector3i local_7c;
  float local_70;
  float local_6c [2];
  CVector3f local_64;
  CVector3i local_58;
  CVector3f local_4c;
  float local_40;
  float local_3c [4];
  SBodyPartFire *local_2c;
  int local_28;
  int local_24;
  int local_20;
  CLocation *local_1c;
  float local_18;
  float local_14;
  
  bVar14 = 0;
  if ((2 < this_ptr->vertex_count) && (0 < this_ptr->tri_count)) {
    core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041a700
              (this_ptr,&local_58,&local_7c);
    local_14 = (float)-((local_58.y + local_7c.y) / 2);
    iVar13 = -((local_58.x + local_7c.x) / 2);
    iVar8 = 0;
    iVar11 = -((local_58.z + local_7c.z) / 2);
    if (0 < this_ptr->vertex_count) {
      iVar12 = 0;
      do {
        pCVar6 = this_ptr->vertices;
        piVar10 = (int *)((int)&pCVar6->x + iVar12);
        *piVar10 = *piVar10 + iVar13;
        piVar10 = (int *)((int)&pCVar6->y + iVar12);
        *piVar10 = *piVar10 + (int)local_14;
        piVar10 = (int *)((int)&pCVar6->z + iVar12);
        *piVar10 = *piVar10 + iVar11;
        iVar8 = iVar8 + 1;
        iVar12 = iVar12 + 0xc;
      } while (iVar8 < this_ptr->vertex_count);
    }
    local_58.x = local_58.x + iVar13;
    local_58.y = local_58.y + (int)local_14;
    local_58.z = local_58.z + iVar11;
    local_7c.x = local_7c.x + iVar13;
    local_7c.y = local_7c.y + (int)local_14;
    local_7c.z = local_7c.z + iVar11;
    fVar7 = (float)_DAT_005d44d1;
    (this_ptr->bounding_box).min.x = (float)local_58.x * fVar7;
    (this_ptr->bounding_box).min.y = (float)local_58.y * fVar7;
    (this_ptr->bounding_box).min.z = (float)local_58.z * fVar7;
    (this_ptr->bounding_box).max.x = (float)local_7c.x * fVar7;
    local_4c.x = (float)iVar13 * fVar7;
    (this_ptr->bounding_box).max.y = (float)local_7c.y * fVar7;
    local_4c.z = (float)iVar11 * fVar7;
    local_4c.y = (float)(int)local_14 * fVar7;
    (this_ptr->bounding_box).max.z = (float)local_7c.z * fVar7;
    local_18 = local_4c.z;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(&this_ptr->base,&local_4c,&local_a0);
    pCVar1 = &(this_ptr->base).location;
    local_94 = local_a0.x;
    local_90[(uint)bVar14 * -2] = *(float *)((int)&local_a0 + (uint)bVar14 * -8 + 4);
    local_90[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         *(float *)((int)&local_a0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
    fVar7 = (this_ptr->base).location.position.y;
    fVar2 = (this_ptr->base).location.position.z;
    (pCVar1->position).x = (pCVar1->position).x - local_94;
    (this_ptr->base).location.position.y = fVar7 - local_90[0];
    (this_ptr->base).location.position.z = fVar2 - local_90[1];
    iVar8 = 0;
    if (0 < this_ptr->attached_model_count) {
      pSVar4 = this_ptr->attached_models;
      do {
        (pSVar4->position_offset).x = (pSVar4->position_offset).x + local_4c.x;
        (pSVar4->position_offset).y = (pSVar4->position_offset).y + local_4c.y;
        iVar8 = iVar8 + 1;
        (pSVar4->position_offset).z = (pSVar4->position_offset).z + local_4c.z;
        pSVar4 = pSVar4 + 1;
      } while (iVar8 < this_ptr->attached_model_count);
    }
    local_20 = 0;
    if (0 < this_ptr->fire_count) {
      local_2c = this_ptr->fires;
      local_1c = &this_ptr->fires[0].flame.base.location;
      do {
        pCVar5 = &local_2c[local_20].local_position;
        pCVar5->x = pCVar5->x + local_4c.x;
        pCVar5->y = pCVar5->y + local_4c.y;
        pCVar5->z = pCVar5->z + local_4c.z;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(&this_ptr->base,pCVar5,&local_64);
        local_40 = local_64.x;
        local_3c[(uint)bVar14 * -2] = *(float *)((int)&local_64 + (uint)bVar14 * -8 + 4);
        local_3c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             *(float *)((int)&local_64 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
        (local_1c->position).x = local_40;
        (local_1c->position).y = local_3c[0];
        pCVar1 = local_1c + 0x2b;
        (local_1c->position).z = local_3c[1];
        local_20 = local_20 + 1;
        local_1c = pCVar1;
      } while (local_20 < this_ptr->fire_count);
    }
    memset(this_ptr->normals,0,this_ptr->vertex_count * 0xc);
    local_24 = 0;
    if (0 < this_ptr->tri_count) {
      local_28 = 0;
      do {
        texture = (SMRGLPrimitiveTriangle *)
                  ((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).base.
                         type + local_28);
        (texture->base).base.count = 3;
        iVar8 = 0;
        engine_keyframe_c_calculateSurfaceNormal_FUN_004fc9c0(this_ptr->vertices,texture);
        pSVar9 = texture;
        if (0 < (texture->base).base.count) {
          do {
            pCVar6 = this_ptr->normals + pSVar9->vertices[0].vertex_index;
            pCVar6->x = pCVar6->x + (texture->base).surface_normal.A.i;
            pCVar6->y = pCVar6->y + (texture->base).surface_normal.B.i;
            pCVar6->z = pCVar6->z + (texture->base).surface_normal.C.i;
            iVar8 = iVar8 + 1;
            pSVar9 = (SMRGLPrimitiveTriangle *)&(pSVar9->base).surface_normal.B;
          } while (iVar8 < (texture->base).base.count);
        }
        local_28 = local_28 + 0x3c;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr->tri_count);
    }
    iVar8 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar11 = 0;
      do {
        piVar10 = (int *)((int)&this_ptr->normals->x + iVar11);
        dVar15 = (double)*piVar10;
        dVar16 = (double)piVar10[1];
        dVar3 = (double)piVar10[2];
        dVar17 = SQRT(dVar3 * dVar3 + dVar16 * dVar16 + dVar15 * dVar15);
        if (dVar17 <= 0.0) {
          piVar10[2] = 0;
          piVar10[1] = piVar10[2];
          *piVar10 = piVar10[2];
        }
        else {
          dVar17 = _DAT_005d44d9 / dVar17;
          dVar15 = round(dVar15 * dVar17);
          dVar16 = round(dVar16 * dVar17);
          dVar17 = round(dVar3 * dVar17);
          *piVar10 = (int)ROUND(dVar15);
          piVar10[1] = (int)ROUND(dVar16);
          piVar10[2] = (int)ROUND(dVar17);
        }
        iVar8 = iVar8 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar8 < this_ptr->vertex_count);
    }
    core_bodypart_cpp_FUN_0041ad40(this_ptr);
    pCVar5 = &(this_ptr->physics_box).linear_velocity;
    if (pCVar5 != &this_ptr->initial_velocity) {
      pCVar5->x = (this_ptr->initial_velocity).x;
      (this_ptr->physics_box).linear_velocity.y = (this_ptr->initial_velocity).y;
      (this_ptr->physics_box).linear_velocity.z = (this_ptr->initial_velocity).z;
    }
    core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
              (&(this_ptr->physics_box).rotation_matrix,&this_ptr->initial_velocity,&local_88);
    pCVar5 = &(this_ptr->physics_box).linear_velocity_local;
    local_70 = local_88.x;
    local_6c[(uint)bVar14 * -2] = *(float *)((int)&local_88 + (uint)bVar14 * -8 + 4);
    local_6c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         *(float *)((int)&local_88 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
    if (pCVar5 != (CVector3f *)&local_70) {
      pCVar5->x = local_70;
      (this_ptr->physics_box).linear_velocity_local.y = local_6c[0];
      (this_ptr->physics_box).linear_velocity_local.z = local_6c[1];
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.x = local_14;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.z = local_14;
    fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-9.424778,9.424778);
    (this_ptr->physics_box).angular_velocity.y = fVar7;
    return;
  }
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00418d00(this_ptr,0,0);
  pCVar5 = &(this_ptr->bounding_box).max;
  if (pCVar5 != (CVector3f *)&DAT_02c8af28) {
    pCVar5->x = _DAT_02c8af28;
    (this_ptr->bounding_box).max.y = _DAT_02c8af2c;
    (this_ptr->bounding_box).max.z = _DAT_02c8af30;
  }
  if (&this_ptr->bounding_box != (CBoundingBox3D *)pCVar5) {
    (this_ptr->bounding_box).min.x = pCVar5->x;
    (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
    (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
  }
  return;
}
