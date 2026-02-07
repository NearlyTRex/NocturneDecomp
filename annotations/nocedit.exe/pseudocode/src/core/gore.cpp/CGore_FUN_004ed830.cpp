// Name: core_gore.cpp_CGore_FUN_004ed830
// Address: 004ed830
// Address Range: [[004ed830, 004ed9de]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_FUN_004ed830(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ed830(CGore *this_ptr)

{
  int iVar1;
  int iVar2;
  int in_stack_00000008;
  
  if (g_CGamePtr->blood_flag != 0) {
    core_gore_cpp_FUN_004ec470();
    if (in_stack_00000008 == 0) {
      iVar2 = 0;
      if (0 < DAT_02d873d8) {
        iVar1 = 0;
        do {
          if (*(int *)(DAT_02d873dc[0].unk + iVar1) == 0) {
            core_gore_cpp_FUN_004ec500();
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < DAT_02d873d8);
      }
    }
    else {
      iVar2 = 0;
      if (0 < DAT_02d873d8) {
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004ec500();
        } while (iVar2 < DAT_02d873d8);
      }
    }
    core_gore_cpp_FUN_004ecc40();
    if (in_stack_00000008 == 0) {
      iVar2 = 0;
      if (0 < DAT_02da8720) {
        iVar1 = 0;
        do {
          if (*(int *)(DAT_02da8724[0].unk + iVar1) == 0) {
            core_gore_cpp_FUN_004ecce0();
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x28;
        } while (iVar2 < DAT_02da8720);
      }
    }
    else {
      iVar2 = 0;
      if (0 < DAT_02da8720) {
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004ecce0();
        } while (iVar2 < DAT_02da8720);
      }
    }
    if (in_stack_00000008 == 0) {
      iVar2 = 0;
      if (0 < DAT_02da8c28) {
        iVar1 = 0;
        do {
          if (*(int *)(DAT_02da8c2c[0].unk1 + iVar1) == 0) {
            core_gore_cpp_FUN_004ed3c0();
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x40;
        } while (iVar2 < DAT_02da8c28);
      }
    }
    else {
      iVar2 = 0;
      if (0 < DAT_02da8c28) {
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004ed3c0();
        } while (iVar2 < DAT_02da8c28);
        return;
      }
    }
  }
  return;
}
