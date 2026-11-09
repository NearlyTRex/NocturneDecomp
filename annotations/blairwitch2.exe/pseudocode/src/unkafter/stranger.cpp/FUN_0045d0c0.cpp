// Name: unkafter_stranger.cpp_FUN_0045d0c0
// Address: 0045d0c0
// Address Range: [[0045d0c0, 0045d1ee]]
// Convention: unknown
// Signature: undefined4 unkafter_stranger_cpp_FUN_0045d0c0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkafter_stranger_cpp_FUN_0045d0c0(int param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  if ((*(int *)(param_1 + 0x256a4) == 0) && (*(int *)(param_1 + 0x25640) == 0)) {
    iVar1 = param_1 + 0x2b4;
    fVar2 = (float)core_motion_cpp_FUN_005038a0(iVar1,0);
    fVar3 = (float)core_motion_cpp_FUN_005038a0(iVar1,1);
    fVar4 = (float)core_motion_cpp_FUN_005038a0(iVar1,3);
    fVar5 = (float)core_motion_cpp_FUN_005038a0(iVar1,4);
    fVar6 = (float)core_motion_cpp_FUN_005038a0(iVar1,5);
    fVar8 = (float)_DAT_005d07cf;
    switch(param_2) {
    case 4:
      fVar9 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,0);
      if (fVar9 < (float)_DAT_005d07d7) {
        return 0;
      }
    case 3:
      if (fVar6 + fVar5 + fVar4 + fVar3 + fVar2 <= fVar8) {
        return 0;
      }
      break;
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      fVar8 = (float)core_charactr_cpp_FUN_0042a5a0(param_1,0);
      if (fVar8 < (float)_DAT_005d07d7) {
        return 0;
      }
    }
    uVar7 = core_hero_cpp_FUN_004d06c0(param_1,param_2);
    return uVar7;
  }
  return 0;
}
