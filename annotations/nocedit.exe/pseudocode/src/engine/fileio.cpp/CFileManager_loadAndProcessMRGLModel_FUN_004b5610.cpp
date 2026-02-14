// Name: engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610
// Address: 004b5610
// Address Range: [[004b5610, 004b5638]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610(CFileManager *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610(CFileManager *this_ptr,char *filename)

{
  SMRGLHeaderExtended *mrgl_node;
  
  mrgl_node = engine_model_c_loadModelFile_FUN_00527ec0(filename);
  engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0(this_ptr,mrgl_node);
  engine_model_c_freeMRGLData_FUN_005280b0(mrgl_node);
  return;
}
