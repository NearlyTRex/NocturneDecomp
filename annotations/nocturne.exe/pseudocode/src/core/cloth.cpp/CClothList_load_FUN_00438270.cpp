// Name: core_cloth.cpp_CClothList_load_FUN_00438270
// Address: 00438270
// Address Range: [[00438270, 00438312]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_load_FUN_00438270(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CClothList_load_FUN_00438270(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *param_1) {
    piVar6 = param_1 + 1;
    piVar5 = param_1;
    do {
      if (piVar5[0x65] != 0) {
        uVar4 = core_cloth_cpp_CCloth_dtor_FUN_00435160(piVar5[0x65],0);
        FUN_00564494(uVar4);
      }
      iVar2 = FUN_0056497c(0x3ab30);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = core_cloth_cpp_CCloth_ctor_FUN_00435100(iVar2);
      }
      piVar5[0x65] = iVar3;
      if (iVar3 == 0) {
        _DAT_01cc4800 = "@..\\core\\cloth.cpp" + 1;
        _DAT_01cc4804 = 0x5a9;
        FUN_004c8440("CClothList::load - out of memory for CCloth object.");
      }
      piVar1 = piVar5 + 0x65;
      piVar5 = piVar5 + 1;
      iVar7 = iVar7 + 1;
      core_cloth_cpp_CCloth_load_FUN_00435240(*piVar1,piVar6);
      piVar6 = piVar6 + 10;
    } while (iVar7 < *param_1);
  }
  return;
}
