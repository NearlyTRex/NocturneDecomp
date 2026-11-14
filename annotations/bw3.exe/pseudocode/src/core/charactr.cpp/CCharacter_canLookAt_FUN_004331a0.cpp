// Name: core_charactr.cpp_CCharacter_canLookAt_FUN_004331a0
// Address: 004331a0
// Address Range: [[004331a0, 0043321e]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_canLookAt_FUN_004331a0(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_canLookAt_FUN_004331a0(CCharacter *this_ptr)

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
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                              (&(this_ptr->model).base);
      iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(this_ptr_00,state_name,iVar2);
      if (-1 < iVar2) {
        fVar3 = (float)core_motion_cpp_FUN_004fc350(&this_ptr->model,iVar2);
        if ((float)_DAT_005b873e < fVar3) {
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
