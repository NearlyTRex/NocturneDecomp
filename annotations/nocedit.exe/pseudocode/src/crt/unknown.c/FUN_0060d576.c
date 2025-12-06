// Name: crt_unknown.c_FUN_0060d576
// Address: 0060d576
// Address Range: [[0060d576, 0060d5fe]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060d576()

#include "nocturne.h"

uint crt_unknown_c_FUN_0060d576(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  FILE *in_stack_00000004;
  
  iVar2 = crt_stdio_c_stream_valid_FUN_00608cd1(in_stack_00000004,1);
  if (iVar2 == 0) {
    in_stack_00000004->_cnt = 0;
    return 0xffffffff;
  }
  iVar2 = *(int *)((int)&in_stack_00000004->_cnt + *(int *)(in_stack_00000004->_ptr + 4));
  if (*(uint *)(iVar2 + 0x10) <= *(uint *)(iVar2 + 0x14)) {
    iVar4 = (**(code **)(*(int *)(iVar2 + 0x28) + 0x10))();
    if (iVar4 == -1) {
      uVar3 = 0xffffffff;
      goto LAB_0060d5b5;
    }
  }
  pbVar1 = *(byte **)(iVar2 + 0x14);
  *(byte **)(iVar2 + 0x14) = pbVar1 + 1;
  uVar3 = (uint)*pbVar1;
LAB_0060d5b5:
  if (uVar3 != 0xffffffff) {
    in_stack_00000004->_cnt = 1;
    return uVar3;
  }
  crt_stdio_c_reportStreamError_FUN_00606020
            ((FileEmbeddedData *)
             ((int)&in_stack_00000004->_ptr + *(int *)(in_stack_00000004->_ptr + 4)),4);
  in_stack_00000004->_cnt = 0;
  return 0xffffffff;
}
