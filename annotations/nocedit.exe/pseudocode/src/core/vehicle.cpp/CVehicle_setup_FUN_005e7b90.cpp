// Name: core_vehicle.cpp_CVehicle_setup_FUN_005e7b90
// Address: 005e7b90
// Address Range: [[005e7b90, 005e7ba0]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_005e7b90(CVehicle *this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_setup_FUN_005e7b90(CVehicle *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  CKeyFramedModel *pCVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  CKeyFramedModelInstance *this_ptr_00;
  int iVar8;
  float local_1c;
  float local_18;
  float local_14;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  iVar8 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  if (0 < this_ptr->tire_count) {
    this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr->unk2 + 0x14);
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr_00);
      iVar8 = iVar8 + 1;
      this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);
    } while (iVar8 < this_ptr->tire_count);
  }
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  pCVar1 = pCVar4->frame_bounds;
  local_1c = pCVar1[1].x - pCVar1->x;
  local_18 = pCVar1[1].y - pCVar1->y;
  local_14 = pCVar1[1].z - pCVar1->z;
  if ((float *)(this_ptr->unk1 + 0x658) != &local_1c) {
    *(float *)(this_ptr->unk1 + 0x658) = local_1c;
    *(float *)(this_ptr->unk1 + 0x65c) = local_18;
    *(float *)(this_ptr->unk1 + 0x660) = local_14;
  }
  fVar2 = *(float *)(this_ptr->unk1 + 0x644) * (float)0.03125;
  *(float *)(this_ptr->unk1 + 0x648) = fVar2;
  fVar3 = (float)0.083333333333333301;
  *(float *)(this_ptr->unk1 + 0x64c) =
       fVar2 * fVar3 *
       (*(float *)(this_ptr->unk1 + 0x660) * *(float *)(this_ptr->unk1 + 0x660) +
       *(float *)(this_ptr->unk1 + 0x65c) * *(float *)(this_ptr->unk1 + 0x65c));
  *(float *)(this_ptr->unk1 + 0x650) =
       *(float *)(this_ptr->unk1 + 0x648) * fVar3 *
       (*(float *)(this_ptr->unk1 + 0x660) * *(float *)(this_ptr->unk1 + 0x660) +
       *(float *)(this_ptr->unk1 + 0x658) * *(float *)(this_ptr->unk1 + 0x658));
  *(float *)(this_ptr->unk1 + 0x654) =
       (*(float *)(this_ptr->unk1 + 0x65c) * *(float *)(this_ptr->unk1 + 0x65c) +
       *(float *)(this_ptr->unk1 + 0x658) * *(float *)(this_ptr->unk1 + 0x658)) *
       *(float *)(this_ptr->unk1 + 0x648) * fVar3;
  this_ptr->unk1[0x61c] = '\0';
  this_ptr->unk1[0x61d] = '\0';
  this_ptr->unk1[0x61e] = '\0';
  this_ptr->unk1[0x61f] = '\0';
  *(uint *)(this_ptr->unk1 + 0x618) = *(uint *)(this_ptr->unk1 + 0x61c);
  *(uint *)(this_ptr->unk1 + 0x614) = *(uint *)(this_ptr->unk1 + 0x618);
  this_ptr->unk1[0x640] = '\0';
  this_ptr->unk1[0x641] = '\0';
  this_ptr->unk1[0x642] = '\0';
  this_ptr->unk1[0x643] = '\0';
  *(uint *)(this_ptr->unk1 + 0x63c) = *(uint *)(this_ptr->unk1 + 0x640);
  *(uint *)(this_ptr->unk1 + 0x638) = *(uint *)(this_ptr->unk1 + 0x63c);
  this_ptr->unk1[0x604] = '\0';
  this_ptr->unk1[0x605] = '\0';
  this_ptr->unk1[0x606] = '\0';
  this_ptr->unk1[0x607] = '\0';
  *(uint *)(this_ptr->unk1 + 0x600) = *(uint *)(this_ptr->unk1 + 0x604);
  *(uint *)(this_ptr->unk1 + 0x5fc) = *(uint *)(this_ptr->unk1 + 0x600);
  this_ptr->unk1[0x628] = '\0';
  this_ptr->unk1[0x629] = '\0';
  this_ptr->unk1[0x62a] = '\0';
  this_ptr->unk1[0x62b] = '\0';
  *(uint *)(this_ptr->unk1 + 0x624) = *(uint *)(this_ptr->unk1 + 0x628);
  *(uint *)(this_ptr->unk1 + 0x620) = *(uint *)(this_ptr->unk1 + 0x624);
  this_ptr->unk1[0x610] = '\0';
  this_ptr->unk1[0x611] = '\0';
  this_ptr->unk1[0x612] = '\0';
  this_ptr->unk1[0x613] = '\0';
  *(uint *)(this_ptr->unk1 + 0x60c) = *(uint *)(this_ptr->unk1 + 0x610);
  *(uint *)(this_ptr->unk1 + 0x608) = *(uint *)(this_ptr->unk1 + 0x60c);
  this_ptr->unk1[0x634] = '\0';
  this_ptr->unk1[0x635] = '\0';
  this_ptr->unk1[0x636] = '\0';
  this_ptr->unk1[0x637] = '\0';
  *(uint *)(this_ptr->unk1 + 0x630) = *(uint *)(this_ptr->unk1 + 0x634);
  *(uint *)(this_ptr->unk1 + 0x62c) = *(uint *)(this_ptr->unk1 + 0x630);
  this_ptr->unk1[0x5f8] = '\0';
  this_ptr->unk1[0x5f9] = '\0';
  this_ptr->unk1[0x5fa] = '\0';
  this_ptr->unk1[0x5fb] = '\0';
  *(uint *)(this_ptr->unk1 + 0x5f4) = *(uint *)(this_ptr->unk1 + 0x5f8);
  *(uint *)(this_ptr->unk1 + 0x5f0) = *(uint *)(this_ptr->unk1 + 0x5f4);
  iVar8 = 0;
  if (0 < this_ptr->tire_count) {
    pcVar7 = this_ptr->unk2 + 0x19c;
    pcVar5 = this_ptr->unk2 + 400;
    do {
      pcVar6 = this_ptr->unk2 + iVar8 * 0x1b4;
      if (pcVar7 != pcVar6) {
        *(uint *)pcVar7 = *(uint *)pcVar6;
        *(uint *)(pcVar7 + 4) = *(uint *)(pcVar6 + 4);
        *(uint *)(pcVar7 + 8) = *(uint *)(pcVar6 + 8);
      }
      pcVar5[8] = '\0';
      pcVar5[9] = '\0';
      pcVar5[10] = '\0';
      pcVar5[0xb] = '\0';
      pcVar7 = pcVar7 + 0x1b4;
      pcVar5[0x20] = '\0';
      pcVar5[0x21] = '\0';
      pcVar5[0x22] = '\0';
      pcVar5[0x23] = '\0';
      iVar8 = iVar8 + 1;
      *(uint *)(pcVar5 + 4) = *(uint *)(pcVar5 + 8);
      *(uint *)(pcVar5 + 0x1c) = *(uint *)(pcVar5 + 0x20);
      *(uint *)pcVar5 = *(uint *)(pcVar5 + 4);
      *(uint *)(pcVar5 + 0x18) = *(uint *)(pcVar5 + 0x20);
      pcVar5 = pcVar5 + 0x1b4;
    } while (iVar8 < this_ptr->tire_count);
  }
  this_ptr->unk2[0x6d0] = '\0';
  this_ptr->unk2[0x6d1] = '\0';
  this_ptr->unk2[0x6d2] = '\0';
  this_ptr->unk2[0x6d3] = '\0';
  this_ptr->unk2[0x6d4] = '\0';
  this_ptr->unk2[0x6d5] = '\0';
  this_ptr->unk2[0x6d6] = -0x80;
  this_ptr->unk2[0x6d7] = '?';
  this_ptr->unk2[0x6d8] = '\0';
  this_ptr->unk2[0x6d9] = '\0';
  this_ptr->unk2[0x6da] = '\0';
  this_ptr->unk2[0x6db] = '\0';
  this_ptr->unk2[0x6dc] = '\0';
  this_ptr->unk2[0x6dd] = '\0';
  this_ptr->unk2[0x6de] = '\0';
  this_ptr->unk2[0x6df] = '\0';
  core_course_cpp_CCourse_load_FUN_00442580
            ((CCourse *)(this_ptr->unk2 + 0x6e4),this_ptr->course_name);
  this_ptr->unk3[0x18] = '\x01';
  this_ptr->unk3[0x19] = '\0';
  this_ptr->unk3[0x1a] = '\0';
  this_ptr->unk3[0x1b] = '\0';
  this_ptr->unk3[0] = '\0';
  this_ptr->unk3[1] = '\0';
  this_ptr->unk3[2] = '\0';
  this_ptr->unk3[3] = '\0';
  this_ptr->unk3[4] = '\0';
  this_ptr->unk3[5] = '\0';
  this_ptr->unk3[6] = '\0';
  this_ptr->unk3[7] = '\0';
  this_ptr->unk3[8] = '\0';
  this_ptr->unk3[9] = '\0';
  this_ptr->unk3[10] = '\0';
  this_ptr->unk3[0xb] = '\0';
  return;
}
