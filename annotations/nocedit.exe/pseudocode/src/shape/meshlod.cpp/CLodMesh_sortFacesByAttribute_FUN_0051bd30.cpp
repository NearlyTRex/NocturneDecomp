// Name: shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30
// Address: 0051bd30
// Address Range: [[0051bd30, 0051c068]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int aiStackY_189c [1522];
  uint uStack_c0;
  uint local_b0;
  uint local_8c;
  uint local_80;
  float local_7c;
  float local_78;
  float local_74;
  uint local_70;
  CVector3f local_6c [3];
  uint local_48;
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
  local_34 = this_ptr->tri_count + -1;
  if (-1 < local_34) {
    local_2c = attribute_index << 2;
    do {
      if (0 < local_34) {
        local_30 = local_34 * 0x8c;
        local_28 = 0x8c;
        local_24 = 0;
        do {
          puVar4 = (uint *)((int)this_ptr->tri_data->attribute_indices + local_28);
          puVar2 = (uint *)((int)this_ptr->tri_data->attribute_indices + local_24);
          if (*(int *)(local_2c + (int)puVar4) < *(int *)((int)puVar2 + local_2c)) {
            puVar3 = puVar2 + (uint)bVar6 * -2 + 1;
            uStack_c0 = *puVar2;
            *(uint *)(&stack0xffffff44 + (uint)bVar6 * -8) = *puVar3;
            *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 puVar3[(uint)bVar6 * -2 + 1];
            *(uint *)
             ((int)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
             ((uint)bVar6 * -2 + 1) * 4) = (puVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
            local_b0 = puVar2[4];
            *(uint *)(&stack0xffffff54 + (uint)bVar6 * -8) = puVar2[(uint)bVar6 * -2 + 5];
            *(uint *)(&stack0xffffff58 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 (puVar2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
            puVar3 = puVar2 + 7;
            puVar5 = (uint *)&stack0xffffff5c;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar5 = *puVar3;
              puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            local_8c = puVar2[0xd];
            *(uint *)(&stack0xffffff78 + (uint)bVar6 * -8) = puVar2[(uint)bVar6 * -2 + 0xe];
            *(uint *)(&stack0xffffff7c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 (puVar2 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1];
            local_80 = puVar2[0x10];
            local_18 = (float *)(puVar2 + 0x11);
            local_14 = puVar4;
            shape_meshlod_cpp_copyFloat_FUN_0051f0b0(&local_7c,local_18);
            shape_meshlod_cpp_copyFloat_FUN_0051f0a0(&local_78,(float *)(puVar2 + 0x12));
            shape_meshlod_cpp_copyFloat_FUN_0051f090(&local_74,(float *)(puVar2 + 0x13));
            local_70 = puVar2[0x14];
            __arrcopy(local_6c,puVar2 + 0x15,3,&g_CVectorTypeInfo);
            local_48 = puVar2[0x1e];
            aiStack_44[(uint)bVar6 * -2] = puVar2[(uint)bVar6 * -2 + 0x1f];
            aiStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 (puVar2 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1];
            aiStack_44[2] = puVar2[0x21];
            aiStack_44[3] = puVar2[0x22];
            puVar5 = puVar2 + (uint)bVar6 * -2 + 1;
            puVar3 = puVar4 + (uint)bVar6 * -2 + 1;
            *puVar2 = *puVar4;
            *puVar5 = *puVar3;
            puVar5[(uint)bVar6 * -2 + 1] = puVar3[(uint)bVar6 * -2 + 1];
            (puVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
                 (puVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
            puVar2[4] = puVar4[4];
            puVar2[(uint)bVar6 * -2 + 5] = puVar4[(uint)bVar6 * -2 + 5];
            (puVar2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
                 (puVar4 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
            puVar3 = puVar4 + 7;
            puVar5 = puVar2 + 7;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar5 = *puVar3;
              puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            puVar2[0xd] = puVar4[0xd];
            puVar2[(uint)bVar6 * -2 + 0xe] = puVar4[(uint)bVar6 * -2 + 0xe];
            (puVar2 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1] =
                 (puVar4 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1];
            puVar2[0x10] = puVar4[0x10];
            if ((float *)(puVar4 + 0x11) != local_18) {
              *local_18 = (float)puVar4[0x11];
              local_18[1] = (float)puVar4[0x12];
              local_18[2] = (float)puVar4[0x13];
            }
            puVar2[0x14] = puVar4[0x14];
            local_20 = puVar2;
            local_1c = puVar4;
            __arr_op
                      (puVar2 + 0x15,puVar4 + 0x15,3,0xc,core_actor_cpp_copyVector_FUN_00410360);
            puVar2 = local_14;
            local_20[0x1e] = local_1c[0x1e];
            local_20[(uint)bVar6 * -2 + 0x1f] = local_1c[(uint)bVar6 * -2 + 0x1f];
            (local_20 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1] =
                 (local_1c + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1];
            local_20[0x21] = local_1c[0x21];
            local_20[0x22] = local_1c[0x22];
            puVar4 = local_14 + (uint)bVar6 * -2 + 1;
            *local_14 = uStack_c0;
            *puVar4 = *(uint *)(&stack0xffffff44 + (uint)bVar6 * -8);
            puVar4[(uint)bVar6 * -2 + 1] =
                 *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            (puVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
                 *(uint *)
                  ((int)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                  ((uint)bVar6 * -2 + 1) * 4);
            local_14[4] = local_b0;
            local_14[(uint)bVar6 * -2 + 5] = *(uint *)(&stack0xffffff54 + (uint)bVar6 * -8);
            (local_14 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
                 *(uint *)(&stack0xffffff58 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            puVar4 = (uint *)&stack0xffffff5c;
            puVar3 = local_14 + 7;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar3 = *puVar4;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
              puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
            }
            local_14[0xd] = local_8c;
            local_14[(uint)bVar6 * -2 + 0xe] = *(uint *)(&stack0xffffff78 + (uint)bVar6 * -8);
            (local_14 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1] =
                 *(uint *)(&stack0xffffff7c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            local_14[0x10] = local_80;
            if ((float *)(local_14 + 0x11) != &local_7c) {
              local_14[0x11] = local_7c;
              local_14[0x12] = local_78;
              local_14[0x13] = local_74;
            }
            local_14[0x14] = local_70;
            __arr_op
                      (local_14 + 0x15,local_6c,3,0xc,core_actor_cpp_copyVector_FUN_00410360);
            puVar2[0x1e] = local_48;
            puVar2[(uint)bVar6 * -2 + 0x1f] = aiStack_44[(uint)bVar6 * -2];
            (puVar2 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1] =
                 aiStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            puVar2[0x21] = aiStack_44[2];
            puVar2[0x22] = aiStack_44[3];
            core_cloth_cpp_freeVectors_FUN_0043e460(local_6c);
          }
          local_24 = local_24 + 0x8c;
          local_28 = local_28 + 0x8c;
        } while (local_24 < local_30);
      }
      local_34 = local_34 + -1;
    } while (-1 < local_34);
  }
  return;
}
