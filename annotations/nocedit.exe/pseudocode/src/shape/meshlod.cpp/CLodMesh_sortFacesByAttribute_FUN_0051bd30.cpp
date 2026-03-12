// Name: shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30
// Address: 0051bd30
// Address Range: [[0051bd30, 0051c068]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)

{
  float *src_ptr;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar1;
  int iVar4;
  uint *puVar2;
  uint *puVar6;
  uint *puVar7;
  uint *puVar3;
  uint *puVar4;
  uint *puVar8;
  uint *puVar5;
  byte bVar6;
  int aiStackY_189c [1522];
  uint auStack_bc [6];
  uint local_a4 [6];
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
        puVar6 = (uint *)((int)this_ptr->tri_data->attribute_indices + local_28);
        puVar2 = (uint *)((int)this_ptr->tri_data->attribute_indices + local_24);
        if ((int)puVar6[attribute_index] < (int)puVar2[attribute_index]) {
          puVar7 = puVar2 + (uint)bVar6 * -2 + 1;
          uVar1 = *puVar2;
          auStack_bc[(uint)bVar6 * -2] = *puVar7;
          auStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = puVar7[(uint)bVar6 * -2 + 1];
          (auStack_bc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
               (puVar7 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
          auStack_bc[3] = puVar2[4];
          auStack_bc[(uint)bVar6 * -2 + 4] = puVar2[(uint)bVar6 * -2 + 5];
          auStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5] =
               (puVar2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
          puVar7 = puVar2 + 7;
          puVar8 = auStack_bc + 6;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar6 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar6 * -2 + 1;
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
          puVar8 = puVar2 + (uint)bVar6 * -2 + 1;
          puVar7 = puVar6 + (uint)bVar6 * -2 + 1;
          *puVar2 = *puVar6;
          *puVar8 = *puVar7;
          puVar8[(uint)bVar6 * -2 + 1] = puVar7[(uint)bVar6 * -2 + 1];
          (puVar8 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
               (puVar7 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
          puVar2[4] = puVar6[4];
          puVar2[(uint)bVar6 * -2 + 5] = puVar6[(uint)bVar6 * -2 + 5];
          (puVar2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
               (puVar6 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
          puVar3 = puVar6 + 7;
          puVar5 = puVar2 + 7;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
            *puVar5 = *puVar3;
            puVar3 = puVar3;
            puVar5 = puVar5;
          }
          puVar2[0xd] = puVar6[0xd];
          puVar2[(uint)bVar6 * -2 + 0xe] = puVar6[(uint)bVar6 * -2 + 0xe];
          (puVar2 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1] =
               (puVar6 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1];
          puVar2[0x10] = puVar6[0x10];
          if ((float *)(puVar6 + 0x11) != src_ptr) {
            *src_ptr = (float)puVar6[0x11];
            puVar2[0x12] = puVar6[0x12];
            puVar2[0x13] = puVar6[0x13];
          }
          puVar2[0x14] = puVar6[0x14];
          __arr_op
                    (puVar2 + 0x15,puVar6 + 0x15,3,0xc,core_actor_cpp_copyVector_FUN_00410360);
          puVar2[0x1e] = puVar6[0x1e];
          puVar2[(uint)bVar6 * -2 + 0x1f] = puVar6[(uint)bVar6 * -2 + 0x1f];
          (puVar2 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1] =
               (puVar6 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1];
          puVar2[0x21] = puVar6[0x21];
          puVar2[0x22] = puVar6[0x22];
          puVar7 = puVar6 + (uint)bVar6 * -2 + 1;
          *puVar6 = uVar1;
          *puVar7 = auStack_bc[(uint)bVar6 * -2];
          puVar7[(uint)bVar6 * -2 + 1] = auStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          (puVar7 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
               (auStack_bc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
          puVar6[4] = auStack_bc[3];
          puVar6[(uint)bVar6 * -2 + 5] = auStack_bc[(uint)bVar6 * -2 + 4];
          (puVar6 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
               auStack_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
          puVar4 = auStack_bc + 6;
          puVar7 = puVar6 + 7;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            *puVar7 = *puVar4;
            puVar4 = puVar4;
            puVar7 = puVar7 + (uint)bVar6 * -2 + 1;
          }
          puVar6[0xd] = local_8c;
          puVar6[(uint)bVar6 * -2 + 0xe] = afStack_88[(uint)bVar6 * -2];
          (puVar6 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1] =
               afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          puVar6[0x10] = afStack_88[2];
          if ((float *)(puVar6 + 0x11) != &local_7c) {
            puVar6[0x11] = local_7c;
            puVar6[0x12] = local_78;
            puVar6[0x13] = local_74;
          }
          puVar6[0x14] = local_70;
          __arr_op
                    (puVar6 + 0x15,local_6c,3,0xc,core_actor_cpp_copyVector_FUN_00410360);
          puVar6[0x1e] = uVar2;
          puVar6[(uint)bVar6 * -2 + 0x1f] = aiStack_44[(uint)bVar6 * -2];
          (puVar6 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1] =
               aiStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          puVar6[0x21] = aiStack_44[2];
          puVar6[0x22] = aiStack_44[3];
          core_cloth_cpp_CVector3f_arrdtor_FUN_0043e460(local_6c,0);
        }
        local_24 = local_24 + 0x8c;
        local_28 = local_28 + 0x8c;
      } while (local_24 < iVar3 * 0x8c);
    }
  }
  return;
}
