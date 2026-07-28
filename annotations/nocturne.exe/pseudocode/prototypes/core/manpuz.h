#pragma once

// Function prototypes for core/manpuz.cpp
// Generated from Ghidra function signatures

// Original: core_manpuz.cpp_staticInit_FUN_004c93b0
// Address: 004c93b0
void __cdecl staticInit(void);

// Original: core_manpuz.cpp_FUN_004c9400
// Address: 004c9400
void FUN_004c9400(void);

// Original: core_manpuz.cpp_FUN_004c9420
// Address: 004c9420
CDemonActorType * FUN_004c9420(void);

// Original: core_manpuz.cpp_FUN_004c9430
// Address: 004c9430
int FUN_004c9430(undefined4 param_1);

// Original: core_manpuz.cpp_FUN_004c9580
// Address: 004c9580
void FUN_004c9580(CDemonActor *param_1);

// Original: core_manpuz.cpp_FUN_004c9be0
// Address: 004c9be0
int FUN_004c9be0(CMansionPuzzleCircle *param_1);

// Original: core_manpuz.cpp_FUN_004c9cf0
// Address: 004c9cf0
void FUN_004c9cf0(CMansionPuzzleCircle *param_1,float param_2);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_getBoundingBox_FUN_004c9e00
// Address: 004c9e00
void CMansionPuzzleCircle::getBoundingBox(int param_1,float *param_2);

// Original: core_manpuz.cpp_FUN_004c9e40
// Address: 004c9e40
undefined4 FUN_004c9e40(void);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50
// Address: 004c9e50
float CMansionPuzzleCircle::customRayIntersect(int param_1,float *param_2,undefined4 param_3,float *param_4);

// Original: core_manpuz.cpp_FUN_004ca240
// Address: 004ca240
void FUN_004ca240(int param_1,SIntersectXZCylinder *param_2);

// Original: core_manpuz.cpp_FUN_004ca2f0
// Address: 004ca2f0
undefined4 FUN_004ca2f0(void);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_004ca300
// Address: 004ca300
void CMansionPuzzleCircle::onLaserHit(int param_1,float *param_2);

// Original: core_manpuz.cpp_FUN_004ca410
// Address: 004ca410
void FUN_004ca410(int param_1);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640
// Address: 004ca640
void CMansionPuzzleCircle::updatePanelTransform(CDemonActor *param_1,int param_2);

// Original: core_manpuz.cpp_FUN_004ca710
// Address: 004ca710
void FUN_004ca710(int param_1,int param_2);

// Original: core_manpuz.cpp_FUN_004ca790
// Address: 004ca790
void FUN_004ca790(int param_1,int param_2);

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
void FUN_004cb010(CMansionPuzzleCircle *param_1,int param_2,float param_3);

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
int CMansionPuzzleCircle::getNextPanelIndex(undefined4 param_1,int param_2);

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

// Original: core_manpuz.cpp_FUN_004cbaf0
// Address: 004cbaf0
CDemonActorType * FUN_004cbaf0(void);

// Original: core_manpuz.cpp_FUN_004cbb00
// Address: 004cbb00
int * FUN_004cbb00(undefined4 param_1);

// Original: core_manpuz.cpp_FUN_004cbb50
// Address: 004cbb50
void FUN_004cbb50(CDemonActor *param_1);

// Original: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_004cbb70
// Address: 004cbb70
undefined4 CMirrorHack::renderOpaque(CDemonActor *param_1);

// Original: core_manpuz.cpp_CMirrorHack_process_FUN_004cbbc0
// Address: 004cbbc0
void CMirrorHack::process(CDemonActor *param_1,float param_2);

// Original: core_manpuz.cpp_CMirrorHack_getBoundingBox_FUN_004cbc50
// Address: 004cbc50
int * CMirrorHack::getBoundingBox(int param_1,int *param_2);

// Original: core_manpuz.cpp_FUN_004cbca0
// Address: 004cbca0
undefined4 FUN_004cbca0(void);

// Original: core_manpuz.cpp_CMirrorHack_onLaserHit_FUN_004cbcb0
// Address: 004cbcb0
void CMirrorHack::onLaserHit(undefined4 param_1,int param_2);

// Original: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_004cbce0
// Address: 004cbce0
void CMirrorHack::getInteractionInfo(int param_1,undefined4 *param_2);

// Original: core_manpuz.cpp_FUN_004cbd30
// Address: 004cbd30
undefined4 FUN_004cbd30(int param_1,undefined4 param_2);

// Original: core_manpuz.cpp_CMirrorHack_updateInteraction_FUN_004cbd50
// Address: 004cbd50
undefined4 CMirrorHack::updateInteraction(CDemonActor *param_1,float *param_2,int param_3);

// Original: core_manpuz.cpp_FUN_004cbdb0
// Address: 004cbdb0
void FUN_004cbdb0(int param_1,int param_2);

// Original: core_manpuz.cpp_CMirrorHack_dtor_FUN_004cbdd0
// Address: 004cbdd0
CDemonActor * CMirrorHack::dtor(CDemonActor *param_1,byte param_2);

// Original: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20
// Address: 004cbe20
CDemonActor * CMansionPuzzleCircle::dtor(CDemonActor *param_1,byte param_2);

// Original: core_manpuz.cpp_FUN_004cbeb0
// Address: 004cbeb0
undefined4 FUN_004cbeb0(undefined4 param_1);

// Original: core_manpuz.cpp_FUN_004cbec0
// Address: 004cbec0
undefined4 FUN_004cbec0(undefined4 param_1);

// Original: core_manpuz.cpp_SGem_ctor_FUN_004cbed0
// Address: 004cbed0
int SGem::ctor(int param_1);

// Original: core_manpuz.cpp_SGem_dtor_FUN_004cbef0
// Address: 004cbef0
int * SGem::dtor(int param_1);

// Original: core_manpuz.cpp_FUN_004cbf10
// Address: 004cbf10
undefined4 FUN_004cbf10(undefined4 param_1);

// Original: core_manpuz.cpp_FUN_004cbf20
// Address: 004cbf20
undefined4 FUN_004cbf20(undefined4 param_1);

// Original: core_manpuz.cpp_copyPanel_FUN_004cbf30
// Address: 004cbf30
void copyPanel(undefined4 *param_1,undefined4 *param_2);

// Original: core_manpuz.cpp_CDemonTriangle_arrdtor_FUN_004cc000
// Address: 004cc000
CDemonTriangle * __cdecl CDemonTriangle::arrdtor(CDemonTriangle *objs,uint flags);

// Original: core_manpuz.cpp_FUN_004cc020
// Address: 004cc020
void FUN_004cc020(void *param_1);

// Original: core_manpuz.cpp_FUN_004cc040
// Address: 004cc040
void FUN_004cc040(void *param_1);

// Original: core_manpuz.cpp_FUN_004cc060
// Address: 004cc060
void FUN_004cc060(void *param_1);
