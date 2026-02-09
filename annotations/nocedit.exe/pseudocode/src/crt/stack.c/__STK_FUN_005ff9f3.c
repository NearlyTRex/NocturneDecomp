// Name: crt_stack.c___STK_FUN_005ff9f3
// Address: 005ff9f3
// Address Range: [[005ff9f3, 005ffa02]]
// Convention: __stk_probe
// Signature: void __stk_probe crt_stack_c___STK_FUN_005ff9f3(void)

#include "nocturne.h"

void __stk_probe __STK(void)

{
  LOCK();
  UNLOCK();
  check_stack_target();
  return;
}
