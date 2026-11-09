// Name: core_set.cpp_FUN_00535a80
// Address: 00535a80
// Address Range: [[00535a80, 00535d9c]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_00535a80(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_00535a80(CDemonSet *this_ptr)

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
    if (*(int *)&g_CGamePtr->field_0x230 != 0) {
      local_38 = wincore_winrun_cpp_FUN_005806a0();
    }
    local_28 = 0;
    g_CDemonRaytraceInstance._0_4_ = 0;
    if (0 < _DAT_0203ad1c) {
      local_30 = 0;
      do {
        pCVar1 = *(CDemonLight **)(local_30 + 0x203ad20);
        if (*(int *)&pCVar1->field_0x1cb4 != 0) {
          uVar2 = *(uint *)&pCVar1->field_0x140;
          core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(pCVar1,0);
          core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0045d070(pCVar1);
          if (*(int *)&pCVar1->field_0x1cd0 != 0) {
            core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80
                      (this_ptr,*(float *)&pCVar1->field_0x140,0);
            core_set_cpp_FUN_00539f30(this_ptr,1);
            core_set_cpp_FUN_005346b0(this_ptr,0);
            local_18 = 0;
            pCVar6 = this_ptr;
            if (0 < *(int *)&this_ptr->field_0x15f6fc) {
              do {
                iVar5 = 0;
                (**(code **)(*(int *)(*(int *)&pCVar6->field_0x15f700 + 0x154) + 0x10))();
                if (0 < *(int *)&this_ptr->field_0x15acc8) {
                  do {
                    core_set_cpp_FUN_0053adf0(this_ptr,iVar5,0);
                    (**(code **)(*(int *)(*(int *)&pCVar6->field_0x15f700 + 0x154) + 0x10))();
                    iVar5 = iVar5 + 1;
                    core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
                  } while (iVar5 < *(int *)&this_ptr->field_0x15acc8);
                }
                engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
                local_18 = local_18 + 1;
                pCVar6 = (CDemonSet *)&pCVar6->field_0x4;
              } while (local_18 < *(int *)&this_ptr->field_0x15f6fc);
            }
            core_gore_cpp_FUN_004ce5b0(g_CGorePtr);
            core_fire_cpp_FUN_004a1ad0(0x01C73654);
          }
          core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(pCVar1,1);
          *(uint *)&pCVar1->field_0x140 = uVar2;
        }
        local_30 = local_30 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < _DAT_0203ad1c);
    }
    local_24 = 0;
    if (0 < _DAT_0203a598) {
      local_2c = 0;
      do {
        pCVar1 = *(CDemonLight **)(&DAT_0203a59c + local_2c);
        if (*(int *)&pCVar1->field_0x1cb4 != 0) {
          core_dlight_cpp_CDemonLight_beginScene_FUN_0045c530(pCVar1,1);
          core_set_cpp_FUN_00539f30(this_ptr,0x22);
          iVar5 = 0;
          pCVar6 = this_ptr;
          _DAT_01549b10 = pCVar1;
          if (0 < *(int *)&this_ptr->field_0x15f6fc) {
            do {
              iVar3 = *(int *)&pCVar6->field_0x15f700;
              iVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10))();
              if (iVar4 == 0) {
                *(byte *)(iVar3 + 0x144) = *(byte *)(iVar3 + 0x144) & 0xfd;
              }
              else {
                *(byte *)(iVar3 + 0x144) = *(byte *)(iVar3 + 0x144) | 0x22;
              }
              iVar5 = iVar5 + 1;
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
              pCVar6 = (CDemonSet *)&pCVar6->field_0x4;
            } while (iVar5 < *(int *)&this_ptr->field_0x15f6fc);
          }
          core_gore_cpp_FUN_004ce5b0(g_CGorePtr);
          core_fire_cpp_FUN_004a1ad0(0x01C73654);
          _DAT_01549b10 = (CDemonLight *)0x0;
          core_dlight_cpp_CDemonLight_endScene_FUN_0045c7e0(pCVar1,0);
        }
        local_2c = local_2c + 4;
        local_24 = local_24 + 1;
      } while (local_24 < _DAT_0203a598);
    }
    if (*(int *)&g_CGamePtr->field_0x230 != 0) {
      iVar5 = wincore_winrun_cpp_FUN_005806a0();
      engine_console_cpp_FUN_00441ff0
                (g_CConsolePtr,"@renderStaticLights : %3.2f ms\n" + 1,
                 ((double)(iVar5 - local_38) * _DAT_005d055f * _DAT_005d0567 * _DAT_005d056f) /
                 (double)*(float *)&g_CGamePtr->field_0x314);
      return;
    }
  }
  return;
}
