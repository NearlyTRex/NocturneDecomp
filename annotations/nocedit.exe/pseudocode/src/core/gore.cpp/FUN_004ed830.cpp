// Name: core_gore.cpp_FUN_004ed830
// Address: 004ed830
// Address Range: [[004ed830, 004ed9de]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004ed830(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_FUN_004ed830(CGore *this_ptr)

{
  uint uVar1;
  uint extraout_EDX;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int in_stack_00000008;
  
  if (g_CGamePtr->blood_flag != 0) {
    uVar4 = core_gore_cpp_FUN_004ec470();
    uVar1 = (uint)((ulonglong)uVar4 >> 0x20);
    if (in_stack_00000008 == 0) {
      iVar3 = 0;
      if (0 < DAT_02d873d8) {
        iVar2 = 0;
        do {
          if (*(int *)(DAT_02d873dc[0].unk + iVar2) == 0) {
            core_gore_cpp_FUN_004ec500();
            uVar1 = extraout_EDX;
          }
          uVar4 = CONCAT44(uVar1,DAT_02d873d8);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x44;
        } while (iVar3 < DAT_02d873d8);
      }
    }
    else {
      iVar3 = 0;
      if (0 < DAT_02d873d8) {
        do {
          iVar3 = iVar3 + 1;
          uVar4 = core_gore_cpp_FUN_004ec500();
        } while (iVar3 < DAT_02d873d8);
      }
    }
    core_gore_cpp_FUN_004ecc40((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    if (in_stack_00000008 == 0) {
      iVar3 = 0;
      if (0 < DAT_02da8720) {
        iVar2 = 0;
        do {
          if (*(int *)(DAT_02da8724[0].unk + iVar2) == 0) {
            core_gore_cpp_FUN_004ecce0();
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x28;
        } while (iVar3 < DAT_02da8720);
      }
    }
    else {
      iVar3 = 0;
      if (0 < DAT_02da8720) {
        do {
          iVar3 = iVar3 + 1;
          core_gore_cpp_FUN_004ecce0();
        } while (iVar3 < DAT_02da8720);
      }
    }
    if (in_stack_00000008 == 0) {
      iVar3 = 0;
      if (0 < DAT_02da8c28) {
        iVar2 = 0;
        do {
          if (*(int *)(DAT_02da8c2c[0].unk + iVar2) == 0) {
            core_gore_cpp_FUN_004ed3c0();
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x40;
        } while (iVar3 < DAT_02da8c28);
      }
    }
    else {
      iVar3 = 0;
      if (0 < DAT_02da8c28) {
        do {
          iVar3 = iVar3 + 1;
          core_gore_cpp_FUN_004ed3c0();
        } while (iVar3 < DAT_02da8c28);
        return;
      }
    }
  }
  return;
}
