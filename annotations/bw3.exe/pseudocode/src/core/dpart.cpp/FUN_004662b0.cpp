// Name: core_dpart.cpp_FUN_004662b0
// Address: 004662b0
// Address Range: [[004662b0, 004663ae]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_FUN_004662b0(CDemonPart *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_FUN_004662b0(CDemonPart *this_ptr)

{
  int iVar1;
  byte auStack_10c [256];
  
  core_dpart_cpp_FUN_004663b0(this_ptr);
  if (*(int *)(this_ptr + 0x20) != 0) {
    iVar1 = FUN_005a4b20(*(int *)(this_ptr + 0x20),0xc);
    *(int *)(this_ptr + 0x2c) = iVar1;
    if (iVar1 == 0) {
      FUN_005a28c0
                (auStack_10c,"CDemonPart::alloc - Out of vertex %d memory!",*(uint *)(this_ptr + 0x20));
      _DAT_01d71de4 = 0x8b;
      _DAT_01d71de0 = "..\\core\\dpart.cpp";
      core_main_c_FUN_004e4330(auStack_10c);
    }
    iVar1 = FUN_005a4b20(*(uint *)(this_ptr + 0x20),0xc);
    *(int *)(this_ptr + 0x30) = iVar1;
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\core\\dpart.cpp";
      _DAT_01d71de4 = 0x91;
      core_main_c_FUN_004e4330("CDemonPart::alloc - Out of normal memory!");
    }
  }
  if (*(int *)(this_ptr + 0x24) != 0) {
    iVar1 = FUN_005a4b20(*(int *)(this_ptr + 0x24),0x20);
    *(int *)(this_ptr + 0x34) = iVar1;
    if (iVar1 == 0) {
      _DAT_01d71de0 = "..\\core\\dpart.cpp";
      _DAT_01d71de4 = 0x99;
      core_main_c_FUN_004e4330("CDemonPart::alloc - Out of face memory!");
      return;
    }
  }
  return;
}
