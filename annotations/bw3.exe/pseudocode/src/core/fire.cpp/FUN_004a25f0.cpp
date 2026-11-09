// Name: core_fire.cpp_FUN_004a25f0
// Address: 004a25f0
// Address Range: [[004a25f0, 004a260f] [004a2615, 004a2702] [004a270a, 004a2776]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a25f0(CDemonActor *param_1,float *param_2,CVector3f *param_3,CVector3f *param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a25f0(CDemonActor *param_1,float *param_2,CVector3f *param_3,CVector3f *param_4,uint param_5)

{
  bool bVar1;
  byte bVar2;
  float afStackY_1034 [1003];
  CMatrix3x3f aCStack_74 [40];
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float afStack_28 [3];
  byte auStack_1c [8];
  float fStack_14;
  
  bVar2 = 0;
  bVar1 = false;
  switch(param_5) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 8:
    bVar1 = true;
    break;
  case 3:
  case 4:
  case 7:
  case 9:
  case 10:
    bVar1 = false;
    break;
  case 6:
    goto LAB_004a26fb;
  }
  core_dirmat_cpp_FUN_0045b550(aCStack_74,param_3);
  afStack_28[0] = 0.0;
  afStack_28[1] = 0.0;
  afStack_28[2] = 0.7;
  core_dirmat_cpp_FUN_0045b800(aCStack_74,afStack_48 + 8);
  fStack_34 = fStack_4c;
  afStack_48[(uint)bVar2 * -2 + 6] = afStack_48[(uint)bVar2 * -2];
  afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
       afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  afStack_48[2] = *param_2 - fStack_34;
  afStack_48[3] = param_2[1] - fStack_30;
  fStack_38 = param_2[2] - fStack_2c;
  auStack_1c._0_4_ = *param_2 - fStack_34;
  *(float *)(auStack_1c + (uint)bVar2 * -8 + 4) = afStack_48[(uint)bVar2 * -2 + 3];
  *(float *)(auStack_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  if (bVar1) {
    core_fire_cpp_CStake_spawn_FUN_00497ac0
              (g_StakePool + _DAT_01c8eeac,(CVector3f *)auStack_1c,param_3,param_4);
  }
  else {
    core_sound_cpp_FUN_00560a70
              (0x02CF5680,param_1,"a-wood?.wav",(CVector3f *)auStack_1c,0.23);
    core_fire_cpp_CStake_init_FUN_00497a50
              (g_StakePool + _DAT_01c8eeac,(CVector3f *)auStack_1c,param_3);
  }
  _DAT_01c8eeac = _DAT_01c8eeac + 1;
  if (0xff < _DAT_01c8eeac) {
    _DAT_01c8eeac = 0;
  }
  if (_DAT_01c8eea8 < 0x100) {
    _DAT_01c8eea8 = _DAT_01c8eea8 + 1;
    return;
  }
LAB_004a26fb:
  return;
}
