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
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int extraout_EBX;
  double dVar13;
  float unaff_retaddr;
  float local_3c;
  float local_38;
  float local_34;
  int local_1c;
  
  if (end_frame <= start_frame) {
    output_buffer->x = g_ZeroVector.x;
    output_buffer->y = g_ZeroVector.y;
    output_buffer->z = g_ZeroVector.z;
    return output_buffer;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  dVar13 = crt_math_c_floor_FUN_005feb90((double)end_frame);
  crt_math_c_round_FUN_005fe6b0(dVar13);
  dVar13 = crt_math_c_ceil_FUN_006001b2((double)start_frame);
  dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
  iVar1 = (int)ROUND(dVar13);
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 0.0;
  if (local_1c < iVar1) {
    iVar12 = local_1c * 0xc;
    do {
      iVar8 = *(int *)(extraout_EBX + 0x29378);
      local_3c = local_3c + *(float *)(iVar8 + iVar12);
      local_38 = local_38 + *(float *)(iVar8 + 4 + iVar12);
      local_34 = local_34 + *(float *)(iVar8 + 8 + iVar12);
      iVar12 = iVar12 + 0xc;
    } while (iVar12 < iVar1 * 0xc);
  }
  iVar8 = local_1c * 0xc;
  fVar10 = unaff_retaddr - (float)local_1c;
  iVar9 = *(int *)(extraout_EBX + 0x29378);
  fVar2 = *(float *)(iVar8 + 4 + iVar9);
  fVar3 = *(float *)(iVar8 + 8 + iVar9);
  iVar12 = iVar1 + -1;
  fVar11 = (float)iVar1 - (float)this_ptr;
  iVar1 = *(int *)(extraout_EBX + 0x29378);
  fVar4 = *(float *)(iVar1 + 4 + iVar12 * 0xc);
  fVar5 = *(float *)(iVar1 + 8 + iVar12 * 0xc);
  fVar6 = (this_ptr->scaled_model_dimensions).y;
  fVar7 = (this_ptr->scaled_model_dimensions).z;
  output_buffer->x =
       ((local_3c - *(float *)(iVar8 + iVar9) * fVar10) - *(float *)(iVar1 + iVar12 * 0xc) * fVar11)
       * (this_ptr->scaled_model_dimensions).x;
  output_buffer->y = ((local_38 - fVar2 * fVar10) - fVar4 * fVar11) * fVar6;
  output_buffer->z = ((local_34 - fVar3 * fVar10) - fVar5 * fVar11) * fVar7;
  return output_buffer;
}
