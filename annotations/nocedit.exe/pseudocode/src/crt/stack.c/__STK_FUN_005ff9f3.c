// Name: crt_stack.c___STK_FUN_005ff9f3
// Address: 005ff9f3
// Address Range: [[005ff9f3, 005ffa02]]
// Convention: __stdcall
// Signature: uint __stdcall crt_stack_c___STK_FUN_005ff9f3(uint stack_size)

#include "nocturne.h"

uint __stdcall __STK(uint stack_size)

{
  uint in_EAX;
  
  LOCK();
  UNLOCK();
  check_stack_target((void *)stack_size);
  return in_EAX;
}
