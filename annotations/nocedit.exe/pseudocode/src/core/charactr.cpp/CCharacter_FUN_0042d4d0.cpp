// Name: core_charactr.cpp_CCharacter_FUN_0042d4d0
// Address: 0042d4d0
// Address Range: [[0042d4d0, 0042d52d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042d4d0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d4d0(CCharacter *this_ptr)

{
  int iVar1;
  CMotionList *pCVar2;
  float in_stack_00000008;
  
  iVar1 = *(int *)(this_ptr->unk2 + 0x28);
  if (-1 < iVar1) {
    pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                       (&(this_ptr->model).motion_controller);
    *(float *)(this_ptr->unk2 + 0x2c) =
         in_stack_00000008 * pCVar2->motions[iVar1].fps + *(float *)(this_ptr->unk2 + 0x2c);
    if ((float)pCVar2->motions[iVar1].frame_count <= *(float *)(this_ptr->unk2 + 0x2c)) {
      this_ptr->unk2[0x28] = -1;
      this_ptr->unk2[0x29] = -1;
      this_ptr->unk2[0x2a] = -1;
      this_ptr->unk2[0x2b] = -1;
      return;
    }
  }
  return;
}
