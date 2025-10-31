// Name: engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0
// Address: 004b53a0
// Address Range: [[004b53a0, 004b53c2]]
// Convention: __cdecl
// Signature: CFileManager * engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0(CFileManager * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_ctor_FUN_00508860 (00508860) at 00508865 [UNCONDITIONAL_CALL]
//   core_main.c_staticInit_FUN_00506e80 (00506e80) at 00506e85 [UNCONDITIONAL_CALL]
// Globals:
//   CFileManager_vtable g_CFileManagerVTable

#include "nocturne.h"

CFileManager * __cdecl engine_fileio_cpp_CFileManager_ctor_FUN_004b53a0(CFileManager *this_ptr)

{
  this_ptr->operation_mode = 1;
  this_ptr->batch_mode = 0;
  this_ptr->vtable = &g_CFileManagerVTable;
  return this_ptr;
}


// Assembly code:
// 004b53a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0
//   XREF to: Stack[0x4] (READ)
// 004b53a4: MOV dword ptr [EAX + 0x138808],0x1
// 004b53ae: MOV dword ptr [EAX + 0x13880c],0x0
// 004b53b8: MOV dword ptr [EAX + 0x138810],0x65d984
//   XREF to: 0065d984 (DATA)
// 004b53c2: RET
