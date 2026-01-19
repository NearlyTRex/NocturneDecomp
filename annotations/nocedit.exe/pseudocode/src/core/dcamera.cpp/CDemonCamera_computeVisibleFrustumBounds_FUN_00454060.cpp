// Name: core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
// Address: 00454060
// Address Range: [[00454060, 00454441]]
// Convention: __cdecl
// Signature: CVector3f * core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060(CDemonCamera * this_ptr, CVector3f * output_vectors, CBoundingBox3D * bounding_box)

#include "nocturne.h"

CVector3f * __cdecl
core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
          (CDemonCamera *this_ptr,CVector3f *output_vectors,CBoundingBox3D *bounding_box)

{
  CVector3f *pCVar1;
  uint uVar2;
  byte bVar3;
  int aiStackY_10d4 [1015];
  CVector3i *in_stack_ffffff14;
  int local_e0;
  int local_d4;
  uint local_c8;
  int local_c0;
  uint local_bc;
  CVector3i *local_b0;
  int aiStack_ac [2];
  float local_a4;
  float local_a0;
  float local_9c;
  uint local_98;
  int aiStack_94 [5];
  CVector3i local_80;
  uint local_74;
  int aiStack_70 [4];
  int local_60;
  CVector3f local_5c;
  CVector3f local_50;
  uint local_44;
  int aiStack_40 [3];
  CMatrix3x3i *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CVector3i *local_20;
  CVector3i *local_1c;
  int local_18;
  CVector3i *local_14;
  
  bVar3 = 0;
  pCVar1 = output_vectors + 1;
  if (pCVar1 != &g_ZeroVector) {
    pCVar1->x = g_ZeroVector.x;
    output_vectors[1].y = g_ZeroVector.y;
    output_vectors[1].z = g_ZeroVector.z;
  }
  if (pCVar1 != output_vectors) {
    output_vectors->x = pCVar1->x;
    output_vectors->y = output_vectors[1].y;
    output_vectors->z = output_vectors[1].z;
  }
  local_20 = &(this_ptr->base).position;
  aiStack_40[2] = 0;
  local_34 = &(this_ptr->base).rotation_matrix;
  local_18 = 1;
  do {
    if (this_ptr->framebuffer_height + -1 <= local_18) {
      return output_vectors;
    }
    local_2c = local_18 + 1;
    local_28 = aiStack_40[2];
    local_30 = aiStack_40[2];
    local_1c = (CVector3i *)0x0;
    local_24 = local_2c;
    for (local_14 = (CVector3i *)0x1; (int)local_14 < this_ptr->framebuffer_width + -1;
        local_14 = (CVector3i *)((int)&local_14->x + 1)) {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                (this_ptr,local_14,local_18,(int)in_stack_ffffff14);
      local_80.x = local_d4;
      *(uint *)((int)&local_80 + (uint)bVar3 * -8 + 4) =
           *(uint *)(&stack0xffffff30 + (uint)bVar3 * -8);
      *(uint *)((int)&local_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)(&stack0xffffff34 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (local_80.z < 0x1f401) {
LAB_00454218:
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (this_ptr,&local_80,in_stack_ffffff14);
        aiStack_70[2] = local_e0;
        aiStack_70[(uint)bVar3 * -2 + 3] = *(int *)(&stack0xffffff24 + (uint)bVar3 * -8);
        aiStack_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
             *(int *)(&stack0xffffff28 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        local_a4 = (float)aiStack_70[2] * 0.00390625f;
        local_a0 = (float)aiStack_70[3] * 0.00390625f;
        local_9c = (float)local_60 * 0.00390625f;
        local_5c.x = local_a4 - (float)local_20->x;
        local_5c.y = local_a0 - (float)local_20->y;
        local_5c.z = local_9c - (float)local_20->z;
        core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                  ((CMatrix3x3f *)local_34,&local_50,&local_5c);
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)output_vectors,&local_50);
      }
      else {
        uVar2 = 0;
        if (((int)local_14 < 2) || (local_18 < 2)) {
LAB_004541c5:
          uVar2 = 1;
        }
        else {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,local_1c,local_30,(int)in_stack_ffffff14);
          local_c8 = local_bc;
          *(uint *)(&stack0xffffff3c + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffff48 + (uint)bVar3 * -8);
          *(uint *)((int)&stack0xffffff40 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffff4c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (0x1f400 < local_c0) goto LAB_004541c5;
        }
        if (((int)local_14 < 2) || (this_ptr->framebuffer_height + -2 <= local_18)) {
LAB_004541d4:
          uVar2 = uVar2 + 1;
        }
        else {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,local_1c,local_2c,(int)in_stack_ffffff14);
          local_b0 = in_stack_ffffff14;
          aiStack_ac[(uint)bVar3 * -2] = *(int *)(&stack0xffffff18 + (uint)bVar3 * -8);
          aiStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(int *)(&stack0xffffff1c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (0x1f400 < aiStack_ac[1]) goto LAB_004541d4;
        }
        if (((int)local_14 < this_ptr->framebuffer_width + -2) && (1 < local_18)) {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,(CVector3i *)((int)&local_14->x + 1),local_28,(int)in_stack_ffffff14);
          local_98 = aiStack_94[2];
          aiStack_94[(uint)bVar3 * -2] = aiStack_94[(uint)bVar3 * -2 + 3];
          aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
          if (0x1f400 < aiStack_94[1]) goto LAB_004541ed;
        }
        else {
LAB_004541ed:
          uVar2 = uVar2 + 1;
        }
        if (((int)local_14 < this_ptr->framebuffer_width + -2) &&
           (local_18 < this_ptr->framebuffer_height + -2)) {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,(CVector3i *)((int)&local_14->x + 1),local_24,(int)in_stack_ffffff14);
          local_74 = local_44;
          aiStack_70[(uint)bVar3 * -2] = aiStack_40[(uint)bVar3 * -2];
          aiStack_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               aiStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          if (0x1f400 < aiStack_70[1]) goto LAB_00454206;
        }
        else {
LAB_00454206:
          uVar2 = uVar2 + 1;
        }
        if (3 < uVar2) {
          local_80.z = 0x1f400;
          goto LAB_00454218;
        }
      }
      local_1c = (CVector3i *)((int)&local_1c->x + 1);
    }
    local_18 = local_18 + 1;
    aiStack_40[2] = aiStack_40[2] + 1;
  } while( true );
}
