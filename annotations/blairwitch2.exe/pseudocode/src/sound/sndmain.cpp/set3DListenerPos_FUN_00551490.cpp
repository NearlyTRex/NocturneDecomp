// Name: sound_sndmain.cpp_set3DListenerPos_FUN_00551490
// Address: 00551490
// Address Range: [[00551490, 005514e7]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00551490(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00551490(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar1 = g_INT_026484b8;
  *(uint *)(&g_DOUBLE_02648428 + g_INT_026484b8) = pos_x._0_4_;
  *(uint *)((int)&g_DOUBLE_02648428 + iVar1 * 8 + 4) = pos_x._4_4_;
  *(uint *)(&g_DOUBLE_02648438 + iVar1) = pos_y._0_4_;
  *(uint *)((int)&g_DOUBLE_02648438 + iVar1 * 8 + 4) = pos_y._4_4_;
  *(uint *)(&g_DOUBLE_02648448 + iVar1) = pos_z._0_4_;
  *(uint *)((int)&g_DOUBLE_02648448 + iVar1 * 8 + 4) = pos_z._4_4_;
  g_BYTE_02649024 = g_BYTE_02649024 | 2;
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return;
}
