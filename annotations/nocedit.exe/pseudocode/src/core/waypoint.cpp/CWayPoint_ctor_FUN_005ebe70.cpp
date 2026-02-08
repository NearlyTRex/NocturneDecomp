// Name: core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70
// Address: 005ebe70
// Address Range: [[005ebe70, 005ebeaf]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_005ebe70(CWayPoint *this_ptr)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_005ebe70(CWayPoint *this_ptr)

{
  CWayPoint *pCVar1;
  
  pCVar1 = (CWayPoint *)core_trigger_cpp_CTrigger_ctor_FUN_005df840(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CWayPointVTable;
  (pCVar1->base).unk1[0] = '\0';
  (pCVar1->base).unk1[1] = '\0';
  (pCVar1->base).unk1[2] = '\0';
  (pCVar1->base).unk1[3] = '?';
  (pCVar1->base).unk1[4] = '\0';
  (pCVar1->base).unk1[5] = '\0';
  (pCVar1->base).unk1[6] = -0x80;
  (pCVar1->base).unk1[7] = '?';
  (pCVar1->base).unk1[8] = '\0';
  (pCVar1->base).unk1[9] = '\0';
  (pCVar1->base).unk1[10] = '\0';
  (pCVar1->base).unk1[0xb] = '?';
  pCVar1->num_adjacent_waypoints = 0;
  return pCVar1;
}
