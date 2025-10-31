// Name: core_trigger.cpp_CTrigger_FUN_005e0630
// Address: 005e0630
// Address Range: [[005e0630, 005e0683]]
// Convention: __cdecl
// Signature: void core_trigger.cpp_CTrigger_FUN_005e0630(CTrigger * this_ptr)
// Globals:
//   undefined4 DAT_0065566c
//   undefined4 DAT_00655674

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_trigger_cpp_CTrigger_FUN_005e0630(CTrigger *this_ptr)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  
  fVar1 = *(float *)(this_ptr->field1_0x158 + 8);
  fVar2 = (float)_DAT_0065566c;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(this_ptr->field1_0x158 + 0x10) * fVar2;
  in_stack_00000008[3] = *(float *)(this_ptr->field1_0x158 + 8) * fVar2;
  in_stack_00000008[4] = *(float *)(this_ptr->field1_0x158 + 0xc) + (float)_DAT_00655674;
  in_stack_00000008[5] = fVar2 * *(float *)(this_ptr->field1_0x158 + 0x10);
  return;
}


// Assembly code:
// 005e0630: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_trigger.cpp_CTrigger_FUN_005e0630
//   XREF to: Stack[0x4] (READ)
// 005e0634: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005e0638: FLD float ptr [EDX + 0x160]
// 005e063e: FCHS
// 005e0640: FLD double ptr [0x0065566c]
//   XREF to: 0065566c (READ)
// 005e0646: FXCH
// 005e0648: FMUL ST1
// 005e064a: MOV dword ptr [EAX + 0x4],0xbdcccccd
// 005e0651: FSTP float ptr [EAX]
// 005e0653: FLD float ptr [EDX + 0x168]
// 005e0659: FCHS
// 005e065b: FMUL ST1
// 005e065d: FSTP float ptr [EAX + 0x8]
// 005e0660: FLD float ptr [EDX + 0x160]
// 005e0666: FMUL ST1
// 005e0668: FSTP float ptr [EAX + 0xc]
// 005e066b: FLD float ptr [EDX + 0x164]
// 005e0671: FADD double ptr [0x00655674]
//   XREF to: 00655674 (READ)
// 005e0677: FSTP float ptr [EAX + 0x10]
// 005e067a: FMUL float ptr [EDX + 0x168]
// 005e0680: FSTP float ptr [EAX + 0x14]
// 005e0683: RET
