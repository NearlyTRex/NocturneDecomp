// Name: core_zombie.cpp_FUN_005f8cc0
// Address: 005f8cc0
// Address Range: [[005f8cc0, 005f8d24]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005f8cc0()
// Globals:
//   undefined4 DAT_00658435

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_zombie_cpp_FUN_005f8cc0(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (in_stack_00000004 == 0) {
    return 1.0;
  }
  iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  return (*(float *)(iVar1 + 0x14) - *(float *)(iVar1 + 8)) * (float)_DAT_00658435 + 1.0;
}


// Assembly code:
// 005f8cc0: PUSH EBP
//   Label: core_zombie.cpp_FUN_005f8cc0
// 005f8cc1: MOV EBP,ESP
// 005f8cc3: SUB ESP,0x28
// 005f8cc6: AND ESP,0xfffffff8
// 005f8cc9: MOV ECX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f8ccc: MOV dword ptr [ESP + 0x24],0x3f800000
//   XREF to: Stack[-0xc] (WRITE)
// 005f8cd4: TEST ECX,ECX
// 005f8cd6: JNZ 0x005f8ce0
//   XREF to: 005f8ce0 (CONDITIONAL_JUMP)
// 005f8cd8: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (READ)
// 005f8cdc: MOV ESP,EBP
// 005f8cde: POP EBP
// 005f8cdf: RET
// 005f8ce0: MOV EAX,ESP
//   Label: LAB_005f8ce0
// 005f8ce2: PUSH EAX
// 005f8ce3: MOV EDX,dword ptr [ECX + 0x154]
// 005f8ce9: PUSH ECX
// 005f8cea: CALL dword ptr [EDX + 0x14]
// 005f8ced: LEA EDX,[EAX + 0xc]
// 005f8cf0: FLD float ptr [EDX]
// 005f8cf2: FSUB float ptr [EAX]
// 005f8cf4: ADD ESP,0x8
// 005f8cf7: FSTP float ptr [ESP + 0x18]
// 005f8cfb: FLD float ptr [EDX + 0x4]
// 005f8cfe: FSUB float ptr [EAX + 0x4]
// 005f8d01: FSTP float ptr [ESP + 0x1c]
// 005f8d05: FLD float ptr [EDX + 0x8]
// 005f8d08: FSUB float ptr [EAX + 0x8]
// 005f8d0b: FST float ptr [ESP + 0x20]
// 005f8d0f: FMUL double ptr [0x00658435]
//   XREF to: 00658435 (READ)
// 005f8d15: FLD1
// 005f8d17: FADDP
// 005f8d19: FSTP float ptr [ESP + 0x24]
// 005f8d1d: MOV EAX,dword ptr [ESP + 0x24]
// 005f8d21: MOV ESP,EBP
// 005f8d23: POP EBP
// 005f8d24: RET
