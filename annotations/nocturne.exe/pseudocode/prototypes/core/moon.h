#pragma once

// Function prototypes for core/moon.cpp
// Generated from Ghidra function signatures

// Original: core_moon.cpp_staticInit_FUN_004de770
// Address: 004de770
void __cdecl staticInit(void);

// Original: core_moon.cpp_CMoon_ctor_FUN_004de800
// Address: 004de800
CMoon * __cdecl CMoon::ctor(CMoon *this_ptr);

// Original: core_moon.cpp_CMoon_dtor_FUN_004de830
// Address: 004de830
CMoon * __cdecl CMoon::dtor(CMoon *this_ptr,uint flags);

// Original: core_moon.cpp_CMoon_init_FUN_004de860
// Address: 004de860
void __cdecl CMoon::init(CMoon *this_ptr);

// Original: core_moon.cpp_CMoon_free_FUN_004dea60
// Address: 004dea60
void __cdecl CMoon::free(CMoon *this_ptr);

// Original: core_moon.cpp_CMoon_update_FUN_004deae0
// Address: 004deae0
void __cdecl CMoon::update(CMoon *this_ptr,float delta_time);

// Original: core_moon.cpp_CMoon_render_FUN_004dec50
// Address: 004dec50
void __cdecl CMoon::render(CMoon *this_ptr);

// Original: core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040
// Address: 004df040
void __cdecl CMoon::renderJoystickCalibration(CMoon *this_ptr);

// Original: core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_004df170
// Address: 004df170
int __cdecl CMoon::isAnimationFirstHalf(CMoon *this_ptr);

// Original: core_moon.cpp_SBat_ctor_FUN_004df190
// Address: 004df190
SBat * __cdecl SBat::ctor(SBat *this_ptr);

// Original: core_moon.cpp_SBat_dtor_FUN_004df1a0
// Address: 004df1a0
SBat * __cdecl SBat::dtor(SBat *this_ptr,uint flags);

// Original: core_moon.cpp_SBat_arrdtor_FUN_004df1b0
// Address: 004df1b0
SBat * __cdecl SBat::arrdtor(SBat *this_ptr,uint flags);

// Original: core_moon.cpp_CCourse_arrdtor_FUN_004df1d0
// Address: 004df1d0
CCourse * __cdecl CCourse::arrdtor(CCourse *this_ptr,uint flags);

// Original: core_moon.cpp_CAlphaBitmap_arrdtor_FUN_004df1f0
// Address: 004df1f0
CAlphaBitmap * __cdecl CAlphaBitmap::arrdtor(CAlphaBitmap *this_ptr,uint flags);
