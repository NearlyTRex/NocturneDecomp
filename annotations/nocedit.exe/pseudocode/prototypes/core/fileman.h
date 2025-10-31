#pragma once

// Function prototypes for core/fileman.cpp
// Generated from Ghidra function signatures

// Original: core_fileman.cpp_preprocessMusicFiles_FUN_004bd750
// Address: 004bd750
void preprocessMusicFiles(char * source_directory);

// Original: core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
// Address: 004bd8e0
void CDemonFileManager::addSetToExtractList(CDemonFileManager * file_manager_ptr, char * set_filename);

// Original: core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930
// Address: 004bd930
void CDemonFileManager::moveSetIntoPod(CDemonFileManager * this_ptr);

// Original: core_fileman.cpp_trimWhitespace_FUN_004bd9b0
// Address: 004bd9b0
void trimWhitespace(char * str);

// Original: core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20
// Address: 004bda20
void CDemonFileManager::createPodFromDirectory(CDemonFileManager * this_ptr);

// Original: core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070
// Address: 004be070
void CDemonFileManager::addDeformableModelToExtractList(CDemonFileManager * file_manager_ptr, char * model_filename);

// Original: core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150
// Address: 004be150
void CDemonFileManager::addClothFileToExtractList(CDemonFileManager * file_manager_ptr, char * cloth_filename);

// Original: core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230
// Address: 004be230
void CDemonFileManager::addKeyframeModelToExtractList(CDemonFileManager * this_ptr, char * filename);

// Original: core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270
// Address: 004be270
void CDemonFileManager::showEditorMenu(CDemonFileManager * this_ptr);

// Original: core_fileman.cpp_refreshSoundDirectory_FUN_004be590
// Address: 004be590
void refreshSoundDirectory(FILE * file_list_output, char * source_directory);

// Original: core_fileman.cpp_CDemonFileManager_ctor_FUN_00508860
// Address: 00508860
CDemonFileManager * CDemonFileManager::ctor(CDemonFileManager * this_ptr);

// Original: core_fileman.cpp_CDemonFileManager_dtor_FUN_00508880
// Address: 00508880
CDemonFileManager * CDemonFileManager::dtor(CDemonFileManager * this_ptr);
