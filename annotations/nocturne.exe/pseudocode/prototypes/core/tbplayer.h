#pragma once

// Function prototypes for core/tbplayer.cpp
// Generated from Ghidra function signatures

// Original: core_tbplayer.cpp_staticInit_FUN_005430d0
// Address: 005430d0
void __cdecl staticInit(void);

// Original: core_tbplayer.cpp_factoryFunc_FUN_00543120
// Address: 00543120
CBassPlayer * __cdecl factoryFunc(void);

// Original: core_tbplayer.cpp_CBassPlayer_getActorType_FUN_00543140
// Address: 00543140
CDemonActorType * CBassPlayer::getActorType(void);

// Original: core_tbplayer.cpp_FUN_00543150
// Address: 00543150
CNPC * FUN_00543150(CNPC *param_1);

// Original: core_tbplayer.cpp_CBassPlayer_setup_FUN_00543180
// Address: 00543180
void CBassPlayer::setup(CNPC *param_1);

// Original: core_tbplayer.cpp_FUN_005431f0
// Address: 005431f0
void FUN_005431f0(void);

// Original: core_tbplayer.cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_00543210
// Address: 00543210
void CBassPlayer::getCarryObjToBodyXForm(int param_1,int param_2);

// Original: core_tbplayer.cpp_CBassPlayer_processDamage_FUN_00543330
// Address: 00543330
void CBassPlayer::processDamage(int param_1,int param_2);

// Original: core_tbplayer.cpp_factoryFunc_FUN_00543370
// Address: 00543370
CDrummer * __cdecl factoryFunc(void);

// Original: core_tbplayer.cpp_CDrummer_getActorType_FUN_00543390
// Address: 00543390
CDemonActorType * CDrummer::getActorType(void);

// Original: core_tbplayer.cpp_FUN_005433a0
// Address: 005433a0
CDrummer * __cdecl FUN_005433a0(CDrummer *this_ptr);

// Original: core_tbplayer.cpp_CDrummer_setup_FUN_005433d0
// Address: 005433d0
void CDrummer::setup(CNPC *param_1);

// Original: core_tbplayer.cpp_CDrummer_getCarryObjToBodyXForm_FUN_00543450
// Address: 00543450
void CDrummer::getCarryObjToBodyXForm(int param_1,int param_2);

// Original: core_tbplayer.cpp_CDrummer_processDamage_FUN_005435f0
// Address: 005435f0
void CDrummer::processDamage(int param_1,int param_2);

// Original: core_tbplayer.cpp_CDrummer_dtor_FUN_00543620
// Address: 00543620
CDrummer * __cdecl CDrummer::dtor(CDrummer *this_ptr,uint flags);

// Original: core_tbplayer.cpp_CBassPlayer_dtor_FUN_005436f0
// Address: 005436f0
CBassPlayer * __cdecl CBassPlayer::dtor(CBassPlayer *this_ptr,uint flags);
