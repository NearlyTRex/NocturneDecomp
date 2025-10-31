// Name: crt_io.c_findCloseWrapper_FUN_00602380
// Address: 00602380
// Address Range: [[00602380, 00602398]]
// Convention: __cdecl
// Signature: int crt_io.c_findCloseWrapper_FUN_00602380(HANDLE find_handle)
// Cross-references:
//   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 (005dc2a0) at 005dc44d [UNCONDITIONAL_CALL]
// Globals:
//   FindClose* PTR_FindClose_00611548 = 00211d78

#include "nocturne.h"

int __cdecl crt_io_c_findCloseWrapper_FUN_00602380(HANDLE find_handle)

{
  BOOL BVar1;
  
  BVar1 = (*PTR_FindClose_00611548)(find_handle);
  return (BVar1 == 1) - 1;
}


// Assembly code:
// 00602380: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_io.c_findCloseWrapper_FUN_00602380
//   XREF to: Stack[0x4] (READ)
// 00602384: PUSH EDX
// 00602385: CALL dword ptr CS:[0x611548]
//   XREF to: 00611548 (READ)
// 0060238c: CMP EAX,0x1
// 0060238f: SETZ AL
// 00602392: AND EAX,0xff
// 00602397: DEC EAX
// 00602398: RET
