#pragma once

// Function prototypes for engine/model.cpp
// Generated from Ghidra function signatures

// Original: engine_model.c_byteswapMRGLData_FUN_00527e40
// Address: 00527e40
void __cdecl byteswapMRGLData(SMRGLHeaderExtended *mrgl_data,int data_size);

// Original: engine_model.c_loadModelFile_FUN_00527ec0
// Address: 00527ec0
SMRGLHeaderExtended * __cdecl loadModelFile(char *filename);

// Original: engine_model.c_freeMRGLData_FUN_005280b0
// Address: 005280b0
void __cdecl freeMRGLData(SMRGLHeaderExtended *modelStruct);

// Original: engine_model.c_getMRGLBounds_FUN_00528140
// Address: 00528140
void __cdecl getMRGLBounds(SMRGLHeaderExtended *header,SMRGLModelBounds *output);

// Original: engine_model.c_getMRGLSize_FUN_00528700
// Address: 00528700
int __cdecl getMRGLSize(SMRGLHeaderExtended *header);

// Original: engine_model.c_loadMRGLTextures_FUN_00528870
// Address: 00528870
void __cdecl loadMRGLTextures(SMRGLHeaderExtended *block);

// Original: engine_model.c_initializeMRGLModel_FUN_00528940
// Address: 00528940
void __cdecl initializeMRGLModel(SMRGLHeaderExtended *mrgl);

// Original: engine_model.c_loadModelChunk_FUN_00528970
// Address: 00528970
SMRGLHeaderExtended * __cdecl loadModelChunk(char *filename,int model_size);
