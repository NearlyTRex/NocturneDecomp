// Name: core_gore.cpp_CGore_renderDecals_FUN_004c94c0
// Address: 004c94c0
// Address Range: [[004c94c0, 004c966e]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004c94c0(CGore *this_ptr,int render_all,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004c94c0(CGore *this_ptr,int render_all,int expire_flag)

{
  int iVar1;
  int iVar2;
  
  if (g_CGamePtr->blood_flag != 0) {
    core_gore_cpp_CBloodSplat_setupRenderState_FUN_004c7f80((CBloodSplat *)0x1cbcafc);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01cbcaf8) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1cbcafc) == 0) {
            core_gore_cpp_FUN_004c8010(iVar1 + 0x1cbcafc,expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < _DAT_01cbcaf8);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01cbcaf8) {
        iVar1 = 0x1cbcafc;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004c8010(iVar1,0);
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < _DAT_01cbcaf8);
      }
    }
    core_gore_cpp_CBloodPool_setupRenderState_FUN_004c8800((CBloodPool *)0x1cdde44);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01cdde40) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1cdde44) == 0) {
            core_gore_cpp_FUN_004c88a0(iVar1 + 0x1cdde44,expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x28;
        } while (iVar2 < _DAT_01cdde40);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01cdde40) {
        iVar1 = 0x1cdde44;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004c88a0(iVar1,0);
          iVar1 = iVar1 + 0x28;
        } while (iVar2 < _DAT_01cdde40);
      }
    }
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01cde348) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1cde34c) == 0) {
            core_gore_cpp_FUN_004c9000(iVar1 + 0x1cde34c,expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x40;
        } while (iVar2 < _DAT_01cde348);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01cde348) {
        iVar1 = 0x1cde34c;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004c9000(iVar1,0);
          iVar1 = iVar1 + 0x40;
        } while (iVar2 < _DAT_01cde348);
        return;
      }
    }
  }
  return;
}
