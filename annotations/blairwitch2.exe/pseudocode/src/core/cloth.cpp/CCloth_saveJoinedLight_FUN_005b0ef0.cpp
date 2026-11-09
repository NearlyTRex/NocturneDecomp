// Name: core_cloth.cpp_CCloth_saveJoinedLight_FUN_005b0ef0
// Address: 005b0ef0
// Address Range: [[005b0ef0, 005b0fd4]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_005b0ef0(CCloth *this_ptr,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_005b0ef0(CCloth *this_ptr,CDeformableModelInstance *model_ptr)

{
  int *piVar1;
  CCloth *pCVar2;
  CCloth *pCVar3;
  int iVar4;
  CCloth *pCVar5;
  int iVar6;
  
  if (model_ptr == (CDeformableModelInstance *)0x0) {
    _DAT_01d046a0 = "..\\core\\cloth.cpp";
    _DAT_01d046a4 = 0x4f0;
    core_main_c_FUN_004e4500("CCloth::saveJoinedLight - Can't save light with no model!");
  }
  iVar4 = *(int *)&model_ptr->field_0x2230;
  if (iVar4 < 0) {
    _DAT_01d046a0 = "..\\core\\cloth.cpp";
    _DAT_01d046a4 = 0x4f5;
    core_main_c_FUN_004e4500("CCloth::saveJoinedLight - Model wasn't drawn");
  }
  pCVar3 = *(CCloth **)(this_ptr + 0x39ce8);
  iVar6 = 0;
  if (0 < (int)pCVar3) {
    pCVar5 = this_ptr + iVar4 * 400;
    pCVar2 = this_ptr;
    do {
      piVar1 = DAT_0060b280;
      iVar4 = *(int *)(pCVar5 + 0x39e7c) * 0x30;
      *(uint *)(pCVar2 + 0x3a64c) = *(uint *)(iVar4 + 0x20 + *DAT_0060b280);
      *(uint *)(pCVar2 + 0x3a7dc) = *(uint *)(iVar4 + 0x24 + *piVar1);
      pCVar3 = pCVar2 + 4;
      *(uint *)(pCVar2 + 0x3a96c) = *(uint *)(iVar4 + 0x28 + *piVar1);
      iVar6 = iVar6 + 1;
      pCVar5 = pCVar5 + 4;
      pCVar2 = pCVar3;
    } while (iVar6 < *(int *)(this_ptr + 0x39ce8));
  }
  return (int)pCVar3;
}
