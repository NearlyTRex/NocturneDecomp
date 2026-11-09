// Name: core_waypoint.cpp_CWayPoint_ctor_FUN_00579270
// Address: 00579270
// Address Range: [[00579270, 005792af]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_00579270(CWayPoint *this_ptr)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_00579270(CWayPoint *this_ptr)

{
  CWayPoint *pCVar1;
  
  pCVar1 = (CWayPoint *)core_trigger_cpp_CTrigger_ctor_FUN_0056dfa0((CTrigger *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CWayPointVTable;
  *(uint *)&pCVar1->field_0x160 = 0x3f000000;
  *(uint *)&pCVar1->field_0x164 = 0x3f800000;
  *(uint *)&pCVar1->field_0x168 = 0x3f000000;
  *(uint *)&pCVar1->field_0x374 = 0;
  return pCVar1;
}
