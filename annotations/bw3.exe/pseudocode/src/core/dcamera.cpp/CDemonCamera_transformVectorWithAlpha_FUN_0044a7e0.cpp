// Name: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044a7e0
// Address: 0044a7e0
// Address Range: [[0044a7e0, 0044a9ec]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044a7e0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044a7e0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1000 [1014];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar6 = 0;
  lVar1 = (longlong)input_vector->y * (longlong)g_INT_01c6e308 +
          (longlong)input_vector->x * (longlong)g_INT_01c6e2fc +
          (longlong)input_vector->z * (longlong)g_INT_01c6e314;
  uStack_24 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)input_vector->y * (longlong)g_INT_01c6e30c +
          (longlong)input_vector->x * (longlong)g_INT_01c6e300 +
          (longlong)input_vector->z * (longlong)g_INT_01c6e318;
  uStack_20 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)input_vector->y * (longlong)g_INT_01c6e310 +
          (longlong)input_vector->x * (longlong)g_INT_01c6e304 +
          (longlong)input_vector->z * (longlong)g_INT_01c6e31c;
  uStack_1c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(g_CDemonRenderer_PTR_005f2afc)
  ;
  if (iVar4 == 0) {
    lVar1 = (longlong)(int)uStack_20 * (longlong)(this_ptr->inverted_matrix).m[1].x +
            (longlong)(int)uStack_24 * (longlong)(this_ptr->inverted_matrix).m[0].x +
            (longlong)(int)uStack_1c * (longlong)(this_ptr->inverted_matrix).m[2].x;
    uStack_18 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uStack_20 * (longlong)(this_ptr->inverted_matrix).m[1].y +
            (longlong)(int)uStack_24 * (longlong)(this_ptr->inverted_matrix).m[0].y +
            (longlong)(int)uStack_1c * (longlong)(this_ptr->inverted_matrix).m[2].y;
    uStack_14 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uStack_20 * (longlong)(this_ptr->inverted_matrix).m[1].z +
            (longlong)(int)uStack_24 * (longlong)(this_ptr->inverted_matrix).m[0].z +
            (longlong)(int)uStack_1c * (longlong)(this_ptr->inverted_matrix).m[2].z;
    uStack_10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    puVar5 = (uint *)((int)output_vector + (uint)bVar6 * -8 + 4);
    output_vector->x = uStack_18;
    *puVar5 = *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8);
    puVar5[(uint)bVar6 * -2 + 1] =
         *(uint *)((int)&stack0xfffffff0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    return output_vector;
  }
  lVar1 = (longlong)this_ptr->alpha_transform_matrices[9][iVar4] * (longlong)(int)uStack_24;
  lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xc][iVar4] * (longlong)(int)uStack_20;
  lVar3 = (longlong)this_ptr->alpha_transform_matrices[0xf][iVar4] * (longlong)(int)uStack_1c;
  uStack_18 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)this_ptr->alpha_transform_matrices[10][iVar4] * (longlong)(int)uStack_24;
  lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xd][iVar4] * (longlong)(int)uStack_20;
  lVar3 = (longlong)this_ptr->alpha_transform_matrices[0x10][iVar4] * (longlong)(int)uStack_1c;
  uStack_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  lVar1 = (longlong)this_ptr->alpha_transform_matrices[0xb][iVar4] * (longlong)(int)uStack_24;
  lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xe][iVar4] * (longlong)(int)uStack_20;
  lVar3 = (longlong)this_ptr->alpha_transform_matrices[0x11][iVar4] * (longlong)(int)uStack_1c;
  uStack_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  puVar5 = (uint *)((int)output_vector + (uint)bVar6 * -8 + 4);
  output_vector->x = uStack_18;
  *puVar5 = *(uint *)((int)&stack0xffffffec + (uint)bVar6 * -8);
  puVar5[(uint)bVar6 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  return output_vector;
}
