// Name: core_gore.cpp_CGore_renderDecals_FUN_004ce630
// Address: 004ce630
// Address Range: [[004ce630, 004ce7de]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004ce630(CGore *this_ptr,int render_all,int expire_flag)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004ce630(CGore *this_ptr,int render_all,int expire_flag)

{
  CBloodSplat *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodPool *this_ptr_01;
  CFootstep *this_ptr_02;
  
  if (g_CGamePtr->blood_flag != 0) {
    core_gore_cpp_CBloodSplat_setupRenderState_FUN_004cd600(g_CBloodSplat_ARRAY_01d276bc);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < g_BloodSplatCount) {
        iVar1 = 0;
        do {
          if (*(int *)((int)&g_CBloodSplat_ARRAY_01d276bc[0].expired + iVar1) == 0) {
            core_gore_cpp_CBloodSplat_render_FUN_004cd690
                      ((CBloodSplat *)((int)&g_CBloodSplat_ARRAY_01d276bc[0].expired + iVar1),
                       expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x48;
        } while (iVar2 < g_BloodSplatCount);
      }
    }
    else {
      iVar2 = 0;
      if (0 < g_BloodSplatCount) {
        this_ptr_00 = g_CBloodSplat_ARRAY_01d276bc;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CBloodSplat_render_FUN_004cd690(this_ptr_00,0);
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar2 < g_BloodSplatCount);
      }
    }
    core_gore_cpp_CBloodPool_setupRenderState_FUN_004cdc90(g_CBloodPool_ARRAY_01d4a944);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < g_BloodPoolCount) {
        iVar1 = 0;
        do {
          if (*(int *)((int)&g_CBloodPool_ARRAY_01d4a944[0].expired + iVar1) == 0) {
            core_gore_cpp_CBloodPool_render_FUN_004cdd30
                      ((CBloodPool *)((int)&g_CBloodPool_ARRAY_01d4a944[0].expired + iVar1),
                       expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x2c;
        } while (iVar2 < g_BloodPoolCount);
      }
    }
    else {
      iVar2 = 0;
      if (0 < g_BloodPoolCount) {
        this_ptr_01 = g_CBloodPool_ARRAY_01d4a944;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CBloodPool_render_FUN_004cdd30(this_ptr_01,0);
          this_ptr_01 = this_ptr_01 + 1;
        } while (iVar2 < g_BloodPoolCount);
      }
    }
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < g_FootstepCount) {
        iVar1 = 0;
        do {
          if (*(int *)((int)&((CFootstep *)(g_CFootstep_ARRAY_01d4aecc[0].corners + -1))->expired +
                      iVar1) == 0) {
            core_gore_cpp_CFootstep_render_FUN_004ce310
                      ((CFootstep *)
                       ((int)&((CFootstep *)(g_CFootstep_ARRAY_01d4aecc[0].corners + -1))->expired +
                       iVar1),expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < g_FootstepCount);
      }
    }
    else {
      iVar2 = 0;
      if (0 < g_FootstepCount) {
        this_ptr_02 = g_CFootstep_ARRAY_01d4aecc;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_CFootstep_render_FUN_004ce310(this_ptr_02,0);
          this_ptr_02 = this_ptr_02 + 1;
        } while (iVar2 < g_FootstepCount);
        return;
      }
    }
  }
  return;
}
