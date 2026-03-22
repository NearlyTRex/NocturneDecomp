// Name: shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30
// Address: 0051bd30
// Address Range: [[0051bd30, 0051c068] [00608a48, 00608ab3]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)

{
  float *src_ptr;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar1;
  int iVar8;
  uint *puVar2;
  uint *puVar9;
  uint *puVar10;
  uint *puVar3;
  uint *puVar4;
  uint *puVar11;
  uint *puVar5;
  byte bVar6;
  int aiStackY_189c [1522];
  uint auStack_ac [8];
  uint local_8c;
  float afStack_88 [3];
  float local_7c;
  float local_78;
  float local_74;
  uint local_70;
  CVector3f local_6c [3];
  int aiStack_44 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint *local_20;
  uint *local_1c;
  float *local_18;
  uint *local_14;
  
  bVar6 = 0;
  iVar3 = this_ptr->tri_count;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    if (0 < iVar3) {
      local_28 = 0x8c;
      local_24 = 0;
      do {
        puVar9 = (uint *)((int)this_ptr->tri_data->attribute_indices + local_28);
        puVar2 = (uint *)((int)this_ptr->tri_data->attribute_indices + local_24);
        if ((int)puVar9[attribute_index] < (int)puVar2[attribute_index]) {
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          uVar1 = puVar2[4];
          auStack_ac[(uint)bVar6 * -2] = puVar2[(uint)bVar6 * -2 + 5];
          auStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               (puVar2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
          puVar10 = puVar2 + 7;
          puVar11 = auStack_ac + 2;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + (uint)bVar6 * -2 + 1;
            puVar11 = puVar11 + (uint)bVar6 * -2 + 1;
          }
          local_8c = puVar2[0xd];
          afStack_88[(uint)bVar6 * -2] = (float)puVar2[(uint)bVar6 * -2 + 0xe];
          afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               (float)(puVar2 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1];
          afStack_88[2] = (float)puVar2[0x10];
          src_ptr = (float *)(puVar2 + 0x11);
          shape_meshlod_cpp_copyFloat_FUN_0051f0b0(&local_7c,src_ptr);
          shape_meshlod_cpp_copyFloat_FUN_0051f0a0(&local_78,(float *)(puVar2 + 0x12));
          shape_meshlod_cpp_copyFloat_FUN_0051f090(&local_74,(float *)(puVar2 + 0x13));
          local_70 = puVar2[0x14];
          __arrcopy(local_6c,puVar2 + 0x15,3,&g_CVectorTypeInfo);
          uVar2 = puVar2[0x1e];
          aiStack_44[(uint)bVar6 * -2] = puVar2[(uint)bVar6 * -2 + 0x1f];
          aiStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               (puVar2 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1];
          aiStack_44[2] = puVar2[0x21];
          aiStack_44[3] = puVar2[0x22];
          *puVar2 = *puVar9;
          puVar2[1] = puVar9[1];
          puVar2[2] = puVar9[2];
          puVar2[3] = puVar9[3];
          puVar2[4] = puVar9[4];
          puVar2[(uint)bVar6 * -2 + 5] = puVar9[(uint)bVar6 * -2 + 5];
          (puVar2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
               (puVar9 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
          puVar3 = puVar9 + 7;
          puVar5 = puVar2 + 7;
          for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
            *puVar5 = *puVar3;
            puVar3 = puVar3;
            puVar5 = puVar5;
          }
          puVar2[0xd] = puVar9[0xd];
          puVar2[(uint)bVar6 * -2 + 0xe] = puVar9[(uint)bVar6 * -2 + 0xe];
          (puVar2 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1] =
               (puVar9 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1];
          puVar2[0x10] = puVar9[0x10];
          if ((float *)(puVar9 + 0x11) != src_ptr) {
            *src_ptr = (float)puVar9[0x11];
            puVar2[0x12] = puVar9[0x12];
            puVar2[0x13] = puVar9[0x13];
          }
          puVar2[0x14] = puVar9[0x14];
          __arr_op
                    (puVar2 + 0x15,puVar9 + 0x15,3,0xc,core_actor_cpp_copyVector_FUN_00410360);
          puVar2[0x1e] = puVar9[0x1e];
          puVar2[(uint)bVar6 * -2 + 0x1f] = puVar9[(uint)bVar6 * -2 + 0x1f];
          (puVar2 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1] =
               (puVar9 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1];
          puVar2[0x21] = puVar9[0x21];
          puVar2[0x22] = puVar9[0x22];
          *puVar9 = uVar4;
          puVar9[1] = uVar5;
          puVar9[2] = uVar6;
          puVar9[3] = uVar7;
          puVar9[4] = uVar1;
          puVar9[(uint)bVar6 * -2 + 5] = auStack_ac[(uint)bVar6 * -2];
          (puVar9 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
               auStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          puVar4 = auStack_ac + 2;
          puVar10 = puVar9 + 7;
          for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            *puVar10 = *puVar4;
            puVar4 = puVar4;
            puVar10 = puVar10 + (uint)bVar6 * -2 + 1;
          }
          puVar9[0xd] = local_8c;
          puVar9[(uint)bVar6 * -2 + 0xe] = afStack_88[(uint)bVar6 * -2];
          (puVar9 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1] =
               afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          puVar9[0x10] = afStack_88[2];
          if ((float *)(puVar9 + 0x11) != &local_7c) {
            puVar9[0x11] = local_7c;
            puVar9[0x12] = local_78;
            puVar9[0x13] = local_74;
          }
          puVar9[0x14] = local_70;
          __arr_op
                    (puVar9 + 0x15,local_6c,3,0xc,core_actor_cpp_copyVector_FUN_00410360);
          puVar9[0x1e] = uVar2;
          puVar9[(uint)bVar6 * -2 + 0x1f] = aiStack_44[(uint)bVar6 * -2];
          (puVar9 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1] =
               aiStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          puVar9[0x21] = aiStack_44[2];
          puVar9[0x22] = aiStack_44[3];
          core_cloth_cpp_CVector3f_arrdtor_FUN_0043e460(local_6c,0);
        }
        local_24 = local_24 + 0x8c;
        local_28 = local_28 + 0x8c;
      } while (local_24 < iVar3 * 0x8c);
    }
  }
  return;
}
