#pragma once

// Function prototypes for core/tbplayer.cpp
// Generated from Ghidra function signatures

// Original: core_tbplayer.cpp_staticInit_FUN_005430d0
// Address: 005430d0
void __cdecl staticInit(void);

// Original: core_tbplayer.cpp_factoryFuncBassPlayer_FUN_00543120
// Address: 00543120
CBassPlayer * __cdecl factoryFuncBassPlayer(void);

// Original: core_tbplayer.cpp_CBassPlayer_getActorType_FUN_00543140
// Address: 00543140
CDemonActorType * __cdecl CBassPlayer::getActorType(CBassPlayer *this_ptr);

// Original: core_tbplayer.cpp_CBassPlayer_ctor_FUN_00543150
// Address: 00543150
CBassPlayer * __cdecl CBassPlayer::ctor(CBassPlayer *this_ptr);

// Original: core_tbplayer.cpp_CBassPlayer_setup_FUN_00543180
// Address: 00543180
void __cdecl CBassPlayer::setup(CBassPlayer *this_ptr);

// Original: core_tbplayer.cpp_setVector_FUN_005431f0
// Address: 005431f0
CVector3f * __cdecl setVector(CVector3f *out,float x,float y,float z);

// Original: core_tbplayer.cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_00543210
// Address: 00543210
void __stack2_esi CBassPlayer::getCarryObjToBodyXForm(CBassPlayer *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_tbplayer.cpp_CBassPlayer_processDamage_FUN_00543330
// Address: 00543330
void __cdecl CBassPlayer::processDamage(CBassPlayer *this_ptr,SDamageInfo *damage_info);

// Original: core_tbplayer.cpp_factoryFuncDrummer_FUN_00543370
// Address: 00543370
CDrummer * __cdecl factoryFuncDrummer(void);

// Original: core_tbplayer.cpp_CDrummer_getActorType_FUN_00543390
// Address: 00543390
CDemonActorType * __cdecl CDrummer::getActorType(CDrummer *this_ptr);

// Original: core_tbplayer.cpp_CDrummer_ctor_FUN_005433a0
// Address: 005433a0
CDrummer * __cdecl CDrummer::ctor(CDrummer *this_ptr);

// Original: core_tbplayer.cpp_CDrummer_setup_FUN_005433d0
// Address: 005433d0
void __cdecl CDrummer::setup(CDrummer *this_ptr);

// Original: core_tbplayer.cpp_CDrummer_getCarryObjToBodyXForm_FUN_00543450
// Address: 00543450
void __stack2_esi CDrummer::getCarryObjToBodyXForm(CDrummer *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_tbplayer.cpp_CDrummer_processDamage_FUN_005435f0
// Address: 005435f0
void __cdecl CDrummer::processDamage(CDrummer *this_ptr,SDamageInfo *damage_info);

// Original: core_tbplayer.cpp_CDrummer_dtor_FUN_00543620
// Address: 00543620
CDrummer * __cdecl CDrummer::dtor(CDrummer *this_ptr,uint flags);

// Original: core_tbplayer.cpp_CBassPlayer_dtor_FUN_005436f0
// Address: 005436f0
CBassPlayer * __cdecl CBassPlayer::dtor(CBassPlayer *this_ptr,uint flags);
