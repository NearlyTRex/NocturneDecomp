// Name: core_gore.cpp_CGore_renderDecals_FUN_004c94c0
// Address: 004c94c0
// Address Range: [[004c94c0, 004c966e]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004c94c0(CGore *this_ptr,int render_all,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004c94c0(CGore *this_ptr,int render_all,int expire_flag)

{
  CBloodSplat *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodPool *this_ptr_01;
  CFootstep *this_ptr_02;
  
  if (g_CGamePtr->blood_flag != 0) {
    core_gore_cpp_CBloodSplat_setupRenderState_FUN_004c7f80((CBloodSplat *)0x1cbcafc);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01cbcaf8) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1cbcafc) == 0) {
            core_gore_cpp_CBloodSplat_render_FUN_004c8010
                      ((CBloodSplat *)(iVar1 + 0x1cbcafc),expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < _DAT_01cbcaf8);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01cbcaf8) {
        this_ptr_00 = (CBloodSplat *)0x1cbcafc;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CBloodSplat_render_FUN_004c8010(this_ptr_00,0);
          this_ptr_00 = this_ptr_00 + 1;
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
            core_gore_cpp_CBloodPool_render_FUN_004c88a0
                      ((CBloodPool *)(iVar1 + 0x1cdde44),expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x28;
        } while (iVar2 < _DAT_01cdde40);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01cdde40) {
        this_ptr_01 = (CBloodPool *)0x1cdde44;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CBloodPool_render_FUN_004c88a0(this_ptr_01,0);
          this_ptr_01 = this_ptr_01 + 1;
        } while (iVar2 < _DAT_01cdde40);
      }
    }
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01cde348) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1cde34c) == 0) {
            core_gore_cpp_CFootstep_render_FUN_004c9000
                      ((CFootstep *)(iVar1 + 0x1cde34c),expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x40;
        } while (iVar2 < _DAT_01cde348);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01cde348) {
        this_ptr_02 = (CFootstep *)0x1cde34c;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CFootstep_render_FUN_004c9000(this_ptr_02,0);
          this_ptr_02 = this_ptr_02 + 1;
        } while (iVar2 < _DAT_01cde348);
        return;
      }
    }
  }
  return;
}
