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
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  float fVar10;
  float fVar11;
  CSkeleton *pCVar12;
  int iVar13;
  uint extraout_EDX;
  float10 in_ST0;
  double dVar14;
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
  pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  dVar14 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,pCVar12));
  crt_math_c_ceil_FUN_006001b2(dVar14);
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,pCVar12));
  iVar1 = (int)ROUND(dVar14);
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 0.0;
  if (local_1c < iVar1) {
    iVar13 = local_1c * 0xc;
    do {
      pCVar8 = pCVar12->frame_positions_2;
      local_3c = local_3c + *(float *)((int)&pCVar8->x + iVar13);
      local_38 = local_38 + *(float *)((int)&pCVar8->y + iVar13);
      local_34 = local_34 + *(float *)((int)&pCVar8->z + iVar13);
      iVar13 = iVar13 + 0xc;
    } while (iVar13 < iVar1 * 0xc);
  }
  fVar10 = unaff_retaddr - (float)local_1c;
  pCVar8 = pCVar12->frame_positions_2;
  fVar2 = pCVar8[local_1c].y;
  fVar3 = pCVar8[local_1c].z;
  iVar13 = iVar1 + -1;
  fVar11 = (float)iVar1 - (float)this_ptr;
  pCVar9 = pCVar12->frame_positions_2;
  fVar4 = pCVar9[iVar13].y;
  fVar5 = pCVar9[iVar13].z;
  fVar6 = (this_ptr->scaled_model_dimensions).y;
  fVar7 = (this_ptr->scaled_model_dimensions).z;
  output_buffer->x =
       ((local_3c - pCVar8[local_1c].x * fVar10) - pCVar9[iVar13].x * fVar11) *
       (this_ptr->scaled_model_dimensions).x;
  output_buffer->y = ((local_38 - fVar2 * fVar10) - fVar4 * fVar11) * fVar6;
  output_buffer->z = ((local_34 - fVar3 * fVar10) - fVar5 * fVar11) * fVar7;
  return output_buffer;
}
