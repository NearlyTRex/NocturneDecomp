// Name: engine_fileio.cpp_CCheckOutList_dtor_FUN_004bd730
// Address: 004bd730
// Address Range: [[004bd730, 004bd741]]
// Convention: __cdecl
// Signature: CCheckOutList * engine_fileio.cpp_CCheckOutList_dtor_FUN_004bd730(CCheckOutList * this_ptr)
// Function calls:
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860

#include "nocturne.h"

CCheckOutList * __cdecl engine_fileio_cpp_CCheckOutList_dtor_FUN_004bd730(CCheckOutList *this_ptr)

{
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  return this_ptr;
}


// Assembly code:
// 004bd730: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutList_dtor_FUN_004bd730
// 004bd731: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004bd735: PUSH EBX
// 004bd736: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004bd73b: ADD ESP,0x4
// 004bd73e: MOV EAX,EBX
// 004bd740: POP EBX
// 004bd741: RET
