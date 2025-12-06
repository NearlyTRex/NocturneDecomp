// Name: core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
// Address: 004191d0
// Address Range: [[004191d0, 0041933d]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart * this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart *this_ptr)

{
  void *pvVar1;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  *(uint *)(this_ptr->field1_0x158 + 0x1c) = in_stack_00000008;
  *(uint *)(this_ptr->field1_0x158 + 0x28) = in_stack_0000000c;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(this_ptr->field1_0x158 + 0x20),
                      *(int *)(this_ptr->field1_0x158 + 0x1c) * 0xc,"..\\core\\bodypart.cpp",
                      0xa8);
  *(void **)(this_ptr->field1_0x158 + 0x20) = pvVar1;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(this_ptr->field1_0x158 + 0x24),
                      *(int *)(this_ptr->field1_0x158 + 0x1c) * 0xc,"..\\core\\bodypart.cpp",
                      0xa9);
  *(void **)(this_ptr->field1_0x158 + 0x24) = pvVar1;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(this_ptr->field1_0x158 + 0x2c),
                      *(int *)(this_ptr->field1_0x158 + 0x28) * 0x3c,"..\\core\\bodypart.cpp",
                      0xab);
  *(void **)(this_ptr->field1_0x158 + 0x2c) = pvVar1;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(this_ptr->field1_0x158 + 0x30),
                      *(int *)(this_ptr->field1_0x158 + 0x28) << 2,"..\\core\\bodypart.cpp",0xac
                     );
  *(void **)(this_ptr->field1_0x158 + 0x30) = pvVar1;
  if ((0 < *(int *)(this_ptr->field1_0x158 + 0x1c)) &&
     ((*(int *)(this_ptr->field1_0x158 + 0x20) == 0 ||
      (*(int *)(this_ptr->field1_0x158 + 0x24) == 0)))) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0xb2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CBodyPart::setCounts - out of memory for vertices - vertexCount = %d",*(uint *)(this_ptr->field1_0x158 + 0x1c));
  }
  if ((0 < *(int *)(this_ptr->field1_0x158 + 0x28)) &&
     ((*(int *)(this_ptr->field1_0x158 + 0x2c) == 0 ||
      (*(int *)(this_ptr->field1_0x158 + 0x30) == 0)))) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0xb7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBodyPart::setCounts - out of memory for triangles - triCount = %d");
    return;
  }
  return;
}
