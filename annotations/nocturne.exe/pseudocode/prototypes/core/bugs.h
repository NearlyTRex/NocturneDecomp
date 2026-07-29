#pragma once

// Function prototypes for core/bugs.cpp
// Generated from Ghidra function signatures

// Original: core_bugs.cpp_staticInit_FUN_00420fe0
// Address: 00420fe0
void __cdecl staticInit(void);

// Original: core_bugs.cpp_FUN_00421010
// Address: 00421010
void FUN_00421010(void);

// Original: core_bugs.cpp_FUN_00421030
// Address: 00421030
CDemonActorType * FUN_00421030(void);

// Original: core_bugs.cpp_CBugs_ctor_FUN_00421040
// Address: 00421040
CBugs * __cdecl CBugs::ctor(CBugs *this_ptr);

// Original: core_bugs.cpp_CBugs_setup_FUN_004211e0
// Address: 004211e0
void CBugs::setup(CBugs *param_1);

// Original: core_bugs.cpp_FUN_00421480
// Address: 00421480
void FUN_00421480(CBugs *param_1,float param_2);

// Original: core_bugs.cpp_FUN_00421540
// Address: 00421540
int FUN_00421540(CDemonActor *param_1);

// Original: core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_004216d0
// Address: 004216d0
void CBugs::renderGroundHeightGrid(int param_1);

// Original: core_bugs.cpp_FUN_00421840
// Address: 00421840
undefined4 * FUN_00421840(int param_1,undefined4 *param_2);

// Original: core_bugs.cpp_CBugs_archive_FUN_00421880
// Address: 00421880
void CBugs::archive(CEnemy *param_1);

// Original: core_bugs.cpp_FUN_004219a0
// Address: 004219a0
undefined4 FUN_004219a0(void);

// Original: core_bugs.cpp_CBugs_getDeathState_FUN_004219b0
// Address: 004219b0
undefined4 CBugs::getDeathState(int param_1);

// Original: core_bugs.cpp_FUN_004219d0
// Address: 004219d0
void FUN_004219d0(CEnemy *param_1,SDamageInfo *param_2);

// Original: core_bugs.cpp_FUN_004219f0
// Address: 004219f0
void __cdecl FUN_004219f0(CBugs *this_ptr,int tri_count,SInputFace *triangles);

// Original: core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421ad0
// Address: 00421ad0
void __cdecl CBugs::addSwarmGraphEdge(CBugs *this_ptr,int vertex_index,int neighbor_index,int first_edge_data);

// Original: core_bugs.cpp_FUN_00421b80
// Address: 00421b80
void __cdecl FUN_00421b80(CBugs *this_ptr);

// Original: core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00421f00
// Address: 00421f00
float __cdecl CBugs::sampleGroundHeight(CBugs *this_ptr,float x,float z);

// Original: core_bugs.cpp_FUN_00422050
// Address: 00422050
void __cdecl FUN_00422050(CBugs *this_ptr,float delta_time);

// Original: core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370
// Address: 00422370
void __cdecl CBugs::attackSwarmTarget(CBugs *this_ptr,float delta_time);

// Original: core_bugs.cpp_CBugs_updateBoundingBox_FUN_004227a0
// Address: 004227a0
void __cdecl CBugs::updateBoundingBox(CBugs *this_ptr,float delta_time);

// Original: core_bugs.cpp_CBugs_updateBugPathfinding_FUN_004227b0
// Address: 004227b0
int __cdecl CBugs::updateBugPathfinding(CBugs *this_ptr,SBug *bug_data,float delta_time,CVector3f *dest_vertex);

// Original: core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70
// Address: 00422c70
void CBugs::updateBugRenderingData(CBugs *param_1,SBug *param_2,float param_3);

// Original: core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00423480
// Address: 00423480
void __cdecl CBugs::findNextSwarmVertex(CBugs *this_ptr,SBug *bug_data);

// Original: core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680
// Address: 00423680
void __cdecl CBugs::recalculateBoundingBox(CBugs *this_ptr);

// Original: core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423790
// Address: 00423790
void __cdecl CBugs::setSwarmTarget(CBugs *this_ptr,CDemonActor *target);

// Original: core_bugs.cpp_CBugs_applySwarmTranslation_FUN_00423a50
// Address: 00423a50
void __cdecl CBugs::applySwarmTranslation(CBugs *this_ptr,CVector3f *new_position);

// Original: core_bugs.cpp_createVector_FUN_00423b70
// Address: 00423b70
CVector3f * __cdecl createVector(CVector3f *dest,float x,float y,float z);

// Original: core_bugs.cpp_scaleVector_FUN_00423b90
// Address: 00423b90
CVector3f * __cdecl scaleVector(CVector3f *dest,CVector3f *src);

// Original: core_bugs.cpp_subtractVector_FUN_00423bb0
// Address: 00423bb0
CVector3f * __cdecl subtractVector(CVector3f *dest,CVector3f *src);

// Original: core_bugs.cpp_crossVector_FUN_00423be0
// Address: 00423be0
CVector3f * __cdecl crossVector(CVector3f *a,CVector3f *result,CVector3f *b);

// Original: core_bugs.cpp_normalizeVector_FUN_00423c20
// Address: 00423c20
void __cdecl normalizeVector(CVector3f *dest);

// Original: core_bugs.cpp_convertVector_FUN_00423c90
// Address: 00423c90
CVector3i * __cdecl convertVector(CVector3f *dest,CVector3i *src);

// Original: core_bugs.cpp_copyVectorToPair_FUN_00423cc0
// Address: 00423cc0
CVector3i * __cdecl copyVectorToPair(CVector3i *dest,CVector3i *src);

// Original: core_bugs.cpp_getBugVertex_FUN_00423d00
// Address: 00423d00
int __cdecl getBugVertex(SBug *bug_data,int bug_index);

// Original: core_bugs.cpp_FUN_00423d20
// Address: 00423d20
undefined4 FUN_00423d20(void);

// Original: core_bugs.cpp_getDeformableModelName_FUN_00423d30
// Address: 00423d30
char * __cdecl getDeformableModelName(CDeformableModelInstance *model_ptr);

// Original: core_bugs.cpp_swapIntegers_FUN_00423d40
// Address: 00423d40
int * __cdecl swapIntegers(int *a,int *b);

// Original: core_bugs.cpp_maxFloat_FUN_00423d60
// Address: 00423d60
float __cdecl maxFloat(float a,float b);

// Original: core_bugs.cpp_CBugs_dtor_FUN_00423d90
// Address: 00423d90
CBugs * __cdecl CBugs::dtor(CBugs *this_ptr,uint flags);

// Original: core_bugs.cpp_FUN_00423e60
// Address: 00423e60
undefined4 FUN_00423e60(undefined4 param_1);

// Original: core_bugs.cpp_FUN_00423e70
// Address: 00423e70
undefined4 FUN_00423e70(undefined4 param_1);

// Original: core_bugs.cpp_FUN_00423e80
// Address: 00423e80
void FUN_00423e80(void *param_1);
