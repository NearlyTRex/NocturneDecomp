// Name: core_unionzom.cpp_CUnionZombie_processVanishAttackState_FUN_005a40f0
// Address: 005a40f0
// Address Range: [[005a40f0, 005a4211]]
// Convention: __cdecl
// Signature: void __cdecl core_unionzom_cpp_CUnionZombie_processVanishAttackState_FUN_005a40f0(CUnionZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_unionzom_cpp_CUnionZombie_processVanishAttackState_FUN_005a40f0(CUnionZombie *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)&this_ptr->field_0x11858;
  this_ptr_00 = &this_ptr->field_0x2b4;
  if (uVar1 == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,4,1);
    unkafter_basicene_cpp_FUN_005a01a0
              (this_ptr,*(uint *)&this_ptr->field_0x113c4,0,0x3f99999a);
    unkafter_basicene_cpp_FUN_0059f570(this_ptr);
    *(uint *)&this_ptr->field_0x11858 = 1;
    return;
  }
  if (uVar1 < 2) {
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if (*(int *)(iVar2 + 0x24) == 4) {
      if (_DAT_005f02de <= *(float *)&this_ptr->field_0x2bc) {
        unkafter_basicene_cpp_FUN_005a01a0
                  (this_ptr,*(uint *)&this_ptr->field_0x113c4,0x3f800000,0x3f400000);
        unkafter_basicene_cpp_FUN_0059f570(this_ptr);
        *(uint *)&this_ptr->field_0x11858 = 2;
        return;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                ((CCharacter *)this_ptr,(CVector3f *)(*(int *)&this_ptr->field_0x10a78 + 0x20));
      return;
    }
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if (*(int *)(iVar2 + 0x24) == 3) {
      *(uint *)&this_ptr->field_0x11394 = _DAT_005ff544;
      unkaddr_0059d350_cpp_FUN_0059d7f0
                (&this_ptr->field_0x10af8,"ChaseComplete","MeleeAttack");
      unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,"MeleeAttack");
      *(uint *)&this_ptr->field_0x11858 = 0;
      return;
    }
  }
  return;
}
