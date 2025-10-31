// Name: sound_snddx.cpp_FUN_005aeed0
// Address: 005aeed0
// Address Range: [[005aeed0, 005aef03]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_FUN_005aeed0()
// Globals:
//   undefined4 DAT_03f6a9bc

#include "nocturne.h"

/* Signature: undefined1 sound_snddx.cpp_FUN_005aeed0(undefined1 param_1, undefined8 param_2,
   undefined8 param_3, undefined8 param_4) */

void sound_snddx_cpp_FUN_005aeed0(void)

{
  if (DAT_03f6a9bc == (int *)0x0) {
    return;
  }
  (**(code **)(*DAT_03f6a9bc + 0x40))();
  return;
}


// Assembly code:
// 005aeed0: MOV EDX,dword ptr [0x03f6a9bc]
//   Label: sound_snddx.cpp_FUN_005aeed0
//   XREF to: 03f6a9bc (READ)
// 005aeed6: TEST EDX,EDX
// 005aeed8: JNZ 0x005aeedb
//   XREF to: 005aeedb (CONDITIONAL_JUMP)
// 005aeeda: RET
// 005aeedb: PUSH 0x0
//   Label: LAB_005aeedb
// 005aeedd: FLD double ptr [ESP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 005aeee1: MOV EAX,EDX
// 005aeee3: SUB ESP,0x4
// 005aeee6: MOV EDX,dword ptr [EDX]
// 005aeee8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005aeeeb: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 005aeeef: SUB ESP,0x4
// 005aeef2: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005aeef5: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005aeef9: SUB ESP,0x4
// 005aeefc: FSTP float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005aeeff: PUSH EAX
// 005aef00: CALL dword ptr [EDX + 0x40]
// 005aef03: RET
