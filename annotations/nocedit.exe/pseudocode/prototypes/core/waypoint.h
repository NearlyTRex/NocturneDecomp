#pragma once

// Function prototypes for core/waypoint.cpp
// Generated from Ghidra function signatures

// Original: core_waypoint.cpp_staticInit_FUN_005ebd10
// Address: 005ebd10
void __cdecl staticInit(void);

// Original: core_waypoint.cpp_CWayPoint_isReachable_FUN_005ebd40
// Address: 005ebd40
int __cdecl CWayPoint::isReachable(CWayPoint *this_ptr,CLocation *from_location,int use_tight_bounds);

// Original: core_waypoint.cpp_factoryFuncWayPoint_FUN_005ebe30
// Address: 005ebe30
CWayPoint * __cdecl factoryFuncWayPoint(void);

// Original: core_waypoint.cpp_CWayPoint_getActorType_FUN_005ebe60
// Address: 005ebe60
CDemonActorType * __cdecl CWayPoint::getActorType(CWayPoint *this_ptr);

// Original: core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70
// Address: 005ebe70
CWayPoint * __cdecl CWayPoint::ctor(CWayPoint *this_ptr);

// Original: core_waypoint.cpp_CWayPoint_setup_FUN_005ebeb0
// Address: 005ebeb0
void __cdecl CWayPoint::setup(CWayPoint *this_ptr);

// Original: core_waypoint.cpp_CWayPoint_renderOpaque_FUN_005ebf70
// Address: 005ebf70
int __cdecl CWayPoint::renderOpaque(CWayPoint *this_ptr);

// Original: core_waypoint.cpp_CWayPoint_archive_FUN_005ec280
// Address: 005ec280
void __cdecl CWayPoint::archive(CWayPoint *this_ptr);

// Original: core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005ec320
// Address: 005ec320
CWayPoint * __cdecl CWayPoint::findNearestReachable(CWayPoint *this_ptr,CWayPoint *start_waypoint);

// Original: core_waypoint.cpp_CWayPoint_getPropertyList_FUN_005ec4d0
// Address: 005ec4d0
void __cdecl CWayPoint::getPropertyList(CWayPoint *this_ptr,CActorPropertyList *property_list);

// Original: core_waypoint.cpp_CWayPoint_rebuildConnectivity_FUN_005ec4f0
// Address: 005ec4f0
void __cdecl CWayPoint::rebuildConnectivity(CWayPoint *this_ptr);

// Original: core_waypoint.cpp_CWayPoint_processInEditor_FUN_005ec5e0
// Address: 005ec5e0
void __cdecl CWayPoint::processInEditor(CWayPoint *this_ptr);

// Original: core_waypoint.cpp_CWayPoint_onActorDeleted_FUN_005ec610
// Address: 005ec610
void __cdecl CWayPoint::onActorDeleted(CWayPoint *this_ptr,CDemonActor *deleted_actor);

// Original: core_waypoint.cpp_CWayPoint_removeAllAdjTo_FUN_005ec640
// Address: 005ec640
void __cdecl CWayPoint::removeAllAdjTo(CWayPoint *this_ptr,CWayPoint *target);

// Original: core_waypoint.cpp_CWayPoint_showEditorHelp_FUN_005ec690
// Address: 005ec690
void __cdecl CWayPoint::showEditorHelp(CWayPoint *this_ptr,int *y_pos);

// Original: core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700
// Address: 005ec700
void __cdecl CWayPoint::addAdj(CWayPoint *this_ptr,CWayPoint *target);

// Original: core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0
// Address: 005ec7b0
void __cdecl CWayPoint::removeAdj(CWayPoint *this_ptr,int index);

// Original: core_waypoint.cpp_CWayPoint_cleanupAdjacency_FUN_005ec830
// Address: 005ec830
void __cdecl CWayPoint::cleanupAdjacency(CWayPoint *this_ptr);

// Original: core_waypoint.cpp_CWayPoint_dtor_FUN_005ec8d0
// Address: 005ec8d0
CWayPoint * __cdecl CWayPoint::dtor(CWayPoint *this_ptr,uint flags);
