// Name: shape_memdbg.cpp_getMemoryHeaderFromPtr_FUN_0050efa0
// Address: 0050efa0
// Address Range: [[0050efa0, 0050efdb]]
// Convention: __cdecl
// Signature: SMemHead * shape_memdbg.cpp_getMemoryHeaderFromPtr_FUN_0050efa0(void * user_ptr)

#include "nocturne.h"

SMemHead * __cdecl shape_memdbg_cpp_getMemoryHeaderFromPtr_FUN_0050efa0(void *user_ptr)

{
  if (user_ptr != (void *)0x0) {
    return (SMemHead *)((int)user_ptr + -0x28);
  }
  g_CurrentFilename = "..\\shape\\memdbg.cpp";
  g_CurrentLineNumber = 0x99;
  core_main_c_displayErrorAndQuit_FUN_00506f10("headFromPtr - NULL ptr");
  return (SMemHead *)0xffffffd8;
}
