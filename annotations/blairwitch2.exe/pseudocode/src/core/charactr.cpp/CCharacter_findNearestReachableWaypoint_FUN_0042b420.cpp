// Name: core_charactr.cpp_CCharacter_findNearestReachableWaypoint_FUN_0042b420
// Address: 0042b420
// Address Range: [[0042b420, 0042b43c]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_charactr_cpp_CCharacter_findNearestReachableWaypoint_FUN_0042b420(CCharacter *this_ptr,CWayPoint *target_waypoint)

#include "nocturne.h"

CWayPoint * __cdecl core_charactr_cpp_CCharacter_findNearestReachableWaypoint_FUN_0042b420(CCharacter *this_ptr,CWayPoint *target_waypoint)

{
  CWayPoint *pCVar1;
  
  pCVar1 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_005882d0
                     ((CWayPoint *)&(this_ptr->base).location,target_waypoint,this_ptr->is_spectral)
  ;
  return pCVar1;
}
