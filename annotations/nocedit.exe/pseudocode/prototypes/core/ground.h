#pragma once

// Function prototypes for core/ground.cpp
// Generated from Ghidra function signatures

// Original: core_ground.cpp_staticInit_FUN_004eeb90
// Address: 004eeb90
void __cdecl staticInit(void);

// Original: core_ground.cpp_openFileWithExtension_FUN_004eebc0
// Address: 004eebc0
_FILE * __cdecl openFileWithExtension(char *base_filename,char *file_extension,char *open_mode);

// Original: core_ground.cpp_getGroundTypeCode_FUN_004eece0
// Address: 004eece0
char * __cdecl getGroundTypeCode(int type);

// Original: core_ground.cpp_getGroundTypeName_FUN_004eed80
// Address: 004eed80
char * __cdecl getGroundTypeName(int type);

// Original: core_ground.cpp_getGroundTypeColor_FUN_004eee20
// Address: 004eee20
uint __cdecl getGroundTypeColor(int type);

// Original: core_ground.cpp_CGround_ctor_FUN_004eee80
// Address: 004eee80
CGround * __cdecl CGround::ctor(CGround *this_ptr,int width,int height);

// Original: core_ground.cpp_CGround_dtor_FUN_004eeee0
// Address: 004eeee0
CGround * __cdecl CGround::dtor(CGround *this_ptr);

// Original: core_ground.cpp_CGround_init_FUN_004eef00
// Address: 004eef00
void __cdecl CGround::init(CGround *this_ptr);

// Original: core_ground.cpp_CGround_free_FUN_004eefb0
// Address: 004eefb0
void __cdecl CGround::free(CGround *this_ptr);

// Original: core_ground.cpp_CGround_load_FUN_004ef030
// Address: 004ef030
int __cdecl CGround::load(CGround *this_ptr,char *filename);

// Original: core_ground.cpp_CGround_getVertexIndex_FUN_004ef380
// Address: 004ef380
int __cdecl CGround::getVertexIndex(CGround *this_ptr,int column,int row);

// Original: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004ef3a0
// Address: 004ef3a0
void __cdecl CGround::transformAndStoreVertex(CGround *this_ptr,int column,int row);

// Original: core_ground.cpp_CGround_transformAndStoreVertices_FUN_004ef490
// Address: 004ef490
void __cdecl CGround::transformAndStoreVertices(CGround *this_ptr);

// Original: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004ef880
// Address: 004ef880
void __cdecl CGround::setQuadTextureCoordinates(CGround *this_ptr,int column,int row);

// Original: core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970
// Address: 004ef970
void __cdecl CGround::renderTerrainPrimitive(CGround *this_ptr,SMRGLHeaderPrimitive *primitive);

// Original: core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990
// Address: 004ef990
void __cdecl CGround::renderTerrainQuad(CGround *this_ptr,int world_column,int world_row);

// Original: core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70
// Address: 004efb70
void __cdecl CGround::renderVisibleTerrain(CGround *this_ptr);

// Original: core_ground.cpp_CGround_render_FUN_004efc90
// Address: 004efc90
void __cdecl CGround::render(CGround *this_ptr);

// Original: core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30
// Address: 004efd30
int __cdecl CGround::getHeightAtPosition(CGround *this_ptr,int world_x,int world_z);

// Original: core_ground.cpp_CGround_getNormalAtPosition_FUN_004effb0
// Address: 004effb0
void __cdecl CGround::getNormalAtPosition(CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal);
