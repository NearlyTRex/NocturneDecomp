// Name: crt_unknown.c_FUN_0056b1ee
// Address: 0056b1ee
// Address Range: [[0056b1ee, 0056b214]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056b1ee(void)

#include "nocturne.h"

void FUN_0056b1ee(void)

{
  WatcomDestructorCall **ppWVar1;
  
  while (g_WatcomStaticDestructorNode_PTR_005c1f50 != (WatcomStaticDestructorNode *)0x0) {
    ppWVar1 = &g_WatcomStaticDestructorNode_PTR_005c1f50->destructor_info;
    g_WatcomStaticDestructorNode_PTR_005c1f50 = g_WatcomStaticDestructorNode_PTR_005c1f50->next;
    (*(*ppWVar1)->destructor_func)((*ppWVar1)->object_instance,0);
  }
  return;
}
