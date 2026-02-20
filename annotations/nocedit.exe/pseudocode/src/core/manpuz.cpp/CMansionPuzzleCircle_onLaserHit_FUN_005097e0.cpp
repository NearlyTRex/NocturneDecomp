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
  CVector3f *pCVar4;
  SGem *pSVar5;
  int iVar6;
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840(&this_ptr->base,laser_info);
  iVar6 = 0;
  pCVar4 = &this_ptr->reflectors[0].position;
  do {
    fVar1 = pCVar4->x - (laser_info->local_hit_position).x;
    fVar3 = pCVar4->y - (laser_info->local_hit_position).y;
    fVar2 = pCVar4->z - (laser_info->local_hit_position).z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < 1.0) {
      laser_info->transparency = 1.0;
      return;
    }
    iVar6 = iVar6 + 1;
    pCVar4 = pCVar4 + 8;
  } while (iVar6 < 2);
  if (laser_info->laser_type == 2) {
    iVar6 = 0;
    pCVar4 = &this_ptr->gems[0].position;
    do {
      fVar1 = pCVar4->x - (laser_info->local_hit_position).x;
      fVar3 = pCVar4->y - (laser_info->local_hit_position).y;
      fVar2 = pCVar4->z - (laser_info->local_hit_position).z;
      pSVar5 = this_ptr->gems + iVar6;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < (float)0.25) {
        fVar1 = (float)0.0039215686274509803;
        (pSVar5->light).r =
             (float)(laser_info->color).r * laser_info->intensity * (pSVar5->color).r * fVar1 +
             (pSVar5->light).r;
        (pSVar5->light).g =
             (float)(laser_info->color).g * laser_info->intensity * (pSVar5->color).g * fVar1 +
             (pSVar5->light).g;
        (pSVar5->light).b =
             (float)(laser_info->color).b * laser_info->intensity * (pSVar5->color).b * fVar1 +
             (pSVar5->light).b;
      }
      iVar6 = iVar6 + 1;
      pCVar4 = (CVector3f *)((int)(pCVar4 + 0xf) + 4);
    } while (iVar6 < 0xc);
  }
  return;
}
