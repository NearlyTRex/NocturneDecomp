// Name: crt_unknown.c_ios_clear_FUN_00565e94
// Address: 00565e94
// Address Range: [[00565e94, 00565eb4]]
// Convention: unknown
// Signature: uint crt_unknown_c_ios_clear_FUN_00565e94(FileEmbeddedData *param_1,uint param_2)

#include "nocturne.h"

uint ios_clear(FileEmbeddedData *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1->state_field;
  param_1->state_field = 0;
  reportStreamError(param_1,param_2);
  return uVar1;
}
