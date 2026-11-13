// Name: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
// Address: 00419b90
// Address Range: [[00419b90, 0041a1fa]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart *this_ptr)

{
  CVector3f *pCVar1;
  CLocation *pCVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  SBodyPartModel *pSVar7;
  SBodyPartFire *pSVar8;
  CVector3i *pCVar9;
  float fVar10;
  int iVar11;
  SMRGLPrimitiveTriangle *pSVar12;
  int *piVar13;
  int *extraout_EDX;
  int iVar14;
  int iVar15;
  SMRGLPrimitiveTriangle *texture;
  int iVar16;
  byte bVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float afStackY_1088 [1005];
  float local_a0;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  CVector3i local_7c;
  float local_70;
  float local_6c [5];
  CVector3i local_58;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [4];
  SBodyPartFire *local_2c;
  int local_28;
  int local_24;
  int local_20;
  CLocation *local_1c;
  float local_18;
  float local_14;
  
  bVar17 = 0;
  if ((2 < this_ptr->vertex_count) && (0 < this_ptr->tri_count)) {
    core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041a700
              (this_ptr,&local_58,&local_7c);
    local_14 = (float)-((local_58.y + local_7c.y) / 2);
    iVar16 = -((local_58.x + local_7c.x) / 2);
    iVar11 = 0;
    iVar14 = -((local_58.z + local_7c.z) / 2);
    if (0 < this_ptr->vertex_count) {
      iVar15 = 0;
      do {
        pCVar9 = this_ptr->vertices;
        piVar13 = (int *)((int)&pCVar9->x + iVar15);
        *piVar13 = *piVar13 + iVar16;
        piVar13 = (int *)((int)&pCVar9->y + iVar15);
        *piVar13 = *piVar13 + (int)local_14;
        piVar13 = (int *)((int)&pCVar9->z + iVar15);
        *piVar13 = *piVar13 + iVar14;
        iVar11 = iVar11 + 1;
        iVar15 = iVar15 + 0xc;
      } while (iVar11 < this_ptr->vertex_count);
    }
    local_58.x = local_58.x + iVar16;
    local_58.y = local_58.y + (int)local_14;
    local_58.z = local_58.z + iVar14;
    local_7c.x = local_7c.x + iVar16;
    local_7c.y = local_7c.y + (int)local_14;
    local_7c.z = local_7c.z + iVar14;
    fVar10 = (float)_DAT_005d44d1;
    (this_ptr->bounding_box).min.x = (float)local_58.x * fVar10;
    (this_ptr->bounding_box).min.y = (float)local_58.y * fVar10;
    (this_ptr->bounding_box).min.z = (float)local_58.z * fVar10;
    (this_ptr->bounding_box).max.x = (float)local_7c.x * fVar10;
    local_4c = (float)iVar16 * fVar10;
    (this_ptr->bounding_box).max.y = (float)local_7c.y * fVar10;
    local_44 = (float)iVar14 * fVar10;
    local_48 = (float)(int)local_14 * fVar10;
    (this_ptr->bounding_box).max.z = (float)local_7c.z * fVar10;
    local_18 = local_44;
    core_actor_cpp_FUN_00408ac0(this_ptr,&local_4c);
    pCVar2 = &(this_ptr->base).location;
    local_94 = local_a0;
    *(uint *)((int)&stack0xffffff70 + (uint)bVar17 * -8) =
         *(uint *)(&stack0xffffff64 + (uint)bVar17 * -8);
    *(uint *)((int)&stack0xffffff74 + (uint)bVar17 * -8 + (uint)bVar17 * -8) =
         *(uint *)(&stack0xffffff68 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
    fVar10 = (this_ptr->base).location.position.y;
    fVar3 = (this_ptr->base).location.position.z;
    (pCVar2->position).x = (pCVar2->position).x - local_94;
    (this_ptr->base).location.position.y = fVar10 - local_90;
    (this_ptr->base).location.position.z = fVar3 - local_8c;
    iVar11 = 0;
    if (0 < this_ptr->attached_model_count) {
      pSVar7 = this_ptr->attached_models;
      do {
        (pSVar7->position_offset).x = (pSVar7->position_offset).x + local_4c;
        (pSVar7->position_offset).y = (pSVar7->position_offset).y + local_48;
        iVar11 = iVar11 + 1;
        (pSVar7->position_offset).z = (pSVar7->position_offset).z + local_44;
        pSVar7 = pSVar7 + 1;
      } while (iVar11 < this_ptr->attached_model_count);
    }
    local_20 = 0;
    if (0 < this_ptr->fire_count) {
      local_2c = this_ptr->fires;
      local_1c = &this_ptr->fires[0].flame.base.location;
      do {
        pSVar8 = local_2c + local_20;
        (pSVar8->local_position).x = (pSVar8->local_position).x + local_4c;
        (pSVar8->local_position).y = (pSVar8->local_position).y + local_48;
        (pSVar8->local_position).z = (pSVar8->local_position).z + local_44;
        core_actor_cpp_FUN_00408b40(this_ptr,pSVar8);
        local_40 = local_6c[2];
        local_3c[(uint)bVar17 * -2] = local_6c[(uint)bVar17 * -2 + 3];
        local_3c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
             local_6c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
        (local_1c->position).x = local_40;
        (local_1c->position).y = local_3c[0];
        pCVar2 = local_1c + 0x2b;
        (local_1c->position).z = local_3c[1];
        local_20 = local_20 + 1;
        local_1c = pCVar2;
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
        iVar11 = 0;
        engine_keyframe_c_calculateSurfaceNormal_FUN_004fc9c0(this_ptr->vertices,texture);
        pSVar12 = texture;
        if (0 < (texture->base).base.count) {
          do {
            pCVar9 = this_ptr->normals + pSVar12->vertices[0].vertex_index;
            pCVar9->x = pCVar9->x + (texture->base).surface_normal.A.i;
            pCVar9->y = pCVar9->y + (texture->base).surface_normal.B.i;
            pCVar9->z = pCVar9->z + (texture->base).surface_normal.C.i;
            iVar11 = iVar11 + 1;
            pSVar12 = (SMRGLPrimitiveTriangle *)&(pSVar12->base).surface_normal.B;
          } while (iVar11 < (texture->base).base.count);
        }
        local_28 = local_28 + 0x3c;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr->tri_count);
    }
    iVar11 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar14 = 0;
      do {
        piVar13 = (int *)((int)&this_ptr->normals->x + iVar14);
        dVar4 = (double)*piVar13;
        dVar6 = (double)piVar13[1];
        dVar5 = (double)piVar13[2];
        dVar4 = SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4);
        if (dVar4 <= 0.0) {
          piVar13[2] = 0;
          piVar13[1] = piVar13[2];
          *piVar13 = piVar13[2];
        }
        else {
          fVar18 = (float10)_DAT_005d44d9 / (float10)dVar4;
          fVar19 = (float10)*piVar13 * fVar18;
          fVar20 = (float10)piVar13[1] * fVar18;
          fVar18 = (float10)piVar13[2] * fVar18;
          round();
          round();
          round();
          *extraout_EDX = (int)ROUND(fVar19);
          extraout_EDX[1] = (int)ROUND(fVar20);
          extraout_EDX[2] = (int)ROUND(fVar18);
        }
        iVar11 = iVar11 + 1;
        iVar14 = iVar14 + 0xc;
      } while (iVar11 < this_ptr->vertex_count);
    }
    core_bodypart_cpp_FUN_0041ad40(this_ptr);
    pCVar1 = &(this_ptr->physics_box).linear_velocity;
    if (pCVar1 != &this_ptr->initial_velocity) {
      pCVar1->x = (this_ptr->initial_velocity).x;
      (this_ptr->physics_box).linear_velocity.y = (this_ptr->initial_velocity).y;
      (this_ptr->physics_box).linear_velocity.z = (this_ptr->initial_velocity).z;
    }
    core_dirmat_cpp_FUN_0045f700
              (&(this_ptr->physics_box).rotation_matrix,&this_ptr->initial_velocity);
    pCVar1 = &(this_ptr->physics_box).linear_velocity_local;
    local_70 = local_88;
    local_6c[(uint)bVar17 * -2] = *(float *)(&stack0xffffff7c + (uint)bVar17 * -8);
    local_6c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         *(float *)(&stack0xffffff80 + (uint)bVar17 * -8 + (uint)bVar17 * -8);
    if (pCVar1 != (CVector3f *)&local_70) {
      pCVar1->x = local_70;
      (this_ptr->physics_box).linear_velocity_local.y = local_6c[0];
      (this_ptr->physics_box).linear_velocity_local.z = local_6c[1];
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.x = local_14;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.z = local_14;
    fVar10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-9.424778,9.424778);
    (this_ptr->physics_box).angular_velocity.y = fVar10;
    return;
  }
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  core_bodypart_cpp_setCounts_FUN_00418d00(this_ptr,0,0);
  pCVar1 = &(this_ptr->bounding_box).max;
  if (pCVar1 != (CVector3f *)&DAT_02c8af28) {
    pCVar1->x = _DAT_02c8af28;
    (this_ptr->bounding_box).max.y = _DAT_02c8af2c;
    (this_ptr->bounding_box).max.z = _DAT_02c8af30;
  }
  if (&this_ptr->bounding_box != (CBoundingBox3D *)pCVar1) {
    (this_ptr->bounding_box).min.x = pCVar1->x;
    (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
    (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
  }
  return;
}
