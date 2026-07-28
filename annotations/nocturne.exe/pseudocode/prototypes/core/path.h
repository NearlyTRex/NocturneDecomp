#pragma once

// Function prototypes for core/path.cpp
// Generated from Ghidra function signatures

// Original: core_path.cpp_FUN_004efc10
// Address: 004efc10
void FUN_004efc10(void);

// Original: core_path.cpp_isPathfindingQueueEmpty_FUN_004efc30
// Address: 004efc30
int isPathfindingQueueEmpty(void);

// Original: core_path.cpp_queuePush_FUN_004efc50
// Address: 004efc50
void queuePush(void);

// Original: core_path.cpp_queuePop_FUN_004efcd0
// Address: 004efcd0
void queuePop(void);

// Original: core_path.cpp_CPathMap_ctor_FUN_004efd50
// Address: 004efd50
CPathMap * __cdecl CPathMap::ctor(CPathMap *this_ptr);

// Original: core_path.cpp_CPathMap_dtor_FUN_004efdd0
// Address: 004efdd0
CPathMap * __cdecl CPathMap::dtor(CPathMap *this_ptr,uint flags);

// Original: core_path.cpp_CPathMap_getDirection_FUN_004efeb0
// Address: 004efeb0
float CPathMap::getDirection(float *param_1,int param_2,int param_3,int param_4,float *param_5);

// Original: core_path.cpp_CPathMap_updateIfNeeded_FUN_004f0360
// Address: 004f0360
void __cdecl CPathMap::updateIfNeeded(CPathMap *this_ptr,CVector3f *source_position,int force_update);

// Original: core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
// Address: 004f04a0
int __cdecl CPathMap::getCachedVoxelHeight(CPathMap *this_ptr,int grid_z,int grid_x,int current_height);

// Original: core_path.cpp_CPathMap_isLineWalkable_FUN_004f0540
// Address: 004f0540
int __cdecl CPathMap::isLineWalkable(CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z,int end_height);

// Original: core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_004f0790
// Address: 004f0790
int __cdecl CPathMap::checkAxisAlignedPath(CPathMap *this_ptr,int start_x,int start_z,int end_x,int end_z);

// Original: core_path.cpp_CPathMap_findPathToDestination_FUN_004f0c20
// Address: 004f0c20
int __cdecl CPathMap::findPathToDestination(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint);

// Original: core_path.cpp_CPathMap_previewPathfinding_FUN_004f1500
// Address: 004f1500
void CPathMap::previewPathfinding(void);

// Original: core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600
// Address: 004f1600
int __cdecl CPathMap::findPathWithRetry(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint);

// Original: core_path.cpp_renderGridQuad_FUN_004f16d0
// Address: 004f16d0
void renderGridQuad(void);

// Original: core_path.cpp_CPathMap_renderPathMap_FUN_004f18c0
// Address: 004f18c0
void __cdecl CPathMap::renderPathMap(CPathMap *this_ptr,int depth,int red,int green,int fog);

// Original: core_path.cpp_getOrCreatePathMap_FUN_004f1c90
// Address: 004f1c90
CPathMap * __cdecl getOrCreatePathMap(CLocation *location);

// Original: core_path.cpp_getPathMap_FUN_004f1e00
// Address: 004f1e00
CPathMap * __cdecl getPathMap(CLocation *location);

// Original: core_path.cpp_CPathMap_reset_FUN_004f1e10
// Address: 004f1e10
void CPathMap::reset(int param_1);

// Original: core_path.cpp_resetAllPathMaps_FUN_004f1e90
// Address: 004f1e90
void __cdecl resetAllPathMaps(void);

// Original: core_path.cpp_renderAllPathMaps_FUN_004f1ef0
// Address: 004f1ef0
void renderAllPathMaps(int param_1,int param_2,int param_3,int param_4);

// Original: core_path.cpp_renderPathMapsAtPosition_FUN_004f1f80
// Address: 004f1f80
void renderPathMapsAtPosition(undefined4 param_1,int param_2,int param_3,int param_4,int param_5);

// Original: core_path.cpp_CPathMap_setupPathSearch_FUN_004f2050
// Address: 004f2050
void CPathMap::setupPathSearch(CPathMap *param_1);

// Original: core_path.cpp_CPathMap_searchGrid_FUN_004f20a0
// Address: 004f20a0
uint __cdecl CPathMap::searchGrid(CPathMap *this_ptr,int start_height);

// Original: core_path.cpp_FUN_004f2530
// Address: 004f2530
void FUN_004f2530(void *param_1);
