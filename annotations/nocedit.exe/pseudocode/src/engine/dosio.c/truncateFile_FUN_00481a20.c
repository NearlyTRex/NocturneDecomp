// Name: engine_dosio.c_truncateFile_FUN_00481a20
// Address: 00481a20
// Address Range: [[00481a20, 00481a46]]
// Convention: __cdecl
// Signature: int engine_dosio.c_truncateFile_FUN_00481a20(FILE * file_handle, long new_size_bytes)
// Function calls:
//   crt_io.c_ftruncate_FUN_00600cf0

#include "nocturne.h"

int __cdecl engine_dosio_c_truncateFile_FUN_00481a20(FILE *file_handle,long new_size_bytes)

{
  int iVar1;
  
  if (file_handle->_handle != -1) {
    iVar1 = crt_io_c_ftruncate_FUN_00600cf0(file_handle->_handle,new_size_bytes);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 00481a20: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_dosio.c_truncateFile_FUN_00481a20
//   XREF to: Stack[0x4] (READ)
// 00481a24: MOV EAX,dword ptr [EAX + 0x10]
// 00481a27: CMP EAX,-0x1
// 00481a2a: JNZ 0x00481a2f
//   XREF to: 00481a2f (CONDITIONAL_JUMP)
// 00481a2c: XOR EAX,EAX
//   Label: LAB_00481a2c
// 00481a2e: RET
// 00481a2f: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_00481a2f
//   XREF to: Stack[0x8] (READ)
// 00481a33: PUSH EDX
// 00481a34: PUSH EAX
// 00481a35: CALL crt_io.c_ftruncate_FUN_00600cf0
//   XREF to: 00600cf0 (UNCONDITIONAL_CALL)
// 00481a3a: ADD ESP,0x8
// 00481a3d: TEST EAX,EAX
// 00481a3f: JNZ 0x00481a2c
//   XREF to: 00481a2c (CONDITIONAL_JUMP)
// 00481a41: MOV EAX,0x1
// 00481a46: RET
