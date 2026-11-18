// Name: core_charactr.cpp_CCharacter_findNearestReachableWaypoint_FUN_004349d0
// Address: 004349d0
// Address Range: [[004349d0, 004349ec]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_charactr_cpp_CCharacter_findNearestReachableWaypoint_FUN_004349d0(CCharacter *this_ptr,CWayPoint *target_waypoint)

#include "nocturne.h"

CWayPoint * __cdecl core_charactr_cpp_CCharacter_findNearestReachableWaypoint_FUN_004349d0(CCharacter *this_ptr,CWayPoint *target_waypoint)

{
  CWayPoint *pCVar1;
  
  pCVar1 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00579430
                     ((CWayPoint *)&(this_ptr->base).location,target_waypoint,this_ptr->is_spectral)
  ;
  return pCVar1;
}
