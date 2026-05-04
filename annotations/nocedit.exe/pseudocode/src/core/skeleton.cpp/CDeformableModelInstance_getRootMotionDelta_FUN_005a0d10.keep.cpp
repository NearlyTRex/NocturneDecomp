// Name: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
// Address: 005a0d10
// MANUAL RECONSTRUCTION
// Address Range: [[005a0d10, 005a0f46]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10(CDeformableModelInstance *this_ptr,CVector3f *output_buffer,float start_frame,float end_frame)

#include "nocturne.h"

CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10(CDeformableModelInstance *this_ptr,CVector3f *output_buffer,float start_frame,float end_frame)

{
  int iVar3;
  CVector3f *pCVar4;
  CSkeleton *pCVar13;
  int iVar14;
  double dVar15;
  double dVar5;
  float local_30;
  float local_2c;
  float local_28;
  float fVar12;
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar9;
  float fVar11;
  float fVar8;
  CVector3f *pCVar10;
  float fVar6;
  float fVar7;
  
  if (end_frame <= start_frame) {
    output_buffer->x = g_ZeroVector.f.x;
    output_buffer->y = g_ZeroVector.f.y;
    output_buffer->z = g_ZeroVector.f.z;
    return output_buffer;
  }
  pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  dVar15 = floor((double)start_frame);
  iVar1 = (int)ROUND(ROUND(dVar15));
  dVar5 = ceil((double)end_frame);
  iVar2 = (int)ROUND(ROUND(dVar5));
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  if (iVar1 < iVar2) {
    iVar14 = iVar1;
    do {
      pCVar9 = pCVar13->frame_positions_2;
      local_30 = local_30 + pCVar9[iVar14].x;
      local_2c = local_2c + pCVar9[iVar14].y;
      local_28 = local_28 + pCVar9[iVar14].z;
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar2);
  }
  fVar11 = start_frame - (float)iVar1;
  pCVar4 = pCVar13->frame_positions_2;
  fVar3 = pCVar4[iVar1].y;
  fVar4 = pCVar4[iVar1].z;
  iVar3 = iVar2 + -1;
  fVar12 = (float)iVar2 - end_frame;
  pCVar10 = pCVar13->frame_positions_2;
  fVar5 = pCVar10[iVar3].y;
  fVar6 = pCVar10[iVar3].z;
  fVar7 = (this_ptr->scaled_model_dimensions).y;
  fVar8 = (this_ptr->scaled_model_dimensions).z;
  output_buffer->x =
       ((local_30 - pCVar4[iVar1].x * fVar11) - pCVar10[iVar3].x * fVar12) *
       (this_ptr->scaled_model_dimensions).x;
  output_buffer->y = ((local_2c - fVar3 * fVar11) - fVar5 * fVar12) * fVar7;
  output_buffer->z = ((local_28 - fVar4 * fVar11) - fVar6 * fVar12) * fVar8;
  return output_buffer;
}
