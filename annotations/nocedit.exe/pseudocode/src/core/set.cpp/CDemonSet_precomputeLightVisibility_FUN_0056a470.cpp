// Name: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
// Address: 0056a470
// Address Range: [[0056a470, 0056aa00]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet * this_ptr)
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538762 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005793f0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b410 (0057b410) at 0057b4c8 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b500 (0057b500) at 0057b5dd [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b600 (0057b600) at 0057b8e8 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057cb12 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Camera_box_7_2f_7_2f_7_2_00645ac5
//   TerminatedCString s_core_set_cpp_00645afe
//   TerminatedCString s_CDemonSet_precomuputeLig_00645b0e
//   TerminatedCString s_Light_d_Box_d_d_d_d_00645b5a
//   TerminatedCString s_Precomputing_lights_from_00645b76
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonCamera g_CDemonCameraInstance
//   int g_MasterLightCount
//   CDemonLight*[96] g_MasterLightList
//   undefined4 DAT_03276db4
//   int g_ActiveLightCount
//   int g_DynamicLightCount
//   CDemonRaytrace g_CDemonRaytraceInstance
//   undefined4 DAT_03277d80
// Function calls:
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
//   core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
//   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10
//   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   core_setutil.cpp_C3DSCamera_apply_FUN_00585870
//   core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strcmp_FUN_005fef20
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet *this_ptr)

