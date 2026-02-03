#pragma once

// Function prototypes for core/moon.cpp
// Generated from Ghidra function signatures

// Original: core_moon.cpp_staticInit_FUN_005299f0
// Address: 005299f0
void __cdecl staticInit(void);

// Original: core_moon.cpp_CMoon_ctor_FUN_00529a80
// Address: 00529a80
CMoon * __cdecl CMoon::ctor(CMoon *this_ptr);

// Original: core_moon.cpp_CMoon_dtor_FUN_00529ab0
// Address: 00529ab0
CMoon * __cdecl CMoon::dtor(CMoon *this_ptr);

// Original: core_moon.cpp_CMoon_init_FUN_00529ae0
// Address: 00529ae0
void __cdecl CMoon::init(CMoon *this_ptr);

// Original: core_moon.cpp_CMoon_free_FUN_00529ce0
// Address: 00529ce0
void __cdecl CMoon::free(CMoon *this_ptr);

// Original: core_moon.cpp_CMoon_update_FUN_00529d60
// Address: 00529d60
void __cdecl CMoon::update(CMoon *this_ptr,float delta_time);

// Original: core_moon.cpp_CMoon_render_FUN_00529ed0
// Address: 00529ed0
void __cdecl CMoon::render(CMoon *this_ptr);

// Original: core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0
// Address: 0052a2c0
void __cdecl CMoon::renderJoystickCalibration(CMoon *this_ptr);

// Original: core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0
// Address: 0052a3f0
int __cdecl CMoon::isAnimationFirstHalf(CMoon *this_ptr);

// Original: core_moon.cpp_SBat_ctor_FUN_0052a410
// Address: 0052a410
SBat * __cdecl SBat::ctor(SBat *this_ptr);

// Original: core_moon.cpp_SBat_dtor_FUN_0052a420
// Address: 0052a420
SBat * __cdecl SBat::dtor(SBat *this_ptr);

// Original: core_moon.cpp_freeBats_FUN_0052a430
// Address: 0052a430
SBat * __cdecl freeBats(SBat *objs);

// Original: core_moon.cpp_freeCourses_FUN_0052a450
// Address: 0052a450
CCourse * __cdecl freeCourses(CCourse *objs);

// Original: core_moon.cpp_freeAlphaBitmaps_FUN_0052a470
// Address: 0052a470
CAlphaBitmap * __cdecl freeAlphaBitmaps(CAlphaBitmap *objs);
