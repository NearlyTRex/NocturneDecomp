// Name: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0
// Address: 00453ff0
// Address Range: [[00453ff0, 004540f2]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(int param_1)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x358) != 0) {
    shape_memdbg_cpp_free_FUN_00564486(*(int *)(param_1 + 0x358) + -4);
  }
  *(uint *)(param_1 + 0x354) = 0;
  *(uint *)(param_1 + 0x358) = 0;
  if ((0 < *(int *)(param_1 + 0x110)) && (0 < *(int *)(param_1 + 0x100))) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x110)) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 0x48;
        iVar1 = iVar1 + 1;
        *(int *)(param_1 + 0x354) =
             *(int *)(param_1 + 0x354) + *(int *)(*(int *)(param_1 + 0x114) + -0x44 + iVar4) + -2;
      } while (iVar1 < *(int *)(param_1 + 0x110));
    }
    iVar1 = *(int *)(param_1 + 0x100) * *(int *)(param_1 + 0x354);
    piVar2 = (int *)shape_memdbg_cpp_malloc_FUN_00564c18(iVar1 * 0x38 + 4);
    piVar3 = piVar2;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2 + 1;
      *piVar2 = iVar1;
    }
    *(int **)(param_1 + 0x358) = piVar3;
    if (piVar3 == (int *)0x0) {
      PTR_01cc4800 = "..\\core\\dmodel.cpp";
      INT_01cc4804 = 0x470;
      core_main_c_FUN_004c8440("CKeyFramedModel::buildCollisionTriList - out of memory");
    }
    core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00454100(param_1,&DAT_02dd1184);
  }
  return;
}
