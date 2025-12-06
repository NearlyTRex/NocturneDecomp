// Name: core_skeledit.cpp_FUN_0058bc40
// Address: 0058bc40
// Address Range: [[0058bc40, 0058bcf0]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058bc40()

#include "nocturne.h"

uint core_skeledit_cpp_FUN_0058bc40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  uint unaff_EBP;
  int in_stack_0000000c;
  FILE *in_stack_00000010;
  uint local_14;
  byte auStack_10 [4];
  uint uStack_c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x34);
  iVar3 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0x2c)) {
    iVar1 = 0;
    do {
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (in_stack_00000010,"%f,%f,%f\n",&local_14,auStack_10,&uStack_c);
      if (iVar2 != 3) {
        return 0;
      }
      iVar2 = *(int *)(in_stack_0000000c + 0x40);
      *(byte *)(iVar2 + iVar1) = 1;
      *(uint *)(iVar2 + 0x10 + iVar1) = local_14;
      *(uint *)(iVar2 + 0x14 + iVar1) = uStack_c;
      *(byte *)(iVar2 + 1 + iVar1) = 0;
      *(uint *)(iVar2 + 4 + iVar1) = 0x3f800000;
      *(uint *)(iVar2 + 0x18 + iVar1) = unaff_EBP;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x34;
    } while (iVar3 < *(int *)(in_stack_0000000c + 0x2c));
  }
  return 1;
}
