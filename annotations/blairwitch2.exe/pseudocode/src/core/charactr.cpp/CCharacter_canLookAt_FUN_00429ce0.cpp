// Name: core_charactr.cpp_CCharacter_canLookAt_FUN_00429ce0
// Address: 00429ce0
// Address Range: [[00429ce0, 00429d5e]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_canLookAt_FUN_00429ce0(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_canLookAt_FUN_00429ce0(CCharacter *this_ptr)

{
  EDeathState EVar1;
  int iVar2;
  CMotionList *this_ptr_00;
  float fVar3;
  char *state_name;
  
  EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
  if ((int)EVar1 < 2) {
    if ((this_ptr->model).field_0x2260 != '\0') {
      iVar2 = 0;
      state_name = "STAND";
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                              ((CMotionController *)&this_ptr->model);
      iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0(this_ptr_00,state_name,iVar2);
      if (-1 < iVar2) {
        fVar3 = (float)core_motion_cpp_FUN_005038a0(&this_ptr->model,iVar2);
        if ((float)_DAT_005cd13e < fVar3) {
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
