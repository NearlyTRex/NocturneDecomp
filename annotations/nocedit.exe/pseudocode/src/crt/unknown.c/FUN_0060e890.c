// Name: crt_unknown.c_FUN_0060e890
// Address: 0060e890
// Address Range: [[0060e890, 0060e8d9]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0060e890(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_0060e890(uint *param_1,uint *param_2,uint *param_3)

{
  void *pvVar1;
  
  if (param_1 != (uint *)0x0) {
    pvVar1 = (void *)*param_1;
    *param_1 = PTR_crt_thread_c_create_thread_with_sync_FUN_0060f960_00685594;
    PTR_crt_thread_c_create_thread_with_sync_FUN_0060f960_00685594 = pvVar1;
  }
  if (param_2 != (uint *)0x0) {
    pvVar1 = (void *)*param_2;
    *param_2 = PTR_crt_thread_c_exit_thread_FUN_0060fa58_00685598;
    PTR_crt_thread_c_exit_thread_FUN_0060fa58_00685598 = pvVar1;
  }
  if (param_3 != (uint *)0x0) {
    pvVar1 = (void *)*param_3;
    *param_3 = PTR_unk_ReturnZero6_FUN_0060e850_0068559c;
    PTR_unk_ReturnZero6_FUN_0060e850_0068559c = pvVar1;
  }
  return;
}
