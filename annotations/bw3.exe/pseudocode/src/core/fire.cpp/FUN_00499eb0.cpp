// Name: core_fire.cpp_FUN_00499eb0
// Address: 00499eb0
// Address Range: [[00499eb0, 00499fdb]]
// Convention: unknown
// Signature: undefined4 core_fire_cpp_FUN_00499eb0(CVector3f *param_1)

#include "nocturne.h"

uint core_fire_cpp_FUN_00499eb0(CVector3f *param_1)

{
  int iVar1;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(param_1 + 8));
  if (*(int *)&param_1[6].field_0x4 == 0) {
    iVar1 = 0;
    do {
      core_fire_cpp_FUN_004a2830(0x01C73654,param_1,(CVector3f *)0x0,1,0);
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,param_1,(CVector3f *)0x0,0x10000,0x10000,0,0xffff);
    } while (iVar1 < 8);
    core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
    sound_sndmain_cpp_FUN_00555fd0();
    sound_sndmain_cpp_FUN_00555c90
              ((double)*(float *)param_1,(double)*(float *)&param_1->field_0x4,
               (double)*(float *)&param_1->field_0x8);
  }
  else {
    if (*(int *)&param_1[6].field_0x4 != 2) {
      return 0;
    }
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,param_1,(CVector3f *)0x0,0x10000,0x10000,2,0xffff);
    } while (iVar1 < 8);
    sound_sndmain_cpp_FUN_00555fd0();
    sound_sndmain_cpp_FUN_00555c90
              ((double)*(float *)param_1,(double)*(float *)&param_1->field_0x4,
               (double)*(float *)&param_1->field_0x8);
    sound_sndmain_cpp_FUN_00555df0(0.8);
  }
  sound_sndmain_cpp_FUN_00556240();
  sound_sndmain_cpp_FUN_00556050();
  return 1;
}
