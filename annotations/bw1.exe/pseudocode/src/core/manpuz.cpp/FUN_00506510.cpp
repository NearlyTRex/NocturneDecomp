// Name: core_manpuz.cpp_FUN_00506510
// Address: 00506510
// Address Range: [[00506510, 00506594]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_00506510(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_manpuz_cpp_FUN_00506510(CDemonActor *param_1,float param_2)

{
  int iVar1;
  float fStack_10;
  
  fStack_10 = (param_2 * _DAT_005e767d) / _DAT_005e7681;
  iVar1 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x38);
  if (iVar1 != 0) {
    fStack_10 = fStack_10 * (float)_DAT_005e7685;
  }
  iVar1 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x33);
  if (iVar1 != 0) {
    *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 - fStack_10;
  }
  iVar1 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x34);
  if (iVar1 != 0) {
    *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_10;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(param_1);
  return;
}
