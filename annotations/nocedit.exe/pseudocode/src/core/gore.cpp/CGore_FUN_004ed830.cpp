// Name: core_gore.cpp_CGore_FUN_004ed830
// Address: 004ed830
// Address Range: [[004ed830, 004ed9de]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_FUN_004ed830(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ed830(CGore *this_ptr)

{
  CBloodSplat *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodPool *this_ptr_01;
  CFootstep *this_ptr_02;
  int in_stack_00000008;
  
  if (g_CGamePtr->blood_flag != 0) {
    core_gore_cpp_CBloodSplat_FUN_004ec470(DAT_02d873dc);
    if (in_stack_00000008 == 0) {
      iVar2 = 0;
      if (0 < INT_02d873d8) {
        iVar1 = 0;
        do {
          if (*(int *)(DAT_02d873dc[0].unk + iVar1) == 0) {
            core_gore_cpp_CBloodSplat_FUN_004ec500((CBloodSplat *)(DAT_02d873dc[0].unk + iVar1));
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < INT_02d873d8);
      }
    }
    else {
      iVar2 = 0;
      if (0 < INT_02d873d8) {
        this_ptr_00 = DAT_02d873dc;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CBloodSplat_FUN_004ec500(this_ptr_00);
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar2 < INT_02d873d8);
      }
    }
    core_gore_cpp_CBloodPool_FUN_004ecc40(DAT_02da8724);
    if (in_stack_00000008 == 0) {
      iVar2 = 0;
      if (0 < INT_02da8720) {
        iVar1 = 0;
        do {
          if (*(int *)(DAT_02da8724[0].unk + iVar1) == 0) {
            core_gore_cpp_CBloodPool_FUN_004ecce0((CBloodPool *)(DAT_02da8724[0].unk + iVar1));
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x28;
        } while (iVar2 < INT_02da8720);
      }
    }
    else {
      iVar2 = 0;
      if (0 < INT_02da8720) {
        this_ptr_01 = DAT_02da8724;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CBloodPool_FUN_004ecce0(this_ptr_01);
          this_ptr_01 = this_ptr_01 + 1;
        } while (iVar2 < INT_02da8720);
      }
    }
    if (in_stack_00000008 == 0) {
      iVar2 = 0;
      if (0 < DAT_02da8c28) {
        iVar1 = 0;
        do {
          if (*(int *)(DAT_02da8c2c[0].unk1 + iVar1) == 0) {
            core_gore_cpp_CFootstep_FUN_004ed3c0((CFootstep *)(DAT_02da8c2c[0].unk1 + iVar1));
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x40;
        } while (iVar2 < DAT_02da8c28);
      }
    }
    else {
      iVar2 = 0;
      if (0 < DAT_02da8c28) {
        this_ptr_02 = DAT_02da8c2c;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CFootstep_FUN_004ed3c0(this_ptr_02);
          this_ptr_02 = this_ptr_02 + 1;
        } while (iVar2 < DAT_02da8c28);
        return;
      }
    }
  }
  return;
}
