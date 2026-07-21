// Name: core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20
// Address: 00440a20
// Address Range: [[00440a20, 00440b11]]
// Convention: unknown
// Signature: void core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_CDemonCamera_endScene_FUN_00440a20(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x11e4) == 0) {
    _DAT_01cc4800 = "..\\core\\dcamera.cpp";
    _DAT_01cc4804 = 0x3f9;
    FUN_004c8440("CDemonCamera::endScene - Scene not open!");
  }
  else {
    *(uint *)(param_1 + 0x11e4) = 0;
  }
  if (_DAT_02dc9d60 != 0) {
    wincore_windll_cpp_endScene_FUN_00532360();
  }
  if ((*(int *)(param_1 + 0x168) == 0) && (param_2 == 0)) {
    if (_DAT_01c02594 != 0) {
      wincore_windll_cpp_masterZBuffer_FUN_00532c70(0);
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x140)) {
      do {
        iVar1 = iVar1 + 1;
        _memcpy(*(int *)(param_1 + 0x13c) << 2);
      } while (iVar1 < *(int *)(param_1 + 0x140));
    }
  }
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(DAT_005ae704);
  core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_00440270(param_1);
  return;
}
