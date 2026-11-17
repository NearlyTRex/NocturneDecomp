// Name: crt_unknown.c_FUN_005a9e24
// Address: 005a9e24
// Address Range: [[005a9e24, 005a9e4a]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a9e24(void)

#include "nocturne.h"

void FUN_005a9e24(void)

{
  WatcomDestructorCall **ppWVar1;
  
  while (g_AtexitListHead != (WatcomStaticDestructorNode *)0x0) {
    ppWVar1 = &g_AtexitListHead->destructor_info;
    g_AtexitListHead = g_AtexitListHead->next;
    (*(*ppWVar1)->destructor_func)((*ppWVar1)->object_instance,0);
  }
  return;
}
