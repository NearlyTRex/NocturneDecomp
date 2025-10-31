// Name: core_setdir.cpp_CZThumb_write_FUN_00574b20
// Address: 00574b20
// Address Range: [[00574b20, 00574b40]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CZThumb_write_FUN_00574b20(CZThumb * this_ptr, FILE * file_handle)
// Cross-references:
//   core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40 (00575e40) at 00575ea8 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fwrite_FUN_005fdc00

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_write_FUN_00574b20(CZThumb *this_ptr,FILE *file_handle)

{
  crt_stdio_c_fwrite_FUN_005fdc00
            (this_ptr->zbuffer_data,this_ptr->width * this_ptr->height,4,file_handle);
  return;
}


// Assembly code:
// 00574b20: PUSH ESI
//   Label: core_setdir.cpp_CZThumb_write_FUN_00574b20
// 00574b21: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00574b25: MOV EAX,dword ptr [EDX]
// 00574b27: IMUL EAX,dword ptr [EDX + 0x4]
// 00574b2b: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00574b2f: PUSH ECX
// 00574b30: PUSH 0x4
// 00574b32: PUSH EAX
// 00574b33: MOV ESI,dword ptr [EDX + 0x24]
// 00574b36: PUSH ESI
// 00574b37: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 00574b3c: ADD ESP,0x10
// 00574b3f: POP ESI
// 00574b40: RET
