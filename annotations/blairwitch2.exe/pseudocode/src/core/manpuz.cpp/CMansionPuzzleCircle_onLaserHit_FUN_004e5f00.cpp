// Name: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_004e5f00
// Address: 004e5f00
// Address Range: [[004e5f00, 004e6004]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_004e5f00(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_004e5f00(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info)

{
  float fVar1;
  float *pfVar2;
  SGem *pSVar3;
  int iVar4;
  
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409830(&this_ptr->base,laser_info);
  iVar4 = 0;
  pfVar2 = (float *)&this_ptr->reflectors[0].field_0x1c;
  do {
    if ((pfVar2[2] - *(float *)(laser_info + 0x34)) * (pfVar2[2] - *(float *)(laser_info + 0x34)) +
        (pfVar2[1] - *(float *)(laser_info + 0x30)) * (pfVar2[1] - *(float *)(laser_info + 0x30)) +
        (*pfVar2 - *(float *)(laser_info + 0x2c)) * (*pfVar2 - *(float *)(laser_info + 0x2c)) < 1.0)
    {
      *(uint *)(laser_info + 0x50) = 0x3f800000;
      return;
    }
    iVar4 = iVar4 + 1;
    pfVar2 = pfVar2 + 0x18;
  } while (iVar4 < 2);
  if (*(int *)(laser_info + 8) == 2) {
    iVar4 = 0;
    pfVar2 = (float *)&this_ptr->gems[0].field_0x24;
    do {
      pSVar3 = this_ptr->gems + iVar4;
      if ((pfVar2[2] - *(float *)(laser_info + 0x34)) * (pfVar2[2] - *(float *)(laser_info + 0x34))
          + (pfVar2[1] - *(float *)(laser_info + 0x30)) *
            (pfVar2[1] - *(float *)(laser_info + 0x30)) +
            (*pfVar2 - *(float *)(laser_info + 0x2c)) * (*pfVar2 - *(float *)(laser_info + 0x2c)) <
          (float)_DAT_005dc51d) {
        fVar1 = (float)_DAT_005dc515;
        *(float *)&pSVar3->field_0x18 =
             (float)*(int *)(laser_info + 0xc) * *(float *)laser_info * *(float *)pSVar3 * fVar1 +
             *(float *)&pSVar3->field_0x18;
        *(float *)&pSVar3->field_0x1c =
             (float)*(int *)(laser_info + 0x10) * *(float *)laser_info *
             *(float *)&pSVar3->field_0x4 * fVar1 + *(float *)&pSVar3->field_0x1c;
        *(float *)&pSVar3->field_0x20 =
             (float)*(int *)(laser_info + 0x14) * *(float *)laser_info *
             *(float *)&pSVar3->field_0x8 * fVar1 + *(float *)&pSVar3->field_0x20;
      }
      iVar4 = iVar4 + 1;
      pfVar2 = pfVar2 + 0x2e;
    } while (iVar4 < 0xc);
  }
  return;
}
