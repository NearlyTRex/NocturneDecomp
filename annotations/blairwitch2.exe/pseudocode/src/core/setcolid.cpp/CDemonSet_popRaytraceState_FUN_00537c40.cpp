// Name: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40
// Address: 00537c40
// Address Range: [[00537c40, 00537dee]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CDemonSet *pCVar4;
  uint *puVar5;
  
  if (_DAT_02093614 < 1) {
    _DAT_01d046a0 = "..\\core\\setcolid.cpp";
    _DAT_01d046a4 = 0x42a;
    core_main_c_FUN_004e4500("CDemonSet::popRaytraceState - stack empty");
  }
  _DAT_02093614 = _DAT_02093614 + -1;
  iVar2 = _DAT_02093614 * 0xa0;
  puVar5 = (uint *)(iVar2 + 0x2093618);
  *(uint *)&this_ptr->field_0x15f694 = *puVar5;
  *(uint *)&this_ptr->field_0x15f698 = *(uint *)(iVar2 + 0x209361c);
  *(uint *)&this_ptr->field_0x15f69c = *(uint *)(iVar2 + 0x2093620);
  *(uint *)&this_ptr->field_0x15f6a0 = *(uint *)(iVar2 + 0x2093624);
  *(uint *)&this_ptr->field_0x15f6a4 = *(uint *)(iVar2 + 0x2093628);
  iVar1 = *(int *)(iVar2 + 0x209362c);
  iVar3 = 0;
  *(int *)&this_ptr->field_0x15f6a8 = iVar1;
  pCVar4 = this_ptr;
  if (0 < iVar1) {
    do {
      *(uint *)&pCVar4->field_0x15f6b0 = puVar5[7];
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
      pCVar4 = (CDemonSet *)&pCVar4->field_0x4;
    } while (iVar3 < *(int *)&this_ptr->field_0x15f6a8);
  }
  *(uint *)&this_ptr->field_0x15f6ac = *(uint *)(iVar2 + 0x2093630);
  if ((uint *)&this_ptr->field_0x14d110 != (uint *)(iVar2 + 0x209365c)) {
    *(uint *)&this_ptr->field_0x14d110 = *(uint *)(iVar2 + 0x209365c);
    *(uint *)&this_ptr->field_0x14d114 = *(uint *)(iVar2 + 0x2093660);
    *(uint *)&this_ptr->field_0x14d118 = *(uint *)(iVar2 + 0x2093664);
  }
  if ((uint *)&this_ptr->field_0x14d11c != (uint *)(iVar2 + 0x2093668)) {
    *(uint *)&this_ptr->field_0x14d11c = *(uint *)(iVar2 + 0x2093668);
    *(uint *)&this_ptr->field_0x14d120 = *(uint *)(iVar2 + 0x209366c);
    *(uint *)&this_ptr->field_0x14d124 = *(uint *)(iVar2 + 0x2093670);
  }
  *(uint *)&this_ptr->field_0x15f6d8 = *(uint *)(iVar2 + 0x2093674);
  *(uint *)&this_ptr->field_0x15f6dc = *(uint *)(iVar2 + 0x2093678);
  if ((uint *)&this_ptr->field_0x15f6e0 != (uint *)(iVar2 + 0x209367c)) {
    *(uint *)&this_ptr->field_0x15f6e0 = *(uint *)(iVar2 + 0x209367c);
    *(uint *)&this_ptr->field_0x15f6e4 = *(uint *)(iVar2 + 0x2093680);
    *(uint *)&this_ptr->field_0x15f6e8 = *(uint *)(iVar2 + 0x2093684);
  }
  *(uint *)&this_ptr->field_0x15f6ec = *(uint *)(iVar2 + 0x2093688);
  if ((uint *)&this_ptr->field_0x14d128 != (uint *)(iVar2 + 0x2093690)) {
    *(uint *)&this_ptr->field_0x14d128 = *(uint *)(iVar2 + 0x2093690);
    *(uint *)&this_ptr->field_0x14d12c = *(uint *)(iVar2 + 0x2093694);
    *(uint *)&this_ptr->field_0x14d130 = *(uint *)(iVar2 + 0x2093698);
  }
  *(uint *)&this_ptr->field_0x14d134 = *(uint *)(iVar2 + 0x209369c);
  if ((uint *)&this_ptr->field_0x14d138 != (uint *)(iVar2 + 0x20936a0)) {
    *(uint *)&this_ptr->field_0x14d138 = *(uint *)(iVar2 + 0x20936a0);
    *(uint *)&this_ptr->field_0x14d13c = *(uint *)(iVar2 + 0x20936a4);
    *(uint *)&this_ptr->field_0x14d140 = *(uint *)(iVar2 + 0x20936a8);
  }
  *(uint *)&this_ptr->field_0x14d144 = *(uint *)(iVar2 + 0x20936ac);
  *(uint *)&this_ptr->field_0x14d148 = *(uint *)(iVar2 + 0x20936b0);
  *(uint *)&this_ptr->field_0x14d14c = *(uint *)(iVar2 + 0x20936b4);
  *(uint *)&this_ptr->field_0x15f6f0 = *(uint *)(iVar2 + 0x209368c);
  return;
}
