// Name: core_trigger.cpp_CTrigger_FUN_005e0630
// Address: 005e0630
// Address Range: [[005e0630, 005e0683]]
// Convention: __cdecl
// Signature: void core_trigger.cpp_CTrigger_FUN_005e0630(CTrigger * this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e0630(CTrigger *this_ptr)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  
  fVar1 = *(float *)(this_ptr->field1_0x158 + 8);
  fVar2 = (float)0.5;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(this_ptr->field1_0x158 + 0x10) * fVar2;
  in_stack_00000008[3] = *(float *)(this_ptr->field1_0x158 + 8) * fVar2;
  in_stack_00000008[4] = *(float *)(this_ptr->field1_0x158 + 0xc) + (float)0.10000000000000001;
  in_stack_00000008[5] = fVar2 * *(float *)(this_ptr->field1_0x158 + 0x10);
  return;
}
