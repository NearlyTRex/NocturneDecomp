// Name: core_cloth.cpp_CClothList_remove_FUN_00438410
// Address: 00438410
// Address Range: [[00438410, 0043850d]]
// Convention: unknown
// Signature: void core_cloth_cpp_CClothList_remove_FUN_00438410(int *param_1,int param_2)

#include "nocturne.h"

void core_cloth_cpp_CClothList_remove_FUN_00438410(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  CCloth *pCVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  if ((param_2 < 0) || (*param_1 <= param_2)) {
    PTR_01cc4800 = "..\\core\\cloth.cpp";
    INT_01cc4804 = 0x5e4;
    core_main_c_FUN_004c8440("CClothList::remove - invalid index");
  }
  if ((CCloth *)param_1[param_2 + 0x65] != (CCloth *)0x0) {
    pCVar3 = core_cloth_cpp_CCloth_dtor_FUN_00435160((CCloth *)param_1[param_2 + 0x65],0);
    FUN_00564494(pCVar3);
  }
  param_2 = param_2 + 1;
  if (param_2 < *param_1) {
    piVar6 = param_1 + param_2 * 10 + -9;
    piVar5 = param_1 + param_2 * 10 + 1;
    piVar4 = param_1 + param_2;
    do {
      piVar7 = piVar5;
      piVar8 = piVar6;
      do {
        iVar2 = *piVar7;
        *(char *)piVar8 = (char)iVar2;
        if ((char)iVar2 == '\0') break;
        cVar1 = *(char *)((int)piVar7 + 1);
        piVar7 = (int *)((int)piVar7 + 2);
        *(char *)((int)piVar8 + 1) = cVar1;
        piVar8 = (int *)((int)piVar8 + 2);
      } while (cVar1 != '\0');
      piVar4[100] = piVar4[0x65];
      param_2 = param_2 + 1;
      piVar6 = piVar6 + 10;
      piVar5 = piVar5 + 10;
      piVar4 = piVar4 + 1;
    } while (param_2 < *param_1);
  }
  iVar2 = *param_1;
  *param_1 = iVar2 + -1;
  *(byte *)(param_1 + (iVar2 + -1) * 10 + 1) = 0;
  param_1[*param_1 + 0x65] = 0;
  return;
}
