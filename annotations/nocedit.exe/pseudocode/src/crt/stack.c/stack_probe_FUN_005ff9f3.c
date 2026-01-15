// Name: crt_stack.c_stack_probe_FUN_005ff9f3
// Address: 005ff9f3
// Address Range: [[005ff9f3, 005ffa02]]
// Convention: __stdcall
// Signature: uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)

#include "nocturne.h"

uint __stdcall crt_stack_c_stack_probe_FUN_005ff9f3(uint stack_size)

{
  uint in_EAX;
  
  LOCK();
  UNLOCK();
  crt_stack_c_check_stack_target_FUN_005ffa03((void *)stack_size);
  return in_EAX;
}
