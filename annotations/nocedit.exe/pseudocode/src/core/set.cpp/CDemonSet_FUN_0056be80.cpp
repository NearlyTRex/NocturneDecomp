// Name: core_set.cpp_CDemonSet_FUN_0056be80
// Address: 0056be80
// Address Range: [[0056be80, 0056c19c]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056be80(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da3a2 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539534 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c1e8 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b04c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_renderStaticLights_3_2f__00645d33
//   double DOUBLE_00645d53 = 0.0555555555555556
//   double DOUBLE_00645d5b = 0.0000152587890625
//   double DOUBLE_00645d63 = 1000
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   CConsole g_ConsolePtr
//   CDemonLight* g_CurrentShadowLight
//   CDemonRenderer g_CDemonRendererInstance
//   CFireEffect g_CFireEffectInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81ac0
//   undefined4 DAT_02d81ca8
//   undefined4 g_CGameInstance.delta_time_float
//   CGore g_CGoreInstance
//   int g_ActiveLightCount
//   CDemonLight*[96] g_ActiveLightList
//   undefined4 DAT_03276f38
//   int g_DynamicLightCount
//   CDemonLight*[4] g_DynamicLights
//   undefined4 DAT_032776bc
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
//   core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
//   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
//   core_fire.cpp_CFireEffect_render_FUN_004c7180
//   core_gore.cpp_CGore_FUN_004ed7b0
//   core_set.cpp_CDemonSet_FUN_0056aca0
//   core_set.cpp_CDemonSet_FUN_0056fbd0
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   core_set.cpp_FUN_00570af0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056be80(CDemonSet *this_ptr)

{
  CDemonLight *pCVar1;
  float fVar2;
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
  
  if (g_CGamePtr->shadow_flag != 0) {
    if (g_CGamePtr->profile_mode != 0) {
      local_38 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    }
    local_28 = 0;
    g_CDemonRaytraceInstance.rendering_mode = 0;
    if (0 < g_DynamicLightCount) {
      local_30 = 0;
      do {
        pCVar1 = *(CDemonLight **)((int)g_DynamicLights + local_30);
        if (pCVar1->light_enabled_flag != 0) {
          fVar2 = (pCVar1->base).max_distance;
          core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(pCVar1,0);
          core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(pCVar1);
          if (pCVar1->antialiasing_enabled != 0) {
            core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
                      (this_ptr,(pCVar1->base).max_distance,0);
            core_set_cpp_CDemonSet_FUN_0056fbd0(this_ptr);
            core_set_cpp_CDemonSet_FUN_0056aca0(this_ptr);
            local_18 = 0;
            pCVar6 = this_ptr;
            if (0 < *(int *)this_ptr->field73_0x15f6e4) {
              do {
                iVar5 = 0;
                (**(code **)(*(int *)(*(int *)(pCVar6->field73_0x15f6e4 + 4) + 0x154) + 8))();
                if (0 < this_ptr->mirror_glass_count) {
                  do {
                    core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar5,0);
                    (**(code **)(*(int *)(*(int *)(pCVar6->field73_0x15f6e4 + 4) + 0x154) + 8))();
                    iVar5 = iVar5 + 1;
                    core_set_cpp_FUN_00570af0();
                  } while (iVar5 < this_ptr->mirror_glass_count);
                }
                engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
                          (g_CDemonRendererPtr,1);
                local_18 = local_18 + 1;
                pCVar6 = (CDemonSet *)pCVar6->cameras;
              } while (local_18 < *(int *)this_ptr->field73_0x15f6e4);
            }
            core_gore_cpp_CGore_FUN_004ed7b0(g_CGorePtr);
            core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
          }
          core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(pCVar1);
          (pCVar1->base).max_distance = fVar2;
        }
        local_30 = local_30 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < g_DynamicLightCount);
    }
    local_24 = 0;
    if (0 < g_ActiveLightCount) {
      local_2c = 0;
      do {
        pCVar1 = *(CDemonLight **)((int)g_ActiveLightList + local_2c);
        if (pCVar1->light_enabled_flag != 0) {
          core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(pCVar1,1);
          core_set_cpp_CDemonSet_FUN_0056fbd0(this_ptr);
          iVar5 = 0;
          pCVar6 = this_ptr;
          g_CurrentShadowLight = pCVar1;
          if (0 < *(int *)this_ptr->field73_0x15f6e4) {
            do {
              iVar3 = *(int *)(pCVar6->field73_0x15f6e4 + 4);
              iVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 8))();
              if (iVar4 == 0) {
                *(byte *)(iVar3 + 0x140) = *(byte *)(iVar3 + 0x140) & 0xfd;
              }
              else {
                *(byte *)(iVar3 + 0x140) = *(byte *)(iVar3 + 0x140) | 0x22;
              }
              iVar5 = iVar5 + 1;
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
                        (g_CDemonRendererPtr,1);
              pCVar6 = (CDemonSet *)pCVar6->cameras;
            } while (iVar5 < *(int *)this_ptr->field73_0x15f6e4);
          }
          core_gore_cpp_CGore_FUN_004ed7b0(g_CGorePtr);
          core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
          g_CurrentShadowLight = (CDemonLight *)0x0;
          core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(pCVar1);
        }
        local_2c = local_2c + 4;
        local_24 = local_24 + 1;
      } while (local_24 < g_ActiveLightCount);
    }
    if (g_CGamePtr->profile_mode != 0) {
      iVar5 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"renderStaticLights : %3.2f ms\n",
                 ((double)(iVar5 - local_38) * DOUBLE_00645d53 * DOUBLE_00645d5b * DOUBLE_00645d63)
                 / (double)g_CGamePtr->delta_time_float);
      return;
    }
  }
  return;
}


