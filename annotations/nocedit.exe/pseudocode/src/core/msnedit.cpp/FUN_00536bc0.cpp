// Name: core_msnedit.cpp_FUN_00536bc0
// Address: 00536bc0
// Address Range: [[00536bc0, 00536be8]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00536bc0()
// Globals:
//   char[256] g_CharacterClassificationTable

#include "nocturne.h"

undefined4 core_msnedit_cpp_FUN_00536bc0(void)

{
  int in_stack_00000004;
  
  if ((((g_CharacterClassificationTable[(byte)((char)in_stack_00000004 + 1)] & 0xe0U) == 0) &&
      (in_stack_00000004 != 0x2d)) && (in_stack_00000004 != 0x5f)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 00536bc0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_msnedit.cpp_FUN_00536bc0
//   XREF to: Stack[0x4] (READ)
// 00536bc4: MOV AL,DL
// 00536bc6: INC AL
// 00536bc8: AND EAX,0xff
// 00536bcd: TEST byte ptr [EAX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 00536bd4: JNZ 0x00536be0
//   XREF to: 00536be0 (CONDITIONAL_JUMP)
// 00536bd6: CMP EDX,0x2d
// 00536bd9: JZ 0x00536be0
//   XREF to: 00536be0 (CONDITIONAL_JUMP)
// 00536bdb: CMP EDX,0x5f
// 00536bde: JNZ 0x00536be3
//   XREF to: 00536be3 (CONDITIONAL_JUMP)
// 00536be0: XOR EAX,EAX
//   Label: LAB_00536be0
// 00536be2: RET
// 00536be3: MOV EAX,0x1
//   Label: LAB_00536be3
// 00536be8: RET
