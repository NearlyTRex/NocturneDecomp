// Name: sound_snddx.cpp_FUN_005aee30
// Address: 005aee30
// Address Range: [[005aee30, 005aee63]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_FUN_005aee30()
// Globals:
//   undefined4 DAT_03f6a9bc

#include "nocturne.h"

/* Signature: undefined1 sound_snddx.cpp_FUN_005aee30(undefined1 param_1, undefined8 param_2,
   undefined8 param_3, undefined8 param_4) */

void sound_snddx_cpp_FUN_005aee30(void)

{
  if (DAT_03f6a9bc == (int *)0x0) {
    return;
  }
  (**(code **)(*DAT_03f6a9bc + 0x38))();
  return;
}


// Assembly code:
// 005aee30: MOV EDX,dword ptr [0x03f6a9bc]
//   Label: sound_snddx.cpp_FUN_005aee30
//   XREF to: 03f6a9bc (READ)
// 005aee36: TEST EDX,EDX
// 005aee38: JNZ 0x005aee3b
//   XREF to: 005aee3b (CONDITIONAL_JUMP)
// 005aee3a: RET
// 005aee3b: PUSH 0x0
//   Label: LAB_005aee3b
// 005aee3d: FLD double ptr [ESP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 005aee41: MOV EAX,EDX
// 005aee43: SUB ESP,0x4
// 005aee46: MOV EDX,dword ptr [EDX]
// 005aee48: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005aee4b: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 005aee4f: SUB ESP,0x4
// 005aee52: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005aee55: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005aee59: SUB ESP,0x4
// 005aee5c: FSTP float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005aee5f: PUSH EAX
// 005aee60: CALL dword ptr [EDX + 0x38]
// 005aee63: RET