// Assembly code:
// 0056be80: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056be80
// 0056be81: PUSH ESI
// 0056be82: PUSH EDI
// 0056be83: PUSH EBP
// 0056be84: SUB ESP,0x30
// 0056be87: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0056be8b: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0056be90: CMP dword ptr [EAX + 0x24],0x0
//   XREF to: 02d81ac0 (READ)
// 0056be94: JZ 0x0056bf5b
//   XREF to: 0056bf5b (CONDITIONAL_JUMP)
// 0056be9a: CMP dword ptr [EAX + 0x20c],0x0
//   XREF to: 02d81ca8 (READ)
// 0056bea1: JNZ 0x0056bf63
//   XREF to: 0056bf63 (CONDITIONAL_JUMP)
// 0056bea7: XOR EBX,EBX
//   Label: LAB_0056bea7
// 0056bea9: MOV EBP,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056beaf: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 0056beb3: MOV dword ptr [0x03277d14],EBX
//   XREF to: 03277d14 (WRITE)
// 0056beb9: TEST EBP,EBP
// 0056bebb: JLE 0x0056befb
//   XREF to: 0056befb (CONDITIONAL_JUMP)
// 0056bebd: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0056bec1: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0056bec1
//   XREF to: Stack[-0x30] (READ)
// 0056bec5: MOV EAX,dword ptr [EAX + 0x32776b8]
//   XREF to: 032776b8 (DATA)
//   XREF to: 032776bc (DATA)
// 0056becb: MOV EDX,dword ptr [EAX + 0x1cb4]
// 0056bed1: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056bed5: TEST EDX,EDX
// 0056bed7: JNZ 0x0056bf71
//   XREF to: 0056bf71 (CONDITIONAL_JUMP)
// 0056bedd: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0056bedd
//   XREF to: Stack[-0x30] (READ)
// 0056bee1: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 0056bee5: MOV ECX,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056beeb: ADD EAX,0x4
// 0056beee: INC EDX
// 0056beef: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0056bef3: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0056bef7: CMP EDX,ECX
// 0056bef9: JL 0x0056bec1
//   XREF to: 0056bec1 (CONDITIONAL_JUMP)
// 0056befb: XOR EBX,EBX
//   Label: LAB_0056befb
// 0056befd: MOV EDI,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056bf03: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0056bf07: TEST EDI,EDI
// 0056bf09: JLE 0x0056bf49
//   XREF to: 0056bf49 (CONDITIONAL_JUMP)
// 0056bf0b: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 0056bf0f: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0056bf0f
//   XREF to: Stack[-0x2c] (READ)
// 0056bf13: MOV EAX,dword ptr [EAX + 0x3276f34]
//   XREF to: 03276f34 (DATA)
//   XREF to: 03276f38 (DATA)
// 0056bf19: MOV EDX,dword ptr [EAX + 0x1cb4]
// 0056bf1f: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0056bf23: TEST EDX,EDX
// 0056bf25: JNZ 0x0056c09c
//   XREF to: 0056c09c (CONDITIONAL_JUMP)
// 0056bf2b: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_0056bf2b
//   XREF to: Stack[-0x2c] (READ)
// 0056bf2f: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0056bf33: MOV EBX,dword ptr [0x03276f30]
//   XREF to: 03276f30 (READ)
// 0056bf39: ADD EDX,0x4
// 0056bf3c: INC ECX
// 0056bf3d: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0056bf41: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0056bf45: CMP ECX,EBX
// 0056bf47: JL 0x0056bf0f
//   XREF to: 0056bf0f (CONDITIONAL_JUMP)
// 0056bf49: MOV EAX,[0x0067b654]
//   Label: LAB_0056bf49
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 0056bf4e: CMP dword ptr [EAX + 0x20c],0x0
//   XREF to: 02d81ca8 (READ)
// 0056bf55: JNZ 0x0056c147
//   XREF to: 0056c147 (CONDITIONAL_JUMP)
// 0056bf5b: ADD ESP,0x30
//   Label: LAB_0056bf5b
// 0056bf5e: POP EBP
// 0056bf5f: POP EDI
// 0056bf60: POP ESI
// 0056bf61: POP EBX
// 0056bf62: RET
// 0056bf63: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_0056bf63
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0056bf68: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0056bf6c: JMP 0x0056bea7
//   XREF to: 0056bea7 (UNCONDITIONAL_JUMP)
// 0056bf71: PUSH 0x0
//   Label: LAB_0056bf71
// 0056bf73: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x1c] (READ)
// 0056bf77: MOV EAX,dword ptr [EAX + 0x140]
// 0056bf7d: PUSH ECX
// 0056bf7e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0056bf82: CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
//   XREF to: 00472a80 (UNCONDITIONAL_CALL)
// 0056bf87: ADD ESP,0x8
// 0056bf8a: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 0056bf8e: PUSH EBX
// 0056bf8f: CALL core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
//   XREF to: 004735c0 (UNCONDITIONAL_CALL)
// 0056bf94: MOV EDI,dword ptr [EBX + 0x1cd0]
// 0056bf9a: ADD ESP,0x4
// 0056bf9d: TEST EDI,EDI
// 0056bf9f: JZ 0x0056c07a
//   XREF to: 0056c07a (CONDITIONAL_JUMP)
// 0056bfa5: PUSH 0x0
// 0056bfa7: PUSH dword ptr [EBX + 0x140]
// 0056bfad: PUSH ESI
// 0056bfae: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 0056bfb3: ADD ESP,0xc
// 0056bfb6: PUSH 0x1
// 0056bfb8: PUSH ESI
// 0056bfb9: CALL core_set.cpp_CDemonSet_FUN_0056fbd0
//   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)
// 0056bfbe: ADD ESP,0x8
// 0056bfc1: PUSH 0x0
// 0056bfc3: PUSH ESI
// 0056bfc4: XOR EBP,EBP
// 0056bfc6: CALL core_set.cpp_CDemonSet_FUN_0056aca0
//   XREF to: 0056aca0 (UNCONDITIONAL_CALL)
// 0056bfcb: ADD ESP,0x8
// 0056bfce: MOV EAX,dword ptr [ESI + 0x15f6e4]
// 0056bfd4: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0056bfd8: TEST EAX,EAX
// 0056bfda: JLE 0x0056c05c
//   XREF to: 0056c05c (CONDITIONAL_JUMP)
// 0056bfe0: MOV EBP,ESI
// 0056bfe2: MOV EAX,dword ptr [EBP + 0x15f6e8]
//   Label: LAB_0056bfe2
// 0056bfe8: PUSH EAX
// 0056bfe9: MOV EDX,dword ptr [EAX + 0x154]
// 0056bfef: XOR EBX,EBX
// 0056bff1: CALL dword ptr [EDX + 0x8]
// 0056bff4: MOV EAX,dword ptr [ESI + 0x15acb4]
// 0056bffa: ADD ESP,0x4
// 0056bffd: TEST EAX,EAX
// 0056bfff: JLE 0x0056c036
//   XREF to: 0056c036 (CONDITIONAL_JUMP)
// 0056c001: MOV EDI,EBP
// 0056c003: PUSH 0x0
//   Label: LAB_0056c003
// 0056c005: PUSH EBX
// 0056c006: PUSH ESI
// 0056c007: CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   XREF to: 005709e0 (UNCONDITIONAL_CALL)
// 0056c00c: ADD ESP,0xc
// 0056c00f: MOV EAX,dword ptr [EDI + 0x15f6e8]
// 0056c015: PUSH EAX
// 0056c016: MOV EDX,dword ptr [EAX + 0x154]
// 0056c01c: CALL dword ptr [EDX + 0x8]
// 0056c01f: ADD ESP,0x4
// 0056c022: PUSH ESI
// 0056c023: INC EBX
// 0056c024: CALL core_set.cpp_FUN_00570af0
//   XREF to: 00570af0 (UNCONDITIONAL_CALL)
// 0056c029: MOV EDX,dword ptr [ESI + 0x15acb4]
// 0056c02f: ADD ESP,0x4
// 0056c032: CMP EBX,EDX
// 0056c034: JL 0x0056c003
//   XREF to: 0056c003 (CONDITIONAL_JUMP)
// 0056c036: PUSH 0x1
//   Label: LAB_0056c036
// 0056c038: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056c03d: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0056c03e: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0056c043: ADD ESP,0x8
// 0056c046: MOV EDX,dword ptr [ESP + 0x28]
// 0056c04a: ADD EBP,0x4
// 0056c04d: INC EDX
// 0056c04e: MOV ECX,dword ptr [ESI + 0x15f6e4]
// 0056c054: MOV dword ptr [ESP + 0x28],EDX
// 0056c058: CMP EDX,ECX
// 0056c05a: JL 0x0056bfe2
//   XREF to: 0056bfe2 (CONDITIONAL_JUMP)
// 0056c05c: MOV EBX,dword ptr [0x0067b9a0]
//   Label: LAB_0056c05c
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0056c062: PUSH EBX
//   XREF to: 02d83364 (DATA)
// 0056c063: CALL core_gore.cpp_CGore_FUN_004ed7b0
//   XREF to: 004ed7b0 (UNCONDITIONAL_CALL)
// 0056c068: ADD ESP,0x4
// 0056c06b: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 0056c071: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 0056c072: CALL core_fire.cpp_CFireEffect_render_FUN_004c7180
//   XREF to: 004c7180 (UNCONDITIONAL_CALL)
// 0056c077: ADD ESP,0x4
// 0056c07a: PUSH 0x1
//   Label: LAB_0056c07a
// 0056c07c: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x1c] (READ)
// 0056c080: PUSH ECX
// 0056c081: CALL core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
//   XREF to: 00472d30 (UNCONDITIONAL_CALL)
// 0056c086: ADD ESP,0x8
// 0056c089: MOV EDX,dword ptr [ESP + 0x24]
// 0056c08d: MOV EAX,dword ptr [ESP + 0xc]
// 0056c091: MOV dword ptr [EDX + 0x140],EAX
// 0056c097: JMP 0x0056bedd
//   XREF to: 0056bedd (UNCONDITIONAL_JUMP)
// 0056c09c: PUSH 0x1
//   Label: LAB_0056c09c
// 0056c09e: PUSH EAX
// 0056c09f: CALL core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
//   XREF to: 00472a80 (UNCONDITIONAL_CALL)
// 0056c0a4: ADD ESP,0x8
// 0056c0a7: PUSH 0x22
// 0056c0a9: PUSH ESI
// 0056c0aa: CALL core_set.cpp_CDemonSet_FUN_0056fbd0
//   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)
// 0056c0af: ADD ESP,0x8
// 0056c0b2: XOR EBP,EBP
// 0056c0b4: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 0056c0b8: MOV EBX,dword ptr [ESI + 0x15f6e4]
// 0056c0be: MOV [0x020a5740],EAX
//   XREF to: 020a5740 (WRITE)
// 0056c0c3: TEST EBX,EBX
// 0056c0c5: JLE 0x0056c105
//   XREF to: 0056c105 (CONDITIONAL_JUMP)
// 0056c0c7: MOV EDI,ESI
// 0056c0c9: MOV EBX,dword ptr [EDI + 0x15f6e8]
//   Label: LAB_0056c0c9
// 0056c0cf: PUSH EBX
// 0056c0d0: MOV EAX,dword ptr [EBX + 0x154]
// 0056c0d6: CALL dword ptr [EAX + 0x8]
// 0056c0d9: ADD ESP,0x4
// 0056c0dc: TEST EAX,EAX
// 0056c0de: JZ 0x0056c13e
//   XREF to: 0056c13e (CONDITIONAL_JUMP)
// 0056c0e0: OR byte ptr [EBX + 0x140],0x22
// 0056c0e7: PUSH 0x1
//   Label: LAB_0056c0e7
// 0056c0e9: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056c0ee: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0056c0ef: ADD EDI,0x4
// 0056c0f2: INC EBP
// 0056c0f3: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0056c0f8: MOV EDX,dword ptr [ESI + 0x15f6e4]
// 0056c0fe: ADD ESP,0x8
// 0056c101: CMP EBP,EDX
// 0056c103: JL 0x0056c0c9
//   XREF to: 0056c0c9 (CONDITIONAL_JUMP)
// 0056c105: MOV ECX,dword ptr [0x0067b9a0]
//   Label: LAB_0056c105
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0056c10b: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 0056c10c: CALL core_gore.cpp_CGore_FUN_004ed7b0
//   XREF to: 004ed7b0 (UNCONDITIONAL_CALL)
// 0056c111: ADD ESP,0x4
// 0056c114: MOV EBX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 0056c11a: PUSH EBX
//   XREF to: 02d12db0 (DATA)
// 0056c11b: CALL core_fire.cpp_CFireEffect_render_FUN_004c7180
//   XREF to: 004c7180 (UNCONDITIONAL_CALL)
// 0056c120: ADD ESP,0x4
// 0056c123: XOR EDI,EDI
// 0056c125: PUSH EDI
// 0056c126: MOV EBP,dword ptr [ESP + 0x24]
// 0056c12a: PUSH EBP
// 0056c12b: MOV dword ptr [0x020a5740],EDI
//   XREF to: 020a5740 (WRITE)
// 0056c131: CALL core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
//   XREF to: 00472d30 (UNCONDITIONAL_CALL)
// 0056c136: ADD ESP,0x8
// 0056c139: JMP 0x0056bf2b
//   XREF to: 0056bf2b (UNCONDITIONAL_JUMP)
// 0056c13e: AND byte ptr [EBX + 0x140],0xfd
//   Label: LAB_0056c13e
// 0056c145: JMP 0x0056c0e7
//   XREF to: 0056c0e7 (UNCONDITIONAL_JUMP)
// 0056c147: MOV EDI,dword ptr [ESP + 0x8]
//   Label: LAB_0056c147
//   XREF to: Stack[-0x38] (READ)
// 0056c14b: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0056c150: SUB EAX,EDI
// 0056c152: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056c156: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0056c15a: FMUL double ptr [0x00645d53]
//   XREF to: 00645d53 (READ)
// 0056c160: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0056c165: FMUL double ptr [0x00645d5b]
//   XREF to: 00645d5b (READ)
// 0056c16b: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0056c171: FXCH
// 0056c173: FMUL double ptr [0x00645d63]
//   XREF to: 00645d63 (READ)
// 0056c179: FDIVRP
// 0056c17b: SUB ESP,0x8
// 0056c17e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 0056c181: PUSH 0x645d33
//   XREF to: 00645d33 (DATA)
// 0056c186: MOV EBP,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0056c18c: PUSH EBP
//   XREF to: 0083b1a4 (DATA)
// 0056c18d: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0056c192: ADD ESP,0x10
// 0056c195: ADD ESP,0x30
// 0056c198: POP EBP
// 0056c199: POP EDI
// 0056c19a: POP ESI
// 0056c19b: POP EBX
// 0056c19c: RET
