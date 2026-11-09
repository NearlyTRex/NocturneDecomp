// Name: sound_sndmain.cpp_FUN_00550110
// Address: 00550110
// Address Range: [[00550110, 0055016c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00550110(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00550110(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(double *)(iVar1 + 0x2641624) = pos_x;
  *(double *)(iVar1 + 0x264162c) = pos_y;
  *(double *)(iVar1 + 0x2641634) = pos_z;
  *(uint *)(iVar1 + 0x264163c) = 0;
  *(uint *)(iVar1 + 0x2641640) = 0;
  return;
}
