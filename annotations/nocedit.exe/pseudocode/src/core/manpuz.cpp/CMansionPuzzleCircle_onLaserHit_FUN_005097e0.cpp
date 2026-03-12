// Name: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0
// Address: 005097e0
// Address Range: [[005097e0, 005098e4]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info)

{
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *pCVar4;
  CVector3f *pCVar7;
  SGem *pSVar5;
  int iVar6;
  int iVar8;
  float fVar3;
  float fVar2;
  float fVar1;
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840(&this_ptr->base,laser_info);
  iVar6 = 0;
  pCVar7 = &this_ptr->reflectors[0].position;
  do {
    fVar1 = pCVar7->x - (laser_info->local_hit_position).x;
    fVar3 = pCVar7->y - (laser_info->local_hit_position).y;
    fVar2 = pCVar7->z - (laser_info->local_hit_position).z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < 1.0) {
      laser_info->transparency = 1.0;
      return;
    }
    iVar6 = iVar6 + 1;
    pCVar7 = pCVar7 + 8;
  } while (iVar6 < 2);
  if (laser_info->laser_type == 2) {
    iVar8 = 0;
    pCVar4 = &this_ptr->gems[0].position;
    do {
      fVar4 = pCVar4->x - (laser_info->local_hit_position).x;
      fVar6 = pCVar4->y - (laser_info->local_hit_position).y;
      fVar5 = pCVar4->z - (laser_info->local_hit_position).z;
      pSVar5 = this_ptr->gems + iVar8;
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
      pCVar4 = (CVector3f *)&pCVar4[0xf].y;
    } while (iVar8 < 0xc);
  }
  return;
}
