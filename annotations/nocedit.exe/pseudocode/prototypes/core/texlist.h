#pragma once

// Function prototypes for core/texlist.cpp
// Generated from Ghidra function signatures

// Original: core_texlist.cpp_staticInit_FUN_005dbdb0
// Address: 005dbdb0
void staticInit(void);

// Original: core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0
// Address: 005dbdd0
CTextureList * CTextureList::ctor(CTextureList * this_ptr);

// Original: core_texlist.cpp_CTextureList_dtor_FUN_005dbdf0
// Address: 005dbdf0
CTextureList * CTextureList::dtor(CTextureList * this_ptr);

// Original: core_texlist.cpp_CTextureList_load_FUN_005dbe00
// Address: 005dbe00
void CTextureList::load(CTextureList * this_ptr, char * filename);

// Original: core_texlist.cpp_CTextureList_save_FUN_005dc0d0
// Address: 005dc0d0
void CTextureList::save(CTextureList * this_ptr, char * filename);

// Original: core_texlist.cpp_CTextureList_captureAllTextures_FUN_005dc230
// Address: 005dc230
void CTextureList::captureAllTextures(CTextureList * this_ptr);

// Original: core_texlist.cpp_CTextureList_captureTexture_FUN_005dc270
// Address: 005dc270
void CTextureList::captureTexture(CTextureList * this_ptr, uint texture_index);

// Original: core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0
// Address: 005dc2a0
void CTextureList::buildMasterTextureList(CTextureList * this_ptr);

// Original: core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0
// Address: 005dc5e0
int CTextureList::addTextureSelection(CTextureList * this_ptr, char * filename);

// Original: core_texlist.cpp_CTextureList_addMasterTextureSelection_FUN_005dc68e
// Address: 005dc68e
void CTextureList::addMasterTextureSelection(CTextureList * this_ptr);

// Original: core_texlist.cpp_CTextureList_setCurrentMasterIndex_FUN_005dc6a0
// Address: 005dc6a0
void CTextureList::setCurrentMasterIndex(CTextureList * this_ptr, uint master_index);

// Original: core_texlist.cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0
// Address: 005dc6c0
void CTextureList::setMasterTextureSelection(CTextureList * this_ptr, char * filename);

// Original: core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760
// Address: 005dc760
void CTextureList::previewTexture(CTextureList * this_ptr);

// Original: core_texlist.cpp_CTextureList_renderTexture_FUN_005dca30
// Address: 005dca30
void CTextureList::renderTexture(CTextureList * this_ptr);
