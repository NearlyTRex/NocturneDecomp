// Name: core_doc.cpp_CDoc_process_FUN_004693e0
// Address: 004693e0
// Address Range: [[004693e0, 00469547]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_process_FUN_004693e0(CDoc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_process_FUN_004693e0(CDoc *this_ptr,float delta_time)

{
  float delta_time_00;
  bool bVar1;
  int iVar2;
  SMotion *pSVar3;
  
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 != 0) {
    iVar2 = *(int *)&g_CGamePtr->field_0x25c;
    if (*(int *)&this_ptr->field_0x200d8 == 1) {
      *(float *)&this_ptr->field_0x200dc = *(float *)&this_ptr->field_0x200dc - _DAT_005fecb4;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,0x75,1);
      if (ABS(*(float *)&this_ptr->field_0x200dc) <= (float)_DAT_005d9be4) {
        *(float *)&this_ptr->field_0x34 = _DAT_005fecb4 + *(float *)&this_ptr->field_0x34;
        core_charactr_cpp_FUN_00433d50(this_ptr,&this_ptr->field_0x30);
      }
      else {
        *(uint *)&this_ptr->field_0x200d8 = 0;
      }
    }
    core_charactr_cpp_FUN_00432f10(this_ptr,delta_time,iVar2 != 0);
    delta_time_00 = g_CGamePtr->delta_time_float;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&this_ptr->field_0x158);
    bVar1 = false;
    switch(*(uint *)(pSVar3 + 0x24)) {
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1e:
      bVar1 = true;
    }
    if ((*(int *)&this_ptr->field_0x1ff5c == 7) || (bVar1)) {
      delta_time = delta_time * (float)_DAT_005d9bec;
      core_doc_cpp_FUN_00469550(this_ptr,delta_time);
      core_doc_cpp_FUN_00469550(this_ptr,delta_time);
      core_doc_cpp_FUN_00469550(this_ptr,delta_time);
    }
    core_doc_cpp_FUN_00469550(this_ptr,delta_time);
    core_game_cpp_CGame_slamDT_FUN_004d7f50(g_CGamePtr,delta_time_00);
  }
  return;
}
