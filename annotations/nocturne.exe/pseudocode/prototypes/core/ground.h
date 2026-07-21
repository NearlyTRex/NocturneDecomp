#pragma once

// Function prototypes for core/ground.cpp
// Generated from Ghidra function signatures

// Original: core_ground.cpp_getGroundTypeCode_FUN_004b11b0
// Address: 004b11b0
undefined * __cdecl getGroundTypeCode(undefined4 param_1);

// Original: core_ground.cpp_getGroundTypeColor_FUN_004b12f0
// Address: 004b12f0
undefined4 getGroundTypeColor(undefined4 param_1);

// Original: core_ground.cpp_CGround_ctor_FUN_004b1350
// Address: 004b1350
void CGround::ctor(int *param_1,int param_2,int param_3);

// Original: core_ground.cpp_CGround_init_FUN_004b13d0
// Address: 004b13d0
void __cdecl CGround::init(int *param_1);

// Original: core_ground.cpp_CGround_free_FUN_004b1470
// Address: 004b1470
void __cdecl CGround::free(int param_1);

// Original: core_ground.cpp_CGround_load_FUN_004b14d0
// Address: 004b14d0
undefined4 __cdecl CGround::load(int *param_1,char *param_2);

// Original: core_ground.cpp_CGround_getVertexIndex_FUN_004b1800
// Address: 004b1800
int __cdecl CGround::getVertexIndex(int param_1,int param_2,int param_3);

// Original: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004b1820
// Address: 004b1820
void __cdecl CGround::transformAndStoreVertex(int *param_1,uint param_2,uint param_3);

// Original: core_ground.cpp_CGround_transformAndStoreVertices_FUN_004b1910
// Address: 004b1910
void __cdecl CGround::transformAndStoreVertices(int param_1);

// Original: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00
// Address: 004b1d00
void __cdecl CGround::setQuadTextureCoordinates(int *param_1,int param_2,int param_3);

// Original: core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0
// Address: 004b1df0
void __cdecl CGround::renderTerrainPrimitive(undefined4 param_1,undefined4 param_2);

// Original: core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10
// Address: 004b1e10
void __cdecl CGround::renderTerrainQuad(int param_1,uint param_2,uint param_3);

// Original: core_ground.cpp_CGround_renderVisibleTerrain_FUN_004b1ff0
// Address: 004b1ff0
void __cdecl CGround::renderVisibleTerrain(int param_1);

// Original: core_ground.cpp_CGround_render_FUN_004b2110
// Address: 004b2110
void __cdecl CGround::render(int param_1);

// Original: core_ground.cpp_CGround_getHeightAtPosition_FUN_004b21b0
// Address: 004b21b0
int __cdecl CGround::getHeightAtPosition(int *param_1,uint param_2,uint param_3);
