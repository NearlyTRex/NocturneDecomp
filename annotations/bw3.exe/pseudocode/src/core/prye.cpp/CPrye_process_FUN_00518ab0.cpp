// Name: core_prye.cpp_CPrye_process_FUN_00518ab0
// Address: 00518ab0
// Address Range: [[00518ab0, 00518ccd]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_process_FUN_00518ab0(CPrye *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_process_FUN_00518ab0(CPrye *this_ptr,float delta_time)

{
  bool bVar1;
  int iVar2;
  SMotion *pSVar3;
  SDamageInfo aSStack_4c [4];
  float fStack_48;
  uint uStack_1c;
  float fStack_10;
  float fStack_c;
  
  iVar2 = core_charactr_cpp_FUN_0042cd70(this_ptr,delta_time);
  if (iVar2 == 0) {
    if (0.0 < *(float *)&this_ptr->field_0x3254) {
      unkafter_prye_cpp_FUN_00526dc0(this_ptr,delta_time);
      return;
    }
  }
  else {
    if ((*(int *)&this_ptr->field_0x20c24 == 0) ||
       (*(int *)(*(int *)&this_ptr->field_0x20c24 + 0x57c) == 0)) {
      *(uint *)&this_ptr->field_0x20b90 = 0;
      *(uint *)&this_ptr->field_0x20b8c = 0;
    }
    if (*(int *)&this_ptr->field_0x20b8c != 0) {
      *(float *)&this_ptr->field_0x20b90 =
           delta_time * _DAT_005cd00b + *(float *)&this_ptr->field_0x20b90;
    }
    if ((0.0 < *(float *)&this_ptr->field_0x3254) && (*(int *)&this_ptr->field_0x3258 == 3)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_4c);
      fStack_48 = delta_time * (float)_DAT_005cd00f;
      uStack_1c = 0x69;
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x108))(this_ptr,aSStack_4c);
    }
    iVar2 = *(int *)&g_CGamePtr->field_0x264;
    if (*(int *)&this_ptr->field_0x20cf8 == 1) {
      *(float *)&this_ptr->field_0x20cfc = *(float *)&this_ptr->field_0x20cfc - _DAT_005e3504;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&this_ptr->field_0x158,0x7a,1);
      if ((float)_DAT_005cd017 <= *(float *)&this_ptr->field_0x20cfc) {
        *(float *)&this_ptr->field_0x34 = _DAT_005e3504 + *(float *)&this_ptr->field_0x34;
        core_charactr_cpp_FUN_00433220(this_ptr,&this_ptr->field_0x30);
      }
      else {
        *(uint *)&this_ptr->field_0x20cf8 = 0;
      }
    }
    core_charactr_cpp_FUN_00432330(this_ptr,delta_time,iVar2 != 0);
    fStack_c = g_CGamePtr->delta_time_float;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&this_ptr->field_0x158);
    bVar1 = false;
    switch(*(uint *)(pSVar3 + 0x24)) {
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x24:
    case 0x26:
      bVar1 = true;
    }
    if ((*(int *)&this_ptr->field_0x20b64 == 7) || (bVar1)) {
      fStack_10 = delta_time * (float)_DAT_005cd01f;
      core_prye_cpp_FUN_00518cd0(this_ptr,fStack_10);
      core_prye_cpp_FUN_00518cd0(this_ptr,fStack_10);
      core_prye_cpp_FUN_00518cd0(this_ptr,fStack_10);
      delta_time = fStack_10;
    }
    core_prye_cpp_FUN_00518cd0(this_ptr,delta_time);
    core_game_cpp_CGame_slamDT_FUN_004bf3a0(g_CGamePtr,fStack_c);
  }
  return;
}
