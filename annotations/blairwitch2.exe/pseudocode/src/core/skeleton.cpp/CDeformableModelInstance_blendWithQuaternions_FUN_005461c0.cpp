// Name: core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0
// Address: 005461c0
// Address Range: [[005461c0, 00546641]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,CVector3f *source_position,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)

{
  float fVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  CQuaternion4f *pCVar5;
  float *pfVar6;
  CQuaternion4f *pCVar7;
  uint *puVar8;
  uint *puVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_18e4 [1522];
  uint uStack_108;
  float local_f8;
  uint local_e8;
  uint local_d8;
  uint local_c8;
  CQuaternion4f local_b8;
  uint local_a8;
  float afStack_a4 [7];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint uStack_54;
  uint uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  byte *local_30;
  CDeformableModelInstance *local_2c;
  CSkeleton *local_28;
  byte *local_24;
  byte *local_20;
  CDeformableModelInstance *local_1c;
  CSkeleton *local_18;
  float local_14;
  
  bVar11 = 0;
  if ((float)_DAT_005e731f < blend_weight) {
    local_28 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
    local_18 = local_28;
    local_30 = &this_ptr->field_0x6b0;
    if (*(int *)&this_ptr->field_0x2250 == 0) {
      iVar4 = 0;
      if (0 < local_28->bone_count) {
        local_2c = this_ptr;
        local_24 = local_30;
        do {
          iVar2 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                            (local_18,iVar4,bone_index);
          if (-1 < iVar2) {
            local_14 = (*blend_callback)(iVar4,bone_index,blend_weight,iVar2,this_ptr);
            core_xform_cpp_slerpQuaternion_FUN_00593df0(local_24,source_quaternions,local_14);
            puVar8 = (uint *)((int)local_2c + (uint)bVar11 * -8 + 0x6b4);
            *(uint *)&local_2c->field_0x6b0 = uStack_108;
            puVar9 = puVar8 + (uint)bVar11 * -2 + 1;
            *puVar8 = *(uint *)(&stack0xfffffefc + (uint)bVar11 * -8);
            *puVar9 = *(uint *)(&stack0xffffff00 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
            puVar9[(uint)bVar11 * -2 + 1] =
                 *(uint *)
                  ((int)(&stack0xffffff00 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
                  ((uint)bVar11 * -2 + 1) * 4);
          }
          source_quaternions = source_quaternions + 1;
          iVar4 = iVar4 + 1;
          local_2c = (CDeformableModelInstance *)&local_2c->field_0x10;
          local_24 = local_24 + 0x10;
        } while (iVar4 < local_18->bone_count);
      }
    }
    else if (*(int *)&this_ptr->field_0x2250 == 1) {
      iVar4 = 0;
      if (0 < local_28->bone_count) {
        local_1c = this_ptr;
        pCVar5 = source_quaternions;
        local_20 = local_30;
        do {
          iVar2 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                            (local_18,iVar4,bone_index);
          if (-1 < iVar2) {
            iVar2 = *(int *)(local_28->bone_list + 0x20);
            pCVar7 = pCVar5;
            if (-1 < iVar2) {
              local_14 = (float)(iVar2 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_00593c00(source_quaternions + iVar2);
              puVar8 = &stack0xffffff38;
              local_c8 = local_e8;
              *(uint *)((int)&stack0xffffff3c + (uint)bVar11 * 0xfffffffe * 4) =
                   *(uint *)(&stack0xffffff1c + (uint)bVar11 * -8);
              afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -7] =
                   *(float *)(&stack0xffffff20 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
              (afStack_a4 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + -7)[(uint)bVar11 * -2 + 1] =
                   *(float *)((int)(&stack0xffffff20 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
                             ((uint)bVar11 * -2 + 1) * 4);
              core_xform_cpp_multiplyQuaternion_FUN_00593c60(pCVar5,puVar8);
              puVar3 = local_30 + (int)local_14;
              local_d8 = afStack_a4[3];
              *(float *)((int)&stack0xffffff2c + (uint)bVar11 * 0xfffffffe * 4) =
                   afStack_a4[(uint)bVar11 * -2 + 4];
              *(float *)(&stack0xffffff30 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
                   afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
              *(float *)((int)(&stack0xffffff30 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
                        ((uint)bVar11 * -2 + 1) * 4) =
                   (afStack_a4 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_00593c60(&stack0xffffff28,puVar3);
              pCVar7 = &local_b8;
            }
            puVar8 = (uint *)((int)pCVar7 + (uint)bVar11 * -8 + 4);
            local_f8 = pCVar7->w;
            puVar9 = puVar8 + (uint)bVar11 * -2 + 1;
            *(uint *)((int)&stack0xffffff0c + (uint)bVar11 * 0xfffffffe * 4) = *puVar8;
            *(uint *)(&stack0xffffff10 + (uint)bVar11 * -8 + (uint)bVar11 * -8) = *puVar9;
            *(uint *)
             ((int)(&stack0xffffff10 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
             ((uint)bVar11 * -2 + 1) * 4) = puVar9[(uint)bVar11 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_00593df0(local_20,&stack0xffffff08,blend_weight);
            pfVar6 = (float *)((int)local_1c + (uint)bVar11 * -8 + 0x6b4);
            *(uint *)&local_1c->field_0x6b0 = local_a8;
            pfVar10 = pfVar6 + (uint)bVar11 * -2 + 1;
            *pfVar6 = afStack_a4[(uint)bVar11 * -2];
            *pfVar10 = afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            pfVar10[(uint)bVar11 * -2 + 1] =
                 (afStack_a4 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
          }
          pCVar5 = pCVar5 + 1;
          iVar4 = iVar4 + 1;
          local_20 = local_20 + 0x10;
          local_28 = (CSkeleton *)&local_28->field_0x24;
          local_1c = (CDeformableModelInstance *)&local_1c->field_0x10;
        } while (iVar4 < local_18->bone_count);
      }
    }
    else {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0xae4;
      core_main_c_FUN_004e4500("Write me!");
    }
    if (bone_index < 0) {
      pfVar6 = (float *)((int)this_ptr + (uint)bVar11 * -8 + 0x50c);
      local_70 = *(float *)&this_ptr->field_0x508;
      afStack_a4[(uint)bVar11 * -2 + 0xe] = *pfVar6;
      afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xf] = pfVar6[(uint)bVar11 * -2 + 1];
      local_70 = local_70 * source_position->x;
      local_6c = local_6c * source_position->y;
      local_68 = local_68 * source_position->z;
      fStack_88 = local_70 * blend_weight;
      fVar1 = 1.0 - blend_weight;
      fStack_84 = local_6c * blend_weight;
      fStack_80 = local_68 * blend_weight;
      fStack_4c = fStack_88;
      afStack_a4[(uint)bVar11 * -2 + 0x17] = afStack_a4[(uint)bVar11 * -2 + 8];
      afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x18] =
           afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9];
      fStack_34 = fVar1;
      fStack_7c = *(float *)&this_ptr->field_0x6a4 * fVar1;
      fStack_78 = *(float *)&this_ptr->field_0x6a8 * fVar1;
      fStack_74 = *(float *)&this_ptr->field_0x6ac * fVar1;
      fStack_40 = fStack_7c;
      afStack_a4[(uint)bVar11 * -2 + 0x1a] = afStack_a4[(uint)bVar11 * -2 + 0xb];
      afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1b] =
           afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xc];
      fStack_64 = fStack_40 + fStack_4c;
      fStack_60 = fStack_3c + fStack_48;
      fStack_5c = fStack_38 + fStack_44;
      fStack_58 = fStack_40 + fStack_4c;
      afStack_a4[(uint)bVar11 * -2 + 0x14] = afStack_a4[(uint)bVar11 * -2 + 0x11];
      afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x15] =
           afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x12];
      if ((float *)&this_ptr->field_0x6a4 != afStack_a4 + 0x13) {
        *(float *)&this_ptr->field_0x6a4 = fStack_58;
        *(uint *)&this_ptr->field_0x6a8 = uStack_54;
        *(uint *)&this_ptr->field_0x6ac = uStack_50;
        return;
      }
    }
  }
  return;
}
