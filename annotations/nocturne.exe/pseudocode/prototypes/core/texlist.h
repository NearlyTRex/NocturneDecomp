#pragma once

// Function prototypes for core/texlist.cpp
// Generated from Ghidra function signatures

// Original: core_texlist.cpp_staticInit_FUN_00544910
// Address: 00544910
void __cdecl staticInit(void);

// Original: core_texlist.cpp_CTextureList_ctor_FUN_00544930
// Address: 00544930
CTextureList * __cdecl CTextureList::ctor(CTextureList *this_ptr);

// Original: core_texlist.cpp_CTextureList_dtor_FUN_00544940
// Address: 00544940
CTextureList * __cdecl CTextureList::dtor(CTextureList *this_ptr,uint flags);

// Original: core_texlist.cpp_CTextureList_load_FUN_00544950
// Address: 00544950
void __cdecl CTextureList::load(CTextureList *this_ptr,char *filename);

// Original: core_texlist.cpp_CTextureList_save_FUN_00544c10
// Address: 00544c10
void __cdecl CTextureList::save(CTextureList *this_ptr,char *filename);

// Original: core_texlist.cpp_CTextureList_captureAllTextures_FUN_00544d70
// Address: 00544d70
void __cdecl CTextureList::captureAllTextures(CTextureList *this_ptr);

// Original: core_texlist.cpp_CTextureList_captureTexture_FUN_00544db0
// Address: 00544db0
void __cdecl CTextureList::captureTexture(CTextureList *this_ptr,uint texture_index);
