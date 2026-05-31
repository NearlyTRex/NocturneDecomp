// Name: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0
// Address: 005097e0
// MANUAL RECONSTRUCTION
// Address Range: [[005097e0, 005098e4]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info)

{
  float fVar4;
  float fVar5;
  float fVar6;
  SGem *pSVar5;
  int iVar6;
  int iVar8;
  float fVar3;
  float fVar2;
  float fVar1;
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840(&this_ptr->base,laser_info);
  iVar6 = 0;
  do {
    fVar1 = (this_ptr->reflectors[iVar6].position).x - (laser_info->local_hit_position).x;
    fVar3 = (this_ptr->reflectors[iVar6].position).y - (laser_info->local_hit_position).y;
    fVar2 = (this_ptr->reflectors[iVar6].position).z - (laser_info->local_hit_position).z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < 1.0) {
      laser_info->transparency = 1.0;
      return;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  if (laser_info->laser_type == 2) {
    iVar8 = 0;
    do {
      pSVar5 = this_ptr->gems + iVar8;
      fVar4 = (pSVar5->position).x - (laser_info->local_hit_position).x;
      fVar6 = (pSVar5->position).y - (laser_info->local_hit_position).y;
      fVar5 = (pSVar5->position).z - (laser_info->local_hit_position).z;
      if (fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4 < (float)0.25) {
        fVar4 = (float)0.0039215686274509803;
        (pSVar5->light).r =
             (float)(laser_info->color).r * laser_info->intensity * (pSVar5->color).r * fVar4 +
             (pSVar5->light).r;
        (pSVar5->light).g =
             (float)(laser_info->color).g * laser_info->intensity * (pSVar5->color).g * fVar4 +
             (pSVar5->light).g;
        (pSVar5->light).b =
             (float)(laser_info->color).b * laser_info->intensity * (pSVar5->color).b * fVar4 +
             (pSVar5->light).b;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0xc);
  }
  return;
}
