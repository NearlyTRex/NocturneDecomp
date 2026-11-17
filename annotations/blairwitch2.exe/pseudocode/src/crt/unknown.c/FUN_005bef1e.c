// Name: crt_unknown.c_FUN_005bef1e
// Address: 005bef1e
// Address Range: [[005bef1e, 005bef44]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bef1e(void)

#include "nocturne.h"

void FUN_005bef1e(void)

{
  WatcomDestructorCall **ppWVar1;
  
  while (g_WatcomStaticDestructorNode_PTR_0061f64c != (WatcomStaticDestructorNode *)0x0) {
    ppWVar1 = &g_WatcomStaticDestructorNode_PTR_0061f64c->destructor_info;
    g_WatcomStaticDestructorNode_PTR_0061f64c = g_WatcomStaticDestructorNode_PTR_0061f64c->next;
    (*(*ppWVar1)->destructor_func)((*ppWVar1)->object_instance,0);
  }
  return;
}
