// Name: core_gore.cpp_CGore_renderDecals_FUN_004c94c0
// Address: 004c94c0
// Address Range: [[004c94c0, 004c966e]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004c94c0(CGore *this_ptr,int render_all,int expire_flag)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004c94c0(CGore *this_ptr,int render_all,int expire_flag)

{
  CBloodSplat *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodPool *this_ptr_01;
  CFootstep *this_ptr_02;
  
  if (g_CGamePtr->blood_flag != 0) {
    core_gore_cpp_CBloodSplat_setupRenderState_FUN_004c7f80(g_CBloodSplat_ARRAY_01cbcafc);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < g_INT_01cbcaf8) {
        iVar1 = 0;
        do {
          if (*(int *)((int)&g_CBloodSplat_ARRAY_01cbcafc[0].expired + iVar1) == 0) {
            core_gore_cpp_CBloodSplat_render_FUN_004c8010
                      ((CBloodSplat *)((int)&g_CBloodSplat_ARRAY_01cbcafc[0].expired + iVar1),
                       expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < g_INT_01cbcaf8);
      }
    }
    else {
      iVar2 = 0;
      if (0 < g_INT_01cbcaf8) {
        this_ptr_00 = g_CBloodSplat_ARRAY_01cbcafc;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CBloodSplat_render_FUN_004c8010(this_ptr_00,0);
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar2 < g_INT_01cbcaf8);
      }
    }
    core_gore_cpp_CBloodPool_setupRenderState_FUN_004c8800(g_CBloodPool_ARRAY_01cdde44);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < g_INT_01cdde40) {
        iVar1 = 0;
        do {
          if (*(int *)((int)&g_CBloodPool_ARRAY_01cdde44[0].expired + iVar1) == 0) {
            core_gore_cpp_CBloodPool_render_FUN_004c88a0
                      ((CBloodPool *)((int)&g_CBloodPool_ARRAY_01cdde44[0].expired + iVar1),
                       expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x28;
        } while (iVar2 < g_INT_01cdde40);
      }
    }
    else {
      iVar2 = 0;
      if (0 < g_INT_01cdde40) {
        this_ptr_01 = g_CBloodPool_ARRAY_01cdde44;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CBloodPool_render_FUN_004c88a0(this_ptr_01,0);
          this_ptr_01 = this_ptr_01 + 1;
        } while (iVar2 < g_INT_01cdde40);
      }
    }
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < g_INT_01cde348) {
        iVar1 = 0;
        do {
          if (*(int *)((int)g_CFootstep_ARRAY_01cde34c[0].corners + iVar1 + -8) == 0) {
            core_gore_cpp_CFootstep_render_FUN_004c9000
                      ((CFootstep *)((int)g_CFootstep_ARRAY_01cde34c[0].corners + iVar1 + -8),
                       expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x40;
        } while (iVar2 < g_INT_01cde348);
      }
    }
    else {
      iVar2 = 0;
      if (0 < g_INT_01cde348) {
        this_ptr_02 = g_CFootstep_ARRAY_01cde34c;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CFootstep_render_FUN_004c9000(this_ptr_02,0);
          this_ptr_02 = this_ptr_02 + 1;
        } while (iVar2 < g_INT_01cde348);
        return;
      }
    }
  }
  return;
}
