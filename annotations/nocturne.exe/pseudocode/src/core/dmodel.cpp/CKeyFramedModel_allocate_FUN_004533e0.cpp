// Name: core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0
// Address: 004533e0
// Address Range: [[004533e0, 00453611]]
// Convention: unknown
// Signature: void core_dmodel_cpp_CKeyFramedModel_allocate_FUN_004533e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

void core_dmodel_cpp_CKeyFramedModel_allocate_FUN_004533e0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  
  core_dmodel_cpp_FUN_00452f10(param_1);
  *(uint *)(param_1 + 0x104) = param_2;
  *(uint *)(param_1 + 0x110) = param_3;
  *(uint *)(param_1 + 0x120) = param_4;
  *(uint *)(param_1 + 0x244) = param_5;
  *(uint *)(param_1 + 0x100) = param_6;
  if (4 < *(int *)(param_1 + 0x120)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dmodel.cpp";
    g_INT_01cc4804 = 0x2c0;
    core_main_c_FUN_004c8440("Too many materials!");
  }
  if (0x1e < *(int *)(param_1 + 0x244)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dmodel.cpp";
    g_INT_01cc4804 = 0x2c1;
    core_main_c_FUN_004c8440("Too many parts!");
  }
  pvVar2 = shape_memdbg_cpp_malloc_FUN_00564c18
                     (*(int *)(param_1 + 0x100) * *(int *)(param_1 + 0x104) * 0xc);
  *(void **)(param_1 + 0x10c) = pvVar2;
  pvVar2 = shape_memdbg_cpp_malloc_FUN_00564c18(*(int *)(param_1 + 0x110) * 0x48);
  *(void **)(param_1 + 0x114) = pvVar2;
  pvVar2 = shape_memdbg_cpp_malloc_FUN_00564c18(*(int *)(param_1 + 0x110) << 2);
  iVar1 = *(int *)(param_1 + 0x100);
  *(void **)(param_1 + 0x118) = pvVar2;
  piVar3 = shape_memdbg_cpp_malloc_FUN_00564c18(iVar1 * 0x18 + 4);
  piVar4 = piVar3;
  if (piVar3 != (int *)0x0) {
    piVar4 = piVar3 + 1;
    *piVar3 = iVar1;
  }
  *(int **)(param_1 + 0x350) = piVar4;
  if ((((*(int *)(param_1 + 0x10c) == 0) ||
       ((0 < *(int *)(param_1 + 0x110) && (*(int *)(param_1 + 0x114) == 0)))) ||
      ((0 < *(int *)(param_1 + 0x110) && (*(int *)(param_1 + 0x118) == 0)))) ||
     (*(int *)(param_1 + 0x350) == 0)) {
    core_dmodel_cpp_FUN_00452f10(param_1);
    g_INT_01cc4804 = 0x2d3;
    g_CHAR_PTR_01cc4800 = "..\\core\\dmodel.cpp";
    core_main_c_FUN_004c8440
              ("Out of memory in CKeyFramedModel::allocate.  frameCount=%d, vertexCount=%d, polyCount=%d",*(uint *)(param_1 + 0x100),
               *(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110));
    if (*(int *)(param_1 + 0x100) != 1) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x100) != 1) {
    return;
  }
  pvVar2 = shape_memdbg_cpp_malloc_FUN_00564c18(*(int *)(param_1 + 0x104) * 0xc);
  *(void **)(param_1 + 0x108) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    return;
  }
  g_CHAR_PTR_01cc4800 = "..\\core\\dmodel.cpp";
  g_INT_01cc4804 = 0x2db;
  core_main_c_FUN_004c8440("Out of memory for vertex normals in CKeyFramedModel::allocate.  vertexCount=%d",*(uint *)(param_1 + 0x104));
  return;
}
