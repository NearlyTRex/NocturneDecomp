// Name: cockpit_drawsurf.cpp_FUN_0047f170
// Address: 0047f170
// Address Range: [[0047f170, 0047f1a1]]
// Convention: unknown
// Signature: byte cockpit_drawsurf_cpp_FUN_0047f170(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

byte cockpit_drawsurf_cpp_FUN_0047f170(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  
  bVar1 = param_6 < param_2;
  if (param_2 < param_4) {
    bVar1 = bVar1 | 2;
  }
  if (param_5 < param_1) {
    bVar1 = bVar1 | 4;
  }
  if (param_1 < param_3) {
    bVar1 = bVar1 | 8;
  }
  return bVar1;
}
