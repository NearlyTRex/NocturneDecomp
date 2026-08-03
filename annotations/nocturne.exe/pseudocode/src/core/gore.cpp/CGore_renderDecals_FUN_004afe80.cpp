// Name: core_gore.cpp_CGore_renderDecals_FUN_004afe80
// Address: 004afe80
// Address Range: [[004afe80, 004b002a]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004afe80(CGore *this_ptr,int render_all,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004afe80(CGore *this_ptr,int render_all,int expire_flag)

{
  CBloodSplat *this_ptr_00;
  CBloodPool *this_ptr_01;
  int iVar1;
  int unaff_EBP;
  int iVar2;
  CFootstep *this_ptr_02;
  
  if (g_CGame_PTR_005b9354->blood_flag != 0) {
    core_gore_cpp_CBloodSplat_setupRenderState_FUN_004aeae0(g_CBloodSplat_ARRAY_01c7ccf4);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01c7ccf0) {
        iVar1 = 0;
        do {
          if (*(int *)((int)&g_CBloodSplat_ARRAY_01c7ccf4[0].expired + iVar1) == 0) {
            core_gore_cpp_CBloodSplat_render_FUN_004aeb70
                      ((CBloodSplat *)((int)&g_CBloodSplat_ARRAY_01c7ccf4[0].expired + iVar1),
                       unaff_EBP);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < _DAT_01c7ccf0);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01c7ccf0) {
        this_ptr_00 = g_CBloodSplat_ARRAY_01c7ccf4;
        do {
          core_gore_cpp_CBloodSplat_render_FUN_004aeb70(this_ptr_00,unaff_EBP);
          iVar2 = iVar2 + 1;
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar2 < _DAT_01c7ccf0);
      }
    }
    core_gore_cpp_CBloodPool_setupRenderState_FUN_004af2a0(g_CBloodPool_ARRAY_01c9e03c);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01c9e038) {
        iVar1 = 0;
        do {
          if (*(int *)((int)&g_CBloodPool_ARRAY_01c9e03c[0].expired + iVar1) == 0) {
            core_gore_cpp_CBloodPool_render_FUN_004af340
                      ((CBloodPool *)((int)&g_CBloodPool_ARRAY_01c9e03c[0].expired + iVar1),
                       unaff_EBP);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x28;
        } while (iVar2 < _DAT_01c9e038);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01c9e038) {
        this_ptr_01 = g_CBloodPool_ARRAY_01c9e03c;
        do {
          core_gore_cpp_CBloodPool_render_FUN_004af340(this_ptr_01,unaff_EBP);
          iVar2 = iVar2 + 1;
          this_ptr_01 = this_ptr_01 + 1;
        } while (iVar2 < _DAT_01c9e038);
      }
    }
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01c9e540) {
        iVar1 = 0;
        do {
          if (*(int *)((int)g_CFootstep_ARRAY_01c9e544[0].corners + iVar1 + -8) == 0) {
            core_gore_cpp_CFootstep_render_FUN_004afa20
                      ((CFootstep *)((int)g_CFootstep_ARRAY_01c9e544[0].corners + iVar1 + -8),
                       unaff_EBP);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x40;
        } while (iVar2 < _DAT_01c9e540);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01c9e540) {
        this_ptr_02 = g_CFootstep_ARRAY_01c9e544;
        do {
          core_gore_cpp_CFootstep_render_FUN_004afa20(this_ptr_02,unaff_EBP);
          iVar2 = iVar2 + 1;
          this_ptr_02 = this_ptr_02 + 1;
        } while (iVar2 < _DAT_01c9e540);
        return;
      }
    }
  }
  return;
}
