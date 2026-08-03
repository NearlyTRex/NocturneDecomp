// Name: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_004ca300
// Address: 004ca300
// Address Range: [[004ca300, 004ca404]]
// Convention: unknown
// Signature: void core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_004ca300(CDemonActor *param_1,SLaserInfo *param_2)

#include "nocturne.h"

void core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_004ca300(CDemonActor *param_1,SLaserInfo *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CMatrix3x3f *pCVar4;
  float *pfVar5;
  char *pcVar6;
  int iVar7;
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_0040ab10(param_1,param_2);
  iVar7 = 0;
  pfVar5 = &param_1[0xe].platform_orientation_delta.z;
  do {
    fVar1 = *pfVar5 - (param_2->local_hit_position).x;
    fVar3 = pfVar5[1] - (param_2->local_hit_position).y;
    fVar2 = pfVar5[2] - (param_2->local_hit_position).z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < 1.0) {
      param_2->transparency = 1.0;
      return;
    }
    iVar7 = iVar7 + 1;
    pfVar5 = pfVar5 + 0x18;
  } while (iVar7 < 2);
  if (param_2->laser_type == 2) {
    iVar7 = 0;
    pCVar4 = &param_1[8].orient_matrix;
    do {
      fVar1 = pCVar4->m[0].x - (param_2->local_hit_position).x;
      fVar3 = pCVar4->m[0].y - (param_2->local_hit_position).y;
      fVar2 = pCVar4->m[0].z - (param_2->local_hit_position).z;
      pcVar6 = param_1[8].actor_name + iVar7 * 0xb8 + 0x18;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < (float)0.25) {
        fVar1 = (float)0.0039215686274509803;
        *(float *)(pcVar6 + 0x18) =
             (float)(param_2->color).r * param_2->intensity * *(float *)pcVar6 * fVar1 +
             *(float *)(pcVar6 + 0x18);
        *(float *)(pcVar6 + 0x1c) =
             (float)(param_2->color).g * param_2->intensity * *(float *)(pcVar6 + 4) * fVar1 +
             *(float *)(pcVar6 + 0x1c);
        (((CLocation *)(pcVar6 + 0x20))->position).x =
             (float)(param_2->color).b * param_2->intensity * *(float *)(pcVar6 + 8) * fVar1 +
             (((CLocation *)(pcVar6 + 0x20))->position).x;
      }
      iVar7 = iVar7 + 1;
      pCVar4 = (CMatrix3x3f *)((int)(pCVar4 + 5) + 4);
    } while (iVar7 < 0xc);
  }
  return;
}
