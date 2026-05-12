// Name: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0
// Address: 0044dbd0
// MANUAL RECONSTRUCTION
// Address Range: [[0044dbd0, 0044dddc] [0060a550, 0060a589]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

{
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar4 = (longlong)input_vector->y * (longlong)g_TransformMatrix.m[1].x +
          (longlong)input_vector->x * (longlong)g_TransformMatrix.m[0].x +
          (longlong)input_vector->z * (longlong)g_TransformMatrix.m[2].x;
  uVar10 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
  lVar4 = (longlong)input_vector->y * (longlong)g_TransformMatrix.m[1].y +
          (longlong)input_vector->x * (longlong)g_TransformMatrix.m[0].y +
          (longlong)input_vector->z * (longlong)g_TransformMatrix.m[2].y;
  uVar11 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
  lVar4 = (longlong)input_vector->y * (longlong)g_TransformMatrix.m[1].z +
          (longlong)input_vector->x * (longlong)g_TransformMatrix.m[0].z +
          (longlong)input_vector->z * (longlong)g_TransformMatrix.m[2].z;
  uVar12 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  if (iVar4 == 0) {
    lVar4 = (longlong)(int)uVar11 * (longlong)(this_ptr->inverted_matrix).m[1].x +
            (longlong)(int)uVar10 * (longlong)(this_ptr->inverted_matrix).m[0].x +
            (longlong)(int)uVar12 * (longlong)(this_ptr->inverted_matrix).m[2].x;
    lVar5 = (longlong)(int)uVar11 * (longlong)(this_ptr->inverted_matrix).m[1].y +
            (longlong)(int)uVar10 * (longlong)(this_ptr->inverted_matrix).m[0].y +
            (longlong)(int)uVar12 * (longlong)(this_ptr->inverted_matrix).m[2].y;
    lVar6 = (longlong)(int)uVar11 * (longlong)(this_ptr->inverted_matrix).m[1].z +
            (longlong)(int)uVar10 * (longlong)(this_ptr->inverted_matrix).m[0].z +
            (longlong)(int)uVar12 * (longlong)(this_ptr->inverted_matrix).m[2].z;
    output_vector->x = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    output_vector->y = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
    output_vector->z = (uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10;
    return output_vector;
  }
  lVar1 = (longlong)this_ptr->alpha_transform_matrices[9][iVar4] * (longlong)(int)uVar10;
  lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xc][iVar4] * (longlong)(int)uVar11;
  lVar3 = (longlong)this_ptr->alpha_transform_matrices[0xf][iVar4] * (longlong)(int)uVar12;
  lVar4 = (longlong)this_ptr->alpha_transform_matrices[10][iVar4] * (longlong)(int)uVar10;
  lVar5 = (longlong)this_ptr->alpha_transform_matrices[0xd][iVar4] * (longlong)(int)uVar11;
  lVar6 = (longlong)this_ptr->alpha_transform_matrices[0x10][iVar4] * (longlong)(int)uVar12;
  lVar7 = (longlong)this_ptr->alpha_transform_matrices[0xb][iVar4] * (longlong)(int)uVar10;
  lVar8 = (longlong)this_ptr->alpha_transform_matrices[0xe][iVar4] * (longlong)(int)uVar11;
  lVar9 = (longlong)this_ptr->alpha_transform_matrices[0x11][iVar4] * (longlong)(int)uVar12;
  output_vector->x =
       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
       ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  output_vector->y =
       ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
       ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
       ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  output_vector->z =
       ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10) +
       ((uint)lVar8 >> 0x10 | (int)((ulonglong)lVar8 >> 0x20) << 0x10) +
       ((uint)lVar9 >> 0x10 | (int)((ulonglong)lVar9 >> 0x20) << 0x10);
  return output_vector;
}
