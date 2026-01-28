#pragma once

// Function prototypes for engine/alphabit.cpp
// Generated from Ghidra function signatures

// Original: engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
// Address: 00410520
void __cdecl CAlphaBitmap::ctor(CAlphaBitmap *this_ptr);

// Original: engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
// Address: 00410540
CAlphaBitmap * __cdecl CAlphaBitmap::dtor(CAlphaBitmap *this_ptr);

// Original: engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
// Address: 00410560
void __cdecl CAlphaBitmap::free(CAlphaBitmap *this_ptr);

// Original: engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
// Address: 004105d0
void __cdecl CAlphaBitmap::load(CAlphaBitmap *this_ptr,char *filename,int width,int height);

// Original: engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
// Address: 00410950
void __cdecl CAlphaBitmap::display(CAlphaBitmap *this_ptr,int x,int y,int alpha);

// Original: engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00
// Address: 00410b00
void __cdecl CAlphaBitmap::render(CAlphaBitmap *this_ptr,int dest_y,int dest_x,int left_x,int top_y,int right_x, int bottom_y);

// Original: engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20
// Address: 00410c20
void __cdecl CAlphaBitmap::scale(CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY);

// Original: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
// Address: 00410cf0
void __cdecl CAlphaBitmap::initPalette(CAlphaBitmap *this_ptr);

// Original: engine_alphabit.cpp_copyBytes_FUN_00410d20
// Address: 00410d20
void __cdecl copyBytes(void *src,void *dest,int width,int height);
