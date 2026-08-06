#pragma once

// Function prototypes for core/manpuz.cpp
// Generated from Ghidra function signatures

// Original: core_manpuz.cpp_staticInit_FUN_004c93b0
// Address: 004c93b0
void __cdecl staticInit(void);

// Original: core_manpuz.cpp_factoryFunc_FUN_004c9400
// Address: 004c9400
CMansionPuzzleCircle * __cdecl factoryFunc(void);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getActorType_FUN_004c9420
// Address: 004c9420
CDemonActorType * __cdecl CMansionPuzzleCircle::getActorType(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_004c9430
// Address: 004c9430
CMansionPuzzleCircle * __cdecl CMansionPuzzleCircle::ctor(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_004c9580
// Address: 004c9580
void __cdecl CMansionPuzzleCircle::setup(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_004c9be0
// Address: 004c9be0
int __cdecl CMansionPuzzleCircle::renderOpaque(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_004c9cf0
// Address: 004c9cf0
void __cdecl CMansionPuzzleCircle::process(CMansionPuzzleCircle *this_ptr,float delta_time);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getBoundingBox_FUN_004c9e00
// Address: 004c9e00
CBoundingBox3D * __cdecl CMansionPuzzleCircle::getBoundingBox(CMansionPuzzleCircle *this_ptr,CBoundingBox3D *out_box);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getCollisionType_FUN_004c9e40
// Address: 004c9e40
ECollisionType __cdecl CMansionPuzzleCircle::getCollisionType(CMansionPuzzleCircle *this_ptr,SCollisionInfo *collision_info);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50
// Address: 004c9e50
float __cdecl CMansionPuzzleCircle::customRayIntersect(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_004ca240
// Address: 004ca240
void __cdecl CMansionPuzzleCircle::customIntersectCylinderXZ(CMansionPuzzleCircle *this_ptr,SIntersectXZCylinder *cylinder);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customGetFloorHeight_FUN_004ca2f0
// Address: 004ca2f0
int __cdecl CMansionPuzzleCircle::customGetFloorHeight(CMansionPuzzleCircle *this_ptr,CVector3f *position,float search_radius,float *out_floor_height);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_004ca300
// Address: 004ca300
void __cdecl CMansionPuzzleCircle::onLaserHit(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_004ca410
// Address: 004ca410
void __cdecl CMansionPuzzleCircle(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640
// Address: 004ca640
void __cdecl CMansionPuzzleCircle::updatePanelTransform(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_004ca710
// Address: 004ca710
void __cdecl CMansionPuzzleCircle(CMansionPuzzleCircle *this_ptr,int param_2);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_004ca790
// Address: 004ca790
void __cdecl CMansionPuzzleCircle(CMansionPuzzleCircle *this_ptr,int gem_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_renderReflector_FUN_004cabf0
// Address: 004cabf0
void __cdecl CMansionPuzzleCircle::renderReflector(CMansionPuzzleCircle *this_ptr,int reflector_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90
// Address: 004cac90
void __cdecl CMansionPuzzleCircle::processPanel(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20
// Address: 004cae20
void __cdecl CMansionPuzzleCircle::getPanelColor(CMansionPuzzleCircle *this_ptr,int panel_index,float *out_r,float *out_g,float *out_b);

// Original: core_manpuz.cpp_updateGemHumChannel_FUN_004caef0
// Address: 004caef0
int __cdecl updateGemHumChannel(float *hum_value,float target,float max_step,uint *sfx_handle,char *wav_filename,CVector3f *world_position);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_FUN_004cb010
// Address: 004cb010
void __cdecl CMansionPuzzleCircle(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0
// Address: 004cb2d0
void __cdecl CMansionPuzzleCircle::updateLaser(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0
// Address: 004cb5a0
void __cdecl CMansionPuzzleCircle::shiftPanelLeft(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740
// Address: 004cb740
void __cdecl CMansionPuzzleCircle::shiftPanelRight(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_004cb7f0
// Address: 004cb7f0
void __cdecl CMansionPuzzleCircle::archive(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0
// Address: 004cb8e0
int __cdecl CMansionPuzzleCircle::getNextPanelIndex(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0
// Address: 004cb8f0
int __cdecl CMansionPuzzleCircle::getPrevPanelIndex(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_004cb900
// Address: 004cb900
void __cdecl CMansionPuzzleCircle::updateReflector(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_004cb980
// Address: 004cb980
void __cdecl CMansionPuzzleCircle::updateReflectorPosition(CMansionPuzzleCircle *this_ptr,int reflector_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40
// Address: 004cba40
int __cdecl CMansionPuzzleCircle::panelOccupied(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_factoryFunc_FUN_004cbad0
// Address: 004cbad0
CMirrorHack * __cdecl factoryFunc(void);

// Original: core_manpuz.cpp_CMirrorHack_getActorType_FUN_004cbaf0
// Address: 004cbaf0
CDemonActorType * __cdecl CMirrorHack::getActorType(CMirrorHack *this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_ctor_FUN_004cbb00
// Address: 004cbb00
CMirrorHack * __cdecl CMirrorHack::ctor(CMirrorHack *this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_setup_FUN_004cbb50
// Address: 004cbb50
void __cdecl CMirrorHack::setup(CMirrorHack *this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_004cbb70
// Address: 004cbb70
int __cdecl CMirrorHack::renderOpaque(CMirrorHack *this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_process_FUN_004cbbc0
// Address: 004cbbc0
void __cdecl CMirrorHack::process(CMirrorHack *this_ptr,float delta_time);

// Original: core_manpuz.cpp_CMirrorHack_getBoundingBox_FUN_004cbc50
// Address: 004cbc50
CBoundingBox3D * __cdecl CMirrorHack::getBoundingBox(CMirrorHack *this_ptr,CBoundingBox3D *out_box);

// Original: core_manpuz.cpp_CMirrorHack_getCollisionType_FUN_004cbca0
// Address: 004cbca0
ECollisionType __cdecl CMirrorHack::getCollisionType(CMirrorHack *this_ptr,SCollisionInfo *collision_info);

// Original: core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_004cbcb0
// Address: 004cbcb0
void __cdecl CMirrorHack::onLaserHit(CMirrorHack *this_ptr,SLaserInfo *laser_info);

// Original: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_004cbce0
// Address: 004cbce0
void __cdecl CMirrorHack::getInteractionInfo(CMirrorHack *this_ptr,SInteractionInfo *out_info);

// Original: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_004cbd30
// Address: 004cbd30
int __cdecl CMirrorHack::startInteraction(CMirrorHack *this_ptr,CDemonActor *user);

// Original: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_004cbd50
// Address: 004cbd50
int __cdecl CMirrorHack::updateInteraction(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerInput *player_control);

// Original: core_manpuz.cpp_CMirrorHack_stopUsing_FUN_004cbdb0
// Address: 004cbdb0
void __cdecl CMirrorHack::stopUsing(CMirrorHack *this_ptr,CDemonActor *user);

// Original: core_manpuz.cpp_CMirrorHack_dtor_FUN_004cbdd0
// Address: 004cbdd0
CMirrorHack * __cdecl CMirrorHack::dtor(CMirrorHack *this_ptr,uint flags);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20
// Address: 004cbe20
CMansionPuzzleCircle * __cdecl CMansionPuzzleCircle::dtor(CMansionPuzzleCircle *this_ptr,uint flags);

// Original: core_manpuz.cpp_SReflector_ctor_FUN_004cbeb0
// Address: 004cbeb0
SReflector * __cdecl SReflector::ctor(SReflector *this_ptr);

// Original: core_manpuz.cpp_SReflector_dtor_FUN_004cbec0
// Address: 004cbec0
SReflector * __cdecl SReflector::dtor(SReflector *this_ptr,uint flags);

// Original: core_manpuz.cpp_SGem_ctor_FUN_004cbed0
// Address: 004cbed0
SGem * __cdecl SGem::ctor(SGem *this_ptr);

// Original: core_manpuz.cpp_SGem_dtor_FUN_004cbef0
// Address: 004cbef0
SGem * __cdecl SGem::dtor(SGem *this_ptr,uint flags);

// Original: core_manpuz.cpp_SPanel_ctor_FUN_004cbf10
// Address: 004cbf10
SPanel * __cdecl SPanel::ctor(SPanel *this_ptr);

// Original: core_manpuz.cpp_SPanel_dtor_FUN_004cbf20
// Address: 004cbf20
SPanel * __cdecl SPanel::dtor(SPanel *this_ptr,uint flags);

// Original: core_manpuz.cpp_copyPanel_FUN_004cbf30
// Address: 004cbf30
SPanel * __cdecl copyPanel(SPanel *dest,SPanel *src);

// Original: core_manpuz.cpp_CDemonTriangle_arrdtor_FUN_004cc000
// Address: 004cc000
CDemonTriangle * __cdecl CDemonTriangle::arrdtor(CDemonTriangle *this_ptr,uint flags);

// Original: core_manpuz.cpp_SPanel_arrdtor_FUN_004cc020
// Address: 004cc020
SPanel * __cdecl SPanel::arrdtor(SPanel *this_ptr,uint flags);

// Original: core_manpuz.cpp_SGem_arrdtor_FUN_004cc040
// Address: 004cc040
SGem * __cdecl SGem::arrdtor(SGem *this_ptr,uint flags);

// Original: core_manpuz.cpp_SReflector_arrdtor_FUN_004cc060
// Address: 004cc060
SReflector * __cdecl SReflector::arrdtor(SReflector *this_ptr,uint flags);
