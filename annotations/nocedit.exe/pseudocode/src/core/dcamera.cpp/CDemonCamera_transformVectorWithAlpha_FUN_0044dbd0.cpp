// Name: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0
// Address: 0044dbd0
// Address Range: [[0044dbd0, 0044dddc]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

{
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar4;
  uint *puVar5;
  uint *puVar10;
  byte bVar6;
  uint auStackY_1000 [1014];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar6 = 0;
  lVar4 = (longlong)input_vector->y * (longlong)g_TransformMatrix.m[1].x +
          (longlong)input_vector->x * (longlong)g_TransformMatrix.m[0].x +
          (longlong)input_vector->z * (longlong)g_TransformMatrix.m[2].x;
  uVar7 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
  lVar4 = (longlong)input_vector->y * (longlong)g_TransformMatrix.m[1].y +
          (longlong)input_vector->x * (longlong)g_TransformMatrix.m[0].y +
          (longlong)input_vector->z * (longlong)g_TransformMatrix.m[2].y;
  uVar8 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
  lVar4 = (longlong)input_vector->y * (longlong)g_TransformMatrix.m[1].z +
          (longlong)input_vector->x * (longlong)g_TransformMatrix.m[0].z +
          (longlong)input_vector->z * (longlong)g_TransformMatrix.m[2].z;
  uVar9 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  if (iVar4 == 0) {
    lVar4 = (longlong)(int)uVar8 * (longlong)(this_ptr->inverted_matrix).m[1].x +
            (longlong)(int)uVar7 * (longlong)(this_ptr->inverted_matrix).m[0].x +
            (longlong)(int)uVar9 * (longlong)(this_ptr->inverted_matrix).m[2].x;
    lVar5 = (longlong)(int)uVar8 * (longlong)(this_ptr->inverted_matrix).m[1].y +
            (longlong)(int)uVar7 * (longlong)(this_ptr->inverted_matrix).m[0].y +
            (longlong)(int)uVar9 * (longlong)(this_ptr->inverted_matrix).m[2].y;
    local_14 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
    lVar5 = (longlong)(int)uVar8 * (longlong)(this_ptr->inverted_matrix).m[1].z +
            (longlong)(int)uVar7 * (longlong)(this_ptr->inverted_matrix).m[0].z +
            (longlong)(int)uVar9 * (longlong)(this_ptr->inverted_matrix).m[2].z;
    local_10 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
    puVar5 = (uint *)((int)output_vector + (uint)bVar6 * -8 + 4);
    output_vector->x = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    *puVar5 = (&local_14)[(uint)bVar6 * -2];
    puVar5[(uint)bVar6 * -2 + 1] = (&local_10)[(uint)bVar6 * -2 + (uint)bVar6 * -2];
    return output_vector;
  }
  lVar1 = (longlong)this_ptr->alpha_transform_matrices[9][iVar4] * (longlong)(int)uVar7;
  lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xc][iVar4] * (longlong)(int)uVar8;
  lVar3 = (longlong)this_ptr->alpha_transform_matrices[0xf][iVar4] * (longlong)(int)uVar9;
  lVar4 = (longlong)this_ptr->alpha_transform_matrices[10][iVar4] * (longlong)(int)uVar7;
  lVar5 = (longlong)this_ptr->alpha_transform_matrices[0xd][iVar4] * (longlong)(int)uVar8;
  lVar6 = (longlong)this_ptr->alpha_transform_matrices[0x10][iVar4] * (longlong)(int)uVar9;
  local_14 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
             ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
             ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar4 = (longlong)this_ptr->alpha_transform_matrices[0xb][iVar4] * (longlong)(int)uVar7;
  lVar5 = (longlong)this_ptr->alpha_transform_matrices[0xe][iVar4] * (longlong)(int)uVar8;
  lVar6 = (longlong)this_ptr->alpha_transform_matrices[0x11][iVar4] * (longlong)(int)uVar9;
  local_10 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
             ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
             ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  puVar10 = (uint *)((int)output_vector + (uint)bVar6 * -8 + 4);
  output_vector->x =
       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
       ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
       ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  *puVar10 = (&local_14)[(uint)bVar6 * -2];
  puVar10[(uint)bVar6 * -2 + 1] = (&local_10)[(uint)bVar6 * -2 + (uint)bVar6 * -2];
  return output_vector;
}
