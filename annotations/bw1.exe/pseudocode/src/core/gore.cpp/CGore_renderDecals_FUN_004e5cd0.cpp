// Name: core_gore.cpp_CGore_renderDecals_FUN_004e5cd0
// Address: 004e5cd0
// Address Range: [[004e5cd0, 004e5e7e]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004e5cd0(CGore *this_ptr,int render_all,int expire_flag)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004e5cd0(CGore *this_ptr,int render_all,int expire_flag)

{
  CBloodSplat *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodPool *this_ptr_01;
  CFootstep *this_ptr_02;
  
  if (g_CGamePtr->blood_flag != 0) {
    core_gore_cpp_CBloodSplat_setupRenderState_FUN_004e4910(g_CBloodSplat_ARRAY_01cd56b4);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < g_INT_01cd56b0) {
        iVar1 = 0;
        do {
          if (*(int *)((int)&g_CBloodSplat_ARRAY_01cd56b4[0].expired + iVar1) == 0) {
            core_gore_cpp_CBloodSplat_render_FUN_004e49a0
                      ((CBloodSplat *)((int)&g_CBloodSplat_ARRAY_01cd56b4[0].expired + iVar1),
                       expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < g_INT_01cd56b0);
      }
    }
    else {
      iVar2 = 0;
      if (0 < g_INT_01cd56b0) {
        this_ptr_00 = g_CBloodSplat_ARRAY_01cd56b4;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CBloodSplat_render_FUN_004e49a0(this_ptr_00,0);
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar2 < g_INT_01cd56b0);
      }
    }
    core_gore_cpp_CBloodPool_setupRenderState_FUN_004e50e0(g_CBloodPool_ARRAY_01cf69fc);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < g_INT_01cf69f8) {
        iVar1 = 0;
        do {
          if (*(int *)((int)&g_CBloodPool_ARRAY_01cf69fc[0].expired + iVar1) == 0) {
            core_gore_cpp_CBloodPool_render_FUN_004e5180
                      ((CBloodPool *)((int)&g_CBloodPool_ARRAY_01cf69fc[0].expired + iVar1),
                       expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x28;
        } while (iVar2 < g_INT_01cf69f8);
      }
    }
    else {
      iVar2 = 0;
      if (0 < g_INT_01cf69f8) {
        this_ptr_01 = g_CBloodPool_ARRAY_01cf69fc;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CBloodPool_render_FUN_004e5180(this_ptr_01,0);
          this_ptr_01 = this_ptr_01 + 1;
        } while (iVar2 < g_INT_01cf69f8);
      }
    }
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < g_INT_01cf6f00) {
        iVar1 = 0;
        do {
          if (*(int *)((int)g_CFootstep_ARRAY_01cf6f04[0].corners + iVar1 + -8) == 0) {
            core_gore_cpp_CFootstep_render_FUN_004e5860
                      ((CFootstep *)((int)g_CFootstep_ARRAY_01cf6f04[0].corners + iVar1 + -8),
                       expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x40;
        } while (iVar2 < g_INT_01cf6f00);
      }
    }
    else {
      iVar2 = 0;
      if (0 < g_INT_01cf6f00) {
        this_ptr_02 = g_CFootstep_ARRAY_01cf6f04;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CFootstep_render_FUN_004e5860(this_ptr_02,0);
          this_ptr_02 = this_ptr_02 + 1;
        } while (iVar2 < g_INT_01cf6f00);
        return;
      }
    }
  }
  return;
}
