// Name: core_mission.cpp_FUN_00522c60
// Address: 00522c60
// Address Range: [[00522c60, 00522c78]]
// Convention: __cdecl
// Signature: void core_mission.cpp_FUN_00522c60(FILE * file_handle)
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

void __cdecl core_mission_cpp_FUN_00522c60(FILE *file_handle)

{
  int iVar1;
  
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}


// Assembly code:
// 00522c60: PUSH EBX
//   Label: core_mission.cpp_FUN_00522c60
// 00522c61: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00522c65: PUSH EBX
//   Label: LAB_00522c65
// 00522c66: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00522c6b: ADD ESP,0x4
// 00522c6e: TEST EAX,EAX
// 00522c70: JL 0x00522c77
//   XREF to: 00522c77 (CONDITIONAL_JUMP)
// 00522c72: CMP EAX,0xa
// 00522c75: JNZ 0x00522c65
//   XREF to: 00522c65 (CONDITIONAL_JUMP)
// 00522c77: POP EBX
//   Label: LAB_00522c77
// 00522c78: RET
