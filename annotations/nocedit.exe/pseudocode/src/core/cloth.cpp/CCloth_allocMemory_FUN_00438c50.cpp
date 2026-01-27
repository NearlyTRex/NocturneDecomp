// Name: core_cloth.cpp_CCloth_allocMemory_FUN_00438c50
// Address: 00438c50
// Address Range: [[00438c50, 00438ca7]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_CCloth_allocMemory_FUN_00438c50(CCloth * this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(CCloth *this_ptr)

{
  void *pvVar1;
  
  core_cloth_cpp_UnknownSomethingAndFreeMem_FUN_00438cb0();
  pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (*(int *)(this_ptr->unk + 0x104) << 2,"..\\core\\cloth.cpp",0x76);
  *(void **)(this_ptr->unk + 0x3fe3c) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\cloth.cpp";
  g_CurrentLineNumber = 0x77;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::allocMemory - Out of memory");
  return;
}
