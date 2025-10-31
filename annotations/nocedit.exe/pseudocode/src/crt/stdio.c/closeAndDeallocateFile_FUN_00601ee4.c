// Name: crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4
// Address: 00601ee4
// Address Range: [[00601ee4, 00601f09]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4(FILE * file_handle, int close_flags)
// Cross-references:
//   crt_stdio.c_closeTrackedFile_FUN_00601ea0 (00601ea0) at 00601ed7 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00608fdc (00608fdc) at 0060902c [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_DeallocateFileStruct_FUN_006093b0
//   crt_stdio.c_fclose_FUN_00601fd0

#include "nocturne.h"

int __watcallStack
crt_stdio_c_closeAndDeallocateFile_FUN_00601ee4(FILE *file_handle,int close_flags)

{
  int iVar1;
  
  iVar1 = crt_stdio_c_fclose_FUN_00601fd0(file_handle,close_flags);
  crt_stdio_c_DeallocateFileStruct_FUN_006093b0((FILE *)close_flags);
  return iVar1;
}


// Assembly code:
// 00601ee4: PUSH EBX
//   Label: crt_stdio.c_closeAndDeallocateFile_FUN_00601ee4
// 00601ee5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00601ee9: PUSH EDX
// 00601eea: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00601eee: PUSH EBX
// 00601eef: CALL crt_stdio.c_fclose_FUN_00601fd0
//   XREF to: 00601fd0 (UNCONDITIONAL_CALL)
// 00601ef4: ADD ESP,0x8
// 00601ef7: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00601efb: PUSH ECX
// 00601efc: MOV EBX,EAX
// 00601efe: CALL crt_stdio.c_DeallocateFileStruct_FUN_006093b0
//   XREF to: 006093b0 (UNCONDITIONAL_CALL)
// 00601f03: ADD ESP,0x4
// 00601f06: MOV EAX,EBX
// 00601f08: POP EBX
// 00601f09: RET
