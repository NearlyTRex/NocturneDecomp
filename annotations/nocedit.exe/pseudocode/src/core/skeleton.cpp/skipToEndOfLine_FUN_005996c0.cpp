// Name: core_skeleton.cpp_skipToEndOfLine_FUN_005996c0
// Address: 005996c0
// Address Range: [[005996c0, 005996d8]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_skipToEndOfLine_FUN_005996c0(FILE * file_ptr)
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

void __cdecl core_skeleton_cpp_skipToEndOfLine_FUN_005996c0(FILE *file_ptr)

{
  int iVar1;
  
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_ptr);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}


// Assembly code:
// 005996c0: PUSH EBX
//   Label: core_skeleton.cpp_skipToEndOfLine_FUN_005996c0
// 005996c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005996c5: PUSH EBX
//   Label: LAB_005996c5
// 005996c6: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005996cb: ADD ESP,0x4
// 005996ce: TEST EAX,EAX
// 005996d0: JL 0x005996d7
//   XREF to: 005996d7 (CONDITIONAL_JUMP)
// 005996d2: CMP EAX,0xa
// 005996d5: JNZ 0x005996c5
//   XREF to: 005996c5 (CONDITIONAL_JUMP)
// 005996d7: POP EBX
//   Label: LAB_005996d7
// 005996d8: RET
