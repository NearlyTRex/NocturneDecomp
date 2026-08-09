#pragma once

// Function prototypes for core/frankgen.cpp
// Generated from Ghidra function signatures

// Original: core_frankgen.cpp_staticInit_FUN_004d16b0
// Address: 004d16b0
void __cdecl staticInit(void);

// Original: core_frankgen.cpp_factoryFuncFrankenstienMachine_FUN_004d16e0
// Address: 004d16e0
CFrankenstienMachine * __cdecl factoryFuncFrankenstienMachine(void);

// Original: core_frankgen.cpp_CFrankenstienMachine_getActorType_FUN_004d1710
// Address: 004d1710
CDemonActorType * __cdecl CFrankenstienMachine::getActorType(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004d1720
// Address: 004d1720
CFrankenstienMachine * __cdecl CFrankenstienMachine::ctor(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004d17b0
// Address: 004d17b0
void __cdecl CFrankenstienMachine::setup(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_CFrankenstienMachine_archive_FUN_004d19e0
// Address: 004d19e0
void __cdecl CFrankenstienMachine::archive(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_CFrankenstienMachine_process_FUN_004d1a40
// Address: 004d1a40
void __cdecl CFrankenstienMachine::process(CFrankenstienMachine *this_ptr,float delta_time);

// Original: core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004d1ec0
// Address: 004d1ec0
int __cdecl CFrankenstienMachine::accumulateParticles(CFrankenstienMachine *this_ptr,float emission_rate,float delta_time);

// Original: core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
// Address: 004d1f20
void __cdecl CFrankenstienMachine::playSfxAtFrame(CFrankenstienMachine *this_ptr,float trigger_frame,char *sfx_filename);

// Original: core_frankgen.cpp_CFrankenstienMachine_renderOpaque_FUN_004d1f70
// Address: 004d1f70
int __cdecl CFrankenstienMachine::renderOpaque(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_CFrankenstienMachine_getBoundingBox_FUN_004d20f0
// Address: 004d20f0
CBoundingBox3D * __cdecl CFrankenstienMachine::getBoundingBox(CFrankenstienMachine *this_ptr,CBoundingBox3D *out_box);

// Original: core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190
// Address: 004d2190
CVector3f * __cdecl CFrankenstienMachine::updateAnchorPosition(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_findLeader_FUN_004d2330
// Address: 004d2330
CDemonActor * __cdecl findLeader(void);

// Original: core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0
// Address: 004d23a0
void __cdecl CFrankenstienMachine::setPartFrame(CFrankenstienMachine *this_ptr,float start_frame,float end_frame);

// Original: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430
// Address: 004d2430
void __cdecl CFrankenstienMachine::setCourseFrame(CFrankenstienMachine *this_ptr,float start_frame,float end_frame);

// Original: core_frankgen.cpp_CFrankenstienMachine_getCollisionType_FUN_004d24f0
// Address: 004d24f0
ECollisionType __cdecl CFrankenstienMachine::getCollisionType(CFrankenstienMachine *this_ptr,SCollisionInfo *collision_info);

// Original: core_frankgen.cpp_CFrankenstienMachine_getPropertyList_FUN_004d2500
// Address: 004d2500
void __cdecl CFrankenstienMachine::getPropertyList(CFrankenstienMachine *this_ptr,CActorPropertyList *property_list);

// Original: core_frankgen.cpp_CFrankenstienMachine_addFilesToExtract_FUN_004d2560
// Address: 004d2560
void __cdecl CFrankenstienMachine::addFilesToExtract(CFrankenstienMachine *this_ptr,_FILE *file_handle);

// Original: core_frankgen.cpp_CFrankenstienMachine_processInEditor_FUN_004d25f0
// Address: 004d25f0
void __cdecl CFrankenstienMachine::processInEditor(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_CFrankenstienMachine_showEditorHelp_FUN_004d2740
// Address: 004d2740
void __cdecl CFrankenstienMachine::showEditorHelp(CFrankenstienMachine *this_ptr,int *y_pos);

// Original: core_frankgen.cpp_CFrankenstienMachine_initializeInEditor_FUN_004d2770
// Address: 004d2770
int __cdecl CFrankenstienMachine::initializeInEditor(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_getFrameCount_FUN_004d2880
// Address: 004d2880
int __cdecl getFrameCount(CKeyFramedModel *model_ptr);

// Original: core_frankgen.cpp_getActorName_FUN_004d2890
// Address: 004d2890
char * __cdecl getActorName(CDemonActor *actor);

// Original: core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_004d28a0
// Address: 004d28a0
CFrankenstienMachine * __cdecl CFrankenstienMachine::dtor(CFrankenstienMachine *this_ptr,uint flags);
