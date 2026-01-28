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
  (pCVar1->base).unk[8] = '\0';
  (pCVar1->base).unk[9] = '\0';
  (pCVar1->base).unk[10] = '\0';
  (pCVar1->base).unk[0xb] = '?';
  (pCVar1->base).unk[0xc] = '\0';
  (pCVar1->base).unk[0xd] = '\0';
  (pCVar1->base).unk[0xe] = -0x80;
  (pCVar1->base).unk[0xf] = '?';
  (pCVar1->base).unk[0x10] = '\0';
  (pCVar1->base).unk[0x11] = '\0';
  (pCVar1->base).unk[0x12] = '\0';
  (pCVar1->base).unk[0x13] = '?';
  pCVar1->num_adjacent_waypoints = 0;
  return pCVar1;
}
