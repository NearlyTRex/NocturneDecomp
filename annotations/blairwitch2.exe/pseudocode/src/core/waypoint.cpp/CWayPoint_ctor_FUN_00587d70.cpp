// Name: core_waypoint.cpp_CWayPoint_ctor_FUN_00587d70
// Address: 00587d70
// Address Range: [[00587d70, 00587db9]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_00587d70(CWayPoint *this_ptr)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_00587d70(CWayPoint *this_ptr)

{
  CWayPoint *pCVar1;
  
  pCVar1 = (CWayPoint *)core_trigger_cpp_CTrigger_ctor_FUN_005776f0((CTrigger *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CWayPointVTable;
  *(uint *)&pCVar1->field_0x2bc = 0x3f000000;
  *(uint *)&pCVar1->field_0x2c0 = 0x3f800000;
  *(uint *)&pCVar1->field_0x2c4 = 0x3f000000;
  *(uint *)&pCVar1->field_0x4d0 = 0;
  *(uint *)&pCVar1->field_0x6b8 = 0;
  return pCVar1;
}
