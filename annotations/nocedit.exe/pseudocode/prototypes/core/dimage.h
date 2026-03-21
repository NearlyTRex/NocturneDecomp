#pragma once

// Function prototypes for core/dimage.cpp
// Generated from Ghidra function signatures

// Original: core_dimage.cpp_CDemonImage_ctor_FUN_004719b0
// Address: 004719b0
CDemonImage * __cdecl CDemonImage::ctor(CDemonImage *this_ptr);

// Original: core_dimage.cpp_CDemonImage_dtor_FUN_004719c0
// Address: 004719c0
CDemonImage * __cdecl CDemonImage::dtor(CDemonImage *this_ptr,uint flags);

// Original: core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0
// Address: 004719e0
void __cdecl CDemonImage::allocMemory(CDemonImage *this_ptr);

// Original: core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40
// Address: 00471a40
void __cdecl CDemonImage::freeMemory(CDemonImage *this_ptr);

// Original: core_dimage.cpp_CDemonImage_packColor_FUN_00471a70
// Address: 00471a70
ushort __cdecl CDemonImage::packColor(CDemonImage *this_ptr,uint red,uint green,uint blue);

// Original: core_dimage.cpp_CDemonImage_load_FUN_00471ad0
// Address: 00471ad0
void __cdecl CDemonImage::load(CDemonImage *this_ptr,char *filename,int width,int height);
