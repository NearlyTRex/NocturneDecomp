// Name: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
// Address: 005a0d10
// Address Range: [[005a0d10, 005a0f46]]
// Convention: __cdecl
// Signature: CVector3f * core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10(CDeformableModelInstance * this_ptr, CVector3f * output_buffer, float start_frame, float end_frame)

#include "nocturne.h"

CVector3f * __cdecl
core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
          (CDeformableModelInstance *this_ptr,CVector3f *output_buffer,float start_frame,
          float end_frame)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CVector3f *pCVar9;
  CVector3f *pCVar10;
  float fVar11;
  float fVar12;
  CSkeleton *pCVar13;
  uint extraout_EAX;
  uint extraout_EAX_00;
  int iVar14;
  uint extraout_EDX;
  uint extraout_EDX_00;
  float10 in_ST0;
  float10 fVar15;
  float in_stack_00000014;
  float local_2c;
  float local_28;
  float local_24;
  
  if (end_frame <= start_frame) {
    output_buffer->x = g_ZeroVector.x;
    output_buffer->y = g_ZeroVector.y;
    output_buffer->z = g_ZeroVector.z;
    return output_buffer;
  }
  pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar15 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  iVar1 = (int)ROUND(fVar15);
  crt_math_c_ceil_FUN_006001b2((double)in_stack_00000014);
  fVar15 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00));
  iVar2 = (int)ROUND(fVar15);
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0.0;
  if (iVar1 < iVar2) {
    iVar14 = iVar1 * 0xc;
    do {
      pCVar9 = pCVar13->frame_positions_2;
      local_2c = local_2c + *(float *)((int)&pCVar9->x + iVar14);
      local_28 = local_28 + *(float *)((int)&pCVar9->y + iVar14);
      local_24 = local_24 + *(float *)((int)&pCVar9->z + iVar14);
      iVar14 = iVar14 + 0xc;
    } while (iVar14 < iVar2 * 0xc);
  }
  fVar11 = end_frame - (float)iVar1;
  pCVar9 = pCVar13->frame_positions_2;
  fVar3 = pCVar9[iVar1].y;
  fVar4 = pCVar9[iVar1].z;
  iVar14 = iVar2 + -1;
  fVar12 = (float)iVar2 - in_stack_00000014;
  pCVar10 = pCVar13->frame_positions_2;
  fVar5 = pCVar10[iVar14].y;
  fVar6 = pCVar10[iVar14].z;
  fVar7 = (this_ptr->scaled_model_dimensions).y;
  fVar8 = (this_ptr->scaled_model_dimensions).z;
  output_buffer->x =
       ((local_2c - pCVar9[iVar1].x * fVar11) - pCVar10[iVar14].x * fVar12) *
       (this_ptr->scaled_model_dimensions).x;
  output_buffer->y = ((local_28 - fVar3 * fVar11) - fVar5 * fVar12) * fVar7;
  output_buffer->z = ((local_24 - fVar4 * fVar11) - fVar6 * fVar12) * fVar8;
  return output_buffer;
}
