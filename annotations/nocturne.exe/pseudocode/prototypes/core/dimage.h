#pragma once

// Function prototypes for core/dimage.cpp
// Generated from Ghidra function signatures

// Original: core_dimage.cpp_CDemonImage_ctor_FUN_0044d430
// Address: 0044d430
CDemonImage * __cdecl CDemonImage::ctor(CDemonImage *this_ptr);

// Original: core_dimage.cpp_CDemonImage_dtor_FUN_0044d440
// Address: 0044d440
CDemonImage * __cdecl CDemonImage::dtor(CDemonImage *this_ptr);

// Original: core_dimage.cpp_CDemonImage_allocMemory_FUN_0044d460
// Address: 0044d460
void __cdecl CDemonImage::allocMemory(CDemonImage *this_ptr);

// Original: core_dimage.cpp_CDemonImage_freeMemory_FUN_0044d4c0
// Address: 0044d4c0
void __cdecl CDemonImage::freeMemory(CDemonImage *this_ptr);

// Original: core_dimage.cpp_CDemonImage_packColor_FUN_0044d4f0
// Address: 0044d4f0
ushort __cdecl CDemonImage::packColor(CDemonImage *this_ptr,uint red,uint green,uint blue);

// Original: core_dimage.cpp_CDemonImage_load_FUN_0044d550
// Address: 0044d550
void __cdecl CDemonImage::load(CDemonImage *this_ptr,char *filename,int width,int height);
