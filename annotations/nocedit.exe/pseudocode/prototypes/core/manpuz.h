#pragma once

// Function prototypes for core/manpuz.cpp
// Generated from Ghidra function signatures

// Original: core_manpuz.cpp_staticInit_FUN_00508890
// Address: 00508890
void staticInit(void);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_factoryFunc_FUN_005088e0
// Address: 005088e0
CMansionPuzzleCircle * CMansionPuzzleCircle::factoryFunc(void);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getActorType_FUN_00508910
// Address: 00508910
CDemonActorType * CMansionPuzzleCircle::getActorType(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00508920
// Address: 00508920
CMansionPuzzleCircle * CMansionPuzzleCircle::ctor(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_00508a70
// Address: 00508a70
void CMansionPuzzleCircle::setup(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0
// Address: 005090d0
int CMansionPuzzleCircle::renderOpaque(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_005091d0
// Address: 005091d0
void CMansionPuzzleCircle::process(CMansionPuzzleCircle * this_ptr, float delta_time);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getBoundingBox_FUN_005092e0
// Address: 005092e0
CBoundingBox3D * CMansionPuzzleCircle::getBoundingBox(CMansionPuzzleCircle * this_ptr, CBoundingBox3D * out_box);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_hasCollision_FUN_00509320
// Address: 00509320
int CMansionPuzzleCircle::hasCollision(CMansionPuzzleCircle * this_ptr, SCollisionInfo * collision_info);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330
// Address: 00509330
float CMansionPuzzleCircle::customRayIntersect(CMansionPuzzleCircle * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720
// Address: 00509720
void CMansionPuzzleCircle::customIntersectCylinderXZ(CMansionPuzzleCircle * this_ptr, SIntersectXZCylinder * cylinder);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customGetFloorHeight_FUN_005097d0
// Address: 005097d0
int CMansionPuzzleCircle::customGetFloorHeight(CMansionPuzzleCircle * this_ptr, float x_pos, float z_pos, float * out_floor_height);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getSurfaceProperties_FUN_005097e0
// Address: 005097e0
void CMansionPuzzleCircle::getSurfaceProperties(CMansionPuzzleCircle * this_ptr, SSurfaceInfo * surface_info);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_005098f0
// Address: 005098f0
void CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509b20
// Address: 00509b20
void CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509bf0
// Address: 00509bf0
void CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509c60
// Address: 00509c60
void CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509d50
// Address: 00509d50
void CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a1f0
// Address: 0050a1f0
void CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290
// Address: 0050a290
void CMansionPuzzleCircle::processPanel(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a420
// Address: 0050a420
void CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_FUN_0050a490
// Address: 0050a490
undefined FUN_0050a490();

// Original: core_manpuz.cpp_FUN_0050a4f0
// Address: 0050a4f0
int FUN_0050a4f0(void * ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a610
// Address: 0050a610
void CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a8d0
// Address: 0050a8d0
void CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0
// Address: 0050aba0
void CMansionPuzzleCircle::shiftPanelLeft(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40
// Address: 0050ad40
void CMansionPuzzleCircle::shiftPanelRight(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_serialize_FUN_0050adf0
// Address: 0050adf0
void CMansionPuzzleCircle::serialize(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050aee0
// Address: 0050aee0
int CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050aef0
// Address: 0050aef0
int CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050af00
// Address: 0050af00
void CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050af80
// Address: 0050af80
void CMansionPuzzleCircle(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040
// Address: 0050b040
int CMansionPuzzleCircle::panelOccupied(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_factoryFunc_FUN_0050b0d0
// Address: 0050b0d0
CMirrorHack * CMirrorHack::factoryFunc(void);

// Original: core_manpuz.cpp_CMirrorHack_getActorType_FUN_0050b100
// Address: 0050b100
CDemonActorType * CMirrorHack::getActorType(CMirrorHack * this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_ctor_FUN_0050b110
// Address: 0050b110
CMirrorHack * CMirrorHack::ctor(CMirrorHack * this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_setup_FUN_0050b160
// Address: 0050b160
void CMirrorHack::setup(CMirrorHack * this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_0050b180
// Address: 0050b180
int CMirrorHack::renderOpaque(CMirrorHack * this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_process_FUN_0050b1d0
// Address: 0050b1d0
void CMirrorHack::process(CMirrorHack * this_ptr, float delta_time);

// Original: core_manpuz.cpp_CMirrorHack_getBoundingBox_FUN_0050b260
// Address: 0050b260
CBoundingBox3D * CMirrorHack::getBoundingBox(CMirrorHack * this_ptr, CBoundingBox3D * out_box);

// Original: core_manpuz.cpp_CMirrorHack_hasCollision_FUN_0050b2b0
// Address: 0050b2b0
int CMirrorHack::hasCollision(CMirrorHack * this_ptr, SCollisionInfo * collision_info);

// Original: core_manpuz.cpp_CMirrorHack_getSurfaceProperties_FUN_0050b2c0
// Address: 0050b2c0
void CMirrorHack::getSurfaceProperties(CMirrorHack * this_ptr, SSurfaceInfo * surface_info);

// Original: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_0050b2f0
// Address: 0050b2f0
void CMirrorHack::getInteractionInfo(CMirrorHack * this_ptr, SInteractionInfo * out_info);

// Original: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_0050b340
// Address: 0050b340
int CMirrorHack::startInteraction(CMirrorHack * this_ptr, CDemonActor * user);

// Original: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_0050b360
// Address: 0050b360
int CMirrorHack::updateInteraction(CMirrorHack * this_ptr, COrientation * user_orientation, SInteractionState * interaction_state);

// Original: core_manpuz.cpp_CMirrorHack_stopUsing_FUN_0050b3c0
// Address: 0050b3c0
void CMirrorHack::stopUsing(CMirrorHack * this_ptr, CDemonActor * user);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getPropertyList_FUN_0050b3e0
// Address: 0050b3e0
void CMansionPuzzleCircle::getPropertyList(CMansionPuzzleCircle * this_ptr, CActorPropertyList * property_list);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440
// Address: 0050b440
void CMansionPuzzleCircle::processInEditor(CMansionPuzzleCircle * this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_writeDependencies_FUN_0050b7d0
// Address: 0050b7d0
void CMansionPuzzleCircle::writeDependencies(CMansionPuzzleCircle * this_ptr, FILE * file_handle);

// Original: core_manpuz.cpp_CMirrorHack_writeDependencies_FUN_0050b810
// Address: 0050b810
void CMirrorHack::writeDependencies(CMirrorHack * this_ptr, FILE * file_handle);

// Original: core_manpuz.cpp_CMirrorHack_dtor_FUN_0050b840
// Address: 0050b840
CMirrorHack * CMirrorHack::dtor(CMirrorHack * this_ptr, uint d1, uint d2);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_0050b890
// Address: 0050b890
CMansionPuzzleCircle * CMansionPuzzleCircle::dtor(CMansionPuzzleCircle * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5);

// Original: core_manpuz.cpp_SReflector_ctor_FUN_0050b920
// Address: 0050b920
SReflector * SReflector::ctor(SReflector * this_ptr);

// Original: core_manpuz.cpp_SReflector_dtor_FUN_0050b930
// Address: 0050b930
SReflector * SReflector::dtor(SReflector * this_ptr);

// Original: core_manpuz.cpp_SGem_ctor_FUN_0050b940
// Address: 0050b940
SGem * SGem::ctor(SGem * this_ptr);

// Original: core_manpuz.cpp_SGem_dtor_FUN_0050b960
// Address: 0050b960
SGem * SGem::dtor(SGem * this_ptr);

// Original: core_manpuz.cpp_SPanel_ctor_FUN_0050b980
// Address: 0050b980
SPanel * SPanel::ctor(SPanel * this_ptr);

// Original: core_manpuz.cpp_SPanel_dtor_FUN_0050b990
// Address: 0050b990
SPanel * SPanel::dtor(SPanel * this_ptr);

// Original: core_manpuz.cpp_FUN_0050b9a0
// Address: 0050b9a0
undefined FUN_0050b9a0();

// Original: core_manpuz.cpp_freeTriangles_FUN_0050ba70
// Address: 0050ba70
void freeTriangles(CDemonTriangle * * objs);

// Original: core_manpuz.cpp_freePanels_FUN_0050ba90
// Address: 0050ba90
void freePanels(SPanel * * objs);

// Original: core_manpuz.cpp_freeGems_FUN_0050bab0
// Address: 0050bab0
void freeGems(SGem * * objs);

// Original: core_manpuz.cpp_freeReflectors_FUN_0050bad0
// Address: 0050bad0
void freeReflectors(SReflector * * objs);
