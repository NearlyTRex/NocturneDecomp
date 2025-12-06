// Name: core_vehicle.cpp_CVehicle_FUN_005e7b90
// Address: 005e7b90
// Address Range: [[005e7b90, 005e7ba0]]
// Convention: __cdecl
// Signature: void core_vehicle.cpp_CVehicle_FUN_005e7b90(CVehicle * this_ptr)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_FUN_005e7b90(CVehicle *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CKeyFramedModel *pCVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  BADSPACEBASE *in_ESP;
  CKeyFramedModelInstance *this_ptr_00;
  int iVar10;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  iVar10 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)this_ptr->field1_0x158);
  if (0 < this_ptr->tire_count) {
    this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr->field3_0x93c + 0x14);
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr_00);
      iVar10 = iVar10 + 1;
      this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);
    } while (iVar10 < this_ptr->tire_count);
  }
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->field1_0x158);
  pCVar1 = pCVar6->frame_bounds;
  fVar2 = pCVar1->y;
  fVar3 = pCVar1->z;
  fVar4 = pCVar1[1].y;
  fVar5 = pCVar1[1].z;
  if (this_ptr->field1_0x158 + 0x7d4 != &stack0xfffffff0) {
    *(float *)(this_ptr->field1_0x158 + 0x7d4) = pCVar1[1].x - pCVar1->x;
    *(float *)(this_ptr->field1_0x158 + 0x7d8) = fVar4 - fVar2;
    *(float *)(this_ptr->field1_0x158 + 0x7dc) = fVar5 - fVar3;
  }
  fVar2 = *(float *)(this_ptr->field1_0x158 + 0x7c0) * (float)0.03125;
  *(float *)(this_ptr->field1_0x158 + 0x7c4) = fVar2;
  fVar3 = (float)0.083333333333333301;
  *(float *)(this_ptr->field1_0x158 + 0x7c8) =
       fVar2 * fVar3 *
       (*(float *)(this_ptr->field1_0x158 + 0x7dc) * *(float *)(this_ptr->field1_0x158 + 0x7dc) +
       *(float *)(this_ptr->field1_0x158 + 0x7d8) * *(float *)(this_ptr->field1_0x158 + 0x7d8));
  *(float *)(this_ptr->field1_0x158 + 0x7cc) =
       *(float *)(this_ptr->field1_0x158 + 0x7c4) * fVar3 *
       (*(float *)(this_ptr->field1_0x158 + 0x7dc) * *(float *)(this_ptr->field1_0x158 + 0x7dc) +
       *(float *)(this_ptr->field1_0x158 + 0x7d4) * *(float *)(this_ptr->field1_0x158 + 0x7d4));
  *(float *)(this_ptr->field1_0x158 + 2000) =
       (*(float *)(this_ptr->field1_0x158 + 0x7d8) * *(float *)(this_ptr->field1_0x158 + 0x7d8) +
       *(float *)(this_ptr->field1_0x158 + 0x7d4) * *(float *)(this_ptr->field1_0x158 + 0x7d4)) *
       *(float *)(this_ptr->field1_0x158 + 0x7c4) * fVar3;
  this_ptr->field1_0x158[0x798] = '\0';
  this_ptr->field1_0x158[0x799] = '\0';
  this_ptr->field1_0x158[0x79a] = '\0';
  this_ptr->field1_0x158[0x79b] = '\0';
  *(uint *)(this_ptr->field1_0x158 + 0x794) = *(uint *)(this_ptr->field1_0x158 + 0x798);
  *(uint *)(this_ptr->field1_0x158 + 0x790) = *(uint *)(this_ptr->field1_0x158 + 0x794);
  this_ptr->field1_0x158[0x7bc] = '\0';
  this_ptr->field1_0x158[0x7bd] = '\0';
  this_ptr->field1_0x158[0x7be] = '\0';
  this_ptr->field1_0x158[0x7bf] = '\0';
  *(uint *)(this_ptr->field1_0x158 + 0x7b8) = *(uint *)(this_ptr->field1_0x158 + 0x7bc);
  *(uint *)(this_ptr->field1_0x158 + 0x7b4) = *(uint *)(this_ptr->field1_0x158 + 0x7b8);
  this_ptr->field1_0x158[0x780] = '\0';
  this_ptr->field1_0x158[0x781] = '\0';
  this_ptr->field1_0x158[0x782] = '\0';
  this_ptr->field1_0x158[0x783] = '\0';
  *(uint *)(this_ptr->field1_0x158 + 0x77c) = *(uint *)(this_ptr->field1_0x158 + 0x780);
  *(uint *)(this_ptr->field1_0x158 + 0x778) = *(uint *)(this_ptr->field1_0x158 + 0x77c);
  this_ptr->field1_0x158[0x7a4] = '\0';
  this_ptr->field1_0x158[0x7a5] = '\0';
  this_ptr->field1_0x158[0x7a6] = '\0';
  this_ptr->field1_0x158[0x7a7] = '\0';
  *(uint *)(this_ptr->field1_0x158 + 0x7a0) = *(uint *)(this_ptr->field1_0x158 + 0x7a4);
  *(uint *)(this_ptr->field1_0x158 + 0x79c) = *(uint *)(this_ptr->field1_0x158 + 0x7a0);
  this_ptr->field1_0x158[0x78c] = '\0';
  this_ptr->field1_0x158[0x78d] = '\0';
  this_ptr->field1_0x158[0x78e] = '\0';
  this_ptr->field1_0x158[0x78f] = '\0';
  *(uint *)(this_ptr->field1_0x158 + 0x788) = *(uint *)(this_ptr->field1_0x158 + 0x78c);
  *(uint *)(this_ptr->field1_0x158 + 0x784) = *(uint *)(this_ptr->field1_0x158 + 0x788);
  this_ptr->field1_0x158[0x7b0] = '\0';
  this_ptr->field1_0x158[0x7b1] = '\0';
  this_ptr->field1_0x158[0x7b2] = '\0';
  this_ptr->field1_0x158[0x7b3] = '\0';
  *(uint *)(this_ptr->field1_0x158 + 0x7ac) = *(uint *)(this_ptr->field1_0x158 + 0x7b0);
  *(uint *)(this_ptr->field1_0x158 + 0x7a8) = *(uint *)(this_ptr->field1_0x158 + 0x7ac);
  this_ptr->field1_0x158[0x774] = '\0';
  this_ptr->field1_0x158[0x775] = '\0';
  this_ptr->field1_0x158[0x776] = '\0';
  this_ptr->field1_0x158[0x777] = '\0';
  *(uint *)(this_ptr->field1_0x158 + 0x770) = *(uint *)(this_ptr->field1_0x158 + 0x774);
  *(uint *)(this_ptr->field1_0x158 + 0x76c) = *(uint *)(this_ptr->field1_0x158 + 0x770);
  iVar10 = 0;
  if (0 < this_ptr->tire_count) {
    pcVar9 = this_ptr->field3_0x93c + 0x19c;
    pcVar7 = this_ptr->field3_0x93c + 400;
    do {
      pcVar8 = this_ptr->field3_0x93c + iVar10 * 0x1b4;
      if (pcVar9 != pcVar8) {
        *(uint *)pcVar9 = *(uint *)pcVar8;
        *(uint *)(pcVar9 + 4) = *(uint *)(pcVar8 + 4);
        *(uint *)(pcVar9 + 8) = *(uint *)(pcVar8 + 8);
      }
      pcVar7[8] = '\0';
      pcVar7[9] = '\0';
      pcVar7[10] = '\0';
      pcVar7[0xb] = '\0';
      pcVar9 = pcVar9 + 0x1b4;
      pcVar7[0x20] = '\0';
      pcVar7[0x21] = '\0';
      pcVar7[0x22] = '\0';
      pcVar7[0x23] = '\0';
      iVar10 = iVar10 + 1;
      *(uint *)(pcVar7 + 4) = *(uint *)(pcVar7 + 8);
      *(uint *)(pcVar7 + 0x1c) = *(uint *)(pcVar7 + 0x20);
      *(uint *)pcVar7 = *(uint *)(pcVar7 + 4);
      *(uint *)(pcVar7 + 0x18) = *(uint *)(pcVar7 + 0x20);
      pcVar7 = pcVar7 + 0x1b4;
    } while (iVar10 < this_ptr->tire_count);
  }
  this_ptr->field3_0x93c[0x6d0] = '\0';
  this_ptr->field3_0x93c[0x6d1] = '\0';
  this_ptr->field3_0x93c[0x6d2] = '\0';
  this_ptr->field3_0x93c[0x6d3] = '\0';
  this_ptr->field3_0x93c[0x6d4] = '\0';
  this_ptr->field3_0x93c[0x6d5] = '\0';
  this_ptr->field3_0x93c[0x6d6] = -0x80;
  this_ptr->field3_0x93c[0x6d7] = '?';
  this_ptr->field3_0x93c[0x6d8] = '\0';
  this_ptr->field3_0x93c[0x6d9] = '\0';
  this_ptr->field3_0x93c[0x6da] = '\0';
  this_ptr->field3_0x93c[0x6db] = '\0';
  this_ptr->field3_0x93c[0x6dc] = '\0';
  this_ptr->field3_0x93c[0x6dd] = '\0';
  this_ptr->field3_0x93c[0x6de] = '\0';
  this_ptr->field3_0x93c[0x6df] = '\0';
  core_course_cpp_CCourse_load_FUN_00442580
            ((CCourse *)(this_ptr->field3_0x93c + 0x6e4),this_ptr->field6_0x1034);
  this_ptr->field6_0x1034[0x38] = '\x01';
  this_ptr->field6_0x1034[0x39] = '\0';
  this_ptr->field6_0x1034[0x3a] = '\0';
  this_ptr->field6_0x1034[0x3b] = '\0';
  this_ptr->field6_0x1034[0x20] = '\0';
  this_ptr->field6_0x1034[0x21] = '\0';
  this_ptr->field6_0x1034[0x22] = '\0';
  this_ptr->field6_0x1034[0x23] = '\0';
  this_ptr->field6_0x1034[0x24] = '\0';
  this_ptr->field6_0x1034[0x25] = '\0';
  this_ptr->field6_0x1034[0x26] = '\0';
  this_ptr->field6_0x1034[0x27] = '\0';
  this_ptr->field6_0x1034[0x28] = '\0';
  this_ptr->field6_0x1034[0x29] = '\0';
  this_ptr->field6_0x1034[0x2a] = '\0';
  this_ptr->field6_0x1034[0x2b] = '\0';
  return;
}
