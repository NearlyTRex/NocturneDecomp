// Name: crt_unknown.c_FUN_00600ee4
// Address: 00600ee4
// Address Range: [[00600ee4, 00600f32]]
// Convention: unknown
// Signature: _FILE * crt_unknown_c_FUN_00600ee4(_FILE *param_1,undefined4 param_2)

#include "nocturne.h"

_FILE * FUN_00600ee4(_FILE *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = stream_valid(param_1,1);
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)&param_1->_cnt + *(int *)(param_1->_ptr + 4));
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x28) + 0x18))(iVar1,param_2,0,1);
    if (iVar1 == -1) {
      reportStreamError
                ((FileEmbeddedData *)((int)&param_1->_ptr + *(int *)(param_1->_ptr + 4)),2);
      return param_1;
    }
  }
  return param_1;
}
