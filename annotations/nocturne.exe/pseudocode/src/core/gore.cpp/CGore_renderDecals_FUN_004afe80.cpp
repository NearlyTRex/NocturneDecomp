// Name: core_gore.cpp_CGore_renderDecals_FUN_004afe80
// Address: 004afe80
// Address Range: [[004afe80, 004b002a]]
// Convention: unknown
// Signature: int core_gore_cpp_CGore_renderDecals_FUN_004afe80(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_gore_cpp_CGore_renderDecals_FUN_004afe80(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x01C775EC;
  if (*(int *)(0x01C775EC + 0x14) != 0) {
    core_gore_cpp_CBloodSplat_setupRenderState_FUN_004aeae0((CBloodSplat *)0x1c7ccf4);
    if (param_2 == 0) {
      iVar3 = 0;
      if (0 < _DAT_01c7ccf0) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1c7ccf4) == 0) {
            core_gore_cpp_CBloodSplat_render_FUN_004aeb70(iVar1 + 0x1c7ccf4);
          }
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar3 < _DAT_01c7ccf0);
      }
    }
    else {
      iVar3 = 0;
      if (0 < _DAT_01c7ccf0) {
        iVar1 = 0x1c7ccf4;
        do {
          core_gore_cpp_CBloodSplat_render_FUN_004aeb70(iVar1);
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar3 < _DAT_01c7ccf0);
      }
    }
    iVar3 = core_gore_cpp_CBloodPool_setupRenderState_FUN_004af2a0((CBloodPool *)0x1c9e03c);
    if (param_2 == 0) {
      iVar1 = 0;
      if (0 < _DAT_01c9e038) {
        iVar2 = 0;
        do {
          if (*(int *)(iVar2 + 0x1c9e03c) == 0) {
            iVar3 = core_gore_cpp_CBloodPool_render_FUN_004af340(iVar2 + 0x1c9e03c);
          }
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 0x28;
        } while (iVar1 < _DAT_01c9e038);
      }
    }
    else {
      iVar1 = 0;
      if (0 < _DAT_01c9e038) {
        iVar2 = 0x1c9e03c;
        do {
          iVar3 = core_gore_cpp_CBloodPool_render_FUN_004af340(iVar2);
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 0x28;
        } while (iVar1 < _DAT_01c9e038);
      }
    }
    if (param_2 == 0) {
      iVar1 = 0;
      if (0 < _DAT_01c9e540) {
        iVar2 = 0;
        do {
          if (*(int *)(iVar2 + 0x1c9e544) == 0) {
            iVar3 = core_gore_cpp_CFootstep_render_FUN_004afa20(iVar2 + 0x1c9e544);
          }
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 0x40;
        } while (iVar1 < _DAT_01c9e540);
      }
    }
    else {
      iVar1 = 0;
      if (0 < _DAT_01c9e540) {
        iVar3 = 0x1c9e544;
        do {
          core_gore_cpp_CFootstep_render_FUN_004afa20(iVar3);
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 0x40;
        } while (iVar1 < _DAT_01c9e540);
        return _DAT_01c9e540;
      }
    }
  }
  return iVar3;
}
