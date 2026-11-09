// Name: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0
// Address: 00558eb0
// Address Range: [[00558eb0, 0055905f]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonSet *pCVar3;
  int iVar4;
  uint *puVar5;
  
  if (5 < _DAT_020af5c8) {
    _DAT_01d1d400 = "..\\core\\setcolid.cpp";
    _DAT_01d1d404 = 0x406;
    core_main_c_FUN_005030e0("CDemonSet::pushRaytraceState - stack full");
  }
  iVar2 = _DAT_020af5c8 * 0xa0;
  puVar5 = (uint *)(iVar2 + 0x20af5cc);
  *puVar5 = *(uint *)&this_ptr->field_0x15f698;
  *(uint *)(iVar2 + 0x20af5d0) = *(uint *)&this_ptr->field_0x15f69c;
  *(uint *)(iVar2 + 0x20af5d4) = *(uint *)&this_ptr->field_0x15f6a0;
  *(uint *)(iVar2 + 0x20af5d8) = *(uint *)&this_ptr->field_0x15f6a4;
  iVar4 = 0;
  *(uint *)(iVar2 + 0x20af5dc) = *(uint *)&this_ptr->field_0x15f6a8;
  _DAT_020af5c8 = _DAT_020af5c8 + 1;
  iVar1 = *(int *)&this_ptr->field_0x15f6ac;
  *(int *)(iVar2 + 0x20af5e0) = iVar1;
  pCVar3 = this_ptr;
  if (0 < iVar1) {
    do {
      puVar5[7] = *(uint *)&pCVar3->field_0x15f6b4;
      iVar4 = iVar4 + 1;
      pCVar3 = (CDemonSet *)&pCVar3->field_0x4;
      puVar5 = puVar5 + 1;
    } while (iVar4 < *(int *)&this_ptr->field_0x15f6ac);
  }
  *(uint *)(iVar2 + 0x20af5e4) = *(uint *)&this_ptr->field_0x15f6b0;
  if ((uint *)(iVar2 + 0x20af610) != (uint *)&this_ptr->field_0x14d110) {
    *(uint *)(iVar2 + 0x20af610) = *(uint *)&this_ptr->field_0x14d110;
    *(uint *)(iVar2 + 0x20af614) = *(uint *)&this_ptr->field_0x14d114;
    *(uint *)(iVar2 + 0x20af618) = *(uint *)&this_ptr->field_0x14d118;
  }
  if ((uint *)(iVar2 + 0x20af61c) != (uint *)&this_ptr->field_0x14d11c) {
    *(uint *)(iVar2 + 0x20af61c) = *(uint *)&this_ptr->field_0x14d11c;
    *(uint *)(iVar2 + 0x20af620) = *(uint *)&this_ptr->field_0x14d120;
    *(uint *)(iVar2 + 0x20af624) = *(uint *)&this_ptr->field_0x14d124;
  }
  *(uint *)(iVar2 + 0x20af628) = *(uint *)&this_ptr->field_0x15f6dc;
  *(uint *)(iVar2 + 0x20af62c) = *(uint *)&this_ptr->field_0x15f6e0;
  if ((uint *)(iVar2 + 0x20af630) != (uint *)&this_ptr->field_0x15f6e4) {
    *(uint *)(iVar2 + 0x20af630) = *(uint *)&this_ptr->field_0x15f6e4;
    *(uint *)(iVar2 + 0x20af634) = *(uint *)&this_ptr->field_0x15f6e8;
    *(uint *)(iVar2 + 0x20af638) = *(uint *)&this_ptr->field_0x15f6ec;
  }
  *(uint *)(iVar2 + 0x20af63c) = *(uint *)&this_ptr->field_0x15f6f0;
  if ((uint *)(iVar2 + 0x20af644) != (uint *)&this_ptr->field_0x14d128) {
    *(uint *)(iVar2 + 0x20af644) = *(uint *)&this_ptr->field_0x14d128;
    *(uint *)(iVar2 + 0x20af648) = *(uint *)&this_ptr->field_0x14d12c;
    *(uint *)(iVar2 + 0x20af64c) = *(uint *)&this_ptr->field_0x14d130;
  }
  *(uint *)(iVar2 + 0x20af650) = *(uint *)&this_ptr->field_0x14d134;
  if ((uint *)(iVar2 + 0x20af654) != (uint *)&this_ptr->field_0x14d138) {
    *(uint *)(iVar2 + 0x20af654) = *(uint *)&this_ptr->field_0x14d138;
    *(uint *)(iVar2 + 0x20af658) = *(uint *)&this_ptr->field_0x14d13c;
    *(uint *)(iVar2 + 0x20af65c) = *(uint *)&this_ptr->field_0x14d140;
  }
  *(uint *)(iVar2 + 0x20af660) = *(uint *)&this_ptr->field_0x14d144;
  *(uint *)(iVar2 + 0x20af664) = *(uint *)&this_ptr->field_0x14d148;
  *(uint *)(iVar2 + 0x20af668) = *(uint *)&this_ptr->field_0x14d14c;
  *(uint *)(iVar2 + 0x20af640) = *(uint *)&this_ptr->field_0x15f6f4;
  return;
}
