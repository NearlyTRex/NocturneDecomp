#pragma once

// Function prototypes for engine/alphabit.cpp
// Generated from Ghidra function signatures

// Original: engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040e320
// Address: 0040e320
CAlphaBitmap * __cdecl CAlphaBitmap::ctor(CAlphaBitmap *this_ptr);

// Original: engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040e340
// Address: 0040e340
CAlphaBitmap * __cdecl CAlphaBitmap::dtor(CAlphaBitmap *this_ptr,uint flags);

// Original: engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360
// Address: 0040e360
void __cdecl CAlphaBitmap::free(CAlphaBitmap *this_ptr);

// Original: engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
// Address: 0040e3c0
void __cdecl CAlphaBitmap::load(CAlphaBitmap *this_ptr,char *filename,int width,int height);

// Original: engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040e710
// Address: 0040e710
void __cdecl CAlphaBitmap::display(CAlphaBitmap *this_ptr,int x,int y,int alpha);

// Original: engine_alphabit.cpp_CAlphaBitmap_render_FUN_0040e8c0
// Address: 0040e8c0
void __cdecl CAlphaBitmap::render(CAlphaBitmap *this_ptr,int dest_x,int dest_y,int left_x,int top_y,int right_x,int bottom_y,int global_alpha);

// Original: engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0
// Address: 0040e9e0
void __cdecl CAlphaBitmap::scale(CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY);

// Original: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_0040eab0
// Address: 0040eab0
void CAlphaBitmap::initPalette(int param_1);

// Original: engine_alphabit.cpp_FUN_0040eadd
// Address: 0040eadd
void FUN_0040eadd(void);
