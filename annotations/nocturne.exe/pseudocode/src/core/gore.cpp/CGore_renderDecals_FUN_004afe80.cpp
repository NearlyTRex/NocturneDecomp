// Name: core_gore.cpp_CGore_renderDecals_FUN_004afe80
// Address: 004afe80
// Address Range: [[004afe80, 004b002a]]
// Convention: unknown
// Signature: CGame * core_gore_cpp_CGore_renderDecals_FUN_004afe80(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGame * core_gore_cpp_CGore_renderDecals_FUN_004afe80(uint param_1,int param_2)

{
  CGame *pCVar1;
  CBloodSplat *pCVar2;
  CBloodPool *pCVar3;
  int iVar4;
  int iVar5;
  CFootstep *pCVar6;
  
  pCVar1 = g_CGame_PTR_005b9354;
  if (g_CGame_PTR_005b9354->blood_flag != 0) {
    core_gore_cpp_CBloodSplat_setupRenderState_FUN_004aeae0(g_CBloodSplat_ARRAY_01c7ccf4);
    if (param_2 == 0) {
      iVar5 = 0;
      if (0 < _DAT_01c7ccf0) {
        iVar4 = 0;
        do {
          if (*(int *)((int)&g_CBloodSplat_ARRAY_01c7ccf4[0].expired + iVar4) == 0) {
            core_gore_cpp_CBloodSplat_render_FUN_004aeb70
                      ((int)&g_CBloodSplat_ARRAY_01c7ccf4[0].expired + iVar4);
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x44;
        } while (iVar5 < _DAT_01c7ccf0);
      }
    }
    else {
      iVar5 = 0;
      if (0 < _DAT_01c7ccf0) {
        pCVar2 = g_CBloodSplat_ARRAY_01c7ccf4;
        do {
          core_gore_cpp_CBloodSplat_render_FUN_004aeb70(pCVar2);
          iVar5 = iVar5 + 1;
          pCVar2 = pCVar2 + 1;
        } while (iVar5 < _DAT_01c7ccf0);
      }
    }
    pCVar1 = (CGame *)core_gore_cpp_CBloodPool_setupRenderState_FUN_004af2a0
                                (g_CBloodPool_ARRAY_01c9e03c);
    if (param_2 == 0) {
      iVar5 = 0;
      if (0 < _DAT_01c9e038) {
        iVar4 = 0;
        do {
          if (*(int *)((int)&g_CBloodPool_ARRAY_01c9e03c[0].expired + iVar4) == 0) {
            pCVar1 = (CGame *)core_gore_cpp_CBloodPool_render_FUN_004af340
                                        ((int)&g_CBloodPool_ARRAY_01c9e03c[0].expired + iVar4);
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x28;
        } while (iVar5 < _DAT_01c9e038);
      }
    }
    else {
      iVar5 = 0;
      if (0 < _DAT_01c9e038) {
        pCVar3 = g_CBloodPool_ARRAY_01c9e03c;
        do {
          pCVar1 = (CGame *)core_gore_cpp_CBloodPool_render_FUN_004af340(pCVar3);
          iVar5 = iVar5 + 1;
          pCVar3 = pCVar3 + 1;
        } while (iVar5 < _DAT_01c9e038);
      }
    }
    if (param_2 == 0) {
      iVar5 = 0;
      if (0 < (int)_DAT_01c9e540) {
        iVar4 = 0;
        do {
          if (*(int *)((int)g_CFootstep_ARRAY_01c9e544[0].corners + iVar4 + -8) == 0) {
            pCVar1 = (CGame *)core_gore_cpp_CFootstep_render_FUN_004afa20
                                        ((int)g_CFootstep_ARRAY_01c9e544[0].corners + iVar4 + -8);
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x40;
        } while (iVar5 < (int)_DAT_01c9e540);
      }
    }
    else {
      iVar5 = 0;
      if (0 < (int)_DAT_01c9e540) {
        pCVar6 = g_CFootstep_ARRAY_01c9e544;
        do {
          core_gore_cpp_CFootstep_render_FUN_004afa20(pCVar6);
          iVar5 = iVar5 + 1;
          pCVar6 = pCVar6 + 1;
        } while (iVar5 < (int)_DAT_01c9e540);
        return _DAT_01c9e540;
      }
    }
  }
  return pCVar1;
}
