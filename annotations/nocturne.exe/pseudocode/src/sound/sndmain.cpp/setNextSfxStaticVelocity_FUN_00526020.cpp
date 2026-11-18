// Name: sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_00526020
// Address: 00526020
// Address Range: [[00526020, 00526083]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_00526020(double vel_x,double vel_y,double vel_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_00526020(double vel_x,double vel_y,double vel_z)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_CSfxOptions_ARRAY_02dc1b78[g_SfxLastSlot].velocity.x = vel_x;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity.y = vel_y;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity.z = vel_z;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity_source_ptr = (void *)0x0;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity_format = 0;
  return;
}
