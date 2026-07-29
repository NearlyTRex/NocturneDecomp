#pragma once

// Function prototypes for engine/model.cpp
// Generated from Ghidra function signatures

// Original: engine_model.c_byteswapMRGLData_FUN_004dcc90
// Address: 004dcc90
void __cdecl byteswapMRGLData(SMRGLHeaderExtended *mrgl_data,int data_size);

// Original: engine_model.c_loadModelFile_FUN_004dcd10
// Address: 004dcd10
SMRGLHeaderExtended * __cdecl loadModelFile(char *filename);

// Original: engine_model.c_freeMRGLData_FUN_004dcee0
// Address: 004dcee0
void freeMRGLData(SMRGLHeaderExtended *param_1);

// Original: engine_model.c_getMRGLBounds_FUN_004dcf60
// Address: 004dcf60
SMRGLModelBounds * __stack_esi getMRGLBounds(SMRGLHeaderBasic *mrgl_data,SMRGLModelBounds *output_bounds);

// Original: engine_model.c_getMRGLSize_FUN_004dd520
// Address: 004dd520
int __cdecl getMRGLSize(SMRGLHeaderExtended *header);

// Original: engine_model.c_loadMRGLTextures_FUN_004dd690
// Address: 004dd690
void __cdecl loadMRGLTextures(SMRGLHeaderExtended *mrgl);

// Original: engine_model.c_initializeMRGLModel_FUN_004dd760
// Address: 004dd760
void __cdecl initializeMRGLModel(SMRGLHeaderExtended *mrgl);

// Original: engine_model.c_loadModelChunk_FUN_004dd790
// Address: 004dd790
SMRGLHeaderExtended * __cdecl loadModelChunk(char *filename,int model_size);
