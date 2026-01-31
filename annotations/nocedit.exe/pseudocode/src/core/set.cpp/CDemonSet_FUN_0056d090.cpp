// Name: core_set.cpp_CDemonSet_FUN_0056d090
// Address: 0056d090
// Address Range: [[0056d090, 0056d109]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0056d090(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056d090(CDemonSet *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000008 + 0x1cb4) != 0) {
    if (0 < g_DynamicLightCount) {
      iVar1 = 0;
      do {
        if (in_stack_00000008 == *(int *)((int)g_DynamicLights + iVar1)) {
          return;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < g_DynamicLightCount * 4);
    }
    if (3 < g_DynamicLightCount) {
      g_CurrentFilename = "..\\core\\set.cpp";
      g_CurrentLineNumber = 0x8cf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many dynamic lights!");
    }
    g_DynamicLightCount = g_DynamicLightCount + 1;
    (&g_DynamicLightCount)[g_DynamicLightCount] = in_stack_00000008;
  }
  return;
}
