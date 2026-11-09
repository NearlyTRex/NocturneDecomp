// Name: core_charactr.cpp_FUN_00429320
// Address: 00429320
// Address Range: [[00429320, 00429388]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00429320(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00429320(CCharacter *this_ptr,float delta_time)

{
  CMotionList *pCVar1;
  int iVar2;
  
  iVar2 = *(int *)&this_ptr->field_0x27c4;
  if (-1 < iVar2) {
    pCVar1 = core_motion_cpp_FUN_00503860((CMotionController *)&this_ptr->field_0x2b4);
    iVar2 = iVar2 * 0x118;
    *(float *)&this_ptr->field_0x27c8 =
         delta_time * *(float *)(pCVar1 + iVar2 + 0x1c48) + *(float *)&this_ptr->field_0x27c8;
    if ((float)*(int *)(pCVar1 + iVar2 + 0x1c8c) <= *(float *)&this_ptr->field_0x27c8) {
      *(uint *)&this_ptr->field_0x27c4 = 0xffffffff;
      return;
    }
  }
  return;
}
