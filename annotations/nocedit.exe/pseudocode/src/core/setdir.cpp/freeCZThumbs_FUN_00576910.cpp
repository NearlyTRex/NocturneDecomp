// Name: core_setdir.cpp_freeCZThumbs_FUN_00576910
// Address: 00576910
// Address Range: [[00576910, 00576927]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_freeCZThumbs_FUN_00576910(CZThumb * * array)
// Globals:
//   WatcomTypeInfo g_CZThumbTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_setdir_cpp_freeCZThumbs_FUN_00576910(CZThumb **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x5dc,&g_CZThumbTypeInfo);
  return;
}


// Assembly code:
// 00576910: PUSH 0x6629f0
//   Label: core_setdir.cpp_freeCZThumbs_FUN_00576910
//   XREF to: 006629f0 (DATA)
// 00576915: PUSH 0x5dc
// 0057691a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0057691e: PUSH EDX
// 0057691f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00576924: ADD ESP,0xc
// 00576927: RET
