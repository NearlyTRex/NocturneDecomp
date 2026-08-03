#pragma once

// Function prototypes for core/waypoint.cpp
// Generated from Ghidra function signatures

// Original: core_waypoint.cpp_staticInit_FUN_00552380
// Address: 00552380
void __cdecl staticInit(void);

// Original: core_waypoint.cpp_CWayPoint_isReachable_FUN_005523b0
// Address: 005523b0
int __cdecl CWayPoint::isReachable(CWayPoint *this_ptr,CLocation *from_location,int use_tight_bounds);

// Original: core_waypoint.cpp_factoryFunc_FUN_005524a0
// Address: 005524a0
CWayPoint * __cdecl factoryFunc(void);

// Original: core_waypoint.cpp_CWayPoint_getActorType_FUN_005524c0
// Address: 005524c0
CDemonActorType * __cdecl CWayPoint::getActorType(CWayPoint *this_ptr);

// Original: core_waypoint.cpp_CWayPoint_ctor_FUN_005524d0
// Address: 005524d0
CWayPoint * __cdecl CWayPoint::ctor(CWayPoint *this_ptr);

// Original: core_waypoint.cpp_CWaypoint_setup_FUN_00552510
// Address: 00552510
void __cdecl CWaypoint::setup(CWayPoint *this_ptr);

// Original: core_waypoint.cpp_CWayPoint_renderOpaque_FUN_005525d0
// Address: 005525d0
undefined4 CWayPoint::renderOpaque(void);

// Original: core_waypoint.cpp_CWayPoint_archive_FUN_005525e0
// Address: 005525e0
void __cdecl CWayPoint::archive(CWayPoint *this_ptr);

// Original: core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680
// Address: 00552680
CWayPoint * __cdecl CWayPoint::findNearestReachable(CWayPoint *this_ptr,CWayPoint *start_waypoint);

// Original: core_waypoint.cpp_CWayPoint_dtor_FUN_00552830
// Address: 00552830
CWayPoint * __cdecl CWayPoint::dtor(CWayPoint *this_ptr,uint flags);
