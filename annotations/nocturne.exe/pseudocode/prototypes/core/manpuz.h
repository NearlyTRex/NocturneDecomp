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
CDemonActorType * CMansionPuzzleCircle::getActorType(void);

// Original: core_manpuz.cpp_FUN_004c9430
// Address: 004c9430
CMansionPuzzleCircle * __cdecl FUN_004c9430(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_004c9580
// Address: 004c9580
void CMansionPuzzleCircle::setup(CDemonActor *param_1);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_004c9be0
// Address: 004c9be0
int CMansionPuzzleCircle::renderOpaque(CMansionPuzzleCircle *param_1);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_004c9cf0
// Address: 004c9cf0
void CMansionPuzzleCircle::process(CMansionPuzzleCircle *param_1,float param_2);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getBoundingBox_FUN_004c9e00
// Address: 004c9e00
void CMansionPuzzleCircle::getBoundingBox(int param_1,float *param_2);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getCollisionType_FUN_004c9e40
// Address: 004c9e40
undefined4 CMansionPuzzleCircle::getCollisionType(void);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50
// Address: 004c9e50
float CMansionPuzzleCircle::customRayIntersect(int param_1,CVector3f *param_2,CVector3f *param_3,CVector3f *param_4);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_004ca240
// Address: 004ca240
void CMansionPuzzleCircle::customIntersectCylinderXZ(int param_1,SIntersectXZCylinder *param_2);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customGetFloorHeight_FUN_004ca2f0
// Address: 004ca2f0
undefined4 CMansionPuzzleCircle::customGetFloorHeight(void);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_004ca300
// Address: 004ca300
void CMansionPuzzleCircle::onLaserHit(int param_1,float *param_2);

// Original: core_manpuz.cpp_FUN_004ca410
// Address: 004ca410
void __cdecl FUN_004ca410(CMansionPuzzleCircle *this_ptr);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640
// Address: 004ca640
void CMansionPuzzleCircle::updatePanelTransform(CDemonActor *param_1,int param_2);

// Original: core_manpuz.cpp_FUN_004ca710
// Address: 004ca710
void FUN_004ca710(int param_1,int param_2);

// Original: core_manpuz.cpp_FUN_004ca790
// Address: 004ca790
void __cdecl FUN_004ca790(CMansionPuzzleCircle *this_ptr,int gem_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_renderReflector_FUN_004cabf0
// Address: 004cabf0
void __cdecl CMansionPuzzleCircle::renderReflector(CMansionPuzzleCircle *this_ptr,int reflector_index);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90
// Address: 004cac90
void __cdecl CMansionPuzzleCircle::processPanel(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004cae20
// Address: 004cae20
void CMansionPuzzleCircle::getPanelColor(int param_1,int param_2,float *param_3,float *param_4,float *param_5);

// Original: core_manpuz.cpp_updateGemHumChannel_FUN_004caef0
// Address: 004caef0
int __cdecl updateGemHumChannel(float *hum_value,float target,float max_step,uint *sfx_handle,char *wav_filename,CVector3f *world_position);

// Original: core_manpuz.cpp_FUN_004cb010
// Address: 004cb010
void __cdecl FUN_004cb010(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time);

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
void CMansionPuzzleCircle::archive(CDemonActor *param_1);

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
void CMansionPuzzleCircle::updateReflectorPosition(int param_1,int param_2);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004cba40
// Address: 004cba40
int __cdecl CMansionPuzzleCircle::panelOccupied(CMansionPuzzleCircle *this_ptr,int panel_index);

// Original: core_manpuz.cpp_FUN_004cbad0
// Address: 004cbad0
void FUN_004cbad0(void);

// Original: core_manpuz.cpp_CMirrorHack_getActorType_FUN_004cbaf0
// Address: 004cbaf0
CDemonActorType * CMirrorHack::getActorType(void);

// Original: core_manpuz.cpp_FUN_004cbb00
// Address: 004cbb00
CMirrorHack * __cdecl FUN_004cbb00(CMirrorHack *this_ptr);

// Original: core_manpuz.cpp_CMirrorHack_setup_FUN_004cbb50
// Address: 004cbb50
void CMirrorHack::setup(CDemonActor *param_1);

// Original: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_004cbb70
// Address: 004cbb70
undefined4 CMirrorHack::renderOpaque(CDemonActor *param_1);

// Original: core_manpuz.cpp_CMirrorHack_process_FUN_004cbbc0
// Address: 004cbbc0
void __cdecl CMirrorHack::process(CMirrorHack *this_ptr,float delta_time);

// Original: core_manpuz.cpp_CMirrorHack_getBoundingBox_FUN_004cbc50
// Address: 004cbc50
int * CMirrorHack::getBoundingBox(int param_1,int *param_2);

// Original: core_manpuz.cpp_CMirrorHack_getCollisionType_FUN_004cbca0
// Address: 004cbca0
undefined4 CMirrorHack::getCollisionType(void);

// Original: core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_004cbcb0
// Address: 004cbcb0
void __cdecl CMirrorHack::onLaserHit(CMirrorHack *this_ptr,SLaserInfo *laser_info);

// Original: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_004cbce0
// Address: 004cbce0
void CMirrorHack::getInteractionInfo(int param_1,undefined4 *param_2);

// Original: core_manpuz.cpp_CMirrorHack_startInteraction_FUN_004cbd30
// Address: 004cbd30
undefined4 CMirrorHack::startInteraction(int param_1,undefined4 param_2);

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

// Original: core_manpuz.cpp_FUN_004cbeb0
// Address: 004cbeb0
undefined4 FUN_004cbeb0(undefined4 param_1);

// Original: core_manpuz.cpp_FUN_004cbec0
// Address: 004cbec0
undefined4 FUN_004cbec0(undefined4 param_1);

// Original: core_manpuz.cpp_SGem_ctor_FUN_004cbed0
// Address: 004cbed0
SGem * __cdecl SGem::ctor(SGem *this_ptr);

// Original: core_manpuz.cpp_SGem_dtor_FUN_004cbef0
// Address: 004cbef0
SGem * __cdecl SGem::dtor(SGem *this_ptr,uint flags);

// Original: core_manpuz.cpp_FUN_004cbf10
// Address: 004cbf10
undefined4 FUN_004cbf10(undefined4 param_1);

// Original: core_manpuz.cpp_FUN_004cbf20
// Address: 004cbf20
undefined4 FUN_004cbf20(undefined4 param_1);

// Original: core_manpuz.cpp_copyPanel_FUN_004cbf30
// Address: 004cbf30
SPanel * __cdecl copyPanel(SPanel *dest,SPanel *src);

// Original: core_manpuz.cpp_CDemonTriangle_arrdtor_FUN_004cc000
// Address: 004cc000
CDemonTriangle * __cdecl CDemonTriangle::arrdtor(CDemonTriangle *objs,uint flags);

// Original: core_manpuz.cpp_FUN_004cc020
// Address: 004cc020
SPanel * __cdecl FUN_004cc020(SPanel *objs,uint flags);

// Original: core_manpuz.cpp_FUN_004cc040
// Address: 004cc040
SGem * __cdecl FUN_004cc040(SGem *objs,uint flags);

// Original: core_manpuz.cpp_FUN_004cc060
// Address: 004cc060
SReflector * __cdecl FUN_004cc060(SReflector *objs,uint flags);
