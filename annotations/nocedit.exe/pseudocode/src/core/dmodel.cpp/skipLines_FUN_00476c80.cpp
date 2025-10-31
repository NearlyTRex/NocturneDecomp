// Name: core_dmodel.cpp_skipLines_FUN_00476c80
// Address: 00476c80
// Address Range: [[00476c80, 00476ca7]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_skipLines_FUN_00476c80(FILE * file_handle, int line_count)
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

void __cdecl core_dmodel_cpp_skipLines_FUN_00476c80(FILE *file_handle,int line_count)

{
  int iVar1;
  
  if (0 < line_count) {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) {
        return;
      }
    } while ((iVar1 != 10) || (line_count = line_count + -1, 0 < line_count));
  }
  return;
}


// Assembly code:
// 00476c80: PUSH EBX
//   Label: core_dmodel.cpp_skipLines_FUN_00476c80
// 00476c81: PUSH ESI
// 00476c82: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00476c86: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00476c8a: TEST ESI,ESI
// 00476c8c: JLE 0x00476ca5
//   XREF to: 00476ca5 (CONDITIONAL_JUMP)
// 00476c8e: PUSH EBX
//   Label: LAB_00476c8e
// 00476c8f: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00476c94: ADD ESP,0x4
// 00476c97: TEST EAX,EAX
// 00476c99: JL 0x00476ca5
//   XREF to: 00476ca5 (CONDITIONAL_JUMP)
// 00476c9b: CMP EAX,0xa
// 00476c9e: JNZ 0x00476c8e
//   XREF to: 00476c8e (CONDITIONAL_JUMP)
// 00476ca0: DEC ESI
// 00476ca1: TEST ESI,ESI
// 00476ca3: JG 0x00476c8e
//   XREF to: 00476c8e (CONDITIONAL_JUMP)
// 00476ca5: POP ESI
//   Label: LAB_00476ca5
// 00476ca6: POP EBX
// 00476ca7: RET
