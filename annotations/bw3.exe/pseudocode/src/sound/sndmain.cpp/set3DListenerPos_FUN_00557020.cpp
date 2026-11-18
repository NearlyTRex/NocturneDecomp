// Name: sound_sndmain.cpp_set3DListenerPos_FUN_00557020
// Address: 00557020
// Address Range: [[00557020, 00557077]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00557020(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_set3DListenerPos_FUN_00557020(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar1 = g_INT_02cf28b8;
  *(uint *)(&g_DOUBLE_02cf2828 + g_INT_02cf28b8) = pos_x._0_4_;
  *(uint *)((int)&g_DOUBLE_02cf2828 + iVar1 * 8 + 4) = pos_x._4_4_;
  *(uint *)(&g_DOUBLE_02cf2838 + iVar1) = pos_y._0_4_;
  *(uint *)((int)&g_DOUBLE_02cf2838 + iVar1 * 8 + 4) = pos_y._4_4_;
  *(uint *)(&g_DOUBLE_02cf2848 + iVar1) = pos_z._0_4_;
  *(uint *)((int)&g_DOUBLE_02cf2848 + iVar1 * 8 + 4) = pos_z._4_4_;
  g_BYTE_02cf3424 = g_BYTE_02cf3424 | 2;
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return;
}
