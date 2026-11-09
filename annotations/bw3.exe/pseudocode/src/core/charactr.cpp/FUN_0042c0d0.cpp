// Name: core_charactr.cpp_FUN_0042c0d0
// Address: 0042c0d0
// Address Range: [[0042c0d0, 0042c178]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042c0d0(CCharacter *param_1,undefined4 param_2,undefined4 *param_3,float param_4)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042c0d0(CCharacter *param_1,uint param_2,uint *param_3,float param_4)

{
  int iVar1;
  SDamageInfo aSStack_44 [4];
  uint uStack_40;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  uint uStack_14;
  
  iVar1 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if (0 < iVar1) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xbc64);
  core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_44);
  uStack_40 = 0x461c3c00;
  uStack_14 = param_2;
  if ((param_3 != (uint *)0x0) && (&uStack_38 != param_3)) {
    uStack_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
  }
  if (0.0 <= param_4) {
    fStack_2c = param_4;
  }
  (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1,aSStack_44);
  core_charactr_cpp_FUN_00431ce0(param_1);
  return;
}
