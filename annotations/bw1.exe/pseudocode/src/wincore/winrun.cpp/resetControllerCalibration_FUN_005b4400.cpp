// Name: wincore_winrun.cpp_resetControllerCalibration_FUN_005b4400
// Address: 005b4400
// Address Range: [[005b4400, 005b444f]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_resetControllerCalibration_FUN_005b4400(int controller_index)

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_resetControllerCalibration_FUN_005b4400(int controller_index)

{
  int iVar1;
  int iVar2;
  
  g_INT_02c9d294 = 0;
  iVar2 = controller_index * 0x30;
  do {
    iVar1 = iVar2 + 0xc;
    *(uint *)(iVar2 + 0x2c9d1d8) = 0x80000001;
    *(uint *)(iVar2 + 0x2c9d1d4) = 0x7fffffff;
    *(uint *)(iVar2 + 0x2c9d1dc) = 0;
    iVar2 = iVar1;
  } while (iVar1 != controller_index * 0x30 + 0x30);
  wincore_winrun_cpp_pollControllerWrapper_FUN_005b4450(controller_index);
  return;
}
