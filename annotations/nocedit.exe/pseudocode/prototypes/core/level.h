#pragma once

// Function prototypes for core/level.cpp
// Generated from Ghidra function signatures

// Original: core_level.cpp_staticInit_FUN_00503d80
// Address: 00503d80
void __cdecl staticInit(void);

// Original: core_level.cpp_CLevelLoader_reset_FUN_00503db0
// Address: 00503db0
void __cdecl CLevelLoader::reset(CLevelLoader *this_ptr);

// Original: core_level.cpp_CLevelLoader_show_FUN_00503dc0
// Address: 00503dc0
void __cdecl CLevelLoader::show(CLevelLoader *this_ptr,int total_frames,int use_custom_viewport,int image_variant);

// Original: core_level.cpp_CLevelLoader_update_FUN_00504160
// Address: 00504160
void __cdecl CLevelLoader::update(CLevelLoader *this_ptr,char *text,int clear_screen);

// Original: core_level.cpp_CLevelLoader_cleanup_FUN_00504720
// Address: 00504720
void __cdecl CLevelLoader::cleanup(CLevelLoader *this_ptr);

// Original: core_level.cpp_CLevelLoader_setVersion_FUN_00504750
// Address: 00504750
void __cdecl CLevelLoader::setVersion(CLevelLoader *this_ptr,int value);
