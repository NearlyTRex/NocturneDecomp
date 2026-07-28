// Name: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590
// Address: 0051e590
// Address Range: [[0051e590, 0051e7c6]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590(CDeformableModelInstance *this_ptr,CVector3f *output_buffer,float start_frame,float end_frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590(CDeformableModelInstance *this_ptr,CVector3f *output_buffer,float start_frame,float end_frame)

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
  double dVar14;
  uint uVar15;
  float local_38;
  float local_34;
  float local_30;
  int local_18;
  
  if (end_frame <= start_frame) {
    output_buffer->x = _DAT_02dd1184;
    output_buffer->y = _DAT_02dd1188;
    output_buffer->z = _DAT_02dd118c;
    return output_buffer;
  }
  pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  dVar14 = (double)floor((double)start_frame);
  uVar15 = 0x51e5fc;
  round(dVar14);
  dVar14 = (double)ceil((double)start_frame,uVar15);
  dVar14 = round(dVar14);
  iVar1 = (int)ROUND(dVar14);
  local_38 = 0.0;
  local_34 = 0.0;
  local_30 = 0.0;
  if (local_18 < iVar1) {
    iVar13 = local_18 * 0xc;
    do {
      pCVar8 = pCVar12->frame_positions_2;
      local_38 = local_38 + *(float *)((int)&pCVar8->x + iVar13);
      local_34 = local_34 + *(float *)((int)&pCVar8->y + iVar13);
      local_30 = local_30 + *(float *)((int)&pCVar8->z + iVar13);
      iVar13 = iVar13 + 0xc;
    } while (iVar13 < iVar1 * 0xc);
  }
  fVar10 = (float)this_ptr - (float)local_18;
  pCVar8 = pCVar12->frame_positions_2;
  fVar2 = pCVar8[local_18].y;
  fVar3 = pCVar8[local_18].z;
  iVar13 = iVar1 + -1;
  fVar11 = (float)iVar1 - (float)output_buffer;
  pCVar9 = pCVar12->frame_positions_2;
  fVar4 = pCVar9[iVar13].y;
  fVar5 = pCVar9[iVar13].z;
  fVar6 = (this_ptr->scaled_model_dimensions).y;
  fVar7 = (this_ptr->scaled_model_dimensions).z;
  output_buffer->x =
       ((local_38 - pCVar8[local_18].x * fVar10) - pCVar9[iVar13].x * fVar11) *
       (this_ptr->scaled_model_dimensions).x;
  output_buffer->y = ((local_34 - fVar2 * fVar10) - fVar4 * fVar11) * fVar6;
  output_buffer->z = ((local_30 - fVar3 * fVar10) - fVar5 * fVar11) * fVar7;
  return output_buffer;
}
