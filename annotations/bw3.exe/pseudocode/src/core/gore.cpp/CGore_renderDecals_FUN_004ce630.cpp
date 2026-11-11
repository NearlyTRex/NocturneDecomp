// Name: core_gore.cpp_CGore_renderDecals_FUN_004ce630
// Address: 004ce630
// Address Range: [[004ce630, 004ce7de]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004ce630(CGore *this_ptr,int render_all,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_renderDecals_FUN_004ce630(CGore *this_ptr,int render_all,int expire_flag)

{
  int iVar1;
  int iVar2;
  
  if (g_CGamePtr->blood_flag != 0) {
    core_gore_cpp_CBloodSplat_setupRenderState_FUN_004cd600((CBloodSplat *)0x1d276bc);
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01d276b8) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1d276bc) == 0) {
            core_gore_cpp_FUN_004cd690(iVar1 + 0x1d276bc,expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x48;
        } while (iVar2 < _DAT_01d276b8);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01d276b8) {
        iVar1 = 0x1d276bc;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004cd690(iVar1,0);
          iVar1 = iVar1 + 0x48;
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
            core_gore_cpp_FUN_004cdd30(iVar1 + 0x1d4a944,expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x2c;
        } while (iVar2 < _DAT_01d4a940);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01d4a940) {
        iVar1 = 0x1d4a944;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004cdd30(iVar1,0);
          iVar1 = iVar1 + 0x2c;
        } while (iVar2 < _DAT_01d4a940);
      }
    }
    if (render_all == 0) {
      iVar2 = 0;
      if (0 < _DAT_01d4aec8) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1d4aecc) == 0) {
            core_gore_cpp_FUN_004ce310(iVar1 + 0x1d4aecc,expire_flag);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < _DAT_01d4aec8);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01d4aec8) {
        iVar1 = 0x1d4aecc;
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004ce310(iVar1,0);
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < _DAT_01d4aec8);
        return;
      }
    }
  }
  return;
}
