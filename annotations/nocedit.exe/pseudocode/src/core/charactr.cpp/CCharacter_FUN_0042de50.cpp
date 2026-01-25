// Name: core_charactr.cpp_CCharacter_FUN_0042de50
// Address: 0042de50
// Address Range: [[0042de50, 0042dece]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042de50(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042de50(CCharacter *this_ptr)

{
  int iVar1;
  CMotionList *this_ptr_00;
  float fVar2;
  
  iVar1 = (*(((this_ptr->base_actor).vtable._uc)->_uc).isDamageable)(this_ptr);
  if (iVar1 < 2) {
    if ((this_ptr->model).model_name[0] != '\0') {
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&(this_ptr->model).motion_controller);
      iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
      if (-1 < iVar1) {
        fVar2 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                          (&(this_ptr->model).motion_controller,iVar1);
        if ((float)0.94999999999999996 < fVar2) {
          return 0;
        }
      }
    }
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
