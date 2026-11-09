// Name: unkafter_basicene.cpp_FUN_0059fa20
// Address: 0059fa20
// Address Range: [[0059fa20, 0059fa6c]]
// Convention: unknown
// Signature: undefined4 unkafter_basicene_cpp_FUN_0059fa20(int param_1)

#include "nocturne.h"

uint unkafter_basicene_cpp_FUN_0059fa20(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xfc) == 0) {
    uVar2 = core_charactr_cpp_FUN_004254b0(param_1);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if ((iVar1 == 0) && (*(int *)g_CGameHookPtr != 0)) {
    unkafter_basicene_cpp_FUN_0059fae0(param_1);
    return uVar2;
  }
  return uVar2;
}
