#pragma once

// Function prototypes for core/manpuz.cpp
// Generated from Ghidra function signatures

// Original: core_manpuz.cpp_staticInit_FUN_00508890
// Address: 00508890
void __cdecl staticInit(void);

// Original: core_manpuz.cpp_factoryFunc_FUN_005088e0
// Address: 005088e0
CMansionPuzzleCircle * __cdecl factoryFunc(void);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getActorType_FUN_00508910
// Address: 00508910
CDemonActorType * __cdecl CMansionPuzzleCircle::getActorType(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_00508920
// Address: 00508920
CMansionPuzzleCircle * __cdecl CMansionPuzzleCircle::ctor(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_00508a70
// Address: 00508a70
void __cdecl CMansionPuzzleCircle::setup(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0
// Address: 005090d0
int __cdecl CMansionPuzzleCircle::renderOpaque(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_005091d0
// Address: 005091d0
void __cdecl CMansionPuzzleCircle::process(CMansionPuzzleCircle *this_ptr,float delta_time);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getBoundingBox_FUN_005092e0
// Address: 005092e0
CBoundingBox3D * __cdecl CMansionPuzzleCircle::getBoundingBox(CMansionPuzzleCircle *this_ptr,CBoundingBox3D *out_box);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getCollisionType_FUN_00509320
// Address: 00509320
ECollisionType __cdecl CMansionPuzzleCircle::getCollisionType(CMansionPuzzleCircle *this_ptr,SCollisionInfo *collision_info);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_00509330
// Address: 00509330
float __cdecl CMansionPuzzleCircle::customRayIntersect(CMansionPuzzleCircle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720
// Address: 00509720
void __cdecl CMansionPuzzleCircle::customIntersectCylinderXZ(CMansionPuzzleCircle *this_ptr,SIntersectXZCylinder *cylinder);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customGetFloorHeight_FUN_005097d0
// Address: 005097d0
int __cdecl CMansionPuzzleCircle::customGetFloorHeight(CMansionPuzzleCircle *this_ptr,CVector3f *position,float search_radius,float *out_floor_height);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_005097e0
// Address: 005097e0
void __cdecl CMansionPuzzleCircle::onLaserHit(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_005098f0
// Address: 005098f0
void __cdecl CMansionPuzzleCircle::initPuzzleState(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00509b20
// Address: 00509b20
void __cdecl CMansionPuzzleCircle::updatePanelTransform(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_renderPanel_FUN_00509bf0
// Address: 00509bf0
void __cdecl CMansionPuzzleCircle::renderPanel(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_renderEmitter_FUN_00509c60
// Address: 00509c60
void __cdecl CMansionPuzzleCircle::renderEmitter(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_renderGem_FUN_00509d50
// Address: 00509d50
void __cdecl CMansionPuzzleCircle::renderGem(CMansionPuzzleCircle *this_ptr,int gem_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_renderReflector_FUN_0050a1f0
// Address: 0050a1f0
void __cdecl CMansionPuzzleCircle::renderReflector(CMansionPuzzleCircle *this_ptr,int reflector_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290
// Address: 0050a290
void __cdecl CMansionPuzzleCircle::processPanel(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_0050a420
// Address: 0050a420
void __cdecl CMansionPuzzleCircle::getPanelColor(CMansionPuzzleCircle *this_ptr,int panel_index,float *out_r,float *out_g,float *out_b);

// Original: core_manpuz.cpp_stepToward_FUN_0050a490
// Address: 0050a490
int __cdecl stepToward(float *value,float target,float max_step);

// Original: core_manpuz.cpp_updateGemHumChannel_FUN_0050a4f0
// Address: 0050a4f0
int __cdecl updateGemHumChannel(float *hum_value,float target,float max_step,uint *sfx_handle,char *wav_filename,CVector3f *world_position);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_0050a610
// Address: 0050a610
void __cdecl CMansionPuzzleCircle::updateGem(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_0050a8d0
// Address: 0050a8d0
void __cdecl CMansionPuzzleCircle::updateLaser(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0
// Address: 0050aba0
void __cdecl CMansionPuzzleCircle::shiftPanelLeft(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40
// Address: 0050ad40
void __cdecl CMansionPuzzleCircle::shiftPanelRight(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_archive_FUN_0050adf0
// Address: 0050adf0
void __cdecl CMansionPuzzleCircle::archive(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_0050aee0
// Address: 0050aee0
int __cdecl CMansionPuzzleCircle::getNextPanelIndex(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_0050aef0
// Address: 0050aef0
int __cdecl CMansionPuzzleCircle::getPrevPanelIndex(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_0050af00
// Address: 0050af00
void __cdecl CMansionPuzzleCircle::updateReflector(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_0050af80
// Address: 0050af80
void __cdecl CMansionPuzzleCircle::updateReflectorPosition(CMansionPuzzleCircle *this_ptr,int reflector_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040
// Address: 0050b040
int __cdecl CMansionPuzzleCircle::panelOccupied(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_factoryFunc_FUN_0050b0d0
// Address: 0050b0d0
CMirrorHack * __cdecl factoryFunc(void);

// Original: core_manpuz.cpp_CMirrorHack_getActorType_FUN_0050b100
// Address: 0050b100
CDemonActorType * __cdecl CMirrorHack::getActorType(CMirrorHack *this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_ctor_FUN_0050b110
// Address: 0050b110
CMirrorHack * __cdecl CMirrorHack::ctor(CMirrorHack *this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_setup_FUN_0050b160
// Address: 0050b160
void __cdecl CMirrorHack::setup(CMirrorHack *this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_0050b180
// Address: 0050b180
int __cdecl CMirrorHack::renderOpaque(CMirrorHack *this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_process_FUN_0050b1d0
// Address: 0050b1d0
void __cdecl CMirrorHack::process(CMirrorHack *this_ptr,float delta_time);

// Original: core_manpuz.cpp_CMirrorHack_getBoundingBox_FUN_0050b260
// Address: 0050b260
CBoundingBox3D * __cdecl CMirrorHack::getBoundingBox(CMirrorHack *this_ptr,CBoundingBox3D *out_box);

// Original: core_manpuz.cpp_CMirrorHack_getCollisionType_FUN_0050b2b0
// Address: 0050b2b0
ECollisionType __cdecl CMirrorHack::getCollisionType(CMirrorHack *this_ptr,SCollisionInfo *collision_info);

// Original: core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_0050b2c0
// Address: 0050b2c0
void __cdecl CMirrorHack::onLaserHit(CMirrorHack *this_ptr,SLaserInfo *laser_info);

// Original: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_0050b2f0
// Address: 0050b2f0
void __cdecl CMirrorHack::getInteractionInfo(CMirrorHack *this_ptr,SInteractionInfo *out_info);

// Original: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_0050b340
// Address: 0050b340
int __cdecl CMirrorHack::startInteraction(CMirrorHack *this_ptr,CDemonActor *user);

// Original: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_0050b360
// Address: 0050b360
int __cdecl CMirrorHack::updateInteraction(CMirrorHack *this_ptr,UOrientationVector *user_orientation,SPlayerControl *player_control);

// Original: core_manpuz.cpp_CMirrorHack_stopUsing_FUN_0050b3c0
// Address: 0050b3c0
void __cdecl CMirrorHack::stopUsing(CMirrorHack *this_ptr,CDemonActor *user);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getPropertyList_FUN_0050b3e0
// Address: 0050b3e0
void __cdecl CMansionPuzzleCircle::getPropertyList(CMansionPuzzleCircle *this_ptr,CActorPropertyList *property_list);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440
// Address: 0050b440
void __cdecl CMansionPuzzleCircle::processInEditor(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_addFilesToExtract_FUN_0050b7d0
// Address: 0050b7d0
void __cdecl CMansionPuzzleCircle::addFilesToExtract(CMansionPuzzleCircle *this_ptr,_FILE *file_handle);

// Original: core_manpuz.cpp_CMirrorHack_addFilesToExtract_FUN_0050b810
// Address: 0050b810
void __cdecl CMirrorHack::addFilesToExtract(CMirrorHack *this_ptr,_FILE *file_handle);

// Original: core_manpuz.cpp_CMirrorHack_dtor_FUN_0050b840
// Address: 0050b840
CMirrorHack * __cdecl CMirrorHack::dtor(CMirrorHack *this_ptr,uint flags);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_0050b890
// Address: 0050b890
CMansionPuzzleCircle * __cdecl CMansionPuzzleCircle::dtor(CMansionPuzzleCircle *this_ptr,uint flags);

// Original: core_manpuz.cpp_SReflector_ctor_FUN_0050b920
// Address: 0050b920
SReflector * __cdecl SReflector::ctor(SReflector *this_ptr);

// Original: core_manpuz.cpp_SReflector_dtor_FUN_0050b930
// Address: 0050b930
SReflector * __cdecl SReflector::dtor(SReflector *this_ptr,uint flags);

// Original: core_manpuz.cpp_SGem_ctor_FUN_0050b940
// Address: 0050b940
SGem * __cdecl SGem::ctor(SGem *this_ptr);

// Original: core_manpuz.cpp_SGem_dtor_FUN_0050b960
// Address: 0050b960
SGem * __cdecl SGem::dtor(SGem *this_ptr,uint flags);

// Original: core_manpuz.cpp_SPanel_ctor_FUN_0050b980
// Address: 0050b980
SPanel * __cdecl SPanel::ctor(SPanel *this_ptr);

// Original: core_manpuz.cpp_SPanel_dtor_FUN_0050b990
// Address: 0050b990
SPanel * __cdecl SPanel::dtor(SPanel *this_ptr,uint flags);

// Original: core_manpuz.cpp_copyPanel_FUN_0050b9a0
// Address: 0050b9a0
SPanel * __cdecl copyPanel(SPanel *dest,SPanel *src);

// Original: core_manpuz.cpp_CDemonTriangle_arrdtor_FUN_0050ba70
// Address: 0050ba70
CDemonTriangle * __cdecl CDemonTriangle::arrdtor(CDemonTriangle *objs,uint flags);

// Original: core_manpuz.cpp_SPanel_arrdtor_FUN_0050ba90
// Address: 0050ba90
SPanel * __cdecl SPanel::arrdtor(SPanel *objs,uint flags);

// Original: core_manpuz.cpp_SGem_arrdtor_FUN_0050bab0
// Address: 0050bab0
SGem * __cdecl SGem::arrdtor(SGem *objs,uint flags);

// Original: core_manpuz.cpp_SReflector_arrdtor_FUN_0050bad0
// Address: 0050bad0
SReflector * __cdecl SReflector::arrdtor(SReflector *objs,uint flags);
