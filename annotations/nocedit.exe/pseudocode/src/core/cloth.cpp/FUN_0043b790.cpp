// Name: core_cloth.cpp_FUN_0043b790
// Address: 0043b790
// Address Range: [[0043b790, 0043b7d1]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_0043b790(void)

#include "nocturne.h"

void __cdecl core_cloth_cpp_FUN_0043b790(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr2,0xff);
  if (0 < *(int *)(in_stack_00000004 + 0x3ce8c)) {
    do {
      core_cloth_cpp_FUN_0043b7e0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x3ce8c));
  }
  return;
}
