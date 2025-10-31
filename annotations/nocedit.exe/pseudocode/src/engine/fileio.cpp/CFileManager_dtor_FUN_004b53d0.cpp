// Name: engine_fileio.cpp_CFileManager_dtor_FUN_004b53d0
// Address: 004b53d0
// Address Range: [[004b53d0, 004b53de]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_dtor_FUN_004b53d0(CFileManager * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_dtor_FUN_00508880 (00508880) at 00508887 [UNCONDITIONAL_CALL]
// Globals:
//   CFileManager_vtable g_CFileManagerVTable

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_dtor_FUN_004b53d0(CFileManager *this_ptr)

{
  this_ptr->vtable = &g_CFileManagerVTable;
  return;
}


// Assembly code:
// 004b53d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_fileio.cpp_CFileManager_dtor_FUN_004b53d0
//   XREF to: Stack[0x4] (READ)
// 004b53d4: MOV dword ptr [EAX + 0x138810],0x65d984
//   XREF to: 0065d984 (DATA)
// 004b53de: RET
