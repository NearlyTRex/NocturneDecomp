// Name: core_dpart.cpp_FUN_004799e0
// Address: 004799e0
// Address Range: [[004799e0, 00479ade]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_FUN_004799e0(CDemonPart *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_FUN_004799e0(CDemonPart *this_ptr)

{
  int iVar1;
  byte auStack_10c [256];
  
  core_dpart_cpp_FUN_00479ae0(this_ptr);
  if (*(int *)(this_ptr + 0x20) != 0) {
    iVar1 = FUN_005c1cb0(*(int *)(this_ptr + 0x20),0xc);
    *(int *)(this_ptr + 0x2c) = iVar1;
    if (iVar1 == 0) {
      FUN_005bfb40
                (auStack_10c,"CDemonPart::alloc - Out of vertex %d memory!",*(uint *)(this_ptr + 0x20));
      _DAT_01d1d404 = 0x8b;
      _DAT_01d1d400 = "..\\core\\dpart.cpp";
      core_main_c_FUN_005030e0(auStack_10c);
    }
    iVar1 = FUN_005c1cb0(*(uint *)(this_ptr + 0x20),0xc);
    *(int *)(this_ptr + 0x30) = iVar1;
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\dpart.cpp";
      _DAT_01d1d404 = 0x91;
      core_main_c_FUN_005030e0("CDemonPart::alloc - Out of normal memory!");
    }
  }
  if (*(int *)(this_ptr + 0x24) != 0) {
    iVar1 = FUN_005c1cb0(*(int *)(this_ptr + 0x24),0x20);
    *(int *)(this_ptr + 0x34) = iVar1;
    if (iVar1 == 0) {
      _DAT_01d1d400 = "..\\core\\dpart.cpp";
      _DAT_01d1d404 = 0x99;
      core_main_c_FUN_005030e0("CDemonPart::alloc - Out of face memory!");
      return;
    }
  }
  return;
}
