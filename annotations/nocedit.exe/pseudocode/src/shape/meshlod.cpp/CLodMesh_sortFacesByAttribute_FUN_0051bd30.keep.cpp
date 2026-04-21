// Name: shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30
// Address: 0051bd30
// MANUAL RECONSTRUCTION
// Address Range: [[0051bd30, 0051c068] [00608a48, 00608ab3] [00609cb0, 00609dd0] [03fc59b6, 03fc59f0]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)

{
  float *src_ptr;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar1;
  int iVar15;
  uint *puVar2;
  uint *puVar16;
  uint *puVar17;
  uint *puVar3;
  uint *puVar4;
  uint *puVar18;
  uint *puVar5;
  byte bVar6;
  int aiStackY_189c [1522];
  uint local_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint local_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
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
  iVar2 = this_ptr->tri_count;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    if (0 < iVar2) {
      local_28 = 0x8c;
      local_24 = 0;
      do {
        puVar16 = (uint *)((int)this_ptr->tri_data->attribute_indices + local_28);
        puVar2 = (uint *)((int)this_ptr->tri_data->attribute_indices + local_24);
        if ((int)puVar16[attribute_index] < (int)puVar2[attribute_index]) {
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          uVar8 = puVar2[4];
          uVar9 = puVar2[5];
          uVar10 = puVar2[6];
          memcpy(&local_a4,puVar2 + 7,0x18);
          local_8c = puVar2[0xd];
          uStack_88 = puVar2[0xe];
          uStack_84 = puVar2[0xf];
          local_80 = puVar2[0x10];
          src_ptr = (float *)(puVar2 + 0x11);
          shape_meshlod_cpp_copyFloat3_FUN_0051f0b0(&local_7c,src_ptr);
          shape_meshlod_cpp_copyFloat2_FUN_0051f0a0(&local_78,(float *)(puVar2 + 0x12));
          shape_meshlod_cpp_copyFloat1_FUN_0051f090(&local_74,(float *)(puVar2 + 0x13));
          local_70 = puVar2[0x14];
          __arrcopy(local_6c,puVar2 + 0x15,3,&g_CVectorTypeInfo);
          uVar11 = puVar2[0x1e];
          uVar12 = puVar2[0x1f];
          uVar13 = puVar2[0x20];
          uVar14 = puVar2[0x21];
          uVar3 = puVar2[0x22];
          *puVar2 = *puVar16;
          puVar2[1] = puVar16[1];
          puVar2[2] = puVar16[2];
          puVar2[3] = puVar16[3];
          puVar2[4] = puVar16[4];
          puVar2[5] = puVar16[5];
          puVar2[6] = puVar16[6];
          memcpy(puVar2 + 7,puVar16 + 7,0x18);
          puVar2[0xd] = puVar16[0xd];
          puVar2[0xe] = puVar16[0xe];
          puVar2[0xf] = puVar16[0xf];
          puVar2[0x10] = puVar16[0x10];
          if ((float *)(puVar16 + 0x11) != src_ptr) {
            *src_ptr = (float)puVar16[0x11];
            puVar2[0x12] = puVar16[0x12];
            puVar2[0x13] = puVar16[0x13];
          }
          puVar2[0x14] = puVar16[0x14];
          __arr_op
                    (puVar2 + 0x15,puVar16 + 0x15,3,0xc,core_actor_cpp_copyVector_FUN_00410360);
          puVar2[0x1e] = puVar16[0x1e];
          puVar2[0x1f] = puVar16[0x1f];
          puVar2[0x20] = puVar16[0x20];
          puVar2[0x21] = puVar16[0x21];
          puVar2[0x22] = puVar16[0x22];
          *puVar16 = uVar4;
          puVar16[1] = uVar5;
          puVar16[2] = uVar6;
          puVar16[3] = uVar7;
          puVar16[4] = uVar8;
          puVar16[5] = uVar9;
          puVar16[6] = uVar10;
          puVar16[7] = local_a4;
          puVar16[8] = uStack_a0;
          puVar16[9] = uStack_9c;
          puVar16[10] = uStack_98;
          puVar16[0xb] = uStack_94;
          puVar16[0xc] = uStack_90;
          puVar16[0xd] = local_8c;
          puVar16[0xe] = uStack_88;
          puVar16[0xf] = uStack_84;
          puVar16[0x10] = local_80;
          if ((float *)(puVar16 + 0x11) != &local_7c) {
            puVar16[0x11] = local_7c;
            puVar16[0x12] = local_78;
            puVar16[0x13] = local_74;
          }
          puVar16[0x14] = local_70;
          __arr_op
                    (puVar16 + 0x15,local_6c,3,0xc,core_actor_cpp_copyVector_FUN_00410360);
          puVar16[0x1e] = uVar11;
          puVar16[0x1f] = uVar12;
          puVar16[0x20] = uVar13;
          puVar16[0x21] = uVar14;
          puVar16[0x22] = uVar3;
          core_cloth_cpp_CVector3f_arrdtor_FUN_0043e460(local_6c,0);
        }
        local_24 = local_24 + 0x8c;
        local_28 = local_28 + 0x8c;
      } while (local_24 < iVar2 * 0x8c);
    }
  }
  return;
}
