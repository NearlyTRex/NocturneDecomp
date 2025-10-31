// Name: engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610
// Address: 004b5610
// Address Range: [[004b5610, 004b5638]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610(CFileManager * this_ptr, char * filename)
// Function calls:
//   engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0
//   engine_model.c_freeMRGLData_FUN_005280b0
//   engine_model.c_loadModelFile_FUN_00527ec0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610
          (CFileManager *this_ptr,char *filename)

{
  SMRGLHeaderExtended *mrgl_node;
  
  mrgl_node = engine_model_c_loadModelFile_FUN_00527ec0(filename);
  engine_fileio_cpp_CFileManager_processMRGLNode_FUN_004b54e0((CFileManager *)filename,mrgl_node);
  engine_model_c_freeMRGLData_FUN_005280b0(mrgl_node);
  return;
}


// Assembly code:
// 004b5610: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610
// 004b5611: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004b5615: PUSH EDX
// 004b5616: CALL engine_model.c_loadModelFile_FUN_00527ec0
//   XREF to: 00527ec0 (UNCONDITIONAL_CALL)
// 004b561b: ADD ESP,0x4
// 004b561e: PUSH EAX
// 004b561f: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004b5623: PUSH ECX
// 004b5624: MOV EBX,EAX
// 004b5626: CALL engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0
//   XREF to: 004b54e0 (UNCONDITIONAL_CALL)
// 004b562b: ADD ESP,0x8
// 004b562e: PUSH EBX
// 004b562f: CALL engine_model.c_freeMRGLData_FUN_005280b0
//   XREF to: 005280b0 (UNCONDITIONAL_CALL)
// 004b5634: ADD ESP,0x4
// 004b5637: POP EBX
// 004b5638: RET
