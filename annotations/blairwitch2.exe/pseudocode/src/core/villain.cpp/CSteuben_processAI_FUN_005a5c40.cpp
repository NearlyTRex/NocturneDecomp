// Name: core_villain.cpp_CSteuben_processAI_FUN_005a5c40
// Address: 005a5c40
// Address Range: [[005a5c40, 005a5d02]]
// Convention: __cdecl
// Signature: void __cdecl core_villain_cpp_CSteuben_processAI_FUN_005a5c40(CSteuben *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_villain_cpp_CSteuben_processAI_FUN_005a5c40(CSteuben *this_ptr,float delta_time)

{
  SStateMachine *this_ptr_00;
  int iVar1;
  byte bVar2;
  float afStackY_1024 [1016];
  CClothList *this_ptr_01;
  CVector3f *wind_velocity;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  float afStack_14 [2];
  
  bVar2 = 0;
  this_ptr_00 = &(this_ptr->base).base.state_machine;
  iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Death");
  if (iVar1 == 0) {
    iVar1 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Animation");
    if (iVar1 == 0) {
      (*(this_ptr->base).base.base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
    }
  }
  fStack_30 = (this_ptr->base).base.move_velocity.x * _DAT_005f0622;
  fStack_2c = (this_ptr->base).base.move_velocity.y * _DAT_005f0622;
  fStack_28 = (this_ptr->base).base.move_velocity.z * _DAT_005f0622;
  fStack_3c = fStack_30;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  wind_velocity = &CStack_24;
  this_ptr_01 = &(this_ptr->base).base.base.base.cloth_list;
  fStack_18 = fStack_3c * delta_time;
  afStack_14[0] = fStack_38 * delta_time;
  afStack_14[1] = fStack_34 * delta_time;
  CStack_24.x = fStack_3c * delta_time;
  *(float *)((int)&CStack_24 + (uint)bVar2 * -8 + 4) = afStack_14[(uint)bVar2 * -2];
  *(float *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       afStack_14[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  core_cloth_cpp_CClothList_setWindVelocity_FUN_005b1890(this_ptr_01,wind_velocity);
  return;
}
