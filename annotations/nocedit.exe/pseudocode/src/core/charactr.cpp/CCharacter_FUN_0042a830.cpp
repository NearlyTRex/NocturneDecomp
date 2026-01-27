// Name: core_charactr.cpp_CCharacter_FUN_0042a830
// Address: 0042a830
// Address Range: [[0042a830, 0042acfa]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042a830(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042a830(CCharacter *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  CSkeleton *pCVar3;
  CDeformableModel *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  CCharacter *pCVar10;
  int unaff_EBP;
  char *pcVar11;
  char *pcVar12;
  float in_stack_00000008;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CDeformableModelInstance *local_44;
  char *local_40;
  CSkeleton *local_38;
  CDeformableModel *local_34;
  int local_2c;
  int local_28;
  int local_20;
  CCharacter *local_1c;
  CSkeleton *local_18;
  char *pcStack_14;
  
  this_ptr_00 = &this_ptr->model;
  local_18 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  if (*(int *)(this_ptr->cloth_data + 0x8d40) == 0) {
    if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
      pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      local_38 = pCVar3;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
      iVar9 = 0;
      if (0 < pCVar3->bone_count) {
        iVar5 = 0;
        do {
          *(uint *)((int)&DAT_00823c54 + iVar5) = 0;
          iVar9 = iVar9 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar9 < local_38->bone_count);
      }
      fVar1 = 3.0f;
      iVar9 = 0;
      if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
        fVar2 = (float)65535;
        pCVar10 = this_ptr;
        do {
          iVar9 = iVar9 + 1;
          (&DAT_00823c54)[*(int *)(pCVar10->cloth_data + 0x488)] =
               (float)(&DAT_00823c54)[*(int *)(pCVar10->cloth_data + 0x488)] +
               (*(float *)(pCVar10->cloth_data + 0x498) * fVar2) / fVar1;
          pCVar10 = (CCharacter *)((pCVar10->base).actor_name + 0x18);
        } while (iVar9 < *(int *)(this_ptr->cloth_data + 0x478));
      }
      iVar9 = 0;
      local_2c = 0;
      if (0 < local_38->bone_count) {
        local_44 = &this_ptr->model;
        iVar5 = 0;
        local_34 = pCVar4;
        do {
          if ((float)65535 <= *(float *)((int)&DAT_00823c54 + iVar5)) {
            iVar9 = iVar9 + 1;
          }
          if (local_34->farthest_child_bone[0] == -1) {
            iVar9 = iVar9 + 1;
          }
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(local_44);
          if ((this_ptr->model).part_visibility_flags
              [*(int *)((int)pCVar4->bone_to_part_map + iVar5)] == 0) {
            iVar9 = iVar9 + 1;
          }
          iVar5 = iVar5 + 4;
          local_34 = (CDeformableModel *)local_34->lod_info;
          local_2c = local_2c + 1;
        } while (local_2c < local_38->bone_count);
      }
      if (iVar9 == local_38->bone_count) {
        this_ptr->cloth_data[0x8d44] = '\0';
        this_ptr->cloth_data[0x8d45] = '\0';
        this_ptr->cloth_data[0x8d46] = -0x80;
        this_ptr->cloth_data[0x8d47] = '?';
        this_ptr->cloth_data[0x8d40] = '\x01';
        this_ptr->cloth_data[0x8d41] = '\0';
        this_ptr->cloth_data[0x8d42] = '\0';
        this_ptr->cloth_data[0x8d43] = '\0';
      }
      CStack_54.z = (float)*(int *)(this_ptr->cloth_data + 0x478) * (float)0.59999999999999998 *
                    (float)0.02 + (float)0.40000000000000002;
      iVar9 = sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0
                        (*(uint *)(this_ptr->cloth_data + 0x8d3c),CStack_54.z);
      if (iVar9 == 0) {
        sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
        sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(CStack_54.z);
        uVar7 = (*((this_ptr->base).vtable._ub)->playAmbientSound)
                          (&this_ptr->base,"character-onfire-loop.wav");
        *(uint *)(this_ptr->cloth_data + 0x8d3c) = uVar7;
        sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      }
    }
  }
  else {
    fVar1 = *(float *)(this_ptr->cloth_data + 0x8d44) - in_stack_00000008;
    *(float *)(this_ptr->cloth_data + 0x8d44) = fVar1;
    if (fVar1 < 0.0) {
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->cloth_data + 0x8d3c));
      (*((this_ptr->base).vtable._ub)->playSound)
                (&this_ptr->base,"character-onfire-fallapart.wav");
      core_charactr_cpp_CCharacter_FUN_0042b9e0(this_ptr);
    }
  }
  local_20 = 0;
  if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
    local_38 = (CSkeleton *)(this_ptr->model).bone_transform.bone_world_matrices;
    local_40 = this_ptr->cloth_data + 0x934;
    pcVar11 = this_ptr->cloth_data + 0x484;
    local_1c = this_ptr;
    pcVar12 = this_ptr->cloth_data + 0x954;
    do {
      if ((this_ptr->model).part_visibility_flags[*(int *)pcVar11] != 0) {
        (this_ptr->base).is_transparent = 1;
        pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&CStack_54,(CVector3f *)(pcVar11 + 8),
                            (CMatrix3x4f *)
                            ((int)(local_38->motion_list).state_names +
                            *(int *)(pcVar11 + 4) * 0x30 + -4));
        pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base,&CStack_60,pCVar6);
        *(float *)pcVar12 = pCVar6->x;
        *(float *)(pcVar12 + 4) = pCVar6->y;
        *(float *)(pcVar12 + 8) = pCVar6->z;
        fVar1 = (float)0.5;
        *(float *)(local_1c->cloth_data + 0xa8c) = *(float *)(pcVar11 + 0x14) * fVar1;
        *(int *)(local_1c->cloth_data + 0xa90) = *(int *)(pcVar11 + 0x14);
        *(float *)(local_1c->cloth_data + 0xa94) = *(float *)(pcVar11 + 0x14) * fVar1;
        (**(code **)(*(int *)(local_40 + local_20 * 0x2a4 + 0x154) + 4))();
      }
      pcVar11 = pcVar11 + 0x18;
      pcVar12 = pcVar12 + 0x2a4;
      local_1c = (CCharacter *)&(local_1c->model).transformed_vertices[0x14].y;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(this_ptr->cloth_data + 0x478));
  }
  if ((*(int *)(this_ptr->unk2 + 0x74) == 0) && (0 < *(int *)(this_ptr->cloth_data + 0x478))) {
    local_18 = (CSkeleton *)(this_ptr->cloth_data + 0x484);
    local_34 = (CDeformableModel *)(in_stack_00000008 * 2.0f);
    local_28 = 0;
    do {
      pcStack_14 = (char *)local_18;
      if (((this_ptr->model).part_visibility_flags[*(int *)local_18] != 0) &&
         (fVar1 = (float)local_34 * *(float *)(this_ptr->cloth_data + 0x480) +
                  *(float *)((int)local_18 + 0x14), *(float *)((int)local_18 + 0x14) = fVar1,
         3.0f < fVar1)) {
        *(float *)((int)local_18 + 0x14) = 3.0f;
        iVar5 = 0;
        iVar9 = unaff_EBP;
        if (0 < *(int *)(unaff_EBP + 0x28558)) {
          do {
            if (*(uint *)(iVar9 + 0x2857c) == *(uint *)(pcStack_14 + 4)) {
              uVar8 = *(uint *)(iVar9 + 0x2857c) ^ *(uint *)(pcStack_14 + 4);
              pCVar10 = this_ptr;
              if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
                do {
                  if (iVar5 == *(int *)(pCVar10->cloth_data + 0x488)) break;
                  uVar8 = uVar8 + 1;
                  pCVar10 = (CCharacter *)((pCVar10->base).actor_name + 0x18);
                } while ((int)uVar8 < *(int *)(this_ptr->cloth_data + 0x478));
              }
              if (uVar8 == *(uint *)(this_ptr->cloth_data + 0x478)) {
                core_charactr_cpp_CCharacter_FUN_0042a520(this_ptr);
              }
            }
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + 0x24;
          } while (iVar5 < *(int *)(unaff_EBP + 0x28558));
        }
        iVar9 = 0;
        if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
          pCVar10 = this_ptr;
          do {
            if (*(int *)(*(int *)(pcStack_14 + 4) * 0x24 + unaff_EBP + 0x2857c) ==
                *(int *)(pCVar10->cloth_data + 0x488)) break;
            iVar9 = iVar9 + 1;
            pCVar10 = (CCharacter *)((pCVar10->base).actor_name + 0x18);
          } while (iVar9 < *(int *)(this_ptr->cloth_data + 0x478));
        }
        if (iVar9 == *(int *)(this_ptr->cloth_data + 0x478)) {
          core_charactr_cpp_CCharacter_FUN_0042a520(this_ptr);
        }
      }
      local_18 = (CSkeleton *)((int)local_18 + 0x18);
      local_28 = local_28 + 1;
    } while (local_28 < *(int *)(this_ptr->cloth_data + 0x478));
  }
  return;
}
