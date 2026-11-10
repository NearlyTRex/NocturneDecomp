// Name: core_hag.cpp_CHag_processHealingState_FUN_005aaca0
// Address: 005aaca0
// Address Range: [[005aaca0, 005aad69]]
// Convention: __cdecl
// Signature: void __cdecl core_hag_cpp_CHag_processHealingState_FUN_005aaca0(CHag *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hag_cpp_CHag_processHealingState_FUN_005aaca0(CHag *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x17c))(this_ptr);
  if (iVar3 != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&this_ptr->field_0x2b4,0,1);
    iVar3 = *(int *)&this_ptr->field_0x10a78;
    *(float *)&this_ptr->field_0x25a8 =
         delta_time * (float)_DAT_005f0bfe + *(float *)&this_ptr->field_0x25a8;
    if ((iVar3 != 0) &&
       (fVar1 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar3 + 0x20),
       fVar2 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar3 + 0x28),
       SQRT(fVar2 * fVar2 + fVar1 * fVar1) < _DAT_00600a6c)) {
      unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"?MeleeAttack" + 1);
      return;
    }
    if ((float)_DAT_005f0c06 <= *(float *)&this_ptr->field_0x25a8) {
      *(float *)&this_ptr->field_0x11394 = _DAT_00600a6c;
      unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"Chasing");
      return;
    }
  }
  return;
}
