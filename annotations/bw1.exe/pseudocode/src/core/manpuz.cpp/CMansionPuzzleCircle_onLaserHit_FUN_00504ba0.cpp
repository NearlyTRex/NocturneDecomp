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
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  
  core_actor_cpp_FUN_00409680(this_ptr,laser_info);
  iVar4 = 0;
  pfVar2 = (float *)&this_ptr->field_0x135c;
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
    pfVar2 = (float *)&this_ptr->field_0xac4;
    do {
      pfVar3 = (float *)(&this_ptr->field_0xaa0 + iVar4 * 0xb8);
      if ((pfVar2[2] - *(float *)(laser_info + 0x34)) * (pfVar2[2] - *(float *)(laser_info + 0x34))
          + (pfVar2[1] - *(float *)(laser_info + 0x30)) *
            (pfVar2[1] - *(float *)(laser_info + 0x30)) +
            (*pfVar2 - *(float *)(laser_info + 0x2c)) * (*pfVar2 - *(float *)(laser_info + 0x2c)) <
          (float)_DAT_005e746d) {
        fVar1 = (float)_DAT_005e7465;
        pfVar3[6] = (float)*(int *)(laser_info + 0xc) * *(float *)laser_info * *pfVar3 * fVar1 +
                    pfVar3[6];
        pfVar3[7] = (float)*(int *)(laser_info + 0x10) * *(float *)laser_info * pfVar3[1] * fVar1 +
                    pfVar3[7];
        pfVar3[8] = (float)*(int *)(laser_info + 0x14) * *(float *)laser_info * pfVar3[2] * fVar1 +
                    pfVar3[8];
      }
      iVar4 = iVar4 + 1;
      pfVar2 = pfVar2 + 0x2e;
    } while (iVar4 < 0xc);
  }
  return;
}
