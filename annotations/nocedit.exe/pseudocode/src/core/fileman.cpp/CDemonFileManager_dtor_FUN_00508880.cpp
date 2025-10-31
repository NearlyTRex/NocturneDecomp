// Name: core_fileman.cpp_CDemonFileManager_dtor_FUN_00508880
// Address: 00508880
// Address Range: [[00508880, 0050888f]]
// Convention: __cdecl
// Signature: CDemonFileManager * core_fileman.cpp_CDemonFileManager_dtor_FUN_00508880(CDemonFileManager * this_ptr)
// Function calls:
//   engine_fileio.cpp_CFileManager_dtor_FUN_004b53d0

#include "nocturne.h"

CDemonFileManager * __cdecl
core_fileman_cpp_CDemonFileManager_dtor_FUN_00508880(CDemonFileManager *this_ptr)

{
  CDemonFileManager *extraout_EAX;
  
  engine_fileio_cpp_CFileManager_dtor_FUN_004b53d0(&this_ptr->base_filemanager);
  return extraout_EAX;
}


// Assembly code:
// 00508880: PUSH 0x1
//   Label: core_fileman.cpp_CDemonFileManager_dtor_FUN_00508880
// 00508882: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00508886: PUSH EDX
// 00508887: CALL engine_fileio.cpp_CFileManager_dtor_FUN_004b53d0
//   XREF to: 004b53d0 (UNCONDITIONAL_CALL)
// 0050888c: ADD ESP,0x8
// 0050888f: RET
