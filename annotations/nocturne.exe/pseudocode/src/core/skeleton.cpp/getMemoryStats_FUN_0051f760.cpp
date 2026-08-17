// Name: core_skeleton.cpp_getMemoryStats_FUN_0051f760
// Address: 0051f760
// Address Range: [[0051f760, 0051f7f6]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_getMemoryStats_FUN_0051f760(char *output_buffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_getMemoryStats_FUN_0051f760(char *output_buffer)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CSkeleton *this_ptr;
  CDeformableModel *this_ptr_00;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < _DAT_02737ef4) {
    this_ptr = g_CSkeleton_ARRAY_02737ef8;
    do {
      iVar1 = core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_00517b50(this_ptr);
      iVar3 = iVar3 + 1;
      this_ptr = this_ptr + 1;
      iVar4 = iVar4 + iVar1;
    } while (iVar3 < _DAT_02737ef4);
  }
  iVar3 = 0;
  iVar1 = 0;
  if (0 < _DAT_0268cef0) {
    this_ptr_00 = g_CDeformableModel_ARRAY_0268cef4;
    do {
      iVar2 = core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0051b600(this_ptr_00);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + iVar2;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar3 < _DAT_0268cef0);
  }
  _sprintf(output_buffer,"%d skeletons, %d bytes, %d models, %d bytes",_DAT_02737ef4,iVar4,_DAT_0268cef0,
             iVar1);
  return;
}
