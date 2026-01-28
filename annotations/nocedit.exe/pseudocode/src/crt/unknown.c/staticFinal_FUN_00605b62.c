// Name: crt_unknown.c_staticFinal_FUN_00605b62
// Address: 00605b62
// Address Range: [[00605b62, 00605b88]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_staticFinal_FUN_00605b62(void)

#include "nocturne.h"

void __cdecl crt_unknown_c_staticFinal_FUN_00605b62(void)

{
  WatcomDestructorCall **ppWVar1;
  
  while (g_AtexitListHead != (WatcomStaticDestructorNode *)0x0) {
    ppWVar1 = &g_AtexitListHead->destructor_info;
    g_AtexitListHead = g_AtexitListHead->next;
    (*(*ppWVar1)->destructor_func)();
  }
  return;
}
