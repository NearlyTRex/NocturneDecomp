// Name: core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760
// Address: 0044f760
// Address Range: [[0044f760, 0044f83c]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760(CKeyFramedModel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760(CKeyFramedModel *this_ptr)

{
  int iVar1;
  int iVar2;
  
  FUN_005b7fce(*(void **)&this_ptr->field_0x358);
  *(uint *)&this_ptr->field_0x358 = 0;
  *(uint *)&this_ptr->field_0x354 = 0;
  if ((0 < *(int *)&this_ptr->field_0x110) && (0 < *(int *)&this_ptr->field_0x100)) {
    iVar1 = 0;
    if (0 < *(int *)&this_ptr->field_0x110) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 0x48;
        iVar1 = iVar1 + 1;
        *(int *)&this_ptr->field_0x354 =
             *(int *)&this_ptr->field_0x354 +
             *(int *)(*(int *)&this_ptr->field_0x114 + -0x44 + iVar2) + -2;
      } while (iVar1 < *(int *)&this_ptr->field_0x110);
    }
    iVar1 = FUN_005b8df8
                      (*(int *)&this_ptr->field_0x100 * *(int *)&this_ptr->field_0x354 * 0x38);
    *(int *)&this_ptr->field_0x358 = iVar1;
    if (iVar1 == 0) {
      _DAT_01d046a0 = "..\\core\\dmodel.cpp";
      _DAT_01d046a4 = 0x470;
      core_main_c_FUN_004e4500("CKeyFramedModel::buildCollisionTriList - out of memory");
    }
    core_dmodel_cpp_FUN_0044f840(this_ptr,&DAT_0265370c);
  }
  return;
}
