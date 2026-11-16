// Name: wincore_winrun.cpp_resetControllerCalibration_FUN_005825e0
// Address: 005825e0
// Address Range: [[005825e0, 0058262f]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_resetControllerCalibration_FUN_005825e0(int controller_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_resetControllerCalibration_FUN_005825e0(int controller_index)

{
  int iVar1;
  int iVar2;
  
  _DAT_02d22fa4 = 0;
  iVar2 = controller_index * 0x30;
  do {
    iVar1 = iVar2 + 0xc;
    *(uint *)(iVar2 + 0x2d22ee8) = 0x80000001;
    *(uint *)(iVar2 + 0x2d22ee4) = 0x7fffffff;
    *(uint *)(iVar2 + 0x2d22eec) = 0;
    iVar2 = iVar1;
  } while (iVar1 != controller_index * 0x30 + 0x30);
  wincore_winrun_cpp_pollControllerWrapper_FUN_00582630(controller_index);
  return;
}
