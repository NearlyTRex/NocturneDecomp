// Name: crt_unknown.c_FUN_0060e890
// Address: 0060e890
// Address Range: [[0060e890, 0060e8d9]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0060e890(void)

#include "nocturne.h"

void FUN_0060e890(void)

{
  void *pvVar1;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  
  if (in_stack_00000004 != (uint *)0x0) {
    pvVar1 = (void *)*in_stack_00000004;
    *in_stack_00000004 = PTR_crt_thread_c_create_thread_with_sync_FUN_0060f960_00685594;
    PTR_crt_thread_c_create_thread_with_sync_FUN_0060f960_00685594 = pvVar1;
  }
  if (in_stack_00000008 != (uint *)0x0) {
    pvVar1 = (void *)*in_stack_00000008;
    *in_stack_00000008 = PTR_crt_thread_c_exit_thread_FUN_0060fa58_00685598;
    PTR_crt_thread_c_exit_thread_FUN_0060fa58_00685598 = pvVar1;
  }
  if (in_stack_0000000c != (uint *)0x0) {
    pvVar1 = (void *)*in_stack_0000000c;
    *in_stack_0000000c = PTR_unk_ReturnZero6_FUN_0060e850_0068559c;
    PTR_unk_ReturnZero6_FUN_0060e850_0068559c = pvVar1;
  }
  return;
}
