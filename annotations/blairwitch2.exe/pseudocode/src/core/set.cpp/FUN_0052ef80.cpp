// Name: core_set.cpp_FUN_0052ef80
// Address: 0052ef80
// Address Range: [[0052ef80, 0052f29c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0052ef80(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_0052ef80(CDemonSet *this_ptr)

{
  CDemonLight *pCVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CDemonSet *pCVar6;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_18;
  
  if (*(int *)&g_CGamePtr->field_0x24 != 0) {
    if (*(int *)&g_CGamePtr->field_0x228 != 0) {
      local_38 = wincore_winrun_cpp_FUN_0058e9e0();
    }
    local_28 = 0;
    g_CDemonRaytraceInstance._0_4_ = 0;
    if (0 < _DAT_01fc9608) {
      local_30 = 0;
      do {
        pCVar1 = *(CDemonLight **)(local_30 + 0x1fc960c);
        if (*(int *)&pCVar1->field_0x1cb4 != 0) {
          uVar2 = *(uint *)&pCVar1->field_0x140;
          core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(pCVar1,0);
          core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044ab60(pCVar1);
          if (*(int *)&pCVar1->field_0x1cd0 != 0) {
            core_set_cpp_FUN_0052d0e0(this_ptr,*(float *)&pCVar1->field_0x140,0);
            core_set_cpp_FUN_005332f0(this_ptr,1);
            core_set_cpp_FUN_0052dc10(this_ptr,0);
            local_18 = 0;
            pCVar6 = this_ptr;
            if (0 < *(int *)&this_ptr->field_0x15f6f8) {
              do {
                iVar5 = 0;
                (**(code **)(*(int *)(*(int *)&pCVar6->field_0x15f6fc + 0x2b0) + 0x18))();
                if (0 < *(int *)&this_ptr->field_0x15acc8) {
                  do {
                    core_set_cpp_FUN_005341b0(this_ptr,iVar5,0);
                    (**(code **)(*(int *)(*(int *)&pCVar6->field_0x15f6fc + 0x2b0) + 0x18))();
                    iVar5 = iVar5 + 1;
                    core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(this_ptr);
                  } while (iVar5 < *(int *)&this_ptr->field_0x15acc8);
                }
                engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
                local_18 = local_18 + 1;
                pCVar6 = (CDemonSet *)&pCVar6->field_0x4;
              } while (local_18 < *(int *)&this_ptr->field_0x15f6f8);
            }
            core_gore_cpp_FUN_004c9440(g_CGorePtr);
            core_fire_cpp_FUN_0049c780(0x01C3DEB4);
          }
          core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(pCVar1,1);
          *(uint *)&pCVar1->field_0x140 = uVar2;
        }
        local_30 = local_30 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_01fc9608);
    }
    local_24 = 0;
    if (0 < _DAT_01fc8e84) {
      local_2c = 0;
      do {
        pCVar1 = *(CDemonLight **)(&DAT_01fc8e88 + local_2c);
        if (*(int *)&pCVar1->field_0x1cb4 != 0) {
          core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(pCVar1,1);
          core_set_cpp_FUN_005332f0(this_ptr,0x22);
          iVar5 = 0;
          pCVar6 = this_ptr;
          _DAT_01511ce4 = pCVar1;
          if (0 < *(int *)&this_ptr->field_0x15f6f8) {
            do {
              iVar3 = *(int *)&pCVar6->field_0x15f6fc;
              iVar4 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x18))();
              if (iVar4 == 0) {
                *(byte *)(iVar3 + 0x144) = *(byte *)(iVar3 + 0x144) & 0xfd;
              }
              else {
                *(byte *)(iVar3 + 0x144) = *(byte *)(iVar3 + 0x144) | 0x22;
              }
              iVar5 = iVar5 + 1;
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
              pCVar6 = (CDemonSet *)&pCVar6->field_0x4;
            } while (iVar5 < *(int *)&this_ptr->field_0x15f6f8);
          }
          core_gore_cpp_FUN_004c9440(g_CGorePtr);
          core_fire_cpp_FUN_0049c780(0x01C3DEB4);
          _DAT_01511ce4 = (CDemonLight *)0x0;
          core_dlight_cpp_CDemonLight_endScene_FUN_0044a2d0(pCVar1,0);
        }
        local_2c = local_2c + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_01fc8e84);
    }
    if (*(int *)&g_CGamePtr->field_0x228 != 0) {
      iVar5 = wincore_winrun_cpp_FUN_0058e9e0();
      engine_console_cpp_FUN_00436710
                (g_CConsolePtr,"@renderStaticLights : %3.2f ms\n" + 1,
                 ((double)(iVar5 - local_38) * _DAT_005e58a2 * _DAT_005e58aa * _DAT_005e58b2) /
                 (double)*(float *)&g_CGamePtr->field_0x284);
      return;
    }
  }
  return;
}
