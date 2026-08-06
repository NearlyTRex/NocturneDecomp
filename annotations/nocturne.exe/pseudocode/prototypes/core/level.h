#pragma once

// Function prototypes for core/level.cpp
// Generated from Ghidra function signatures

// Original: core_level.cpp_staticInit_FUN_004c5600
// Address: 004c5600
void __cdecl staticInit(void);

// Original: core_level.cpp_CLevelLoader_FUN_004c5630
// Address: 004c5630
void __cdecl CLevelLoader(CLevelLoader *this_ptr);

// Original: core_level.cpp_CLevelLoader_show_FUN_004c5640
// Address: 004c5640
void __cdecl CLevelLoader::show(CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant);

// Original: core_level.cpp_CLevelLoader_update_FUN_004c59e0
// Address: 004c59e0
void __cdecl CLevelLoader::update(CLevelLoader *this_ptr,char *text,int clear_screen);

// Original: core_level.cpp_CLevelLoader_cleanup_FUN_004c5fa0
// Address: 004c5fa0
void __cdecl CLevelLoader::cleanup(CLevelLoader *this_ptr);
