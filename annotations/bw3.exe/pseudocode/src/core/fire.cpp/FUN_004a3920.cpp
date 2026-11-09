// Name: core_fire.cpp_FUN_004a3920
// Address: 004a3920
// Address Range: [[004a3920, 004a399e]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a3920(CFireEffect *param_1,CVector3f *param_2,UOrientationVector *param_3,CVector3f *param_4,float param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a3920(CFireEffect *param_1,CVector3f *param_2,UOrientationVector *param_3,CVector3f *param_4,float param_5,uint param_6)

{
  int iVar1;
  
  if (param_5 < (float)_DAT_005c0a40) {
    param_5 = 0.0001;
  }
  iVar1 = core_fire_cpp_FUN_004a3a30(param_1,0,param_2,param_3,param_4,param_5);
  *(uint *)&g_TossPool[iVar1].field_0x3e4 = param_6;
  sound_sndmain_cpp_FUN_00556930
            (*(uint *)&g_TossPool[iVar1].field_0x3e4,iVar1 * 1000 + 0x1cf6354);
  return;
}
