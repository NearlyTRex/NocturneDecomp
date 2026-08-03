#pragma once

// Function prototypes for core/ground.cpp
// Generated from Ghidra function signatures

// Original: core_ground.cpp_staticInit_FUN_004b1060
// Address: 004b1060
void __cdecl staticInit(void);

// Original: core_ground.cpp_openFileWithExtension_FUN_004b1090
// Address: 004b1090
_FILE * __cdecl openFileWithExtension(char *directory,char *filename,char *new_extension,char *open_mode);

// Original: core_ground.cpp_getGroundTypeCode_FUN_004b11b0
// Address: 004b11b0
char * __cdecl getGroundTypeCode(EGroundType type);

// Original: core_ground.cpp_getGroundTypeColor_FUN_004b12f0
// Address: 004b12f0
uint __cdecl getGroundTypeColor(EGroundType type);

// Original: core_ground.cpp_CGround_ctor_FUN_004b1350
// Address: 004b1350
CGround * __cdecl CGround::ctor(CGround *this_ptr,int width,int height);

// Original: core_ground.cpp_CGround_dtor_FUN_004b13b0
// Address: 004b13b0
CGround * __cdecl CGround::dtor(CGround *this_ptr,uint flags);

// Original: core_ground.cpp_CGround_init_FUN_004b13d0
// Address: 004b13d0
void __cdecl CGround::init(CGround *this_ptr);

// Original: core_ground.cpp_CGround_free_FUN_004b1470
// Address: 004b1470
void __cdecl CGround::free(CGround *this_ptr);

// Original: core_ground.cpp_CGround_load_FUN_004b14d0
// Address: 004b14d0
void __cdecl CGround::load(CGround *this_ptr,char *filename);

// Original: core_ground.cpp_CGround_getVertexIndex_FUN_004b1800
// Address: 004b1800
int __cdecl CGround::getVertexIndex(CGround *this_ptr,int column,int row);

// Original: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004b1820
// Address: 004b1820
void __cdecl CGround::transformAndStoreVertex(CGround *this_ptr,int column,int row);

// Original: core_ground.cpp_CGround_transformAndStoreVertices_FUN_004b1910
// Address: 004b1910
void __cdecl CGround::transformAndStoreVertices(CGround *this_ptr);

// Original: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00
// Address: 004b1d00
void __cdecl CGround::setQuadTextureCoordinates(CGround *this_ptr,int column,int row);

// Original: core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0
// Address: 004b1df0
void __cdecl CGround::renderTerrainPrimitive(CGround *this_ptr,SMRGLHeaderPrimitive *primitive);

// Original: core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10
// Address: 004b1e10
void __cdecl CGround::renderTerrainQuad(CGround *this_ptr,int world_column,int world_row);

// Original: core_ground.cpp_CGround_renderVisibleTerrain_FUN_004b1ff0
// Address: 004b1ff0
void __cdecl CGround::renderVisibleTerrain(CGround *this_ptr);

// Original: core_ground.cpp_CGround_render_FUN_004b2110
// Address: 004b2110
void __cdecl CGround::render(CGround *this_ptr);

// Original: core_ground.cpp_CGround_getHeightAtPosition_FUN_004b21b0
// Address: 004b21b0
int __cdecl CGround::getHeightAtPosition(CGround *this_ptr,int world_x,int world_z);

// Original: core_ground.cpp_CGround_getNormalAtPosition_FUN_004b2430
// Address: 004b2430
CVector3i * __stack3_esi CGround::getNormalAtPosition(CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal);
