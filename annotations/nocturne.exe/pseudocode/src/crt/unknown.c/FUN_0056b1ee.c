// Name: crt_unknown.c_FUN_0056b1ee
// Address: 0056b1ee
// Address Range: [[0056b1ee, 0056b214]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056b1ee(void)

#include "nocturne.h"

void FUN_0056b1ee(void)

{
  WatcomDestructorCall **ppWVar1;
  
  while (g_AtexitListHead != (WatcomStaticDestructorNode *)0x0) {
    ppWVar1 = &g_AtexitListHead->destructor_info;
    g_AtexitListHead = g_AtexitListHead->next;
    (*(*ppWVar1)->destructor_func)((*ppWVar1)->object_instance,0);
  }
  return;
}
