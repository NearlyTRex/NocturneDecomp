// Name: sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00555c90
// Address: 00555c90
// Address Range: [[00555c90, 00555cec]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00555c90(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00555c90(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_CSfxOptions_ARRAY_02ceb920[g_SfxLastSlot].position.x = pos_x;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].position.y = pos_y;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].position.z = pos_z;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].position_source_ptr = (void *)0x0;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].position_format = 0;
  return;
}
