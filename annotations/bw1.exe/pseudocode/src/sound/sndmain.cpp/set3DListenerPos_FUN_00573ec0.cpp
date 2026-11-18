// Name: sound_sndmain.cpp_set3DListenerPos_FUN_00573ec0
// Address: 00573ec0
// Address Range: [[00573ec0, 00573f17]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00573ec0(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00573ec0(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar1 = g_INT_02c7fc88;
  *(uint *)(&g_DOUBLE_02c7fbf8 + g_INT_02c7fc88) = pos_x._0_4_;
  *(uint *)((int)&g_DOUBLE_02c7fbf8 + iVar1 * 8 + 4) = pos_x._4_4_;
  *(uint *)(&g_DOUBLE_02c7fc08 + iVar1) = pos_y._0_4_;
  *(uint *)((int)&g_DOUBLE_02c7fc08 + iVar1 * 8 + 4) = pos_y._4_4_;
  *(uint *)(&g_DOUBLE_02c7fc18 + iVar1) = pos_z._0_4_;
  *(uint *)((int)&g_DOUBLE_02c7fc18 + iVar1 * 8 + 4) = pos_z._4_4_;
  g_BYTE_02c807f4 = g_BYTE_02c807f4 | 2;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return;
}
