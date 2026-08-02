#pragma once

// Function prototypes for core/gasmask.cpp
// Generated from Ghidra function signatures

// Original: core_gasmask.cpp_staticInit_FUN_004a89b0
// Address: 004a89b0
void __cdecl staticInit(void);

// Original: core_gasmask.cpp_factoryFunc_FUN_004a89e0
// Address: 004a89e0
CGasMask * __cdecl factoryFunc(void);

// Original: core_gasmask.cpp_CGasMask_getActorType_FUN_004a8a00
// Address: 004a8a00
CDemonActorType * CGasMask::getActorType(void);

// Original: core_gasmask.cpp_CGasMask_ctor_FUN_004a8a10
// Address: 004a8a10
CGasMask * __cdecl CGasMask::ctor(CGasMask *this_ptr);

// Original: core_gasmask.cpp_CGasMask_setup_FUN_004a8a60
// Address: 004a8a60
void __cdecl CGasMask::setup(CGasMask *this_ptr);

// Original: core_gasmask.cpp_CGasMask_canPickup_FUN_004a8a80
// Address: 004a8a80
int __cdecl CGasMask::canPickup(CGasMask *this_ptr,CDemonActor *picker);

// Original: core_gasmask.cpp_CGasMask_process_FUN_004a8aa0
// Address: 004a8aa0
void CGasMask::process(void);

// Original: core_gasmask.cpp_CGasMask_renderOpaque_FUN_004a8ab0
// Address: 004a8ab0
int CGasMask::renderOpaque(int param_1);

// Original: core_gasmask.cpp_CGasMask_archive_FUN_004a8b30
// Address: 004a8b30
void __cdecl CGasMask::archive(CGasMask *this_ptr);

// Original: core_gasmask.cpp_CGasMask_getCollisionType_FUN_004a8b60
// Address: 004a8b60
undefined4 CGasMask::getCollisionType(void);

// Original: core_gasmask.cpp_CGasMask_getBoundingBox_FUN_004a8b70
// Address: 004a8b70
CBoundingBox3D * __cdecl CGasMask::getBoundingBox(CGasMask *this_ptr,CBoundingBox3D *out_box);

// Original: core_gasmask.cpp_CGasMask_dtor_FUN_004a8bc0
// Address: 004a8bc0
CGasMask * __cdecl CGasMask::dtor(CGasMask *this_ptr,uint flags);
