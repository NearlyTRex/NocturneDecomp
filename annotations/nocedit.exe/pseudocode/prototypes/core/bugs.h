#pragma once

// Function prototypes for core/bugs.cpp
// Generated from Ghidra function signatures

// Original: core_bugs.cpp_staticInit_FUN_00424c40
// Address: 00424c40
void __cdecl staticInit(void);

// Original: core_bugs.cpp_factoryFunc_FUN_00424c70
// Address: 00424c70
CBugs * __cdecl factoryFunc(void);

// Original: core_bugs.cpp_CBugs_getActorType_FUN_00424ca0
// Address: 00424ca0
CDemonActorType * __cdecl CBugs::getActorType(CBugs *this_ptr);

// Original: core_bugs.cpp_CBugs_ctor_FUN_00424cb0
// Address: 00424cb0
CBugs * __cdecl CBugs::ctor(CBugs *this_ptr);

// Original: core_bugs.cpp_CBugs_setup_FUN_00424e50
// Address: 00424e50
void __cdecl CBugs::setup(CBugs *this_ptr);

// Original: core_bugs.cpp_CBugs_process_FUN_004250f0
// Address: 004250f0
void __cdecl CBugs::process(CBugs *this_ptr,float delta_time);

// Original: core_bugs.cpp_CBugs_renderOpaque_FUN_004251b0
// Address: 004251b0
int __cdecl CBugs::renderOpaque(CBugs *this_ptr);

// Original: core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_00425340
// Address: 00425340
void __cdecl CBugs::renderGroundHeightGrid(CBugs *this_ptr);

// Original: core_bugs.cpp_CBugs_getBoundingBox_FUN_004254b0
// Address: 004254b0
CBoundingBox3D * __cdecl CBugs::getBoundingBox(CBugs *this_ptr,CBoundingBox3D *out_box);

// Original: core_bugs.cpp_CBugs_archive_FUN_004254f0
// Address: 004254f0
void __cdecl CBugs::archive(CBugs *this_ptr);

// Original: core_bugs.cpp_CBugs_getCollisionType_FUN_00425610
// Address: 00425610
ECollisionType __cdecl CBugs::getCollisionType(CBugs *this_ptr,SCollisionInfo *collision_info);

// Original: core_bugs.cpp_CBugs_getDeathState_FUN_00425620
// Address: 00425620
EDeathState __cdecl CBugs::getDeathState(CBugs *this_ptr);

// Original: core_bugs.cpp_CBugs_processDamage_FUN_00425640
// Address: 00425640
void __cdecl CBugs::processDamage(CBugs *this_ptr,SDamageInfo *damage_info);

// Original: core_bugs.cpp_CBugs_initializeSwarmGraph_FUN_00425660
// Address: 00425660
void __cdecl CBugs::initializeSwarmGraph(CBugs *this_ptr,int tri_count,SInputFace *triangles);

// Original: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740
// Address: 00425740
void __cdecl CBugs::addSwarmGraphEdge(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data);

// Original: core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_004257f0
// Address: 004257f0
void __cdecl CBugs::updateGroundHeightGrid(CBugs *this_ptr);

// Original: core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00425b70
// Address: 00425b70
float __cdecl CBugs::sampleGroundHeight(CBugs *this_ptr,float x,float z);

// Original: core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00425cc0
// Address: 00425cc0
void __cdecl CBugs::updateBugsBehavior(CBugs *this_ptr,float delta_time);

// Original: core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00425fe0
// Address: 00425fe0
void __cdecl CBugs::attackSwarmTarget(CBugs *this_ptr,float delta_time);

// Original: core_bugs.cpp_CBugs_updateBoundingBox_FUN_00426410
// Address: 00426410
void __cdecl CBugs::updateBoundingBox(CBugs *this_ptr,float delta_time);

// Original: core_bugs.cpp_CBugs_updateBugPathfinding_FUN_00426420
// Address: 00426420
int __cdecl CBugs::updateBugPathfinding(CBugs *this_ptr,SBug *bug_data,float delta_time,CVector3f *dest_vertex);

