// Name: core_gore.cpp_FUN_004cee70
// Address: 004cee70
// Address Range: [[004cee70, 004ceeee]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004cee70(undefined4 param_1,CVector3f *param_2,UOrientationVector *param_3,int param_4,int param_5,EBloodType param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004cee70(uint param_1,CVector3f *param_2,UOrientationVector *param_3,int param_4,int param_5,EBloodType param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01d4aec4 + 1;
  iVar1 = _DAT_01d4aec4 * 0x44;
  _DAT_01d4aec4 = iVar2;
  if (999 < iVar2) {
    _DAT_01d4aec4 = 0;
  }
  if (_DAT_01d4aec8 < 1000) {
    _DAT_01d4aec8 = _DAT_01d4aec8 + 1;
  }
  core_gore_cpp_FUN_004ce170
            ((CFootstep *)(iVar1 + 0x1d4aecc),param_2,param_3,(uint)(param_4 == 0xb),param_5,param_6
            );
  return;
}
