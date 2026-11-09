// Name: sound_sndmain.cpp_FUN_00555c90
// Address: 00555c90
// Address Range: [[00555c90, 00555cec]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00555c90(double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00555c90(double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(double *)(iVar1 + 0x2ceb924) = pos_x;
  *(double *)(iVar1 + 0x2ceb92c) = pos_y;
  *(double *)(iVar1 + 0x2ceb934) = pos_z;
  *(uint *)(iVar1 + 0x2ceb93c) = 0;
  *(uint *)(iVar1 + 0x2ceb940) = 0;
  return;
}
