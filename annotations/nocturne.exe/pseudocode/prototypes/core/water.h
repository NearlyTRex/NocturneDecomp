#pragma once

// Function prototypes for core/water.cpp
// Generated from Ghidra function signatures

// Original: core_water.cpp_staticInit_FUN_00550730
// Address: 00550730
void __cdecl staticInit(void);

// Original: core_water.cpp_calculateWaveHeight_FUN_00550750
// Address: 00550750
float __cdecl calculateWaveHeight(int x,int y);

// Original: core_water.cpp_CWater_ctor_FUN_005507a0
// Address: 005507a0
CWater * __cdecl CWater::ctor(CWater *this_ptr);

// Original: core_water.cpp_CWater_dtor_FUN_005507c0
// Address: 005507c0
CWater * __cdecl CWater::dtor(CWater *this_ptr,uint flags);

// Original: core_water.cpp_CWater_captureTextures_FUN_005507d0
// Address: 005507d0
void __cdecl CWater::captureTextures(CWater *this_ptr);

// Original: core_water.cpp_CWater_calculateVisibleTiles_FUN_00550800
// Address: 00550800
void __cdecl CWater::calculateVisibleTiles(CWater *this_ptr);

// Original: core_water.cpp_CWater_process_FUN_00550860
// Address: 00550860
void __cdecl CWater::process(CWater *this_ptr);

// Original: core_water.cpp_CWater_render_FUN_00550cb0
// Address: 00550cb0
void __cdecl CWater::render(CWater *this_ptr,int render_mode);
