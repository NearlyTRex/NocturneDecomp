// Name: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0
// Address: 0044dbd0
// Address Range: [[0044dbd0, 0044dddc]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0(CDemonCamera * this_ptr, CVector3i * input_vector, CVector3i * output_vector)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0
          (CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint *unaff_ESI;
  byte bVar5;
  uint auStackY_1000 [1014];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar5 = 0;
  lVar1 = (longlong)input_vector->y * (longlong)g_TransformMatrix.m[1].x +
          (longlong)input_vector->x * (longlong)g_TransformMatrix.m[0].x +
          (longlong)input_vector->z * (longlong)g_TransformMatrix.m[2].x;
  local_24 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)input_vector->y * (longlong)g_TransformMatrix.m[1].y +
          (longlong)input_vector->x * (longlong)g_TransformMatrix.m[0].y +
          (longlong)input_vector->z * (longlong)g_TransformMatrix.m[2].y;
  local_20 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)input_vector->y * (longlong)g_TransformMatrix.m[1].z +
          (longlong)input_vector->x * (longlong)g_TransformMatrix.m[0].z +
          (longlong)input_vector->z * (longlong)g_TransformMatrix.m[2].z;
  local_1c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  if (iVar4 == 0) {
    lVar1 = (longlong)(int)local_20 * (longlong)(this_ptr->inverted_matrix).m[1].x +
            (longlong)(int)local_24 * (longlong)(this_ptr->inverted_matrix).m[0].x +
            (longlong)(int)local_1c * (longlong)(this_ptr->inverted_matrix).m[2].x;
    local_18 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)local_20 * (longlong)(this_ptr->inverted_matrix).m[1].y +
            (longlong)(int)local_24 * (longlong)(this_ptr->inverted_matrix).m[0].y +
            (longlong)(int)local_1c * (longlong)(this_ptr->inverted_matrix).m[2].y;
    local_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)local_20 * (longlong)(this_ptr->inverted_matrix).m[1].z +
            (longlong)(int)local_24 * (longlong)(this_ptr->inverted_matrix).m[0].z +
            (longlong)(int)local_1c * (longlong)(this_ptr->inverted_matrix).m[2].z;
    local_10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    *unaff_ESI = local_18;
    unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8);
    (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    return;
  }
  lVar1 = (longlong)this_ptr->alpha_transform_matrices[9][iVar4] * (longlong)(int)local_24;
  lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xc][iVar4] * (longlong)(int)local_20;
  lVar3 = (longlong)
          *(int *)((int)((this_ptr->transform_state).saved_source_matrix.m + -10) + iVar4 * 4) *
          (longlong)(int)local_1c;
  local_18 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)this_ptr->alpha_transform_matrices[10][iVar4] * (longlong)(int)local_24;
  lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xd][iVar4] * (longlong)(int)local_20;
  lVar3 = (longlong)
          *(int *)((int)(this_ptr->transform_state).saved_source_matrix.m + iVar4 * 4 + -0x58) *
          (longlong)(int)local_1c;
  local_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)this_ptr->alpha_transform_matrices[0xb][iVar4] * (longlong)(int)local_24;
  lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xe][iVar4] * (longlong)(int)local_20;
  lVar3 = (longlong)
          *(int *)((int)(this_ptr->transform_state).saved_source_matrix.m + iVar4 * 4 + -0x38) *
          (longlong)(int)local_1c;
  local_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  *unaff_ESI = local_18;
  unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8);
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return;
}
