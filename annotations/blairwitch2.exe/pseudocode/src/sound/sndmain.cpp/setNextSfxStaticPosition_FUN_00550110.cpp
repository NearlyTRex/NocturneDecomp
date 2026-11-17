// Name: sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00550110
// Address: 00550110
// Address Range: [[00550110, 0055016c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00550110(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00550110(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  iVar1 = g_INT_0264161c;
  g_CSfxOptions_ARRAY_02641620[g_INT_0264161c].position.x = pos_x;
  g_CSfxOptions_ARRAY_02641620[iVar1].position.y = pos_y;
  g_CSfxOptions_ARRAY_02641620[iVar1].position.z = pos_z;
  g_CSfxOptions_ARRAY_02641620[iVar1].position_source_ptr = (void *)0x0;
  g_CSfxOptions_ARRAY_02641620[iVar1].position_format = 0;
  return;
}
