// Name: core_skeledit.cpp_FUN_0058bc40
// Address: 0058bc40
// Address Range: [[0058bc40, 0058bcf0]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_FUN_0058bc40(void)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_FUN_0058bc40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  _FILE *in_stack_00000008;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  __STK(0x34);
  iVar3 = 1;
  do {
    iVar1 = _fgetc(in_stack_00000008);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x2c)) {
    iVar1 = 0;
    do {
      iVar2 = _fscanf(in_stack_00000008,"%f,%f,%f\n",&local_1c,&local_18,&local_14);
      if (iVar2 != 3) {
        return 0;
      }
      iVar2 = *(int *)(in_stack_00000004 + 0x40);
      *(byte *)(iVar2 + iVar1) = 1;
      *(uint *)(iVar2 + 0x10 + iVar1) = local_1c;
      *(uint *)(iVar2 + 0x14 + iVar1) = local_18;
      *(byte *)(iVar2 + 1 + iVar1) = 0;
      *(uint *)(iVar2 + 4 + iVar1) = 0x3f800000;
      *(uint *)(iVar2 + 0x18 + iVar1) = local_14;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x34;
    } while (iVar3 < *(int *)(in_stack_00000004 + 0x2c));
  }
  return 1;
}
