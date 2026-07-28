// Name: core_gore.cpp_CGore_createFootstep_FUN_004b06b0
// Address: 004b06b0
// Address Range: [[004b06b0, 004b0726]]
// Convention: unknown
// Signature: void core_gore_cpp_CGore_createFootstep_FUN_004b06b0(undefined4 param_1,CVector3f *param_2,UOrientationVector *param_3,int param_4,int param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_CGore_createFootstep_FUN_004b06b0(uint param_1,CVector3f *param_2,UOrientationVector *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c9e53c + 1;
  iVar1 = _DAT_01c9e53c * 0x40;
  _DAT_01c9e53c = iVar2;
  if (999 < iVar2) {
    _DAT_01c9e53c = 0;
  }
  if (_DAT_01c9e540 < 1000) {
    _DAT_01c9e540 = _DAT_01c9e540 + 1;
  }
  core_gore_cpp_CFootstep_init_FUN_004af8a0
            ((CFootstep *)(iVar1 + 0x1c9e544),param_2,param_3,(uint)(param_4 == 0xb),param_5,param_6
            );
  return;
}
