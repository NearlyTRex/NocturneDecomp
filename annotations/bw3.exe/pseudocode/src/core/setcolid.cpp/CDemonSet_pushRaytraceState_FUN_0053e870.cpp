// Name: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_0053e870
// Address: 0053e870
// Address Range: [[0053e870, 0053ea1f]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonSet *pCVar3;
  int iVar4;
  uint *puVar5;
  
  if (5 < _DAT_021221f0) {
    _DAT_01d71de0 = "..\\core\\setcolid.cpp";
    _DAT_01d71de4 = 0x406;
    core_main_c_FUN_004e4330("CDemonSet::pushRaytraceState - stack full");
  }
  iVar2 = _DAT_021221f0 * 0xa0;
  puVar5 = (uint *)(iVar2 + 0x21221f4);
  *puVar5 = *(uint *)&this_ptr->field_0x15f698;
  *(uint *)(iVar2 + 0x21221f8) = *(uint *)&this_ptr->field_0x15f69c;
  *(uint *)(iVar2 + 0x21221fc) = *(uint *)&this_ptr->field_0x15f6a0;
  *(uint *)(iVar2 + 0x2122200) = *(uint *)&this_ptr->field_0x15f6a4;
  iVar4 = 0;
  *(uint *)(iVar2 + 0x2122204) = *(uint *)&this_ptr->field_0x15f6a8;
  _DAT_021221f0 = _DAT_021221f0 + 1;
  iVar1 = *(int *)&this_ptr->field_0x15f6ac;
  *(int *)(iVar2 + 0x2122208) = iVar1;
  pCVar3 = this_ptr;
  if (0 < iVar1) {
    do {
      puVar5[7] = *(uint *)&pCVar3->field_0x15f6b4;
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)&pCVar3->field_0x4;
      puVar5 = puVar5 + 1;
    } while (iVar4 < *(int *)&this_ptr->field_0x15f6ac);
  }
  *(uint *)(iVar2 + 0x212220c) = *(uint *)&this_ptr->field_0x15f6b0;
  if ((uint *)(iVar2 + 0x2122238) != (uint *)&this_ptr->field_0x14d110) {
    *(uint *)(iVar2 + 0x2122238) = *(uint *)&this_ptr->field_0x14d110;
    *(uint *)(iVar2 + 0x212223c) = *(uint *)&this_ptr->field_0x14d114;
    *(uint *)(iVar2 + 0x2122240) = *(uint *)&this_ptr->field_0x14d118;
  }
  if ((uint *)(iVar2 + 0x2122244) != (uint *)&this_ptr->field_0x14d11c) {
    *(uint *)(iVar2 + 0x2122244) = *(uint *)&this_ptr->field_0x14d11c;
    *(uint *)(iVar2 + 0x2122248) = *(uint *)&this_ptr->field_0x14d120;
    *(uint *)(iVar2 + 0x212224c) = *(uint *)&this_ptr->field_0x14d124;
  }
  *(uint *)(iVar2 + 0x2122250) = *(uint *)&this_ptr->field_0x15f6dc;
  *(uint *)(iVar2 + 0x2122254) = *(uint *)&this_ptr->field_0x15f6e0;
  if ((uint *)(iVar2 + 0x2122258) != (uint *)&this_ptr->field_0x15f6e4) {
    *(uint *)(iVar2 + 0x2122258) = *(uint *)&this_ptr->field_0x15f6e4;
    *(uint *)(iVar2 + 0x212225c) = *(uint *)&this_ptr->field_0x15f6e8;
    *(uint *)(iVar2 + 0x2122260) = *(uint *)&this_ptr->field_0x15f6ec;
  }
  *(uint *)(iVar2 + 0x2122264) = *(uint *)&this_ptr->field_0x15f6f0;
  if ((uint *)(iVar2 + 0x212226c) != (uint *)&this_ptr->field_0x14d128) {
    *(uint *)(iVar2 + 0x212226c) = *(uint *)&this_ptr->field_0x14d128;
    *(uint *)(iVar2 + 0x2122270) = *(uint *)&this_ptr->field_0x14d12c;
    *(uint *)(iVar2 + 0x2122274) = *(uint *)&this_ptr->field_0x14d130;
  }
  *(uint *)(iVar2 + 0x2122278) = *(uint *)&this_ptr->field_0x14d134;
  if ((uint *)(iVar2 + 0x212227c) != (uint *)&this_ptr->field_0x14d138) {
    *(uint *)(iVar2 + 0x212227c) = *(uint *)&this_ptr->field_0x14d138;
    *(uint *)(iVar2 + 0x2122280) = *(uint *)&this_ptr->field_0x14d13c;
    *(uint *)(iVar2 + 0x2122284) = *(uint *)&this_ptr->field_0x14d140;
  }
  *(uint *)(iVar2 + 0x2122288) = *(uint *)&this_ptr->field_0x14d144;
  *(uint *)(iVar2 + 0x212228c) = *(uint *)&this_ptr->field_0x14d148;
  *(uint *)(iVar2 + 0x2122290) = *(uint *)&this_ptr->field_0x14d14c;
  *(uint *)(iVar2 + 0x2122268) = *(uint *)&this_ptr->field_0x15f6f4;
  return;
}
