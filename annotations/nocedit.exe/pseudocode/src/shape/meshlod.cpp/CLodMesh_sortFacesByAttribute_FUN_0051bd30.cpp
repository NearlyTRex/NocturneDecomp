// Name: shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30
// Address: 0051bd30
// Address Range: [[0051bd30, 0051c068]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh * this_ptr, int attribute_index)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint *unaff_retaddr;
  float afStackY_189c [542];
  int aiStackY_1024 [983];
  uint uStack_ac;
  uint uStack_9c;
  uint local_8c;
  uint local_80;
  float local_7c;
  uint local_78;
  float local_74 [4];
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  byte auStack_58 [4];
  CVector3f *apCStack_54 [6];
  uint local_3c;
  int local_38 [4];
  int local_28;
  int local_24;
  uint local_20;
  float *local_18;
  uint *local_14;
  
  bVar6 = 0;
  local_38[1] = this_ptr->tri_count + -1;
  if (-1 < local_38[1]) {
    local_38[3] = attribute_index << 2;
    do {
      if (0 < local_38[1]) {
        local_38[2] = local_38[1] * 0x8c;
        local_28 = 0x8c;
        local_24 = 0;
        do {
          puVar5 = (uint *)((int)this_ptr->tri_data->attribute_indices + local_28);
          puVar3 = (uint *)((int)this_ptr->tri_data->attribute_indices + local_24);
          if (*(int *)(local_38[3] + (int)puVar5) < *(int *)((int)puVar3 + local_38[3])) {
            puVar2 = puVar3 + (uint)bVar6 * -2 + 1;
            *(uint *)(&stack0xffffff44 + (uint)bVar6 * -8) = *puVar2;
            *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 puVar2[(uint)bVar6 * -2 + 1];
            *(uint *)
             ((int)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
             ((uint)bVar6 * -2 + 1) * 4) = (puVar2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
            *(uint *)((int)&stack0xffffff54 + (uint)bVar6 * -8) = puVar3[(uint)bVar6 * -2 + 5]
            ;
            *(uint *)(&stack0xffffff58 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 (puVar3 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
            puVar2 = puVar3 + 7;
            puVar4 = (uint *)&stack0xffffff5c;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = *puVar2;
              puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            }
            local_8c = puVar3[0xd];
            *(uint *)(&stack0xffffff78 + (uint)bVar6 * -8) = puVar3[(uint)bVar6 * -2 + 0xe];
            *(uint *)(&stack0xffffff7c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 (puVar3 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1];
            local_80 = puVar3[0x10];
            local_18 = (float *)(puVar3 + 0x11);
            local_14 = puVar5;
            shape_meshlod_cpp_copyFloat_FUN_0051f0b0(&local_7c,local_18);
            shape_meshlod_cpp_copyFloat_FUN_0051f0a0(local_74,(float *)(puVar3 + 0x12));
            shape_meshlod_cpp_copyFloat_FUN_0051f090(local_74 + 2,(float *)(puVar3 + 0x13));
            uStack_64 = puVar3[0x14];
            crt_memory_c_copyObjectArray_FUN_00600bc2(&uStack_60,puVar3 + 0x15,3,&g_CVectorTypeInfo)
            ;
            local_3c = puVar3[0x1e];
            local_38[(uint)bVar6 * -2] = puVar3[(uint)bVar6 * -2 + 0x1f];
            local_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 (puVar3 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1];
            local_38[3] = puVar3[0x21];
            local_28 = puVar3[0x22];
            puVar4 = puVar3 + (uint)bVar6 * -2 + 1;
            puVar2 = puVar5 + (uint)bVar6 * -2 + 1;
            *puVar3 = *puVar5;
            *puVar4 = *puVar2;
            puVar4[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
            (puVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
                 (puVar2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
            puVar3[4] = puVar5[4];
            puVar3[(uint)bVar6 * -2 + 5] = puVar5[(uint)bVar6 * -2 + 5];
            (puVar3 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
                 (puVar5 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
            puVar2 = puVar5 + 7;
            puVar4 = puVar3 + 7;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = *puVar2;
              puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            }
            puVar3[0xd] = puVar5[0xd];
            puVar3[(uint)bVar6 * -2 + 0xe] = puVar5[(uint)bVar6 * -2 + 0xe];
            (puVar3 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1] =
                 (puVar5 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1];
            puVar3[0x10] = puVar5[0x10];
            if (puVar5 + 0x11 != unaff_ESI) {
              *unaff_ESI = puVar5[0x11];
              unaff_ESI[1] = puVar5[0x12];
              unaff_ESI[2] = puVar5[0x13];
            }
            puVar3[0x14] = puVar5[0x14];
            crt_memory_c_copyArrayWithFunction_FUN_006020c2
                      (puVar3 + 0x15,puVar5 + 0x15,3,0xc,core_actor_cpp_copyVector_FUN_00410360);
            puVar5[0x1e] = unaff_ESI[0x1e];
            puVar5[(uint)bVar6 * -2 + 0x1f] = unaff_ESI[(uint)bVar6 * -2 + 0x1f];
            (puVar5 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1] =
                 (unaff_ESI + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1];
            puVar5[0x21] = unaff_ESI[0x21];
            puVar5[0x22] = unaff_ESI[0x22];
            puVar3 = unaff_retaddr + (uint)bVar6 * -2 + 1;
            *unaff_retaddr = uStack_ac;
            *puVar3 = *(uint *)(&stack0xffffff58 + (uint)bVar6 * -8);
            puVar3[(uint)bVar6 * -2 + 1] =
                 *(uint *)(&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            (puVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
                 *(uint *)
                  ((int)(&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                  ((uint)bVar6 * -2 + 1) * 4);
            unaff_retaddr[4] = uStack_9c;
            unaff_retaddr[(uint)bVar6 * -2 + 5] =
                 *(uint *)(&stack0xffffff68 + (uint)bVar6 * -8);
            (unaff_retaddr + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
                 *(uint *)(&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            puVar3 = (uint *)&stack0xffffff70;
            puVar5 = unaff_retaddr + 7;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar5 = *puVar3;
              puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            unaff_retaddr[0xd] = local_78;
            unaff_retaddr[(uint)bVar6 * -2 + 0xe] = local_74[(uint)bVar6 * -2];
            (unaff_retaddr + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1] =
                 local_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            unaff_retaddr[0x10] = local_74[2];
            if ((float *)(unaff_retaddr + 0x11) != local_74 + 3) {
              unaff_retaddr[0x11] = local_74[3];
              unaff_retaddr[0x12] = uStack_64;
              unaff_retaddr[0x13] = uStack_60;
            }
            unaff_retaddr[0x14] = uStack_5c;
            crt_memory_c_copyArrayWithFunction_FUN_006020c2
                      (unaff_retaddr + 0x15,auStack_58,3,0xc,core_actor_cpp_copyVector_FUN_00410360)
            ;
            unaff_retaddr[0x1e] = local_38[1];
            unaff_retaddr[(uint)bVar6 * -2 + 0x1f] = local_38[(uint)bVar6 * -2 + 2];
            (unaff_retaddr + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1] =
                 local_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3];
            unaff_retaddr[0x21] = local_24;
            uStack_ac = 0;
            unaff_retaddr[0x22] = local_20;
            core_cloth_cpp_freeVectors_FUN_0043e460(apCStack_54);
          }
          local_24 = local_24 + 0x8c;
          local_28 = local_28 + 0x8c;
        } while (local_24 < local_38[2]);
      }
      local_38[1] = local_38[1] + -1;
    } while (-1 < local_38[1]);
  }
  return;
}
