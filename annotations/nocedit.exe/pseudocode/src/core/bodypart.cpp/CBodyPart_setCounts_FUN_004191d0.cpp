// Name: core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
// Address: 004191d0
// Address Range: [[004191d0, 0041933d]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart *this_ptr)

{
  int iVar1;
  void *pvVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  this_ptr->vertex_count = in_stack_00000008;
  this_ptr->tri_count = in_stack_0000000c;
  pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     ((void *)this_ptr->unk2,this_ptr->vertex_count * 0xc,
                      "..\\core\\bodypart.cpp",0xa8);
  this_ptr->unk2 = (int)pvVar2;
  pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     ((void *)this_ptr->unk3,this_ptr->vertex_count * 0xc,
                      "..\\core\\bodypart.cpp",0xa9);
  this_ptr->unk3 = (int)pvVar2;
  pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)this_ptr->unk4,this_ptr->tri_count * 0x3c,
                      "..\\core\\bodypart.cpp",0xab);
  *(void **)this_ptr->unk4 = pvVar2;
  pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(this_ptr->unk4 + 4),this_ptr->tri_count << 2,
                      "..\\core\\bodypart.cpp",0xac);
  iVar1 = this_ptr->vertex_count;
  *(void **)(this_ptr->unk4 + 4) = pvVar2;
  if ((0 < iVar1) && ((this_ptr->unk2 == 0 || (this_ptr->unk3 == 0)))) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0xb2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CBodyPart::setCounts - out of memory for vertices - vertexCount = %d",this_ptr->vertex_count);
  }
  if ((0 < this_ptr->tri_count) &&
     ((*(int *)this_ptr->unk4 == 0 || (*(int *)(this_ptr->unk4 + 4) == 0)))) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0xb7;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CBodyPart::setCounts - out of memory for triangles - triCount = %d",this_ptr->tri_count);
    return;
  }
  return;
}
