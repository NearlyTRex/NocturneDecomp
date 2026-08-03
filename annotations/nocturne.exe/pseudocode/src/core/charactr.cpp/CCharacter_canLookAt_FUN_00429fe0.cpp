// Name: core_charactr.cpp_CCharacter_canLookAt_FUN_00429fe0
// Address: 00429fe0
// Address Range: [[00429fe0, 0042a05e]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_canLookAt_FUN_00429fe0(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_canLookAt_FUN_00429fe0(CCharacter *this_ptr)

{
  EDeathState EVar1;
  int iVar2;
  CMotionList *this_ptr_00;
  float fVar3;
  char *state_name;
  
  EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
  if ((int)EVar1 < 2) {
    if ((this_ptr->model).model_name[0] != '\0') {
      iVar2 = 0;
      state_name = "STAND";
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                              (&(this_ptr->model).motion_controller);
      iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(this_ptr_00,state_name,iVar2);
      if (-1 < iVar2) {
        fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                          (&(this_ptr->model).motion_controller,iVar2);
        if ((float)0.94999999999999996 < fVar3) {
          return 0;
        }
      }
    }
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
