// Name: core_cloth.cpp_FUN_00441e60
// Address: 00441e60
// Address Range: [[00441e60, 00441f5d]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_00441e60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_cloth_cpp_FUN_00441e60(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (*in_stack_00000004 <= in_stack_00000008)) {
    _DAT_01d1d400 = "..\\core\\cloth.cpp";
    _DAT_01d1d404 = 0x5f1;
    core_main_c_FUN_005030e0("CClothList::remove - invalid index");
  }
  if (in_stack_00000004[in_stack_00000008 + 0x65] != 0) {
    uVar3 = core_cloth_cpp_FUN_0043e620(in_stack_00000004[in_stack_00000008 + 0x65],0);
    FUN_005c0344(uVar3);
  }
  iVar7 = in_stack_00000008 + 1;
  if (iVar7 < *in_stack_00000004) {
    piVar6 = in_stack_00000004 + iVar7 * 10 + -9;
    piVar5 = in_stack_00000004 + iVar7 * 10 + 1;
    piVar4 = in_stack_00000004 + iVar7;
    do {
      piVar8 = piVar5;
      piVar9 = piVar6;
      do {
        iVar2 = *piVar8;
        *(char *)piVar9 = (char)iVar2;
        if ((char)iVar2 == '\0') break;
        cVar1 = *(char *)((int)piVar8 + 1);
        piVar8 = (int *)((int)piVar8 + 2);
        *(char *)((int)piVar9 + 1) = cVar1;
        piVar9 = (int *)((int)piVar9 + 2);
      } while (cVar1 != '\0');
      piVar4[100] = piVar4[0x65];
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 10;
      piVar5 = piVar5 + 10;
      piVar4 = piVar4 + 1;
    } while (iVar7 < *in_stack_00000004);
  }
  iVar7 = *in_stack_00000004;
  *in_stack_00000004 = iVar7 + -1;
  *(byte *)(in_stack_00000004 + (iVar7 + -1) * 10 + 1) = 0;
  in_stack_00000004[*in_stack_00000004 + 0x65] = 0;
  return;
}
