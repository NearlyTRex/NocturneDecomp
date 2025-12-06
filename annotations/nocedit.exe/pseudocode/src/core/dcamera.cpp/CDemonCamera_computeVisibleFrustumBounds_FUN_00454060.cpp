// Name: core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
// Address: 00454060
// Address Range: [[00454060, 00454441]]
// Convention: __cdecl
// Signature: CVector3f * core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060(CDemonCamera * this_ptr, CVector3f * output_vectors, CBoundingBox3D * bounding_box)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CVector3f * __cdecl
core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
          (CDemonCamera *this_ptr,CVector3f *output_vectors,CBoundingBox3D *bounding_box)

{
  CVector3f *pCVar1;
  int unaff_EBX;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float *unaff_ESI;
  int unaff_EDI;
  byte bVar3;
  CBoundingBox3D *in_stack_00000024;
  float afStackY_10c8 [1012];
  CDemonCamera *in_stack_ffffff14;
  CDemonCamera *in_stack_ffffff18;
  CDemonCamera *in_stack_ffffff1c;
  CDemonCamera *in_stack_ffffff20;
  int in_stack_ffffff24;
  CBoundingBox3D *in_stack_ffffff28;
  int iStack_d0;
  float afStack_cc [5];
  int iStack_b8;
  uint uStack_b4;
  CDemonCamera *local_a8;
  float local_a4 [2];
  int local_9c;
  float local_90;
  float local_8c;
  float afStack_88 [2];
  int local_80;
  float afStack_7c [2];
  int local_74;
  CVector3i local_6c;
  float local_60 [2];
  int local_58;
  uint local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  CVector3f local_44;
  byte local_38 [8];
  float local_30;
  CDemonCamera *local_2c;
  float local_28;
  CDemonCamera *local_24;
  CVector3i *local_20;
  CDemonCamera *local_1c;
  CVector3i *local_18;
  CDemonCamera *local_14;
  
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
  local_38._0_4_ = 0.0;
  local_38._4_4_ = &(this_ptr->base).rotation_matrix;
  local_18 = (CVector3i *)&DAT_00000001;
  do {
    if (this_ptr->framebuffer_height + -1 <= (int)local_18) {
      return output_vectors;
    }
    local_2c = (CDemonCamera *)((int)&local_18->x + 1);
    local_28 = (float)local_38._0_4_;
    local_30 = (float)local_38._0_4_;
    local_1c = (CDemonCamera *)0x0;
    local_24 = local_2c;
    for (local_14 = (CDemonCamera *)&DAT_00000001; (int)local_14 < this_ptr->framebuffer_width + -1;
        local_14 = (CDemonCamera *)((int)&(local_14->base).field0_0x0 + 1)) {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                (this_ptr,(CVector3i *)local_14,(int)local_18,(int)in_stack_ffffff14);
      local_80 = iStack_d0;
      afStack_7c[(uint)bVar3 * -2] = afStack_cc[(uint)bVar3 * -2];
      afStack_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if (local_74 < 0x1f401) {
LAB_00454218:
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (this_ptr,&local_6c,(CVector3i *)in_stack_ffffff28);
        local_54 = afStack_cc[1];
        local_60[(uint)bVar3 * -2 + 4] = local_a4[(uint)bVar3 * -2 + -8];
        local_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5] =
             afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 3];
        local_90 = (float)local_50 * 0.00390625f;
        local_8c = (float)iStack_4c * 0.00390625f;
        afStack_88[0] = (float)iStack_48 * 0.00390625f;
        local_44.x = local_8c - *unaff_ESI;
        local_44.y = afStack_88[0] - unaff_ESI[1];
        local_44.z = afStack_88[1] - unaff_ESI[2];
        in_stack_ffffff1c = (CDemonCamera *)0x4542b6;
        in_stack_ffffff20 = local_1c;
        core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                  ((CMatrix3x3f *)local_1c,(CVector3f *)local_38,&local_44);
        in_stack_ffffff24 = 0x4542ce;
        in_stack_ffffff28 = in_stack_00000024;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                  (in_stack_00000024,(CVector3f *)(local_38 + 4));
      }
      else {
        uVar2 = 0;
        if ((unaff_EBP < 2) || ((int)local_14 < 2)) {
LAB_004541c5:
          uVar2 = 1;
        }
        else {
          in_stack_ffffff14 = local_2c;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,local_18,(int)local_2c,(int)in_stack_ffffff18);
          afStack_cc[2] = (float)uStack_b4;
          afStack_cc[(uint)bVar3 * -2 + 3] = afStack_cc[(uint)bVar3 * -2 + 7];
          afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
               afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 8];
          if (0x1f400 < iStack_b8) goto LAB_004541c5;
        }
        if ((unaff_EDI < 2) || (this_ptr->framebuffer_height + -2 <= unaff_EBP)) {
LAB_004541d4:
          uVar2 = uVar2 + 1;
        }
        else {
          in_stack_ffffff14 = local_14;
          in_stack_ffffff18 = local_24;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,(CVector3i *)local_14,(int)local_24,(int)in_stack_ffffff1c);
          local_a8 = in_stack_ffffff20;
          local_a4[(uint)bVar3 * -2] = *(float *)(&stack0xffffff24 + (uint)bVar3 * -8);
          local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(float *)(&stack0xffffff28 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (0x1f400 < local_9c) goto LAB_004541d4;
        }
        if (((int)unaff_ESI < this_ptr->framebuffer_width + -2) && (1 < unaff_EDI)) {
          in_stack_ffffff18 = (CDemonCamera *)((int)unaff_ESI + 1);
          in_stack_ffffff14 = this_ptr;
          in_stack_ffffff1c = local_1c;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,(CVector3i *)in_stack_ffffff18,(int)local_1c,(int)in_stack_ffffff20);
          local_8c = afStack_7c[0];
          afStack_88[(uint)bVar3 * -2] = afStack_7c[(uint)bVar3 * -2 + 1];
          afStack_88[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               afStack_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 2];
          if (0x1f400 < local_80) goto LAB_004541ed;
        }
        else {
LAB_004541ed:
          uVar2 = uVar2 + 1;
        }
        if ((unaff_EBX < this_ptr->framebuffer_width + -2) &&
           ((int)unaff_ESI < this_ptr->framebuffer_height + -2)) {
          in_stack_ffffff1c = (CDemonCamera *)(unaff_EBX + 1);
          in_stack_ffffff14 = (CDemonCamera *)0x45440d;
          in_stack_ffffff18 = this_ptr;
          in_stack_ffffff20 = local_14;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,(CVector3i *)in_stack_ffffff1c,(int)local_14,in_stack_ffffff24);
          local_6c.z = (int)local_30;
          local_60[(uint)bVar3 * -2] = (float)(&local_2c)[(uint)bVar3 * -2];
          local_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               (&local_28)[(uint)bVar3 * -2 + (uint)bVar3 * -2];
          if (0x1f400 < local_58) goto LAB_00454206;
        }
        else {
LAB_00454206:
          uVar2 = uVar2 + 1;
        }
        if (3 < uVar2) {
          local_6c.z = 0x1f400;
          goto LAB_00454218;
        }
      }
      local_1c = (CDemonCamera *)((int)&(local_1c->base).field0_0x0 + 1);
    }
    local_18 = (CVector3i *)((int)&local_18->x + 1);
    local_38._0_4_ = local_38._0_4_ + 1;
  } while( true );
}
