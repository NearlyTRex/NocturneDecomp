// Name: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_00504ba0
// Address: 00504ba0
// Address Range: [[00504ba0, 00504ca4]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_00504ba0(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_00504ba0(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  SGem *pSVar5;
  int iVar6;
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409680(&this_ptr->base,laser_info);
  iVar6 = 0;
  pCVar4 = &this_ptr->reflectors[0].position;
  do {
    fVar1 = pCVar4->x - *(float *)(laser_info + 0x2c);
    fVar3 = pCVar4->y - *(float *)(laser_info + 0x30);
    fVar2 = pCVar4->z - *(float *)(laser_info + 0x34);
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < 1.0) {
      *(uint *)(laser_info + 0x50) = 0x3f800000;
      return;
    }
    iVar6 = iVar6 + 1;
    pCVar4 = pCVar4 + 8;
  } while (iVar6 < 2);
  if (*(int *)(laser_info + 8) == 2) {
    iVar6 = 0;
    pCVar4 = &this_ptr->gems[0].position;
    do {
      fVar1 = pCVar4->x - *(float *)(laser_info + 0x2c);
      fVar3 = pCVar4->y - *(float *)(laser_info + 0x30);
      fVar2 = pCVar4->z - *(float *)(laser_info + 0x34);
      pSVar5 = this_ptr->gems + iVar6;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < (float)_DAT_005e746d) {
        fVar1 = (float)_DAT_005e7465;
        (pSVar5->light).r =
             (float)*(int *)(laser_info + 0xc) * *(float *)laser_info * (pSVar5->color).r * fVar1 +
             (pSVar5->light).r;
        (pSVar5->light).g =
             (float)*(int *)(laser_info + 0x10) * *(float *)laser_info * (pSVar5->color).g * fVar1 +
             (pSVar5->light).g;
        (pSVar5->light).b =
             (float)*(int *)(laser_info + 0x14) * *(float *)laser_info * (pSVar5->color).b * fVar1 +
             (pSVar5->light).b;
      }
      iVar6 = iVar6 + 1;
      pCVar4 = (CVector3f *)((int)(pCVar4 + 0xf) + 4);
    } while (iVar6 < 0xc);
  }
  return;
}
