// Name: core_manpuz.cpp_FUN_005097e0
// Address: 005097e0
// Address Range: [[005097e0, 005098e4]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_005097e0()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_005097e0(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_005097e0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  CVector3f *pCVar5;
  float *pfVar6;
  int iVar7;
  CDemonActor *in_stack_00000004;
  SSurfaceInfo *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(in_stack_00000004,in_stack_00000008);
  iVar7 = 0;
  pCVar5 = (CVector3f *)(in_stack_00000004[0xe].create_event + 0x14);
  do {
    fVar1 = pCVar5->x - (in_stack_00000008->hit_position).x;
    fVar3 = pCVar5->y - (in_stack_00000008->hit_position).y;
    fVar2 = pCVar5->z - (in_stack_00000008->hit_position).z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < 1.0) {
      in_stack_00000008->alpha_or_wetness = 1.0;
      return;
    }
    iVar7 = iVar7 + 1;
    pCVar5 = pCVar5 + 8;
  } while (iVar7 < 2);
  if (in_stack_00000008->field2_0x8 == 2) {
    iVar7 = 0;
    pcVar4 = in_stack_00000004[8].actor_name + 4;
    do {
      fVar1 = *(float *)pcVar4 - (in_stack_00000008->hit_position).x;
      fVar3 = *(float *)(pcVar4 + 4) - (in_stack_00000008->hit_position).y;
      fVar2 = *(float *)(pcVar4 + 8) - (in_stack_00000008->hit_position).z;
      pfVar6 = (float *)((int)&in_stack_00000004[7].previous_transform_state + iVar7 * 0xb8 + 0x10);
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < (float)0.25) {
        fVar1 = (float)0.0039215686274509803;
        pfVar6[6] = (float)(in_stack_00000008->color).r * in_stack_00000008->intensity * *pfVar6 *
                    fVar1 + pfVar6[6];
        pfVar6[7] = (float)(in_stack_00000008->color).g * in_stack_00000008->intensity * pfVar6[1] *
                    fVar1 + pfVar6[7];
        pfVar6[8] = (float)(in_stack_00000008->color).b * in_stack_00000008->intensity * pfVar6[2] *
                    fVar1 + pfVar6[8];
      }
      iVar7 = iVar7 + 1;
      pcVar4 = pcVar4 + 0xb8;
    } while (iVar7 < 0xc);
  }
  return;
}
