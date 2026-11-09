// Name: core_fire.cpp_FUN_004964c0
// Address: 004964c0
// Address Range: [[004964c0, 004965eb]]
// Convention: unknown
// Signature: undefined4 core_fire_cpp_FUN_004964c0(CVector3f *param_1)

#include "nocturne.h"

uint core_fire_cpp_FUN_004964c0(CVector3f *param_1)

{
  int iVar1;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 8));
  if (*(int *)&param_1[6].field_0x4 == 0) {
    iVar1 = 0;
    do {
      core_fire_cpp_FUN_0049d500(0x01C3DEB4,param_1,(CVector3f *)0x0,1,0);
      iVar1 = iVar1 + 1;
      core_fire_cpp_FUN_0049d090(0x01C3DEB4,param_1,(CVector3f *)0x0,0x10000,0x10000,0,0xffff);
    } while (iVar1 < 8);
    core_set_cpp_CDemonSet_initCameraShake_FUN_00534800(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
    sound_sndmain_cpp_FUN_00550450();
    sound_sndmain_cpp_FUN_00550110
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
      core_fire_cpp_FUN_0049d090(0x01C3DEB4,param_1,(CVector3f *)0x0,0x10000,0x10000,2,0xffff);
    } while (iVar1 < 8);
    sound_sndmain_cpp_FUN_00550450();
    sound_sndmain_cpp_FUN_00550110
              ((double)*(float *)param_1,(double)*(float *)&param_1->field_0x4,
               (double)*(float *)&param_1->field_0x8);
    sound_sndmain_cpp_FUN_00550270(0.8);
  }
  sound_sndmain_cpp_FUN_005506b0();
  sound_sndmain_cpp_FUN_005504d0();
  return 1;
}
