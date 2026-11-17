// Name: sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_00555d50
// Address: 00555d50
// Address Range: [[00555d50, 00555d8e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_00555d50(float vel_x,float vel_y,float vel_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_00555d50(float vel_x,float vel_y,float vel_z)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_CSfxOptions_ARRAY_02ceb920[g_SfxLastSlot].velocity.x = vel_x;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].velocity.y = vel_y;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].velocity.z = vel_z;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].velocity_source_ptr = (void *)0x0;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].velocity_format = 0;
  return;
}
