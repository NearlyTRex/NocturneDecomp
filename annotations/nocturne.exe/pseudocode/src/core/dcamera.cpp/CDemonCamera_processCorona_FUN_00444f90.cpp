// Name: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00444f90
// Address: 00444f90
// Address Range: [[00444f90, 0044501f]]
// Convention: unknown
// Signature: void core_dcamera_cpp_CDemonCamera_processCorona_FUN_00444f90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_CDemonCamera_processCorona_FUN_00444f90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x11e8) >> 0x1f;
  iVar1 = (*(int *)(param_1 + 0x11e8) + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  _DAT_00b0ddf8 = (int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  _memset(0x12c00);
  if (1 < _DAT_0140d780) {
    core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0(param_1,_DAT_0140d778,_DAT_0140d77c);
    return;
  }
  if (_DAT_012b022c == 0) {
    return;
  }
  _memcpy(0x12c00);
  _DAT_012b022c = 0;
  return;
}
