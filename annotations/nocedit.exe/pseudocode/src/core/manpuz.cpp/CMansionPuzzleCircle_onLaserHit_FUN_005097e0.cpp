// Name: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0
// Address: 005097e0
// Address Range: [[005097e0, 005098e4]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840(&this_ptr->base,laser_info);
  iVar6 = 0;
  pcVar4 = this_ptr->unk3 + 0xd14;
  do {
    fVar1 = *(float *)pcVar4 - (laser_info->local_hit_position).x;
    fVar3 = *(float *)(pcVar4 + 4) - (laser_info->local_hit_position).y;
    fVar2 = *(float *)(pcVar4 + 8) - (laser_info->local_hit_position).z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < 1.0) {
      laser_info->transparency = 1.0;
      return;
    }
    iVar6 = iVar6 + 1;
    pcVar4 = pcVar4 + 0x60;
  } while (iVar6 < 2);
  if (laser_info->laser_type == 2) {
    iVar6 = 0;
    pcVar4 = this_ptr->unk3 + 0x47c;
    do {
      fVar1 = *(float *)pcVar4 - (laser_info->local_hit_position).x;
      fVar3 = *(float *)(pcVar4 + 4) - (laser_info->local_hit_position).y;
      fVar2 = *(float *)(pcVar4 + 8) - (laser_info->local_hit_position).z;
      pcVar5 = this_ptr->unk3 + iVar6 * 0xb8 + 0x458;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < (float)0.25) {
        fVar1 = (float)0.0039215686274509803;
        *(float *)(pcVar5 + 0x18) =
             (float)(laser_info->color).r * laser_info->intensity * *(float *)pcVar5 * fVar1 +
             *(float *)(pcVar5 + 0x18);
        *(float *)(pcVar5 + 0x1c) =
             (float)(laser_info->color).g * laser_info->intensity * *(float *)(pcVar5 + 4) * fVar1 +
             *(float *)(pcVar5 + 0x1c);
        *(float *)(pcVar5 + 0x20) =
             (float)(laser_info->color).b * laser_info->intensity * *(float *)(pcVar5 + 8) * fVar1 +
             *(float *)(pcVar5 + 0x20);
      }
      iVar6 = iVar6 + 1;
      pcVar4 = pcVar4 + 0xb8;
    } while (iVar6 < 0xc);
  }
  return;
}
