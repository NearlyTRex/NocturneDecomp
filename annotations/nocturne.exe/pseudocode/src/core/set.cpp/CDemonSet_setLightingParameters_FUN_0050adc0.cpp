// Name: core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0
// Address: 0050adc0
// Address Range: [[0050adc0, 0050aedb]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0(uint param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  uint *puVar2;
  
  if (param_2 == (uint *)0x0) {
    _DAT_01fff548 = 1;
  }
  else {
    if (param_2 != (uint *)&DAT_01fff54c) {
      _DAT_01fff54c = *param_2;
      _DAT_01fff554 = param_2[2];
      _DAT_01fff550 = param_2[1];
    }
    if (param_3 != (uint *)&DAT_01fff558) {
      _DAT_01fff558 = *param_3;
      _DAT_01fff560 = param_3[2];
      _DAT_01fff55c = param_3[1];
    }
    if (param_4 != (uint *)&DAT_01fff564) {
      _DAT_01fff564 = *param_4;
      _DAT_01fff56c = param_4[2];
      _DAT_01fff568 = param_4[1];
    }
    if (param_5 != (uint *)&DAT_01fff570) {
      _DAT_01fff570 = *param_5;
      _DAT_01fff578 = param_5[2];
      _DAT_01fff574 = param_5[1];
    }
    if (param_6 == (uint *)0x0) {
      _DAT_01fff580 = param_6;
      _DAT_01fff584 = param_6;
      _DAT_01fff588 = param_6;
      _DAT_01fff590 = param_6;
      _DAT_01fff594 = param_6;
      _DAT_01fff598 = param_6;
      _DAT_01fff58c = 0x3f800000;
      _DAT_01fff59c = 0x3f800000;
      _DAT_01fff57c = 0x3f800000;
      _DAT_01fff548 = 2;
      return;
    }
    puVar2 = (uint *)&DAT_01fff57c;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_6;
      param_6 = param_6 + 1;
      puVar2 = puVar2 + 1;
    }
    _DAT_01fff548 = 2;
  }
  return;
}
