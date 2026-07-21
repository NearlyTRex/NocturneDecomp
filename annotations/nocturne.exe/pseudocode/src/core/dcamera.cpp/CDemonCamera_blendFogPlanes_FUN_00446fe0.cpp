// Name: core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0
// Address: 00446fe0
// Address Range: [[00446fe0, 004470ea]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0(int param_1,int param_2,uint param_3)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  
  iVar2 = param_2 + 1;
  if (0xf < iVar2) {
    iVar2 = 0;
  }
  if ((int)param_3 < 0x10000) {
    if ((int)param_3 < 0) {
      param_3 = 0;
    }
  }
  else {
    param_3 = 0xffff;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    iVar1 = param_2 * 0x12c00 + 0x12e1778;
    puVar3 = &DAT_012ceb78;
    iVar2 = iVar2 * 0x12c00 + 0x12e1778;
    do {
      core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00465f50
                (puVar3,iVar1,iVar2,param_3 | param_3 << 0x10,
                 0xffff - param_3 | (0xffff - param_3) * 0x10000,*(uint *)(param_1 + 0x150));
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x140;
      iVar1 = iVar1 + 0x140;
      puVar3 = puVar3 + 0x140;
    } while (iVar4 < *(int *)(param_1 + 0x154));
  }
  return param_1;
}
