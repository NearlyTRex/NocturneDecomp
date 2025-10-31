#pragma once

// Function prototypes for core/water.cpp
// Generated from Ghidra function signatures

// Original: core_water.cpp_staticInit_FUN_005e9da0
// Address: 005e9da0
void staticInit(void);

// Original: core_water.cpp_calculateWaveHeight_FUN_005e9dc0
// Address: 005e9dc0
float calculateWaveHeight(int x, int y);

// Original: core_water.cpp_CWater_ctor_FUN_005e9e10
// Address: 005e9e10
CWater * CWater::ctor(CWater * this_ptr);

// Original: core_water.cpp_CWater_dtor_FUN_005e9e30
// Address: 005e9e30
CWater * CWater::dtor(CWater * this_ptr);

// Original: core_water.cpp_CWater_captureTextures_FUN_005e9e40
// Address: 005e9e40
void CWater::captureTextures(CWater * this_ptr);

// Original: core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70
// Address: 005e9e70
int CWater::calculateVisibleTiles(CWater * this_ptr);

// Original: core_water.cpp_CWater_process_FUN_005e9ed0
// Address: 005e9ed0
void CWater::process(void);

// Original: core_water.cpp_CWater_render_FUN_005ea320
// Address: 005ea320
void CWater::render(CWater * this_ptr, int render_mode);
