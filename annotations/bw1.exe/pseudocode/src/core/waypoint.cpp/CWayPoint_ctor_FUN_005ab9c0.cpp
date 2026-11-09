// Name: core_waypoint.cpp_CWayPoint_ctor_FUN_005ab9c0
// Address: 005ab9c0
// Address Range: [[005ab9c0, 005ab9ff]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_005ab9c0(CWayPoint *this_ptr)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_005ab9c0(CWayPoint *this_ptr)

{
  CWayPoint *pCVar1;
  
  pCVar1 = (CWayPoint *)core_trigger_cpp_CTrigger_ctor_FUN_0059afb0((CTrigger *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CWayPointVTable;
  *(uint *)&pCVar1->field_0x160 = 0x3f000000;
  *(uint *)&pCVar1->field_0x164 = 0x3f800000;
  *(uint *)&pCVar1->field_0x168 = 0x3f000000;
  *(uint *)&pCVar1->field_0x374 = 0;
  return pCVar1;
}
