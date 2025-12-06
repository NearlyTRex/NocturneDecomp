// Name: core_cloth.cpp_CClothList_remove_FUN_0043c170
// Address: 0043c170
// Address Range: [[0043c170, 0043c284]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_CClothList_remove_FUN_0043c170(CClothList * this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_remove_FUN_0043c170(CClothList *this_ptr)

{
  char cVar1;
  int iVar2;
  void *ptr;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *in_stack_00000008;
  
  if (((int)in_stack_00000008 < 0) || (*(int *)this_ptr <= (int)in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x5e4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::remove - invalid index");
  }
  g_CurrentDebugLine = 0x5e8;
  g_CurrentDebugFilename = "..\\core\\cloth.cpp";
  if (*(int *)((int)in_stack_00000008 * 5 + 0x194) != 0) {
    ptr = (void *)core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  }
  iVar6 = (int)in_stack_00000008 + 1;
  if (iVar6 < *in_stack_00000008) {
    piVar5 = in_stack_00000008 + iVar6 * 10 + -9;
    piVar4 = in_stack_00000008 + iVar6 * 10 + 1;
    piVar3 = in_stack_00000008 + iVar6;
    do {
      piVar7 = piVar4;
      piVar8 = piVar5;
      do {
        iVar2 = *piVar7;
        *(char *)piVar8 = (char)iVar2;
        if ((char)iVar2 == '\0') break;
        cVar1 = *(char *)((int)piVar7 + 1);
        piVar7 = (int *)((int)piVar7 + 2);
        *(char *)((int)piVar8 + 1) = cVar1;
        piVar8 = (int *)((int)piVar8 + 2);
      } while (cVar1 != '\0');
      piVar3[100] = piVar3[0x65];
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 10;
      piVar4 = piVar4 + 10;
      piVar3 = piVar3 + 1;
    } while (iVar6 < *in_stack_00000008);
  }
  iVar6 = *in_stack_00000008;
  *in_stack_00000008 = iVar6 + -1;
  *(byte *)(in_stack_00000008 + (iVar6 + -1) * 10 + 1) = 0;
  in_stack_00000008[*in_stack_00000008 + 0x65] = 0;
  return;
}
