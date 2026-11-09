// Name: core_waypoint.cpp_FUN_00587dc0
// Address: 00587dc0
// Address Range: [[00587dc0, 00587e85]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_FUN_00587dc0(CWayPoint *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_waypoint_cpp_FUN_00587dc0(CWayPoint *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CWayPoint *pCVar5;
  int iVar6;
  
  core_trigger_cpp_FUN_005778a0((CTrigger *)this_ptr);
  iVar6 = 0;
  *(uint *)&this_ptr->field_0xf8 = 1;
  if (0 < *(int *)&this_ptr->field_0x4d0) {
    pCVar5 = this_ptr;
    do {
      iVar1 = *(int *)&pCVar5->field_0x4d4;
      fVar2 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar1 + 0x20);
      fVar4 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar1 + 0x24);
      fVar3 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar1 + 0x28);
      iVar6 = iVar6 + 1;
      *(float *)&pCVar5->field_0x4d8 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
      pCVar5 = (CWayPoint *)&pCVar5->field_0x8;
    } while (iVar6 < *(int *)&this_ptr->field_0x4d0);
  }
  if (this_ptr->field_0x78 != '\0') {
    iVar6 = _stricmp(&this_ptr->field_0x78,(char *)0x5ee0bf);
    if ((iVar6 != 0) &&
       (iVar6 = _stricmp(&this_ptr->field_0x78,(char *)0x5ee0c4),
       iVar6 != 0)) {
      _DAT_01d046a0 = "..\\core\\waypoint.cpp";
      _DAT_01d046a4 = 0x8b;
      core_main_c_FUN_004e4500("Can't have creation event for waypoint.");
      return;
    }
  }
  return;
}
