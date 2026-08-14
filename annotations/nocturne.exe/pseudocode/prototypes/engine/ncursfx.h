#pragma once

// Function prototypes for engine/ncursfx.cpp
// Generated from Ghidra function signatures

// Original: engine_ncursfx.cpp_staticInit_FUN_004ee4e0
// Address: 004ee4e0
void __cdecl staticInit(void);

// Original: engine_ncursfx.cpp_CMouse_ctor_FUN_004ee500
// Address: 004ee500
CMouse * __cdecl CMouse::ctor(CMouse *this_ptr);

// Original: engine_ncursfx.cpp_CMouse_dtor_FUN_004ee560
// Address: 004ee560
CMouse * __cdecl CMouse::dtor(CMouse *this_ptr,uint flags);

// Original: engine_ncursfx.cpp_CMouse_load_FUN_004ee5a0
// Address: 004ee5a0
void __cdecl CMouse::load(CMouse *this_ptr);

// Original: engine_ncursfx.cpp_CMouse_FUN_004ee680
// Address: 004ee680
void __cdecl CMouse(CMouse *this_ptr);

// Original: engine_ncursfx.cpp_CMouse_startEffect_FUN_004ee690
// Address: 004ee690
int __cdecl CMouse::startEffect(CMouse *this_ptr,uint button_mask);

// Original: engine_ncursfx.cpp_CMouse_consumeButton_FUN_004ee6c0
// Address: 004ee6c0
int __cdecl CMouse::consumeButton(CMouse *this_ptr,uint button_mask,int use_skull_effect);

// Original: engine_ncursfx.cpp_CMouse_getPosition_FUN_004ee720
// Address: 004ee720
void __cdecl CMouse::getPosition(CMouse *this_ptr,int *out_x,int *out_y);

// Original: engine_ncursfx.cpp_CMouse_render_FUN_004ee740
// Address: 004ee740
void __cdecl CMouse::render(CMouse *this_ptr);

// Original: engine_ncursfx.cpp_CAlphaBitmap_arrdtor_FUN_004ee8b0
// Address: 004ee8b0
CAlphaBitmap * __cdecl CAlphaBitmap::arrdtor(CAlphaBitmap *this_ptr,uint flags);

// Original: engine_ncursfx.cpp_CAlphaBitmap_arrdtor_FUN_004ee8d0
// Address: 004ee8d0
CAlphaBitmap * __cdecl CAlphaBitmap::arrdtor(CAlphaBitmap *this_ptr,uint flags);
