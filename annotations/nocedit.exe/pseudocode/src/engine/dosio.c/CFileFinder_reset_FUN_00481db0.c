// Name: engine_dosio.c_CFileFinder_reset_FUN_00481db0
// Address: 00481db0
// Address Range: [[00481db0, 00481db7]]
// Convention: __cdecl
// Signature: void engine_dosio.c_CFileFinder_reset_FUN_00481db0(CFileFinder * this_ptr)
// Cross-references:
//   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70 (00481d70) at 00481da2 [UNCONDITIONAL_CALL]
//   engine_dosio.c_CFileFinder_ctor_FUN_00481c30 (00481c30) at 00481c40 [UNCONDITIONAL_CALL]
//   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 (00481cf0) at 00481d5d [UNCONDITIONAL_CALL]
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 (00481c70) at 00481cd4 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl engine_dosio_c_CFileFinder_reset_FUN_00481db0(CFileFinder *this_ptr)

{
  this_ptr->filename[0] = '\0';
  return;
}


// Assembly code:
// 00481db0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_dosio.c_CFileFinder_reset_FUN_00481db0
//   XREF to: Stack[0x4] (READ)
// 00481db4: MOV byte ptr [EAX],0x0
// 00481db7: RET
