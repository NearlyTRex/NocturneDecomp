// Name: core_gore.cpp_CGore_renderDecals_FUN_004ce630
// Address: 004ce630
// Address Range: [[004ce630, 004ce7de]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004ce630(CGore *this_ptr,int render_all,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004ce630(CGore *this_ptr,int render_all,int expire_flag)

{
  CBloodSplat *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodPool *this_ptr_01;
  CFootstep *this_ptr_02;
  
  if (g_CGamePtr->blood_flag != 0) {
    core_gore_cpp_CBloodSplat_setupRenderState_FUN_004cd600((CBloodSplat *)0x1d276bc);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01d276b8) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1d276bc) == 0) {
            core_gore_cpp_CBloodSplat_render_FUN_004cd690
                      ((CBloodSplat *)(iVar1 + 0x1d276bc),expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x48;
        } while (iVar2 < _DAT_01d276b8);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01d276b8) {
        this_ptr_00 = (CBloodSplat *)0x1d276bc;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CBloodSplat_render_FUN_004cd690(this_ptr_00,0);
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar2 < _DAT_01d276b8);
      }
    }
    core_gore_cpp_CBloodPool_setupRenderState_FUN_004cdc90((CBloodPool *)0x1d4a944);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01d4a940) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1d4a944) == 0) {
            core_gore_cpp_CBloodPool_render_FUN_004cdd30
                      ((CBloodPool *)(iVar1 + 0x1d4a944),expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x2c;
        } while (iVar2 < _DAT_01d4a940);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01d4a940) {
        this_ptr_01 = (CBloodPool *)0x1d4a944;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CBloodPool_render_FUN_004cdd30(this_ptr_01,0);
          this_ptr_01 = this_ptr_01 + 1;
        } while (iVar2 < _DAT_01d4a940);
      }
    }
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01d4aec8) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1d4aecc) == 0) {
            core_gore_cpp_CFootstep_render_FUN_004ce310
                      ((CFootstep *)(iVar1 + 0x1d4aecc),expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < _DAT_01d4aec8);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01d4aec8) {
        this_ptr_02 = (CFootstep *)0x1d4aecc;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CFootstep_render_FUN_004ce310(this_ptr_02,0);
          this_ptr_02 = this_ptr_02 + 1;
        } while (iVar2 < _DAT_01d4aec8);
        return;
      }
    }
  }
  return;
}
