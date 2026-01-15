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
  float unaff_ESI;
  double dVar13;
  float unaff_retaddr;
  float local_40;
  float local_3c;
  float local_38;
  int iStack_20;
  
  if (end_frame <= start_frame) {
    output_buffer->x = g_ZeroVector.x;
    output_buffer->y = g_ZeroVector.y;
    output_buffer->z = g_ZeroVector.z;
    return output_buffer;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  dVar13 = crt_math_c_floor_FUN_005feb90((double)start_frame);
  crt_math_c_round_FUN_005fe6b0(dVar13);
  dVar13 = crt_math_c_ceil_FUN_006001b2((double)(float)output_buffer);
  dVar13 = crt_math_c_round_FUN_005fe6b0(dVar13);
  iVar1 = (int)ROUND(dVar13);
  local_40 = 0.0;
  local_3c = 0.0;
  local_38 = 0.0;
  if (iStack_20 < iVar1) {
    iVar12 = iStack_20 * 0xc;
    do {
      iVar8 = *(int *)(extraout_EBX + 0x29378);
      local_40 = local_40 + *(float *)(iVar8 + iVar12);
      local_3c = local_3c + *(float *)(iVar8 + 4 + iVar12);
      local_38 = local_38 + *(float *)(iVar8 + 8 + iVar12);
      iVar12 = iVar12 + 0xc;
    } while (iVar12 < iVar1 * 0xc);
  }
  iVar8 = iStack_20 * 0xc;
  fVar10 = unaff_ESI - (float)iStack_20;
  iVar9 = *(int *)(extraout_EBX + 0x29378);
  fVar2 = *(float *)(iVar8 + 4 + iVar9);
  fVar3 = *(float *)(iVar8 + 8 + iVar9);
  iVar12 = iVar1 + -1;
  fVar11 = (float)iVar1 - unaff_retaddr;
  iVar1 = *(int *)(extraout_EBX + 0x29378);
  fVar4 = *(float *)(iVar1 + 4 + iVar12 * 0xc);
  fVar5 = *(float *)(iVar1 + 8 + iVar12 * 0xc);
  fVar6 = (this_ptr->scaled_model_dimensions).y;
  fVar7 = (this_ptr->scaled_model_dimensions).z;
  output_buffer->x =
       ((local_40 - *(float *)(iVar8 + iVar9) * fVar10) - *(float *)(iVar1 + iVar12 * 0xc) * fVar11)
       * (this_ptr->scaled_model_dimensions).x;
  output_buffer->y = ((local_3c - fVar2 * fVar10) - fVar4 * fVar11) * fVar6;
  output_buffer->z = ((local_38 - fVar3 * fVar10) - fVar5 * fVar11) * fVar7;
  return output_buffer;
}