// Original: core_bugs.cpp_CBugs_updateBugRenderingData_FUN_004268e0
// Address: 004268e0
void __cdecl CBugs::updateBugRenderingData(CBugs *this_ptr,SBug *bug_data,float delta_time);

// Original: core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_004270f0
// Address: 004270f0
void __cdecl CBugs::findNextSwarmVertex(CBugs *this_ptr,SBug *bug_data);

// Original: core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_004272f0
// Address: 004272f0
void __cdecl CBugs::recalculateBoundingBox(CBugs *this_ptr);

// Original: core_bugs.cpp_CBugs_setSwarmTarget_FUN_00427400
// Address: 00427400
void __cdecl CBugs::setSwarmTarget(CBugs *this_ptr,CDemonActor *target);

// Original: core_bugs.cpp_CBugs_applySwarmTranslation_FUN_004276c0
// Address: 004276c0
void __cdecl CBugs::applySwarmTranslation(CBugs *this_ptr,CVector3f *new_position);

// Original: core_bugs.cpp_CBugs_getPropertyList_FUN_004277e0
// Address: 004277e0
void __cdecl CBugs::getPropertyList(CBugs *this_ptr,CActorPropertyList *property_list);

// Original: core_bugs.cpp_CBugs_processInEditor_FUN_004278d0
// Address: 004278d0
void __cdecl CBugs::processInEditor(CBugs *this_ptr);

// Original: core_bugs.cpp_createVector_FUN_004279b0
// Address: 004279b0
CVector3f * __cdecl createVector(CVector3f *dest,float x,float y,float z);

// Original: core_bugs.cpp_scaleVector_FUN_004279d0
// Address: 004279d0
CVector3f * __cdecl scaleVector(CVector3f *dest,CVector3f *src);

// Original: core_bugs.cpp_subtractVector_FUN_004279f0
// Address: 004279f0
CVector3f * __cdecl subtractVector(CVector3f *dest,CVector3f *src);

// Original: core_bugs.cpp_crossVector_FUN_00427a20
// Address: 00427a20
CVector3f * __cdecl crossVector(CVector3f *a,CVector3f *result,CVector3f *b);

// Original: core_bugs.cpp_normalizeVector_FUN_00427a60
// Address: 00427a60
void __cdecl normalizeVector(CVector3f *dest);

// Original: core_bugs.cpp_convertVector_FUN_00427ad0
// Address: 00427ad0
CVector3i * __cdecl convertVector(CVector3f *dest,CVector3i *src);

// Original: core_bugs.cpp_copyVectorToPair_FUN_00427b00
// Address: 00427b00
CVector3i * __cdecl copyVectorToPair(CVector3i *dest,CVector3i *src);

// Original: core_bugs.cpp_getBugVertex_FUN_00427b40
// Address: 00427b40
int __cdecl getBugVertex(SBug *bug_data,int bug_index);

// Original: core_bugs.cpp_getBugState_FUN_00427b60
// Address: 00427b60
int __cdecl getBugState(SBug *bug_data);

// Original: core_bugs.cpp_getDeformableModelName_FUN_00427b70
// Address: 00427b70
char * __cdecl getDeformableModelName(CDeformableModelInstance *model_ptr);

// Original: core_bugs.cpp_swapIntegers_FUN_00427b80
// Address: 00427b80
int * __cdecl swapIntegers(int *a,int *b);

// Original: core_bugs.cpp_maxFloat_FUN_00427ba0
// Address: 00427ba0
float __cdecl maxFloat(float a,float b);

// Original: core_bugs.cpp_CBugs_dtor_FUN_00427bd0
// Address: 00427bd0
CBugs * __cdecl CBugs::dtor(CBugs *this_ptr,uint flags);

// Original: core_bugs.cpp_SBug_ctor_FUN_00427ca0
// Address: 00427ca0
SBug * __cdecl SBug::ctor(SBug *this_ptr);

// Original: core_bugs.cpp_SBug_dtor_FUN_00427cb0
// Address: 00427cb0
SBug * __cdecl SBug::dtor(SBug *this_ptr,uint flags);

// Original: core_bugs.cpp_SBug_arrdtor_FUN_00427cc0
// Address: 00427cc0
SBug * __cdecl SBug::arrdtor(SBug *objs,uint flags);
