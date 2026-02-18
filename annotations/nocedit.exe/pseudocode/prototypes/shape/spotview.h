#pragma once

// Function prototypes for shape/spotview.cpp
// Generated from Ghidra function signatures

// Original: shape_spotview.cpp_staticInit_FUN_005b95b0
// Address: 005b95b0
void __cdecl staticInit(void);

// Original: shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0
// Address: 005b95c0
CSpotView * __cdecl CSpotView::ctor(CSpotView *this_ptr);

// Original: shape_spotview.cpp_CSpotView_reset_FUN_005b9620
// Address: 005b9620
void __cdecl CSpotView::reset(CSpotView *this_ptr,uint control_flags);

// Original: shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670
// Address: 005b9670
void __cdecl CSpotView::handleInput(CSpotView *this_ptr,uint control_flags);

// Original: shape_spotview.cpp_CSpotView_clampValues_FUN_005b9950
// Address: 005b9950
void __cdecl CSpotView::clampValues(CSpotView *this_ptr);

// Original: shape_spotview.cpp_CSpotView_applyCamera_FUN_005b9a20
// Address: 005b9a20
void __cdecl CSpotView::applyCamera(CSpotView *this_ptr);
