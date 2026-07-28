// Name: core_scat.cpp_CScat_renderOpaque_FUN_004fcb20
// Address: 004fcb20
// Address Range: [[004fcb20, 004fcbcb]]
// Convention: unknown
// Signature: undefined4 core_scat_cpp_CScat_renderOpaque_FUN_004fcb20(CCharacter *param_1)

#include "nocturne.h"

uint core_scat_cpp_CScat_renderOpaque_FUN_004fcb20(CCharacter *param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1[2].flames[0x1d].on_event + 0x18);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x14c) + 8))(iVar1);
      iVar1 = *(int *)(param_1[2].flames[0x1d].on_event + 0x18);
      uVar2 = 0;
      if (iVar1 != 0) {
        switch(*(uint *)(iVar1 + 0x2d8)) {
        default:
          uVar2 = 2;
          break;
        case 8:
          uVar2 = 0;
        }
      }
      fVar3 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                               (param_1,uVar2);
      if ((float)0.94999999999999996 < fVar3) {
        iVar1 = *(int *)(param_1[2].flames[0x1d].on_event + 0x18);
        (**(code **)(*(int *)(iVar1 + 0x14c) + 0xe8))(iVar1);
        return 1;
      }
      return 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}
