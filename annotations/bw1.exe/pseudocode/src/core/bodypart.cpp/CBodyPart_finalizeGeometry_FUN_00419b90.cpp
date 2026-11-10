// Name: core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
// Address: 00419b90
// Address Range: [[00419b90, 0041a1fa]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart *this_ptr)

{
  CLocation *pCVar1;
  CVector3f *pCVar2;
  uint *puVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  SBodyPartModel *pSVar8;
  SBodyPartFire *pSVar9;
  CVector3i *pCVar10;
  float fVar11;
  int iVar12;
  SMRGLPrimitiveTriangle *pSVar13;
  int *piVar14;
  int *extraout_EDX;
  int iVar15;
  int iVar16;
  SMRGLPrimitiveTriangle *pSVar17;
  int iVar18;
  byte bVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float afStackY_1088 [24];
  SBodyPartFire *apSStackY_1028 [981];
  float local_a0;
  float afStack_9c [4];
  float local_8c;
  float local_88;
  CVector3i local_7c;
  float local_70;
  float local_6c [5];
  CVector3i local_58;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  SBodyPartFire *local_3c [4];
  SBodyPartFire *local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  float local_18;
  float local_14;
  
  bVar19 = 0;
  if ((2 < this_ptr->vertex_count) && (0 < this_ptr->tri_count)) {
    core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041a700
              (this_ptr,&local_58,&local_7c);
    local_14 = (float)-((local_58.y + local_7c.y) / 2);
    iVar18 = -((local_58.x + local_7c.x) / 2);
    iVar12 = 0;
    iVar15 = -((local_58.z + local_7c.z) / 2);
    if (0 < this_ptr->vertex_count) {
      iVar16 = 0;
      do {
        pCVar10 = this_ptr->vertices;
        piVar14 = (int *)((int)&pCVar10->x + iVar16);
        *piVar14 = *piVar14 + iVar18;
        piVar14 = (int *)((int)&pCVar10->y + iVar16);
        *piVar14 = *piVar14 + (int)local_14;
        piVar14 = (int *)((int)&pCVar10->z + iVar16);
        *piVar14 = *piVar14 + iVar15;
        iVar12 = iVar12 + 1;
        iVar16 = iVar16 + 0xc;
      } while (iVar12 < this_ptr->vertex_count);
    }
    local_58.x = local_58.x + iVar18;
    local_58.y = local_58.y + (int)local_14;
    local_58.z = local_58.z + iVar15;
    local_7c.x = local_7c.x + iVar18;
    local_7c.y = local_7c.y + (int)local_14;
    local_7c.z = local_7c.z + iVar15;
    fVar11 = (float)_DAT_005d44d1;
    (this_ptr->bounding_box).min.x = (float)local_58.x * fVar11;
    (this_ptr->bounding_box).min.y = (float)local_58.y * fVar11;
    (this_ptr->bounding_box).min.z = (float)local_58.z * fVar11;
    (this_ptr->bounding_box).max.x = (float)local_7c.x * fVar11;
    local_4c = (float)iVar18 * fVar11;
    (this_ptr->bounding_box).max.y = (float)local_7c.y * fVar11;
    local_44 = (float)iVar15 * fVar11;
    local_48 = (float)(int)local_14 * fVar11;
    (this_ptr->bounding_box).max.z = (float)local_7c.z * fVar11;
    local_18 = local_44;
    core_actor_cpp_FUN_00408ac0(this_ptr,&local_4c);
    pCVar1 = &(this_ptr->base).location;
    afStack_9c[2] = local_a0;
    afStack_9c[(uint)bVar19 * -2 + 3] = afStack_9c[(uint)bVar19 * -2];
    afStack_9c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
         afStack_9c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
    fVar11 = (this_ptr->base).location.position.y;
    fVar4 = (this_ptr->base).location.position.z;
    (pCVar1->position).x = (pCVar1->position).x - afStack_9c[2];
    (this_ptr->base).location.position.y = fVar11 - afStack_9c[3];
    (this_ptr->base).location.position.z = fVar4 - local_8c;
    iVar12 = 0;
    if (0 < this_ptr->attached_model_count) {
      pSVar8 = this_ptr->attached_models;
      do {
        *(float *)pSVar8 = *(float *)pSVar8 + local_4c;
        *(float *)&pSVar8->field_0x4 = *(float *)&pSVar8->field_0x4 + local_48;
        iVar12 = iVar12 + 1;
        *(float *)&pSVar8->field_0x8 = *(float *)&pSVar8->field_0x8 + local_44;
        pSVar8 = pSVar8 + 1;
      } while (iVar12 < this_ptr->attached_model_count);
    }
    local_20 = 0;
    if (0 < this_ptr->fire_count) {
      local_2c = this_ptr->fires;
      local_1c = (uint *)&this_ptr->fires[0].field_0x2c;
      do {
        pSVar9 = local_2c + local_20;
        *(float *)pSVar9 = *(float *)pSVar9 + local_4c;
        *(float *)&pSVar9->field_0x4 = *(float *)&pSVar9->field_0x4 + local_48;
        *(float *)&pSVar9->field_0x8 = *(float *)&pSVar9->field_0x8 + local_44;
        core_actor_cpp_FUN_00408b40(this_ptr,pSVar9);
        local_40 = local_6c[2];
        local_3c[(uint)bVar19 * -2] = (SBodyPartFire *)local_6c[(uint)bVar19 * -2 + 3];
        local_3c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
             (SBodyPartFire *)local_6c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
        *local_1c = local_40;
        local_1c[1] = local_3c[0];
        puVar3 = local_1c + 0xac;
        local_1c[2] = local_3c[1];
        local_20 = local_20 + 1;
        local_1c = puVar3;
      } while (local_20 < this_ptr->fire_count);
    }
    memset(this_ptr->normals,0,this_ptr->vertex_count * 0xc);
    local_24 = 0;
    if (0 < this_ptr->tri_count) {
      local_28 = 0;
      do {
        pSVar17 = this_ptr->faces + local_28;
        *(uint *)(pSVar17 + 4) = 3;
        iVar12 = 0;
        engine_keyframe_c_calculateSurfaceNormal_FUN_004fc9c0(this_ptr->vertices,pSVar17);
        pSVar13 = pSVar17;
        if (0 < *(int *)(pSVar17 + 4)) {
          do {
            pCVar10 = this_ptr->normals + *(int *)(pSVar13 + 0x18);
            pCVar10->x = pCVar10->x + *(int *)(pSVar17 + 8);
            pCVar10->y = pCVar10->y + *(int *)(pSVar17 + 0xc);
            pCVar10->z = pCVar10->z + *(int *)(pSVar17 + 0x10);
            iVar12 = iVar12 + 1;
            pSVar13 = pSVar13 + 0xc;
          } while (iVar12 < *(int *)(pSVar17 + 4));
        }
        local_28 = local_28 + 0x3c;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr->tri_count);
    }
    iVar12 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar15 = 0;
      do {
        piVar14 = (int *)((int)&this_ptr->normals->x + iVar15);
        dVar5 = (double)*piVar14;
        dVar7 = (double)piVar14[1];
        dVar6 = (double)piVar14[2];
        dVar5 = SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar5 * dVar5);
        if (dVar5 <= 0.0) {
          piVar14[2] = 0;
          piVar14[1] = piVar14[2];
          *piVar14 = piVar14[2];
        }
        else {
          fVar20 = (float10)_DAT_005d44d9 / (float10)dVar5;
          fVar21 = (float10)*piVar14 * fVar20;
          fVar22 = (float10)piVar14[1] * fVar20;
          fVar20 = (float10)piVar14[2] * fVar20;
          round();
          round();
          round();
          *extraout_EDX = (int)ROUND(fVar21);
          extraout_EDX[1] = (int)ROUND(fVar22);
          extraout_EDX[2] = (int)ROUND(fVar20);
        }
        iVar12 = iVar12 + 1;
        iVar15 = iVar15 + 0xc;
      } while (iVar12 < this_ptr->vertex_count);
    }
    core_bodypart_cpp_FUN_0041ad40(this_ptr);
    pCVar2 = &(this_ptr->physics_box).linear_velocity;
    if (pCVar2 != &this_ptr->initial_velocity) {
      pCVar2->x = (this_ptr->initial_velocity).x;
      (this_ptr->physics_box).linear_velocity.y = (this_ptr->initial_velocity).y;
      (this_ptr->physics_box).linear_velocity.z = (this_ptr->initial_velocity).z;
    }
    core_dirmat_cpp_FUN_0045f700
              (&(this_ptr->physics_box).rotation_matrix,&this_ptr->initial_velocity);
    pCVar2 = &(this_ptr->physics_box).linear_velocity_local;
    local_70 = local_88;
    local_6c[(uint)bVar19 * -2] = afStack_9c[(uint)bVar19 * -2 + 6];
    local_6c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1] =
         afStack_9c[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7];
    if (pCVar2 != (CVector3f *)&local_70) {
      pCVar2->x = local_70;
      (this_ptr->physics_box).linear_velocity_local.y = local_6c[0];
      (this_ptr->physics_box).linear_velocity_local.z = local_6c[1];
    }
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.x = local_14;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-3.1415927,3.1415927);
    (this_ptr->physics_box).angular_velocity.z = local_14;
    fVar11 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-9.424778,9.424778);
    (this_ptr->physics_box).angular_velocity.y = fVar11;
    return;
  }
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  core_bodypart_cpp_FUN_00418d00(this_ptr,0,0);
  pCVar2 = &(this_ptr->bounding_box).max;
  if (pCVar2 != (CVector3f *)&DAT_02c8af28) {
    pCVar2->x = _DAT_02c8af28;
    (this_ptr->bounding_box).max.y = _DAT_02c8af2c;
    (this_ptr->bounding_box).max.z = _DAT_02c8af30;
  }
  if (&this_ptr->bounding_box != (CBoundingBox3D *)pCVar2) {
    (this_ptr->bounding_box).min.x = pCVar2->x;
    (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
    (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
  }
  return;
}
