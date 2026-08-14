#pragma once

// Function prototypes for core/path.cpp
// Generated from Ghidra function signatures

// Original: core_path.cpp_resetPathfindingQueue_FUN_00546310
// Address: 00546310
void __cdecl resetPathfindingQueue(void);

// Original: core_path.cpp_isPathfindingQueueEmpty_FUN_00546330
// Address: 00546330
int __cdecl isPathfindingQueueEmpty(void);

// Original: core_path.cpp_queuePush_FUN_00546350
// Address: 00546350
void __cdecl queuePush(int grid_x,int cost,int grid_z,char direction);

// Original: core_path.cpp_queuePop_FUN_005463d0
// Address: 005463d0
void __cdecl queuePop(int *out_x,int *out_cost,int *out_z);

// Original: core_path.cpp_CPathMap_ctor_FUN_00546450
// Address: 00546450
CPathMap * __cdecl CPathMap::ctor(CPathMap *this_ptr);

// Original: core_path.cpp_CPathMap_dtor_FUN_005464d0
// Address: 005464d0
CPathMap * __cdecl CPathMap::dtor(CPathMap *this_ptr,uint flags);

// Original: core_path.cpp_CPathMap_getDirection_FUN_005465b0
// Address: 005465b0
float __cdecl CPathMap::getDirection(CPathMap *this_ptr,int current_direction,int next_direction,int prev_direction,CVector3f *dest_position);

// Original: core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
// Address: 00546a60
void __cdecl CPathMap::updateIfNeeded(CPathMap *this_ptr,CVector3f *source_position,int force_update);

// Original: core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
// Address: 00546ba0
int __cdecl CPathMap::getCachedVoxelHeight(CPathMap *this_ptr,int grid_z,int grid_x,int current_height);

// Original: core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40
// Address: 00546c40
int __cdecl CPathMap::isLineWalkable(CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z,int end_height);

// Original: core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
// Address: 00546e90
int __cdecl CPathMap::checkAxisAlignedPath(CPathMap *this_ptr,int start_x,int start_z,int end_x,int end_z);

// Original: core_path.cpp_CPathMap_findPathToDestination_FUN_00547320
// Address: 00547320
int __cdecl CPathMap::findPathToDestination(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint);

// Original: core_path.cpp_CPathMap_previewPathfinding_FUN_00547c00
// Address: 00547c00
void __cdecl CPathMap::previewPathfinding(CPathMap *this_ptr);

// Original: core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
// Address: 00547d00
int __cdecl CPathMap::findPathWithRetry(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint);

// Original: core_path.cpp_renderGridQuad_FUN_00547dd0
// Address: 00547dd0
void __cdecl renderGridQuad(int grid_x,int grid_y,int grid_z,int red,int green,int blue,int alpha);

// Original: core_path.cpp_CPathMap_renderPathMap_FUN_00547fc0
// Address: 00547fc0
void __cdecl CPathMap::renderPathMap(CPathMap *this_ptr,int depth,int red,int green,int fog);

// Original: core_path.cpp_getOrCreatePathMap_FUN_00548390
// Address: 00548390
CPathMap * __cdecl getOrCreatePathMap(CLocation *location);

// Original: core_path.cpp_getPathMap_FUN_00548500
// Address: 00548500
CPathMap * __cdecl getPathMap(CLocation *location);

// Original: core_path.cpp_CPathMap_reset_FUN_00548510
// Address: 00548510
void __cdecl CPathMap::reset(CPathMap *this_ptr);

// Original: core_path.cpp_resetAllPathMaps_FUN_00548590
// Address: 00548590
void __cdecl resetAllPathMaps(void);

// Original: core_path.cpp_renderAllPathMaps_FUN_005485f0
// Address: 005485f0
void __cdecl renderAllPathMaps(int depth,int red,int green,int fog);

// Original: core_path.cpp_renderPathMapsAtPosition_FUN_00548680
// Address: 00548680
void __cdecl renderPathMapsAtPosition(CVector3f *position,int depth,int red,int green,int fog);

// Original: core_path.cpp_CPathMap_setupPathSearch_FUN_00548750
// Address: 00548750
void __cdecl CPathMap::setupPathSearch(CPathMap *this_ptr);

// Original: core_path.cpp_CPathMap_searchGrid_FUN_005487a0
// Address: 005487a0
uint __cdecl CPathMap::searchGrid(CPathMap *this_ptr,int start_height);

// Original: core_path.cpp_CPathMap_arrdtor_FUN_00548c30
// Address: 00548c30
CPathMap * __cdecl CPathMap::arrdtor(CPathMap *this_ptr,uint flags);
