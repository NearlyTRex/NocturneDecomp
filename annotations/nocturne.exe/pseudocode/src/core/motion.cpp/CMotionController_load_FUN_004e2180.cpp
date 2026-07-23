// Name: core_motion.cpp_CMotionController_load_FUN_004e2180
// Address: 004e2180
// Address Range: [[004e2180, 004e2213]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_load_FUN_004e2180(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_load_FUN_004e2180(int param_1,uint param_2)

{
  int iVar1;
  
  _fscanf(param_2," ");
  *(byte *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 4) = 0xffffffff;
  iVar1 = _fscanf(param_2,"%d,%f",param_1 + 4,param_1 + 8);
  if ((iVar1 != 2) &&
     (iVar1 = _fscanf(param_2,"\"%[^\"]\" , %f",param_1 + 0x30,param_1 + 8), iVar1 != 2)) {
    _DAT_01cc4800 = "..\\core\\motion.cpp";
    _DAT_01cc4804 = 0x51e;
    FUN_004c8440("CMotionController::load - error parsing file");
  }
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
