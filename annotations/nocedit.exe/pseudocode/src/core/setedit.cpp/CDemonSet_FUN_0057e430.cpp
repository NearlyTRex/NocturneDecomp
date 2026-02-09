// Name: core_setedit.cpp_CDemonSet_FUN_0057e430
// Address: 0057e430
// Address Range: [[0057e430, 0057e77b]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_FUN_0057e430(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_FUN_0057e430(CDemonSet *this_ptr)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  C3DSCamera *pCVar6;
  C3DSCamera *pCVar7;
  int in_stack_00000008;
  C3DSCamera *local_20;
  CVector3f *local_1c;
  CVector3f *local_18;
  int local_10;
  C3DSCamera *local_c;
  int local_8;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < this_ptr->camera_count)) {
    iVar4 = this_ptr->camera_count + -1;
    local_8 = in_stack_00000008;
    this_ptr->camera_count = iVar4;
    if (in_stack_00000008 < iVar4) {
      local_1c = &this_ptr->cameras[in_stack_00000008 + 1].position;
      local_18 = &this_ptr->cameras[in_stack_00000008].position;
      local_10 = in_stack_00000008 << 4;
      local_c = this_ptr->cameras + in_stack_00000008 + 1;
      local_20 = this_ptr->cameras + in_stack_00000008;
      do {
        pCVar6 = local_c;
        pCVar7 = local_20;
        for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(uint *)pCVar7->name = *(uint *)pCVar6->name;
          pCVar6 = (C3DSCamera *)(pCVar6->name + 4);
          pCVar7 = (C3DSCamera *)(pCVar7->name + 4);
        }
        if (local_1c != local_18) {
          local_18->x = local_1c->x;
          local_18->y = local_1c->y;
          local_18->z = local_1c->z;
        }
        if (&local_20->orientation != &local_c->orientation) {
          (local_20->orientation).x = (local_c->orientation).x;
          (local_20->orientation).y = (local_c->orientation).y;
          (local_20->orientation).z = (local_c->orientation).z;
        }
        (local_20->rotation_matrix).m[0].x = (local_c->rotation_matrix).m[0].x;
        (local_20->rotation_matrix).m[0].y = (local_c->rotation_matrix).m[0].y;
        (local_20->rotation_matrix).m[0].z = (local_c->rotation_matrix).m[0].z;
        (local_20->rotation_matrix).m[1].x = (local_c->rotation_matrix).m[1].x;
        (local_20->rotation_matrix).m[1].y = (local_c->rotation_matrix).m[1].y;
        (local_20->rotation_matrix).m[1].z = (local_c->rotation_matrix).m[1].z;
        (local_20->rotation_matrix).m[2].x = (local_c->rotation_matrix).m[2].x;
        (local_20->rotation_matrix).m[2].y = (local_c->rotation_matrix).m[2].y;
        (local_20->rotation_matrix).m[2].z = (local_c->rotation_matrix).m[2].z;
        local_20->unk1 = local_c->unk1;
        local_20->is_panning = local_c->is_panning;
        local_20->projection_scale = local_c->projection_scale;
        local_20->ambient_value = local_c->ambient_value;
        local_20->unk2 = local_c->unk2;
        local_20->fog_enabled = local_c->fog_enabled;
        (local_20->fog).color_index.r = (local_c->fog).color_index.r;
        (local_20->fog).color_index.g = (local_c->fog).color_index.g;
        pCVar1 = &(local_c->fog).scroll;
        (local_20->fog).color_index.b = (local_c->fog).color_index.b;
        pCVar2 = &(local_20->fog).scroll;
        if (pCVar2 != pCVar1) {
          pCVar2->x = pCVar1->x;
          (local_20->fog).scroll.y = (local_c->fog).scroll.y;
          (local_20->fog).scroll.z = (local_c->fog).scroll.z;
        }
        (local_20->fog).height_threshold = (local_c->fog).height_threshold;
        (local_20->fog).density_multiplier = (local_c->fog).density_multiplier;
        (local_20->fog).reserved = (local_c->fog).reserved;
        local_20->reverb_preset = local_c->reverb_preset;
        if (&local_20->box_min != &local_c->box_min) {
          (local_20->box_min).x = (local_c->box_min).x;
          (local_20->box_min).y = (local_c->box_min).y;
          (local_20->box_min).z = (local_c->box_min).z;
        }
        if (&local_20->box_max != &local_c->box_max) {
          (local_20->box_max).x = (local_c->box_max).x;
          (local_20->box_max).y = (local_c->box_max).y;
          (local_20->box_max).z = (local_c->box_max).z;
        }
        local_20->pvs_count = local_c->pvs_count;
        local_20->pvs_list = local_c->pvs_list;
        local_20->unk3 = local_c->unk3;
        local_20->unk4 = local_c->unk4;
        iVar4 = 0;
        if (0 < this_ptr->light_count) {
          pcVar5 = this_ptr->lights[0].name + local_8 + -4;
          pcVar3 = this_ptr->lights[0].name + local_10 + -4;
          do {
            pcVar5[0x128] = pcVar5[0x129];
            *(uint *)(pcVar3 + 0x224) = *(uint *)(pcVar3 + 0x234);
            *(uint *)(pcVar3 + 0x228) = *(uint *)(pcVar3 + 0x238);
            *(uint *)(pcVar3 + 0x22c) = *(uint *)(pcVar3 + 0x23c);
            *(uint *)(pcVar3 + 0x230) = *(uint *)(pcVar3 + 0x240);
            iVar4 = iVar4 + 1;
            pcVar5 = pcVar5 + 0x1898;
            pcVar3 = pcVar3 + 0x1898;
          } while (iVar4 < this_ptr->light_count);
        }
        local_1c = local_1c + 0x23;
        local_18 = local_18 + 0x23;
        local_c = local_c + 1;
        local_20 = local_20 + 1;
        local_10 = local_10 + 0x10;
        local_8 = local_8 + 1;
      } while (local_8 < this_ptr->camera_count);
    }
    this_ptr->cameras[this_ptr->camera_count].pvs_list = (int *)0x0;
    this_ptr->cameras[this_ptr->camera_count].pvs_count = 0;
  }
  return;
}