{
  CDemonSet *pCVar1;
  char *pcVar2;
  CDemonLight *light_source;
  int iVar3;
  CVector3f *pCVar4;
  int unaff_EBX;
  int iVar5;
  C3DSCamera *this_ptr_00;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte bVar12;
  int unaff_retaddr;
  CDemonSet *in_stack_00000008;
  int in_stack_0000000c;
  undefined4 auStackY_1848 [1443];
  undefined8 in_stack_fffffe74;
  CBoundingBox3D *bounding_box;
  CVector3f aCStack_88 [2];
  CRect aCStack_70 [2];
  int iStack_50;
  int local_4c;
  int local_48;
  CDemonSet *local_44;
  C3DSCamera *local_40;
  int local_3c;
  CDemonSet *local_38;
  C3DSLight *local_34;
  CDemonSet *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDemonSet *local_1c;
  
  bVar12 = 0;
  local_4c = 0;
  if (g_MasterLightCount == 0) {
    core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
    local_48 = 1;
  }
  g_DynamicLightCount = 0;
  DAT_03277d80 = 0;
  local_1c = (CDemonSet *)0x0;
  g_ActiveLightCount = 0;
  if (0 < in_stack_00000008->camera_count) {
    local_34 = in_stack_00000008->lights;
    local_44 = (CDemonSet *)(in_stack_0000000c + 1);
    local_40 = in_stack_00000008->cameras;
    local_3c = 0;
    local_38 = in_stack_00000008;
    local_30 = (CDemonSet *)local_34;
    do {
      bounding_box = (CBoundingBox3D *)((ulonglong)in_stack_fffffe74 >> 0x20);
      if (local_38->cameras[0].is_panning == 0) {
        this_ptr_00 = local_40 + (int)local_1c;
        core_setutil_cpp_C3DSCamera_apply_FUN_00585870(this_ptr_00,&g_CDemonCameraInstance);
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
        g_CDemonRaytraceInstance.rendering_mode = 1;
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(local_1c,9999.9,0);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
        core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(&g_CDemonCameraInstance);
        pCVar4 = core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
                           (&g_CDemonCameraInstance,aCStack_88,bounding_box);
        if (&this_ptr_00->box_min != pCVar4) {
          (this_ptr_00->box_min).x = pCVar4->x;
          (this_ptr_00->box_min).y = pCVar4->y;
          (this_ptr_00->box_min).z = pCVar4->z;
        }
        if (&this_ptr_00->box_max != pCVar4 + 1) {
          (this_ptr_00->box_max).x = pCVar4[1].x;
          (this_ptr_00->box_max).y = pCVar4[1].y;
          (this_ptr_00->box_max).z = pCVar4[1].z;
        }
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffe7c,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)",
                   (double)*(float *)(local_4c + 0x180),(double)*(float *)(local_4c + 0x184),
                   (double)*(float *)(local_4c + 0x188),(double)*(float *)(local_4c + 0x18c),
                   (double)*(float *)(local_4c + 400),(double)*(float *)(local_4c + 0x194));
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe80,0,0x16);
      }
      local_24 = 0x21;
      local_2c = *(int *)(unaff_EBX + 0x19a2c);
      local_1c = (CDemonSet *)0;
      if (unaff_retaddr != -1) {
        local_2c = iStack_50;
        local_1c = (CDemonSet *)unaff_retaddr;
      }
      if ((int)local_1c < local_2c) {
        local_30 = local_44;
        local_34 = (C3DSLight *)local_48;
        local_38 = local_44;
        local_20 = (int)local_1c * 0x1898 + local_28 + unaff_EBX;
        iVar6 = local_48 + (int)local_1c * 0x1898 + unaff_EBX;
        do {
          pCVar1 = local_1c;
          iVar7 = (int)local_1c * 0x1898;
          if (*(int *)(unaff_EBX + iVar7 + 0x19a30) == 0) {
            iVar5 = 0;
            if (0 < g_MasterLightCount) {
              iVar7 = iVar7 + local_3c;
              iVar8 = 0;
              do {
                iVar3 = crt_string_c_strcmp_FUN_005fef20
                                  ((char *)(*(int *)((int)g_MasterLightList + iVar8) + 0x40),
                                   (char *)(iVar7 + 4));
                if (iVar3 == 0) break;
                iVar5 = iVar5 + 1;
                iVar8 = iVar8 + 4;
              } while (iVar5 < g_MasterLightCount);
            }
            if (iVar5 == g_MasterLightCount) {
              g_CurrentFilename = "..\\core\\set.cpp";
              g_CurrentLineNumber = 0x2fc;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::precomuputeLightVisibility - Unable to find light in master list");
            }
            light_source = g_MasterLightList[iVar5];
            if (local_30->cameras[0].is_panning == 0) {
              core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10
                        (&g_CDemonCameraInstance,light_source,(CRect *)0x0);
              iVar7 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
                                (&g_CDemonCameraInstance,light_source);
              *(char *)(local_2c + 0x19b58) = (char)iVar7;
              core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
                        (&g_CDemonCameraInstance,light_source,aCStack_70);
              puVar10 = (undefined4 *)(iVar6 + 0x19c58 + (uint)bVar12 * -8);
              *(int *)(iVar6 + 0x19c54) = aCStack_70[0].top;
              puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
              puVar9 = (undefined4 *)((int)aCStack_70 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 0xc)
              ;
              *puVar10 = *(undefined4 *)((int)aCStack_70 + (uint)bVar12 * -8 + 8);
              *puVar11 = *puVar9;
              puVar11[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
              if (*(char *)(local_28 + 0x19b58) != '\0') {
                crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe7c,"Light %d, Box : %d,%d,%d,%d");
                iVar7 = local_28 + 0xb;
                engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe80,0,local_28);
                local_24 = iVar7;
              }
            }
          }
          else {
            iVar5 = local_28 + unaff_EBX + iVar7;
            if (local_38->cameras[0].is_panning == 0) {
              core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
              iVar7 = core_setutil_cpp_C3DSLight_isVisible_FUN_00587df0
                                ((C3DSLight *)(iVar7 + local_48));
              *(char *)(iVar5 + 0x19b58) = (char)iVar7;
              core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
              pcVar2 = local_34[(int)pCVar1 + 0x10].filter_names[5] + unaff_EBX + 0x18;
              pcVar2[0] = '\0';
              pcVar2[1] = '\0';
              pcVar2[2] = '\0';
              pcVar2[3] = '\0';
              pcVar2 = local_34[(int)pCVar1 + 0x10].filter_names[5] + unaff_EBX + 0x1c;
              pcVar2[0] = '\0';
              pcVar2[1] = '\0';
              pcVar2[2] = '\0';
              pcVar2[3] = '\0';
              pcVar2 = local_34[(int)pCVar1 + 0x10].filter_names[5] + unaff_EBX + 0x20;
              pcVar2[0] = '\0';
              pcVar2[1] = '\0';
              pcVar2[2] = '\0';
              pcVar2[3] = '\0';
              pcVar2 = local_34[(int)pCVar1 + 0x10].filter_names[5] + unaff_EBX + 0x24;
              pcVar2[0] = '\0';
              pcVar2[1] = '\0';
              pcVar2[2] = '\0';
              pcVar2[3] = '\0';
            }
            else {
              *(undefined1 *)(iVar5 + 0x19b58) = 0;
            }
          }
          iVar6 = iVar6 + 0x1898;
          local_20 = local_20 + 0x1898;
          local_1c = (CDemonSet *)((int)local_1c + 1);
        } while ((int)local_1c < local_2c);
      }
      iVar6 = local_28;
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe84,"Precomputing lights from camera : %d");
      in_stack_fffffe74 = 0x56a6c600000000;
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe88,0,0);
      pCVar1 = (CDemonSet *)(iVar6 + 1);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      local_38 = (CDemonSet *)&local_38->cameras[0].field17_0x1a0;
      local_3c = local_3c + 0x10;
      local_1c = pCVar1;
    } while ((int)pCVar1 < in_stack_00000008->camera_count);
  }
  if (local_48 != 0) {
    core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000008);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}


