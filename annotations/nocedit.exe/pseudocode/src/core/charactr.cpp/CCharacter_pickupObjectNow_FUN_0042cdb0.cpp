// Name: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
// Address: 0042cdb0
// Address Range: [[0042cdb0, 0042ce78]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(CCharacter *this_ptr)

{
  SCarryHand *pSVar1;
  int in_stack_00000008;
  CDemonActor *in_stack_0000000c;
  
  if ((in_stack_00000008 < 0) || (1 < in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xbd3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::pickupObjectNow - invalid hand index");
  }
  if (in_stack_0000000c != (CDemonActor *)0x0) {
    (*(((this_ptr->base).vtable._uc)->_uc).cfunc21)();
    pSVar1 = this_ptr->carry_hands + in_stack_00000008;
    if ((*(int *)(pSVar1->unk1 + 4) < 0) ||
       ((this_ptr->model).part_visibility_flags[*(int *)(pSVar1->unk1 + 4)] != 0)) {
      if (*(int *)pSVar1->unk1 < 0) {
        g_CurrentFilename = "..\\core\\charactr.cpp";
        g_CurrentLineNumber = 0xbeb;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::pickupObjectNow - invalid bone!");
      }
      (*((in_stack_0000000c->vtable)._ub)->pickup)(in_stack_0000000c,&this_ptr->base);
      pSVar1->carry_actor = in_stack_0000000c;
      core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(this_ptr);
      return;
    }
  }
  return;
}
