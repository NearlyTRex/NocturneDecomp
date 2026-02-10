#pragma once

// Function prototypes for core/tbplayer.cpp
// Generated from Ghidra function signatures

// Original: core_tbplayer.cpp_staticInit_FUN_005d9fd0
// Address: 005d9fd0
void __cdecl staticInit(void);

// Original: core_tbplayer.cpp_factoryFunc_FUN_005da020
// Address: 005da020
CBassPlayer * __cdecl factoryFunc(void);

// Original: core_tbplayer.cpp_CBassPlayer_getActorType_FUN_005da050
// Address: 005da050
CDemonActorType * __cdecl CBassPlayer::getActorType(CBassPlayer *this_ptr);

// Original: core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060
// Address: 005da060
CBassPlayer * __cdecl CBassPlayer::ctor(CBassPlayer *this_ptr);

// Original: core_tbplayer.cpp_CBassPlayer_setup_FUN_005da090
// Address: 005da090
void __cdecl CBassPlayer::setup(CBassPlayer *this_ptr);

// Original: core_tbplayer.cpp_FUN_005da100
// Address: 005da100
void __cdecl FUN_005da100(void);

// Original: core_tbplayer.cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_005da120
// Address: 005da120
void __stack2_esi CBassPlayer::getCarryObjToBodyXForm(CBassPlayer *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_tbplayer.cpp_CBassPlayer_processDamage_FUN_005da240
// Address: 005da240
void __cdecl CBassPlayer::processDamage(CBassPlayer *this_ptr,SDamageInfo *damage_info);

// Original: core_tbplayer.cpp_factoryFunc_FUN_005da280
// Address: 005da280
CDrummer * __cdecl factoryFunc(void);

// Original: core_tbplayer.cpp_CDrummer_getActorType_FUN_005da2b0
// Address: 005da2b0
CDemonActorType * __cdecl CDrummer::getActorType(CDrummer *this_ptr);

// Original: core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0
// Address: 005da2c0
CDrummer * __cdecl CDrummer::ctor(CDrummer *this_ptr);

// Original: core_tbplayer.cpp_CDrummer_setup_FUN_005da2f0
// Address: 005da2f0
void __cdecl CDrummer::setup(CDrummer *this_ptr);

// Original: core_tbplayer.cpp_CDrummer_getCarryObjToBodyXForm_FUN_005da370
// Address: 005da370
void __stack2_esi CDrummer::getCarryObjToBodyXForm(CDrummer *this_ptr,int hand_index,CMatrix3x4f *out_matrix);

// Original: core_tbplayer.cpp_CDrummer_processDamage_FUN_005da510
// Address: 005da510
void __cdecl CDrummer::processDamage(CDrummer *this_ptr,SDamageInfo *damage_info);

// Original: core_tbplayer.cpp_CDrummer_dtor_FUN_005da540
// Address: 005da540
CDrummer * __cdecl CDrummer::dtor(CDrummer *this_ptr,uint flags);

// Original: core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610
// Address: 005da610
CBassPlayer * __cdecl CBassPlayer::dtor(CBassPlayer *this_ptr);