// Assembly code:
// 0056a470: PUSH EBX
//   Label: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
// 0056a471: PUSH ESI
// 0056a472: PUSH EDI
// 0056a473: PUSH EBP
// 0056a474: SUB ESP,0x164
// 0056a47a: XOR EDX,EDX
// 0056a47c: MOV ECX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0056a482: MOV dword ptr [ESP + 0x128],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0056a489: TEST ECX,ECX
// 0056a48b: JZ 0x0056a72f
//   XREF to: 0056a72f (CONDITIONAL_JUMP)
// 0056a491: XOR EDI,EDI
//   Label: LAB_0056a491
// 0056a493: MOV EAX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0x4] (READ)
// 0056a49a: MOV dword ptr [0x032776b4],EDI
//   XREF to: 032776b4 (WRITE)
// 0056a4a0: MOV dword ptr [0x03277d80],EDI
//   XREF to: 03277d80 (WRITE)
// 0056a4a6: MOV dword ptr [ESP + 0x154],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0056a4ad: MOV ECX,dword ptr [EAX]
// 0056a4af: MOV dword ptr [0x03276f30],EDI
//   XREF to: 03276f30 (WRITE)
// 0056a4b5: TEST ECX,ECX
// 0056a4b7: JLE 0x0056a70e
//   XREF to: 0056a70e (CONDITIONAL_JUMP)
// 0056a4bd: ADD EAX,0x19a30
// 0056a4c2: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0056a4c9: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0056a4d0: MOV EAX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[0x8] (READ)
// 0056a4d7: INC EAX
// 0056a4d8: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0056a4df: MOV EAX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0x4] (READ)
// 0056a4e6: ADD EAX,0x4
// 0056a4e9: MOV dword ptr [ESP + 0x130],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0056a4f0: MOV EAX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0x4] (READ)
// 0056a4f7: MOV dword ptr [ESP + 0x134],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 0056a4fe: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0056a505: IMUL EBX,dword ptr [ESP + 0x154],0x1a4
//   Label: LAB_0056a505
//   XREF to: Stack[-0x20] (READ)
// 0056a510: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x3c] (READ)
// 0056a517: MOV EBP,dword ptr [EAX + 0x144]
// 0056a51d: TEST EBP,EBP
// 0056a51f: JZ 0x0056a750
//   XREF to: 0056a750 (CONDITIONAL_JUMP)
// 0056a525: MOV dword ptr [ESP + 0x158],0x21
//   Label: LAB_0056a525
//   XREF to: Stack[-0x1c] (WRITE)
// 0056a530: MOV EBX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0x4] (READ)
// 0056a537: MOV ESI,dword ptr [ESP + 0x17c]
//   XREF to: Stack[0x8] (READ)
// 0056a53e: MOV EBX,dword ptr [EBX + 0x19a2c]
// 0056a544: XOR EAX,EAX
// 0056a546: MOV dword ptr [ESP + 0x150],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0056a54d: CMP ESI,-0x1
// 0056a550: JZ 0x0056a562
//   XREF to: 0056a562 (CONDITIONAL_JUMP)
// 0056a552: MOV EBX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[-0x48] (READ)
// 0056a559: MOV EAX,ESI
// 0056a55b: MOV dword ptr [ESP + 0x150],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0056a562: MOV EDI,dword ptr [ESP + 0x150]
//   Label: LAB_0056a562
//   XREF to: Stack[-0x24] (READ)
// 0056a569: MOV dword ptr [ESP + 0x160],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056a570: CMP EAX,EDI
// 0056a572: JGE 0x0056a69e
//   XREF to: 0056a69e (CONDITIONAL_JUMP)
// 0056a578: IMUL EAX,EAX,0x1898
// 0056a57e: MOV EBX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x3c] (READ)
// 0056a585: MOV dword ptr [ESP + 0x14c],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 0056a58c: MOV EBX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x40] (READ)
// 0056a593: MOV EBP,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x40] (READ)
// 0056a59a: MOV dword ptr [ESP + 0x148],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 0056a5a1: MOV EBX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x3c] (READ)
// 0056a5a8: MOV ESI,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x20] (READ)
// 0056a5af: MOV dword ptr [ESP + 0x144],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0056a5b6: ADD EBP,EAX
// 0056a5b8: MOV EBX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0x4] (READ)
// 0056a5bf: ADD EAX,ESI
// 0056a5c1: ADD EAX,EBX
// 0056a5c3: ADD EBP,EBX
// 0056a5c5: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0056a5cc: IMUL ESI,dword ptr [ESP + 0x160],0x1898
//   Label: LAB_0056a5cc
//   XREF to: Stack[-0x14] (READ)
// 0056a5d7: MOV EBX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0x4] (READ)
// 0056a5de: ADD EBX,ESI
// 0056a5e0: CMP dword ptr [EBX + 0x19a30],0x0
// 0056a5e7: JNZ 0x0056a94c
//   XREF to: 0056a94c (CONDITIONAL_JUMP)
// 0056a5ed: MOV EDX,dword ptr [0x03276dac]
//   XREF to: 03276dac (READ)
// 0056a5f3: XOR EBX,EBX
// 0056a5f5: TEST EDX,EDX
// 0056a5f7: JLE 0x0056a620
//   XREF to: 0056a620 (CONDITIONAL_JUMP)
// 0056a5f9: ADD ESI,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x34] (READ)
// 0056a600: LEA EDI,[ESI + 0x4]
// 0056a603: XOR ESI,ESI
// 0056a605: MOV EAX,dword ptr [ESI + 0x3276db0]
//   Label: LAB_0056a605
//   XREF to: 03276db0 (READ)
//   XREF to: 03276db4 (READ)
// 0056a60b: PUSH EDI
// 0056a60c: ADD EAX,0x40
// 0056a60f: PUSH EAX
// 0056a610: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0056a615: ADD ESP,0x8
// 0056a618: TEST EAX,EAX
// 0056a61a: JNZ 0x0056a875
//   XREF to: 0056a875 (CONDITIONAL_JUMP)
// 0056a620: CMP EBX,dword ptr [0x03276dac]
//   Label: LAB_0056a620
//   XREF to: 03276dac (READ)
// 0056a626: JNZ 0x0056a64b
//   XREF to: 0056a64b (CONDITIONAL_JUMP)
// 0056a628: MOV EDX,0x645afe
//   XREF to: 00645afe (PARAM)
// 0056a62d: MOV ECX,0x2fc
// 0056a632: PUSH 0x645b0e
//   XREF to: 00645b0e (DATA)
// 0056a637: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0056a63d: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0056a643: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0056a648: ADD ESP,0x4
// 0056a64b: MOV EAX,dword ptr [ESP + 0x14c]
//   Label: LAB_0056a64b
//   XREF to: Stack[-0x28] (READ)
// 0056a652: MOV ESI,dword ptr [EAX + 0x144]
// 0056a658: MOV EBX,dword ptr [EBX*0x4 + 0x3276db0]
//   XREF to: 03276db0 (READ)
// 0056a65f: TEST ESI,ESI
// 0056a661: JZ 0x0056a88c
//   XREF to: 0056a88c (CONDITIONAL_JUMP)
// 0056a667: MOV EAX,dword ptr [ESP + 0x15c]
//   Label: LAB_0056a667
//   XREF to: Stack[-0x18] (READ)
// 0056a66e: MOV EDX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x14] (READ)
// 0056a675: MOV ECX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x24] (READ)
// 0056a67c: ADD EBP,0x1898
// 0056a682: ADD EAX,0x1898
// 0056a687: INC EDX
// 0056a688: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0056a68f: MOV dword ptr [ESP + 0x160],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0056a696: CMP EDX,ECX
// 0056a698: JL 0x0056a5cc
//   XREF to: 0056a5cc (CONDITIONAL_JUMP)
// 0056a69e: MOV EBX,dword ptr [ESP + 0x154]
//   Label: LAB_0056a69e
//   XREF to: Stack[-0x20] (READ)
// 0056a6a5: PUSH EBX
// 0056a6a6: PUSH 0x645b76
//   XREF to: 00645b76 (DATA)
// 0056a6ab: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x174] (DATA)
// 0056a6af: PUSH EAX
// 0056a6b0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056a6b5: ADD ESP,0xc
// 0056a6b8: PUSH 0x0
// 0056a6ba: PUSH 0x0
// 0056a6bc: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x174] (DATA)
// 0056a6c0: PUSH EAX
// 0056a6c1: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0056a6c6: ADD ESP,0xc
// 0056a6c9: LEA EBP,[EBX + 0x1]
// 0056a6cc: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0056a6d1: MOV ESI,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0x3c] (READ)
// 0056a6d8: MOV EDI,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x40] (READ)
// 0056a6df: MOV EBX,dword ptr [ESP + 0x178]
//   XREF to: Stack[0x4] (READ)
// 0056a6e6: MOV dword ptr [ESP + 0x154],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 0056a6ed: ADD ESI,0x1a4
// 0056a6f3: ADD EDI,0x10
// 0056a6f6: MOV EDX,dword ptr [EBX]
// 0056a6f8: MOV dword ptr [ESP + 0x138],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 0056a6ff: MOV dword ptr [ESP + 0x134],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 0056a706: CMP EBP,EDX
// 0056a708: JL 0x0056a505
//   XREF to: 0056a505 (CONDITIONAL_JUMP)
// 0056a70e: CMP dword ptr [ESP + 0x128],0x0
//   Label: LAB_0056a70e
//   XREF to: Stack[-0x4c] (READ)
// 0056a716: JNZ 0x0056a9de
//   XREF to: 0056a9de (CONDITIONAL_JUMP)
// 0056a71c: XOR EBP,EBP
// 0056a71e: MOV dword ptr [0x03277d14],EBP
//   XREF to: 03277d14 (WRITE)
// 0056a724: ADD ESP,0x164
// 0056a72a: POP EBP
// 0056a72b: POP EDI
// 0056a72c: POP ESI
// 0056a72d: POP EBX
// 0056a72e: RET
// 0056a72f: MOV EBX,dword ptr [ESP + 0x178]
//   Label: LAB_0056a72f
//   XREF to: Stack[0x4] (READ)
// 0056a736: PUSH EBX
// 0056a737: MOV ESI,0x1
// 0056a73c: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0056a741: ADD ESP,0x4
// 0056a744: MOV dword ptr [ESP + 0x128],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 0056a74b: JMP 0x0056a491
//   XREF to: 0056a491 (UNCONDITIONAL_JUMP)
// 0056a750: MOV EAX,dword ptr [ESP + 0x130]
//   Label: LAB_0056a750
//   XREF to: Stack[-0x44] (READ)
// 0056a757: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056a75c: ADD EBX,EAX
// 0056a75e: PUSH EBX
// 0056a75f: CALL core_setutil.cpp_C3DSCamera_apply_FUN_00585870
//   XREF to: 00585870 (UNCONDITIONAL_CALL)
// 0056a764: ADD ESP,0x8
// 0056a767: PUSH EBP
// 0056a768: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056a76d: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 0056a772: ADD ESP,0x8
// 0056a775: PUSH EBP
// 0056a776: MOV ECX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[0x4] (READ)
// 0056a77d: PUSH 0x461c3f9a
// 0056a782: MOV EDX,0x1
// 0056a787: PUSH ECX
// 0056a788: MOV dword ptr [0x03277d14],EDX
//   XREF to: 03277d14 (WRITE)
// 0056a78e: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 0056a793: ADD ESP,0xc
// 0056a796: PUSH EBP
// 0056a797: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056a79c: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 0056a7a1: ADD ESP,0x8
// 0056a7a4: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056a7a9: CALL core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
//   XREF to: 0044e360 (UNCONDITIONAL_CALL)
// 0056a7ae: ADD ESP,0x4
// 0056a7b1: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x74] (DATA)
// 0056a7b8: PUSH EAX
// 0056a7b9: ADD EBX,0x17c
// 0056a7bf: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056a7c4: MOV EDI,EBX
// 0056a7c6: CALL core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
//   XREF to: 00454060 (UNCONDITIONAL_CALL)
// 0056a7cb: ADD ESP,0x8
// 0056a7ce: MOV ESI,EAX
// 0056a7d0: CMP EBX,EAX
// 0056a7d2: JZ 0x0056a7e4
//   XREF to: 0056a7e4 (CONDITIONAL_JUMP)
// 0056a7d4: MOV EDX,dword ptr [EAX]
// 0056a7d6: MOV dword ptr [EBX],EDX
// 0056a7d8: MOV EDX,dword ptr [EAX + 0x4]
// 0056a7db: MOV dword ptr [EBX + 0x4],EDX
// 0056a7de: MOV EDX,dword ptr [EAX + 0x8]
// 0056a7e1: MOV dword ptr [EBX + 0x8],EDX
// 0056a7e4: LEA EAX,[ESI + 0xc]
//   Label: LAB_0056a7e4
// 0056a7e7: LEA EBX,[EDI + 0xc]
// 0056a7ea: CMP EBX,EAX
// 0056a7ec: JZ 0x0056a7fe
//   XREF to: 0056a7fe (CONDITIONAL_JUMP)
// 0056a7ee: MOV EDX,dword ptr [EAX]
// 0056a7f0: MOV dword ptr [EBX],EDX
// 0056a7f2: MOV EDX,dword ptr [EAX + 0x4]
// 0056a7f5: MOV dword ptr [EBX + 0x4],EDX
// 0056a7f8: MOV EDX,dword ptr [EAX + 0x8]
// 0056a7fb: MOV dword ptr [EBX + 0x8],EDX
// 0056a7fe: MOV EAX,dword ptr [ESP + 0x138]
//   Label: LAB_0056a7fe
//   XREF to: Stack[-0x3c] (READ)
// 0056a805: SUB ESP,0x8
// 0056a808: FLD float ptr [EAX + 0x194]
// 0056a80e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x17c] (DATA)
// 0056a811: SUB ESP,0x8
// 0056a814: FLD float ptr [EAX + 0x190]
// 0056a81a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x184] (DATA)
// 0056a81d: SUB ESP,0x8
// 0056a820: FLD float ptr [EAX + 0x18c]
// 0056a826: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18c] (DATA)
// 0056a829: SUB ESP,0x8
// 0056a82c: FLD float ptr [EAX + 0x188]
// 0056a832: FSTP double ptr [ESP]
//   XREF to: Stack[-0x194] (DATA)
// 0056a835: SUB ESP,0x8
// 0056a838: FLD float ptr [EAX + 0x184]
// 0056a83e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x19c] (DATA)
// 0056a841: SUB ESP,0x8
// 0056a844: FLD float ptr [EAX + 0x180]
// 0056a84a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1a4] (DATA)
// 0056a84d: PUSH 0x645ac5
//   XREF to: 00645ac5 (DATA)
// 0056a852: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x174] (DATA)
// 0056a856: PUSH EAX
// 0056a857: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056a85c: ADD ESP,0x38
// 0056a85f: PUSH 0x16
// 0056a861: PUSH 0x0
// 0056a863: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x174] (DATA)
// 0056a867: PUSH EAX
// 0056a868: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0056a86d: ADD ESP,0xc
// 0056a870: JMP 0x0056a525
//   XREF to: 0056a525 (UNCONDITIONAL_JUMP)
// 0056a875: MOV ECX,dword ptr [0x03276dac]
//   Label: LAB_0056a875
//   XREF to: 03276dac (READ)
// 0056a87b: INC EBX
// 0056a87c: ADD ESI,0x4
// 0056a87f: CMP EBX,ECX
// 0056a881: JL 0x0056a605
//   XREF to: 0056a605 (CONDITIONAL_JUMP)
// 0056a887: JMP 0x0056a620
//   XREF to: 0056a620 (UNCONDITIONAL_JUMP)
// 0056a88c: PUSH ESI
//   Label: LAB_0056a88c
// 0056a88d: PUSH EBX
// 0056a88e: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056a893: CALL core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10
//   XREF to: 0044de10 (UNCONDITIONAL_CALL)
// 0056a898: ADD ESP,0xc
// 0056a89b: PUSH EBX
// 0056a89c: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056a8a1: CALL core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
//   XREF to: 00450fc0 (UNCONDITIONAL_CALL)
// 0056a8a6: ADD ESP,0x8
// 0056a8a9: PUSH EBX
// 0056a8aa: MOV ESI,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x18] (READ)
// 0056a8b1: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056a8b6: MOV byte ptr [ESI + 0x19b58],AL
// 0056a8bc: LEA ESI,[ESP + 0x120]
//   XREF to: Stack[-0x5c] (DATA)
// 0056a8c3: CALL core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
//   XREF to: 00451090 (UNCONDITIONAL_CALL)
// 0056a8c8: LEA ESI,[ESP + 0x120]
//   XREF to: Stack[-0x5c] (DATA)
// 0056a8cf: ADD ESP,0x8
// 0056a8d2: LEA EDI,[EBP + 0x19c54]
// 0056a8d8: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x18] (READ)
// 0056a8df: MOVSD ES:EDI,ESI
// 0056a8e0: MOVSD ES:EDI,ESI
// 0056a8e1: MOVSD ES:EDI,ESI
// 0056a8e2: MOVSD ES:EDI,ESI
// 0056a8e3: CMP byte ptr [EAX + 0x19b58],0x0
// 0056a8ea: JZ 0x0056a667
//   XREF to: 0056a667 (CONDITIONAL_JUMP)
// 0056a8f0: MOV EDI,dword ptr [EBP + 0x19c60]
// 0056a8f6: PUSH EDI
// 0056a8f7: MOV EAX,dword ptr [EBP + 0x19c5c]
// 0056a8fd: PUSH EAX
// 0056a8fe: MOV EDX,dword ptr [EBP + 0x19c58]
// 0056a904: PUSH EDX
// 0056a905: MOV ECX,dword ptr [EBP + 0x19c54]
// 0056a90b: PUSH ECX
// 0056a90c: MOV EBX,dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x14] (READ)
// 0056a913: PUSH EBX
// 0056a914: PUSH 0x645b5a
//   XREF to: 00645b5a (DATA)
// 0056a919: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x174] (DATA)
// 0056a91d: PUSH EAX
// 0056a91e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056a923: ADD ESP,0x1c
// 0056a926: MOV ESI,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x1c] (READ)
// 0056a92d: PUSH ESI
// 0056a92e: PUSH 0x0
// 0056a930: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x174] (DATA)
// 0056a934: PUSH EAX
// 0056a935: LEA EDI,[ESI + 0xb]
// 0056a938: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0056a93d: ADD ESP,0xc
// 0056a940: MOV dword ptr [ESP + 0x158],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0056a947: JMP 0x0056a667
//   XREF to: 0056a667 (UNCONDITIONAL_JUMP)
// 0056a94c: MOV EAX,dword ptr [ESP + 0x144]
//   Label: LAB_0056a94c
//   XREF to: Stack[-0x30] (READ)
// 0056a953: MOV EDI,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x20] (READ)
// 0056a95a: MOV ECX,dword ptr [EAX + 0x144]
// 0056a960: ADD EDI,EBX
// 0056a962: TEST ECX,ECX
// 0056a964: JZ 0x0056a972
//   XREF to: 0056a972 (CONDITIONAL_JUMP)
// 0056a966: MOV byte ptr [EDI + 0x19b58],0x0
// 0056a96d: JMP 0x0056a667
//   XREF to: 0056a667 (UNCONDITIONAL_JUMP)
// 0056a972: PUSH 0x1
//   Label: LAB_0056a972
// 0056a974: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056a979: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 0056a97e: ADD ESP,0x8
// 0056a981: ADD ESI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0x38] (READ)
// 0056a988: PUSH ESI
// 0056a989: CALL core_setutil.cpp_C3DSLight_isVisible_FUN_00587df0
//   XREF to: 00587df0 (UNCONDITIONAL_CALL)
// 0056a98e: ADD ESP,0x4
// 0056a991: PUSH 0x0
// 0056a993: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056a998: MOV byte ptr [EDI + 0x19b58],AL
// 0056a99e: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 0056a9a3: ADD ESP,0x8
// 0056a9a6: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0x2c] (READ)
// 0056a9ad: MOV dword ptr [EBX + EAX*0x1 + 0x19c54],0x0
// 0056a9b8: MOV dword ptr [EBX + EAX*0x1 + 0x19c58],0x0
// 0056a9c3: MOV dword ptr [EBX + EAX*0x1 + 0x19c5c],0x0
// 0056a9ce: MOV dword ptr [EBX + EAX*0x1 + 0x19c60],0x0
// 0056a9d9: JMP 0x0056a667
//   XREF to: 0056a667 (UNCONDITIONAL_JUMP)
// 0056a9de: MOV EBX,dword ptr [ESP + 0x178]
//   Label: LAB_0056a9de
//   XREF to: Stack[0x4] (READ)
// 0056a9e5: PUSH EBX
// 0056a9e6: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 0056a9eb: ADD ESP,0x4
// 0056a9ee: XOR EBP,EBP
// 0056a9f0: MOV dword ptr [0x03277d14],EBP
//   XREF to: 03277d14 (WRITE)
// 0056a9f6: ADD ESP,0x164
// 0056a9fc: POP EBP
// 0056a9fd: POP EDI
// 0056a9fe: POP ESI
// 0056a9ff: POP EBX
// 0056aa00: RET
