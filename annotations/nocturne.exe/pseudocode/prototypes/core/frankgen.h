#pragma once

// Function prototypes for core/frankgen.cpp
// Generated from Ghidra function signatures

// Original: core_frankgen.cpp_staticInit_FUN_004945d0
// Address: 004945d0
void __cdecl staticInit(void);

// Original: core_frankgen.cpp_factoryFuncFrankenstienMachine_FUN_00494600
// Address: 00494600
CFrankenstienMachine * __cdecl factoryFuncFrankenstienMachine(void);

// Original: core_frankgen.cpp_CFrankenstienMachine_getActorType_FUN_00494620
// Address: 00494620
CDemonActorType * __cdecl CFrankenstienMachine::getActorType(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_00494630
// Address: 00494630
CFrankenstienMachine * __cdecl CFrankenstienMachine::ctor(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_CFrankenstienMachine_setup_FUN_004946c0
// Address: 004946c0
void __cdecl CFrankenstienMachine::setup(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_CFrankenstienMachine_archive_FUN_004948f0
// Address: 004948f0
void __cdecl CFrankenstienMachine::archive(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_CFrankenstienMachine_process_FUN_00494950
// Address: 00494950
void __cdecl CFrankenstienMachine::process(CFrankenstienMachine *this_ptr,float delta_time);

// Original: core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0
// Address: 00494dd0
int __cdecl CFrankenstienMachine::accumulateParticles(CFrankenstienMachine *this_ptr,float emission_rate,float delta_time);

// Original: core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
// Address: 00494e30
void __cdecl CFrankenstienMachine::playSfxAtFrame(CFrankenstienMachine *this_ptr,float trigger_frame,char *sfx_filename);

// Original: core_frankgen.cpp_CFrankenstienMachine_renderOpaque_FUN_00494e80
// Address: 00494e80
int __cdecl CFrankenstienMachine::renderOpaque(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_CFrankenstienMachine_getBoundingBox_FUN_00495000
// Address: 00495000
CBoundingBox3D * __cdecl CFrankenstienMachine::getBoundingBox(CFrankenstienMachine *this_ptr,CBoundingBox3D *out_box);

// Original: core_frankgen.cpp_CFrankenstienMachine_FUN_004950a0
// Address: 004950a0
CVector3f * __cdecl CFrankenstienMachine(CFrankenstienMachine *this_ptr);

// Original: core_frankgen.cpp_findLeader_FUN_00495240
// Address: 00495240
CDemonActor * __cdecl findLeader(void);

// Original: core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0
// Address: 004952b0
void __cdecl CFrankenstienMachine::setPartFrame(CFrankenstienMachine *this_ptr,float start_frame,float end_frame);

// Original: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_00495340
// Address: 00495340
void __cdecl CFrankenstienMachine::setCourseFrame(CFrankenstienMachine *this_ptr,float start_frame,float end_frame);

// Original: core_frankgen.cpp_CFrankenstienMachine_getCollisionType_FUN_00495400
// Address: 00495400
ECollisionType __cdecl CFrankenstienMachine::getCollisionType(CFrankenstienMachine *this_ptr,SCollisionInfo *collision_info);

// Original: core_frankgen.cpp_getFrameCount_FUN_00495410
// Address: 00495410
int __cdecl getFrameCount(CKeyFramedModel *model_ptr);

// Original: core_frankgen.cpp_getActorName_FUN_00495420
// Address: 00495420
char * __cdecl getActorName(CDemonActor *actor);

// Original: core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_00495430
// Address: 00495430
CFrankenstienMachine * __cdecl CFrankenstienMachine::dtor(CFrankenstienMachine *this_ptr,uint flags);
