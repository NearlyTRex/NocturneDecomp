// Name: core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0
// Address: 00517ec0
// Address Range: [[00517ec0, 0051805a]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0(int *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    _DAT_01cc4800 = "..\\core\\skeleton.cpp";
    _DAT_01cc4804 = 0x28a;
    FUN_004c8440("CDeformableModel::allocLOD - invalid lod number %d",param_2);
  }
  uVar1 = __vec_delete(param_1[param_2 + 0x10],&DAT_005a1ee0);
  shape_memdbg_cpp_free_FUN_00564486(uVar1);
  shape_memdbg_cpp_free_FUN_00564486(param_1[param_2 + 0x1f]);
  shape_memdbg_cpp_free_FUN_00564486(param_1[param_2 + 0x24]);
  shape_memdbg_cpp_free_FUN_00564486(param_1[param_2 + 0x29]);
  param_1[param_2 + 0xb] = param_3;
  param_1[param_2 + 0x15] = param_4;
  param_1[param_2 + 0x1a] = param_5;
  uVar1 = shape_memdbg_cpp_malloc_FUN_00564c18
                    (param_1[param_2 + 0xb] * 0x34 + 4,param_1[param_2 + 0xb],&DAT_005a1ee0);
  iVar2 = __vec_new(uVar1);
  param_1[param_2 + 0x10] = iVar2;
  iVar2 = shape_memdbg_cpp_malloc_FUN_00564c18
                    ((param_1[param_2 + 0x15] + param_1[param_2 + 0x1a]) * 0x12);
  param_1[param_2 + 0x1f] = iVar2;
  iVar2 = shape_memdbg_cpp_malloc_FUN_00564c18
                    ((param_1[param_2 + 0x15] + param_1[param_2 + 0x1a]) * 4);
  param_1[param_2 + 0x24] = iVar2;
  if (param_1[param_2 + 0x1a] < 1) {
    param_1[param_2 + 0x29] = 0;
  }
  else {
    iVar2 = shape_memdbg_cpp_malloc_FUN_00564c18(param_1[param_2 + 0x1a] * 4);
    param_1[param_2 + 0x29] = iVar2;
  }
  if ((((param_1[param_2 + 0x10] != 0) && (param_1[param_2 + 0x1f] != 0)) &&
      (param_1[param_2 + 0x24] != 0)) &&
     ((param_1[param_2 + 0x1a] < 1 || (param_1[param_2 + 0x29] != 0)))) {
    return;
  }
  core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(param_1);
  _DAT_01cc4800 = "..\\core\\skeleton.cpp";
  _DAT_01cc4804 = 0x2ae;
  FUN_004c8440("Out of hunk in CDeformableModel::allocMemory.  vertexCount=%d, triCount=%d, capTriCount=%d",param_1 + 0xb,param_1 + 0x15,param_1 + 0x1a);
  return;
}
