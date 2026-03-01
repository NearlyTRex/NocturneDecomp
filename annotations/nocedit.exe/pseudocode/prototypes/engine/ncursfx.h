#pragma once

// Function prototypes for engine/ncursfx.cpp
// Generated from Ghidra function signatures

// Original: engine_ncursfx.cpp_staticInit_FUN_00544360
// Address: 00544360
void __cdecl staticInit(void);

// Original: engine_ncursfx.cpp_CMouse_ctor_FUN_00544380
// Address: 00544380
CMouse * __cdecl CMouse::ctor(CMouse *ptr);

// Original: engine_ncursfx.cpp_CMouse_dtor_FUN_005443e0
// Address: 005443e0
CMouse * __cdecl CMouse::dtor(CMouse *this_ptr,uint flags);

// Original: engine_ncursfx.cpp_CMouse_load_FUN_00544420
// Address: 00544420
void __cdecl CMouse::load(CMouse *this_ptr);

// Original: engine_ncursfx.cpp_CMouse_reset_FUN_00544500
// Address: 00544500
void __cdecl CMouse::reset(CMouse *this_ptr);

// Original: engine_ncursfx.cpp_CMouse_startEffect_FUN_00544510
// Address: 00544510
int __cdecl CMouse::startEffect(CMouse *this_ptr,uint button_mask);

// Original: engine_ncursfx.cpp_CMouse_consumeButton_FUN_00544540
// Address: 00544540
int __cdecl CMouse::consumeButton(CMouse *this_ptr,uint button_mask,int use_skull_effect);

// Original: engine_ncursfx.cpp_CMouse_getPosition_FUN_005445a0
// Address: 005445a0
void __cdecl CMouse::getPosition(CMouse *this_ptr,int *out_x,int *out_y);

// Original: engine_ncursfx.cpp_CMouse_render_FUN_005445c0
// Address: 005445c0
void __cdecl CMouse::render(CMouse *this_ptr);

// Original: engine_ncursfx.cpp_CAlphaBitmap_arrdtor_FUN_00544730
// Address: 00544730
CAlphaBitmap * __cdecl CAlphaBitmap::arrdtor(CAlphaBitmap *objs,uint flags);

// Original: engine_ncursfx.cpp_CAlphaBitmap_arrdtor_FUN_00544750
// Address: 00544750
CAlphaBitmap * __cdecl CAlphaBitmap::arrdtor(CAlphaBitmap *objs,uint flags);
