// Name: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10
// Address: 00441a10
// Address Range: [[00441a10, 00441c1c]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1000 [1014];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar6 = 0;
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
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(g_CDemonRenderer_PTR_005ae704)
  ;
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
    puVar5 = (uint *)((int)output_vector + (uint)bVar6 * -8 + 4);
    output_vector->x = local_18;
    *puVar5 = *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8);
    puVar5[(uint)bVar6 * -2 + 1] =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    return output_vector;
  }
  lVar1 = (longlong)this_ptr->alpha_transform_matrices[9][iVar4] * (longlong)(int)local_24;
  lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xc][iVar4] * (longlong)(int)local_20;
  lVar3 = (longlong)this_ptr->alpha_transform_matrices[0xf][iVar4] * (longlong)(int)local_1c;
  local_18 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)this_ptr->alpha_transform_matrices[10][iVar4] * (longlong)(int)local_24;
  lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xd][iVar4] * (longlong)(int)local_20;
  lVar3 = (longlong)this_ptr->alpha_transform_matrices[0x10][iVar4] * (longlong)(int)local_1c;
  local_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)this_ptr->alpha_transform_matrices[0xb][iVar4] * (longlong)(int)local_24;
  lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xe][iVar4] * (longlong)(int)local_20;
  lVar3 = (longlong)this_ptr->alpha_transform_matrices[0x11][iVar4] * (longlong)(int)local_1c;
  local_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  puVar5 = (uint *)((int)output_vector + (uint)bVar6 * -8 + 4);
  output_vector->x = local_18;
  *puVar5 = *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8);
  puVar5[(uint)bVar6 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  return output_vector;
}
