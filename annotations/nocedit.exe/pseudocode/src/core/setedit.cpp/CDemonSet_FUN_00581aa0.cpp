// Name: core_setedit.cpp_CDemonSet_FUN_00581aa0
// Address: 00581aa0
// Address Range: [[00581aa0, 00581db8] [00581dd8, 00582920]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_FUN_00581aa0(CDemonSet * this_ptr)
// Globals:
//   TerminatedCString s_Outside_006489f3
//   TerminatedCString s_Small_006489fb
//   TerminatedCString s_Medium_e_g_Mausoleum_00648a01
//   TerminatedCString s_Large_e_g_Warehouse_00648a19
//   TerminatedCString s_Humongous_00648a30
//   TerminatedCString s_Show_this_help_screen_00648a3a
//   TerminatedCString s_F1_00648a50
//   TerminatedCString s_Set_default_room_size_fo_00648a53
//   TerminatedCString s_S_00648a71
//   TerminatedCString s_Next_room_00648a73
//   TerminatedCString s_TAB_00648a7d
//   TerminatedCString s_Previous_room_00648a81
//   TerminatedCString s_SHIFT_TAB_00648a8f
//   TerminatedCString s_Insert_room_00648a99
//   TerminatedCString s_I_00648aa5
//   TerminatedCString s_Delete_room_00648aa7
//   TerminatedCString s_D_00648ab3
//   TerminatedCString s_Deselect_room_00648ab5
//   TerminatedCString s_N_00648ac3
//   TerminatedCString s_To_position_the_selected_00648ac5
//   TerminatedCString s_To_size_the_selected_box_00648afd
//   TerminatedCString s_Preparing_set_00648b45
//   TerminatedCString s_Room_size_d_00648b54
//   TerminatedCString s_No_room_selected_00648b62
//   undefined4 s_o_room_selected_00648b63
//   undefined4 s_room_selected_00648b64
//   undefined4 s_room_selected_00648b65
//   TerminatedCString s_Select_default_room_size_00648b73
//   TerminatedCString s_Create_new_room_00648b8c
//   TerminatedCString s_Max_number_of_rooms_has__00648b9c
//   TerminatedCString s_Delete_the_selected_room_00648bdc
//   TerminatedCString s_Choose_room_size_00648bf6
//   double DOUBLE_00648c0d = 10
//   double DOUBLE_00648c15 = 0.0500000000000000
//   double DOUBLE_00648c1d = 1.57079632675000
//   double DOUBLE_00648c25 = 0.5
//   double DOUBLE_00648c2d = 4
//   double DOUBLE_00648c35 = 0.100000000000000
//   double DOUBLE_00648c3d = -1.57079632675000
//   float FLOAT_00648c45 = 6.283185
//   float FLOAT_00648c49 = -6.283185
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
//   undefined4 g_CDemonCameraInstance.base.rotation_matrix.m[0][0]
//   undefined4 g_CDemonCameraInstance.base.projection_scale
//   undefined4 DAT_03365cbc
// Function calls:
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   core_setedit.cpp_FUN_005817d0
//   core_skeleton.cpp_FUN_005a2060
//   core_skeleton.cpp_FUN_005a20b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_memmove_FUN_005fe5e0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   wincore_winrun.cpp_doNothing_FUN_005f2f80

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_FUN_00581aa0(CDemonSet *this_ptr)

{
  char cVar1;
  SRoom *pSVar2;
  uchar uVar3;
  CVector3f *pCVar4;
  undefined3 extraout_var;
  int iVar5;
  CVector3f *world_position;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  CGame *in_stack_fffff374;
  CKeys *in_stack_fffff404;
  uint in_stack_fffff408;
  CPickList *in_stack_fffff40c;
  uint in_stack_fffff410;
  CKeys *in_stack_fffff414;
  CKeys *in_stack_fffff41c;
  uint in_stack_fffff420;
  CPickList *in_stack_fffff424;
  uint in_stack_fffff428;
  CKeys *in_stack_fffff42c;
  uint in_stack_fffff434;
  uint in_stack_fffff438;
  uint in_stack_fffff43c;
  uint in_stack_fffff440;
  uint in_stack_fffff444;
  CPickList local_8e4;
  CPickList local_53c;
  char local_194 [100];
  CMatrix3x3f local_130;
  float local_108;
  float local_104;
  float local_100;
  CVector3f local_fc;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  CVector3f local_e0;
  CVector3f local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_44;
  int *local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  SRoom *local_20;
  int local_1c;
  SRoom *local_18;
  CMatrix3x3f *local_14;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr->actor_list_ptr = (void *)0x0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_skeleton_cpp_FUN_005a2060();
  local_a0.x = 0.0;
  local_a0.y = 0.0;
  local_a0.z = 0.0;
  local_28 = 40.0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff374);
  local_20 = this_ptr->rooms;
  this_ptr->unk_lighting_param3 = 1;
  this_ptr->unk_lighting_param4 = 1;
  this_ptr->unk_lighting_param1 = 1;
  local_1c = 0;
  local_40 = &this_ptr->room_reverb_type;
  do {
    local_18 = (SRoom *)0x0;
    if ((-1 < local_1c) && (local_1c < this_ptr->room_count)) {
      local_18 = local_20 + local_1c;
    }
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (local_18 != (SRoom *)0x0) {
      if (&local_fc != &local_a0) {
        local_fc.x = local_a0.x;
        local_fc.y = local_a0.y;
        local_fc.z = local_a0.z;
      }
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                         (&local_18->rotation_matrix,&local_94);
      local_fc.y = local_fc.y + pCVar4->y;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_130,&local_fc);
      local_88.z = -local_28;
      local_88.x = 0.0;
      local_88.y = 0.0;
      local_44 = local_88.z;
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&local_130,&local_d0,&local_88);
      local_58 = pCVar4->x + (local_18->position).x;
      local_54 = pCVar4->y + (local_18->position).y;
      local_50 = pCVar4->z + (local_18->position).z;
      if (&local_108 != &local_58) {
        local_108 = local_58;
        local_104 = local_54;
        local_100 = local_50;
      }
    }
    local_f0 = 28.0;
    if (&stack0x00000000 != g_CDemonCameraInstance.camera_name + 0xcc) {
      g_CDemonCameraInstance.base.position.x = (int)local_108;
      g_CDemonCameraInstance.base.position.y = (int)local_104;
      g_CDemonCameraInstance.base.position.z = (int)local_100;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,&local_fc);
    g_CDemonCameraInstance.base.projection_scale = local_f0;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,150.0,0);
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
    iVar7 = 0;
    if (0 < this_ptr->room_count) {
      local_14 = &local_20->rotation_matrix;
      pCVar4 = &local_20->extents;
      do {
        world_position = &local_20[iVar7].position;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_14,&local_7c);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,world_position);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,(CVector3i *)&local_7c,(CVector3i *)0x0);
        if (iVar7 == local_1c) {
          local_64 = -pCVar4->x;
          local_60 = -pCVar4->y;
          local_5c = -pCVar4->z;
          core_setedit_cpp_FUN_005817d0(&local_64);
          uVar3 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                    (g_CEditorToolsPtr,2.0,CONCAT31(extraout_var,uVar3));
          local_ac.x = -pCVar4->x;
          local_ac.y = -pCVar4->y;
          local_ac.z = -pCVar4->z;
          shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                    (g_CEditorToolsPtr,&local_ac,pCVar4,CONCAT31(extraout_var,uVar3));
        }
        else {
          local_c4 = -pCVar4->x;
          local_c0 = -pCVar4->y;
          local_bc = -pCVar4->z;
          core_setedit_cpp_FUN_005817d0(&local_c4);
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        local_14 = (CMatrix3x3f *)((int)(local_14 + 1) + 0x20);
        pCVar4 = (CVector3f *)&pCVar4[5].z;
        iVar7 = iVar7 + 1;
      } while (iVar7 < this_ptr->room_count);
    }
    if (local_18 == (SRoom *)0x0) {
      pcVar6 = "No room selected";
      pcVar8 = local_194;
      do {
        cVar1 = *pcVar6;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_194,"Room size: %d",local_18->field4_0x40);
    }
    engine_2d_c_drawText_FUN_00401fd0(local_194,0,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar7 != 0) {
      core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      this_ptr->unk_lighting_param3 = 0;
      this_ptr->unk_lighting_param4 = 0;
      this_ptr->unk_lighting_param1 = 0;
      return;
    }
    if (local_18 == (SRoom *)0x0) {
      core_skeleton_cpp_FUN_005a20b0();
    }
    else {
      local_38 = g_CGamePtr->delta_time_float;
      local_34 = local_38;
      iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
      if (iVar7 == 0) {
        iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        if (iVar7 != 0) {
          local_34 = local_38 * (float)DOUBLE_00648c0d;
        }
      }
      else {
        local_34 = local_38 * (float)DOUBLE_00648c15;
      }
      local_30 = local_34 * (float)DOUBLE_00648c1d;
      local_3c = local_28 * (float)DOUBLE_00648c25 * local_34;
      iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4a);
      if (iVar7 != 0) {
        local_a0.x = local_a0.x + local_30;
      }
      iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4e);
      if (iVar7 != 0) {
        local_a0.x = local_a0.x - local_30;
      }
      iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x52);
      if (iVar7 != 0) {
        local_a0.y = local_a0.y + local_30;
      }
      iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x53);
      if (iVar7 != 0) {
        local_a0.y = local_a0.y - local_30;
      }
      iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xd);
      if (iVar7 != 0) {
        local_28 = local_28 - local_3c;
      }
      iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xc);
      if (iVar7 != 0) {
        local_28 = local_28 + local_3c;
      }
      if (local_a0.x < (float)DOUBLE_00648c3d) {
        local_a0.x = -1.5707964;
      }
      if ((float)DOUBLE_00648c1d < local_a0.x) {
        local_a0.x = 1.5707964;
      }
      if (local_a0.y < (float)DOUBLE_00648c3d) {
        local_a0.y = local_a0.y + FLOAT_00648c45;
      }
      if ((float)DOUBLE_00648c1d < local_a0.y) {
        local_a0.y = local_a0.y + FLOAT_00648c49;
      }
      if (local_28 < (float)DOUBLE_00648c25) {
        local_28 = 0.5;
      }
      iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
      pSVar2 = local_18;
      if (iVar7 == 0) {
        core_skeleton_cpp_FUN_005a2060();
        if ((SRoom *)&local_ec != pSVar2) {
          local_ec = (pSVar2->position).x;
          local_e8 = (pSVar2->position).y;
          local_e4 = (pSVar2->position).z;
        }
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                           (&local_18->rotation_matrix,&local_70);
        pSVar2 = local_18;
        if (&local_e0 != pCVar4) {
          local_e0.x = pCVar4->x;
          local_e0.y = pCVar4->y;
          local_e0.z = pCVar4->z;
        }
        core_skeleton_cpp_FUN_005a20b0();
        if ((SRoom *)&local_ec != pSVar2) {
          (pSVar2->position).x = local_ec;
          (pSVar2->position).y = local_e8;
          (pSVar2->position).z = local_e4;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&local_18->rotation_matrix,&local_e0);
      }
      else {
        local_24 = g_CGamePtr->delta_time_float * (float)DOUBLE_00648c2d;
        iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
        if (iVar7 != 0) {
          local_24 = local_24 * (float)DOUBLE_00648c35;
        }
        iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
        if (iVar7 != 0) {
          (local_18->extents).x = (local_18->extents).x - local_24;
        }
        iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
        if (iVar7 != 0) {
          (local_18->extents).x = (local_18->extents).x + local_24;
        }
        iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
        if (iVar7 != 0) {
          (local_18->extents).y = (local_18->extents).y - local_24;
        }
        iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
        if (iVar7 != 0) {
          (local_18->extents).y = (local_18->extents).y + local_24;
        }
        iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
        if (iVar7 != 0) {
          (local_18->extents).z = (local_18->extents).z - local_24;
        }
        iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
        if (iVar7 != 0) {
          (local_18->extents).z = (local_18->extents).z + local_24;
        }
        local_2c = 0x3f800000;
        if ((int)(local_18->extents).x < 0x3f800000) {
          (local_18->extents).x = 1.0;
        }
        if ((local_18->extents).y < 1.0) {
          (local_18->extents).y = 1.0;
        }
        if ((local_18->extents).z < 1.0) {
          (local_18->extents).z = 1.0;
        }
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1f);
    if (iVar7 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_8e4);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8e4.base_strlist,"Outside");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8e4.base_strlist,"Small");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_8e4.base_strlist,"Medium (e.g. Mausoleum)");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_8e4.base_strlist,"Large (e.g. Warehouse)");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8e4.base_strlist,"Humongous");
      iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_8e4,"Select default room size",*local_40,0);
      if (-1 < iVar7) {
        *local_40 = iVar7;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_8e4,0,(uint)in_stack_fffff404,in_stack_fffff408,(uint)in_stack_fffff40c,
                 in_stack_fffff410,(uint)in_stack_fffff414);
    }
    iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf);
    if (iVar7 != 0) {
      in_stack_fffff404 = g_CKeysPtr;
      iVar7 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if (iVar7 == 0) {
        local_1c = local_1c + 1;
        if (this_ptr->room_count <= local_1c) {
          local_1c = 0;
        }
      }
      else {
        local_1c = local_1c + -1;
        if (local_1c < 0) {
          local_1c = this_ptr->room_count + -1;
        }
      }
    }
    in_stack_fffff408 = 0x581f6b;
    in_stack_fffff40c = (CPickList *)g_CKeysPtr;
    iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x17);
    if (iVar7 != 0) {
      if (this_ptr->room_count < 0x14) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_53c);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_53c.base_strlist,"Outside");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_53c.base_strlist,"Small");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_53c.base_strlist,"Medium (e.g. Mausoleum)");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_53c.base_strlist,"Large (e.g. Warehouse)");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_53c.base_strlist,"Humongous");
        in_stack_fffff40c = &local_53c;
        in_stack_fffff408 = 0x582016;
        iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (in_stack_fffff40c,"Create new room",DAT_03365cbc,0);
        if (iVar7 < 0) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_53c,0,(uint)in_stack_fffff41c,in_stack_fffff420,(uint)in_stack_fffff424,
                     in_stack_fffff428,(uint)in_stack_fffff42c);
        }
        else {
          DAT_03365cbc = iVar7;
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_53c,0,(uint)in_stack_fffff41c,in_stack_fffff420,(uint)in_stack_fffff424,
                     in_stack_fffff428,(uint)in_stack_fffff42c);
          local_1c = this_ptr->room_count;
          local_18 = local_20 + local_1c;
          if ((SRoom *)&local_108 != local_18) {
            (local_18->position).x = local_108;
            (local_18->position).y = local_104;
            (local_18->position).z = local_100;
          }
          local_b8.y = local_fc.y;
          local_b8.x = 0.0;
          local_b8.z = 0.0;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                    (&local_18->rotation_matrix,&local_b8);
          (local_18->extents).x = 10.0;
          (local_18->extents).y = 10.0;
          (local_18->extents).z = 10.0;
          local_18->field4_0x40 = DAT_03365cbc;
          this_ptr->room_count = this_ptr->room_count + 1;
        }
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Max number of rooms has been reached, can't add any more rooms.");
      }
    }
    in_stack_fffff410 = 0x5820d9;
    in_stack_fffff414 = g_CKeysPtr;
    iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x20);
    iVar7 = local_1c;
    if ((((iVar5 != 0) && (-1 < local_1c)) && (local_1c < this_ptr->room_count)) &&
       (iVar5 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Delete the selected room?"), iVar5 != 0)) {
      iVar5 = this_ptr->room_count + -1;
      this_ptr->room_count = iVar5;
      in_stack_fffff414 = (CKeys *)0x582147;
      crt_string_c_memmove_FUN_005fe5e0
                (local_20 + iVar7,local_20 + iVar7 + 1,(iVar5 - iVar7) * 0x44);
      if (this_ptr->room_count <= iVar7) {
        local_1c = 0;
      }
      local_18 = (SRoom *)0x0;
    }
    in_stack_fffff41c = g_CKeysPtr;
    iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x31);
    if (iVar7 != 0) {
      local_18 = (SRoom *)0x0;
      local_1c = -1;
    }
    in_stack_fffff420 = 0x582192;
    in_stack_fffff424 = (CPickList *)g_CKeysPtr;
    iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
    pSVar2 = local_18;
    if ((iVar7 != 0) && (local_18 != (SRoom *)0x0)) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff374);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff374,"Outside");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff374,"Small");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff374,"Medium (e.g. Mausoleum)");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff374,"Large (e.g. Warehouse)");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff374,"Humongous");
      in_stack_fffff424 = (CPickList *)&stack0xfffff374;
      in_stack_fffff420 = 0x582235;
      iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (in_stack_fffff424,"Choose room size",pSVar2->field4_0x40,0);
      if (-1 < iVar7) {
        pSVar2->field4_0x40 = iVar7;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff374,0,in_stack_fffff434,in_stack_fffff438,
                 in_stack_fffff43c,in_stack_fffff440,in_stack_fffff444);
    }
    in_stack_fffff428 = 0x582260;
    in_stack_fffff42c = g_CKeysPtr;
    iVar7 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3b);
    if (iVar7 != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("F1",0,0);
      engine_2d_c_drawText_FUN_00401fd0("Show this help screen",g_WindowWidth / 10,0);
      engine_2d_c_drawText_FUN_00401fd0("S",0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Set default room size for set",g_WindowWidth / 10,0xb);
      engine_2d_c_drawText_FUN_00401fd0("TAB",0,0x16);
      engine_2d_c_drawText_FUN_00401fd0("Next room",g_WindowWidth / 10,0x16);
      engine_2d_c_drawText_FUN_00401fd0("SHIFT+TAB",0,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Previous room",g_WindowWidth / 10,0x21);
      engine_2d_c_drawText_FUN_00401fd0("I",0,0x2c);
      engine_2d_c_drawText_FUN_00401fd0("Insert room",g_WindowWidth / 10,0x2c);
      engine_2d_c_drawText_FUN_00401fd0("D",0,0x37);
      engine_2d_c_drawText_FUN_00401fd0("Delete room",g_WindowWidth / 10,0x37);
      engine_2d_c_drawText_FUN_00401fd0("N",0,0x42);
      engine_2d_c_drawText_FUN_00401fd0("Deselect room",g_WindowWidth / 10,0x42);
      engine_2d_c_drawText_FUN_00401fd0("To position the selected box, use the normal slew keys.",0,0x58);
      in_stack_fffff42c = (CKeys *)0x582465;
      engine_2d_c_drawText_FUN_00401fd0("To size the selected box, use arrow keys and Q/A with CTRL.",0,99);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      in_stack_fffff434 = 0x58247e;
      engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
      in_stack_fffff438 = 0x582486;
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
  } while( true );
}


// Assembly code:
// 00581aa0: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_FUN_00581aa0
// 00581aa1: PUSH ESI
// 00581aa2: PUSH EDI
// 00581aa3: PUSH EBP
// 00581aa4: MOV EBP,ESP
// 00581aa6: SUB ESP,0xc7c
// 00581aac: SUB EBP,0x7e
// 00581aaf: PUSH 0x648b45
//   XREF to: 00648b45 (DATA)
// 00581ab4: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00581aba: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00581abb: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00581ac0: ADD ESP,0x8
// 00581ac3: MOV ECX,dword ptr [EBP + 0x92]
// 00581ac9: PUSH ECX
// 00581aca: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 00581acf: MOV EAX,dword ptr [EBP + 0x92]
// 00581ad5: ADD ESP,0x4
// 00581ad8: MOV dword ptr [EAX + 0x14d154],0x0
// 00581ae2: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00581ae7: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00581aec: LEA EAX,[EBP + -0x7a]
// 00581aef: PUSH EAX
// 00581af0: XOR EBX,EBX
// 00581af2: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 00581af7: MOV EAX,0x42200000
// 00581afc: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00581b02: ADD ESP,0x4
// 00581b05: MOV dword ptr [EBP + -0x12],EBX
// 00581b08: MOV dword ptr [EBP + -0xe],EBX
// 00581b0b: PUSH EDX
//   XREF to: 02d81a9c (DATA)
// 00581b0c: MOV dword ptr [EBP + -0xa],EBX
// 00581b0f: MOV dword ptr [EBP + 0x66],EAX
// 00581b12: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 00581b17: MOV EAX,dword ptr [EBP + 0x92]
// 00581b1d: ADD EAX,0x15aec0
// 00581b22: MOV dword ptr [EAX + 0xfffffdcc],0x1
// 00581b2c: MOV dword ptr [EAX + 0xfffffdd0],0x1
// 00581b36: MOV dword ptr [EAX + 0xfffffdc4],0x1
// 00581b40: MOV dword ptr [EBP + 0x6e],EAX
// 00581b43: MOV EAX,dword ptr [EBP + 0x92]
// 00581b49: MOV dword ptr [EBP + 0x72],EBX
// 00581b4c: ADD EAX,0x15aeb8
// 00581b51: ADD ESP,0x4
// 00581b54: MOV dword ptr [EBP + 0x4e],EAX
// 00581b57: XOR EBX,EBX
//   Label: LAB_00581b57
// 00581b59: MOV ESI,dword ptr [EBP + 0x72]
// 00581b5c: MOV dword ptr [EBP + 0x76],EBX
// 00581b5f: TEST ESI,ESI
// 00581b61: JL 0x00581b7c
//   XREF to: 00581b7c (CONDITIONAL_JUMP)
// 00581b63: MOV EDX,dword ptr [EBP + 0x92]
// 00581b69: CMP ESI,dword ptr [EDX + 0x15aebc]
// 00581b6f: JGE 0x00581b7c
//   XREF to: 00581b7c (CONDITIONAL_JUMP)
// 00581b71: IMUL EAX,ESI,0x44
// 00581b74: MOV EDX,dword ptr [EBP + 0x6e]
// 00581b77: ADD EDX,EAX
// 00581b79: MOV dword ptr [EBP + 0x76],EDX
// 00581b7c: CALL wincore_winrun.cpp_doNothing_FUN_005f2f80
//   Label: LAB_00581b7c
//   XREF to: 005f2f80 (UNCONDITIONAL_CALL)
// 00581b81: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00581b86: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 00581b8b: CMP dword ptr [EBP + 0x76],0x0
// 00581b8f: JZ 0x00581c45
//   XREF to: 00581c45 (CONDITIONAL_JUMP)
// 00581b95: LEA EDX,[EBP + -0x6e]
// 00581b98: LEA EAX,[EBP + -0x12]
// 00581b9b: CMP EDX,EAX
// 00581b9d: JZ 0x00581bb1
//   XREF to: 00581bb1 (CONDITIONAL_JUMP)
// 00581b9f: MOV EAX,dword ptr [EBP + -0x12]
// 00581ba2: MOV dword ptr [EBP + -0x6e],EAX
// 00581ba5: MOV EAX,dword ptr [EBP + -0xe]
// 00581ba8: MOV dword ptr [EBP + -0x6a],EAX
// 00581bab: MOV EAX,dword ptr [EBP + -0xa]
// 00581bae: MOV dword ptr [EBP + -0x66],EAX
// 00581bb1: LEA EAX,[EBP + -0x6]
//   Label: LAB_00581bb1
// 00581bb4: PUSH EAX
// 00581bb5: MOV EAX,dword ptr [EBP + 0x76]
// 00581bb8: ADD EAX,0x18
// 00581bbb: PUSH EAX
// 00581bbc: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 00581bc1: FLD float ptr [EBP + -0x6a]
// 00581bc4: ADD ESP,0x8
// 00581bc7: FADD float ptr [EAX + 0x4]
// 00581bca: LEA EAX,[EBP + -0x6e]
// 00581bcd: PUSH EAX
// 00581bce: LEA EAX,[EBP + 0xffffff5e]
// 00581bd4: PUSH EAX
// 00581bd5: FSTP float ptr [EBP + -0x6a]
// 00581bd8: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00581bdd: FLD float ptr [EBP + 0x66]
// 00581be0: FCHS
// 00581be2: FSTP float ptr [EBP + 0x4a]
// 00581be5: MOV EAX,dword ptr [EBP + 0x4a]
// 00581be8: ADD ESP,0x8
// 00581beb: MOV dword ptr [EBP + 0xe],EAX
// 00581bee: LEA EAX,[EBP + 0x6]
// 00581bf1: PUSH EAX
// 00581bf2: LEA EAX,[EBP + -0x42]
// 00581bf5: PUSH EAX
// 00581bf6: LEA EAX,[EBP + 0xffffff5e]
// 00581bfc: XOR EBX,EBX
// 00581bfe: PUSH EAX
// 00581bff: MOV dword ptr [EBP + 0x6],EBX
// 00581c02: MOV dword ptr [EBP + 0xa],EBX
// 00581c05: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00581c0a: MOV EDX,dword ptr [EBP + 0x76]
// 00581c0d: FLD float ptr [EAX]
// 00581c0f: FADD float ptr [EDX]
// 00581c11: FSTP float ptr [EBP + 0x36]
// 00581c14: FLD float ptr [EAX + 0x4]
// 00581c17: FADD float ptr [EDX + 0x4]
// 00581c1a: ADD ESP,0xc
// 00581c1d: FSTP float ptr [EBP + 0x3a]
// 00581c20: FLD float ptr [EAX + 0x8]
// 00581c23: LEA EAX,[EBP + 0x36]
// 00581c26: FADD float ptr [EDX + 0x8]
// 00581c29: LEA EDX,[EBP + -0x7a]
// 00581c2c: FSTP float ptr [EBP + 0x3e]
// 00581c2f: CMP EDX,EAX
// 00581c31: JZ 0x00581c45
//   XREF to: 00581c45 (CONDITIONAL_JUMP)
// 00581c33: MOV EAX,dword ptr [EBP + 0x36]
// 00581c36: MOV dword ptr [EBP + -0x7a],EAX
// 00581c39: MOV EAX,dword ptr [EBP + 0x3a]
// 00581c3c: MOV dword ptr [EBP + -0x76],EAX
// 00581c3f: MOV EAX,dword ptr [EBP + 0x3e]
// 00581c42: MOV dword ptr [EBP + -0x72],EAX
// 00581c45: MOV EDI,0x41e00000
//   Label: LAB_00581c45
// 00581c4a: LEA EAX,[EBP + -0x7a]
// 00581c4d: MOV dword ptr [EBP + -0x62],EDI
// 00581c50: CMP EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 00581c55: JZ 0x00581c6f
//   XREF to: 00581c6f (CONDITIONAL_JUMP)
// 00581c57: MOV EAX,dword ptr [EBP + -0x7a]
// 00581c5a: MOV [0x032758e8],EAX
//   XREF to: 032758e8 (WRITE)
// 00581c5f: MOV EAX,dword ptr [EBP + -0x76]
// 00581c62: MOV [0x032758ec],EAX
//   XREF to: 032758ec (WRITE)
// 00581c67: MOV EAX,dword ptr [EBP + -0x72]
// 00581c6a: MOV [0x032758f0],EAX
//   XREF to: 032758f0 (WRITE)
// 00581c6f: LEA EAX,[EBP + -0x6e]
//   Label: LAB_00581c6f
// 00581c72: PUSH EAX
// 00581c73: PUSH 0x32758f4
//   XREF to: 032758f4 (DATA)
// 00581c78: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00581c7d: ADD ESP,0x8
// 00581c80: PUSH 0x1
// 00581c82: MOV EAX,dword ptr [EBP + -0x62]
// 00581c85: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00581c8a: MOV [0x0327591c],EAX
//   XREF to: 0327591c (WRITE)
// 00581c8f: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 00581c94: ADD ESP,0x8
// 00581c97: PUSH 0x0
// 00581c99: MOV EAX,dword ptr [EBP + 0x92]
// 00581c9f: PUSH 0x43160000
// 00581ca4: PUSH EAX
// 00581ca5: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 00581caa: ADD ESP,0xc
// 00581cad: PUSH 0x1
// 00581caf: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00581cb5: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00581cb6: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 00581cbb: MOV EAX,dword ptr [EBP + 0x92]
// 00581cc1: XOR EDI,EDI
// 00581cc3: MOV ECX,dword ptr [EAX + 0x15aebc]
// 00581cc9: ADD ESP,0x8
// 00581ccc: TEST ECX,ECX
// 00581cce: JLE 0x00581dd8
//   XREF to: 00581dd8 (CONDITIONAL_JUMP)
// 00581cd4: MOV EAX,dword ptr [EBP + 0x6e]
// 00581cd7: MOV ESI,dword ptr [EBP + 0x6e]
// 00581cda: ADD EAX,0x18
// 00581cdd: ADD ESI,0xc
// 00581ce0: MOV dword ptr [EBP + 0x7a],EAX
// 00581ce3: IMUL EAX,EDI,0x44
//   Label: LAB_00581ce3
// 00581ce6: MOV EBX,dword ptr [EBP + 0x6e]
// 00581ce9: ADD EBX,EAX
// 00581ceb: LEA EAX,[EBP + 0x12]
// 00581cee: PUSH EAX
// 00581cef: MOV ECX,dword ptr [EBP + 0x7a]
// 00581cf2: PUSH ECX
// 00581cf3: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 00581cf8: ADD ESP,0x8
// 00581cfb: PUSH EBX
// 00581cfc: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 00581d02: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00581d03: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00581d08: ADD ESP,0x8
// 00581d0b: PUSH 0x0
// 00581d0d: LEA EAX,[EBP + 0x12]
// 00581d10: PUSH EAX
// 00581d11: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00581d16: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00581d17: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00581d1c: MOV EDX,dword ptr [EBP + 0x72]
// 00581d1f: ADD ESP,0xc
// 00581d22: CMP EDI,EDX
// 00581d24: JNZ 0x0058248b
//   XREF to: 0058248b (CONDITIONAL_JUMP)
// 00581d2a: FLD float ptr [ESI]
// 00581d2c: PUSH 0x0
// 00581d2e: LEA EAX,[EBP + 0x2a]
// 00581d31: FCHS
// 00581d33: FSTP float ptr [EBP + 0x2a]
// 00581d36: PUSH 0xff
// 00581d3b: FLD float ptr [ESI + 0x4]
// 00581d3e: FCHS
// 00581d40: PUSH 0x0
// 00581d42: FSTP float ptr [EBP + 0x2e]
// 00581d45: PUSH 0x3f000000
// 00581d4a: FLD float ptr [ESI + 0x8]
// 00581d4d: PUSH ESI
// 00581d4e: FCHS
// 00581d50: PUSH EAX
// 00581d51: FSTP float ptr [EBP + 0x32]
// 00581d54: CALL core_setedit.cpp_FUN_005817d0
//   XREF to: 005817d0 (UNCONDITIONAL_CALL)
// 00581d59: ADD ESP,0x18
// 00581d5c: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00581d62: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00581d63: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 00581d68: ADD ESP,0x4
// 00581d6b: PUSH EAX
// 00581d6c: MOV EBX,EAX
// 00581d6e: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 00581d73: PUSH 0x40000000
// 00581d78: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00581d79: CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)
// 00581d7e: FLD float ptr [ESI]
// 00581d80: LEA EAX,[EBP + -0x1e]
// 00581d83: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00581d89: ADD ESP,0xc
// 00581d8c: FCHS
// 00581d8e: FSTP float ptr [EBP + -0x1e]
// 00581d91: PUSH EBX
// 00581d92: FLD float ptr [ESI + 0x4]
// 00581d95: FCHS
// 00581d97: PUSH ESI
// 00581d98: FSTP float ptr [EBP + -0x1a]
// 00581d9b: FLD float ptr [ESI + 0x8]
// 00581d9e: PUSH EAX
// 00581d9f: FCHS
// 00581da1: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00581da2: FSTP float ptr [EBP + -0x16]
// 00581da5: CALL shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
//   XREF to: 004a2050 (UNCONDITIONAL_CALL)
// 00581daa: ADD ESP,0x10
// 00581dad: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_00581dad
//   XREF to: 006703ec (READ)
// 00581db3: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00581db4: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00581dd8: MOV ECX,dword ptr [EBP + 0x76]
//   Label: LAB_00581dd8
// 00581ddb: TEST ECX,ECX
// 00581ddd: JZ 0x005824c2
//   XREF to: 005824c2 (CONDITIONAL_JUMP)
// 00581de3: MOV EBX,dword ptr [ECX + 0x40]
// 00581de6: PUSH EBX
// 00581de7: PUSH 0x648b54
//   XREF to: 00648b54 (DATA)
// 00581dec: LEA EAX,[EBP + 0xfffffefa]
// 00581df2: PUSH EAX
// 00581df3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00581df8: ADD ESP,0xc
// 00581dfb: PUSH 0x0
//   Label: LAB_00581dfb
// 00581dfd: PUSH 0x0
// 00581dff: LEA EAX,[EBP + 0xfffffefa]
// 00581e05: PUSH EAX
// 00581e06: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00581e0b: ADD ESP,0xc
// 00581e0e: PUSH 0x0
// 00581e10: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00581e15: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 00581e1a: ADD ESP,0x8
// 00581e1d: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00581e22: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00581e28: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 00581e29: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 00581e2e: ADD ESP,0x4
// 00581e31: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00581e36: PUSH 0x1
// 00581e38: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00581e3a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00581e3b: CALL dword ptr [EDX + 0x4]
// 00581e3e: ADD ESP,0x8
// 00581e41: TEST EAX,EAX
// 00581e43: JNZ 0x005828e1
//   XREF to: 005828e1 (CONDITIONAL_JUMP)
// 00581e49: CMP dword ptr [EBP + 0x76],0x0
// 00581e4d: JNZ 0x005824ec
//   XREF to: 005824ec (CONDITIONAL_JUMP)
// 00581e53: LEA EAX,[EBP + -0x7a]
// 00581e56: PUSH EAX
// 00581e57: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 00581e5c: ADD ESP,0x4
// 00581e5f: PUSH 0x1f
//   Label: LAB_00581e5f
// 00581e61: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00581e66: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00581e67: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00581e69: CALL dword ptr [EDX + 0x4]
// 00581e6c: ADD ESP,0x8
// 00581e6f: TEST EAX,EAX
// 00581e71: JZ 0x00581f24
//   XREF to: 00581f24 (CONDITIONAL_JUMP)
// 00581e77: LEA EAX,[EBP + 0xfffff7aa]
// 00581e7d: PUSH EAX
// 00581e7e: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00581e83: ADD ESP,0x4
// 00581e86: PUSH 0x6489f3
//   XREF to: 006489f3 (DATA)
// 00581e8b: LEA EAX,[EBP + 0xfffff7aa]
// 00581e91: PUSH EAX
// 00581e92: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581e97: ADD ESP,0x8
// 00581e9a: PUSH 0x6489fb
//   XREF to: 006489fb (DATA)
// 00581e9f: LEA EAX,[EBP + 0xfffff7aa]
// 00581ea5: PUSH EAX
// 00581ea6: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581eab: ADD ESP,0x8
// 00581eae: PUSH 0x648a01
//   XREF to: 00648a01 (DATA)
// 00581eb3: LEA EAX,[EBP + 0xfffff7aa]
// 00581eb9: PUSH EAX
// 00581eba: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581ebf: ADD ESP,0x8
// 00581ec2: PUSH 0x648a19
//   XREF to: 00648a19 (DATA)
// 00581ec7: LEA EAX,[EBP + 0xfffff7aa]
// 00581ecd: PUSH EAX
// 00581ece: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581ed3: ADD ESP,0x8
// 00581ed6: PUSH 0x648a30
//   XREF to: 00648a30 (DATA)
// 00581edb: LEA EAX,[EBP + 0xfffff7aa]
// 00581ee1: PUSH EAX
// 00581ee2: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581ee7: ADD ESP,0x8
// 00581eea: MOV EAX,dword ptr [EBP + 0x4e]
// 00581eed: PUSH 0x0
// 00581eef: MOV ECX,dword ptr [EAX]
// 00581ef1: PUSH ECX
// 00581ef2: PUSH 0x648b73
//   XREF to: 00648b73 (DATA)
// 00581ef7: LEA EAX,[EBP + 0xfffff7aa]
// 00581efd: PUSH EAX
// 00581efe: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00581f03: ADD ESP,0x10
// 00581f06: TEST EAX,EAX
// 00581f08: JL 0x0058286c
//   XREF to: 0058286c (CONDITIONAL_JUMP)
// 00581f0e: MOV EDX,dword ptr [EBP + 0x4e]
// 00581f11: PUSH 0x0
// 00581f13: MOV dword ptr [EDX],EAX
// 00581f15: LEA EAX,[EBP + 0xfffff7aa]
//   Label: LAB_00581f15
// 00581f1b: PUSH EAX
// 00581f1c: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00581f21: ADD ESP,0x8
// 00581f24: PUSH 0xf
//   Label: LAB_00581f24
// 00581f26: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00581f2b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00581f2c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00581f2e: CALL dword ptr [EDX + 0x4]
// 00581f31: ADD ESP,0x8
// 00581f34: TEST EAX,EAX
// 00581f36: JZ 0x00581f5e
//   XREF to: 00581f5e (CONDITIONAL_JUMP)
// 00581f38: PUSH 0x2a
// 00581f3a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00581f3f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00581f40: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00581f42: CALL dword ptr [EDX]
// 00581f44: ADD ESP,0x8
// 00581f47: TEST EAX,EAX
// 00581f49: JZ 0x00582888
//   XREF to: 00582888 (CONDITIONAL_JUMP)
// 00581f4f: MOV EAX,dword ptr [EBP + 0x72]
// 00581f52: DEC EAX
// 00581f53: MOV dword ptr [EBP + 0x72],EAX
// 00581f56: TEST EAX,EAX
// 00581f58: JL 0x00582873
//   XREF to: 00582873 (CONDITIONAL_JUMP)
// 00581f5e: PUSH 0x17
//   Label: LAB_00581f5e
// 00581f60: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00581f65: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00581f66: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00581f68: CALL dword ptr [EDX + 0x4]
// 00581f6b: ADD ESP,0x8
// 00581f6e: TEST EAX,EAX
// 00581f70: JZ 0x005820cc
//   XREF to: 005820cc (CONDITIONAL_JUMP)
// 00581f76: MOV EAX,dword ptr [EBP + 0x92]
// 00581f7c: CMP dword ptr [EAX + 0x15aebc],0x14
// 00581f83: JGE 0x005828c1
//   XREF to: 005828c1 (CONDITIONAL_JUMP)
// 00581f89: LEA EAX,[EBP + 0xfffffb52]
// 00581f8f: PUSH EAX
// 00581f90: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00581f95: ADD ESP,0x4
// 00581f98: PUSH 0x6489f3
//   XREF to: 006489f3 (DATA)
// 00581f9d: LEA EAX,[EBP + 0xfffffb52]
// 00581fa3: PUSH EAX
// 00581fa4: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581fa9: ADD ESP,0x8
// 00581fac: PUSH 0x6489fb
//   XREF to: 006489fb (DATA)
// 00581fb1: LEA EAX,[EBP + 0xfffffb52]
// 00581fb7: PUSH EAX
// 00581fb8: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581fbd: ADD ESP,0x8
// 00581fc0: PUSH 0x648a01
//   XREF to: 00648a01 (DATA)
// 00581fc5: LEA EAX,[EBP + 0xfffffb52]
// 00581fcb: PUSH EAX
// 00581fcc: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581fd1: ADD ESP,0x8
// 00581fd4: PUSH 0x648a19
//   XREF to: 00648a19 (DATA)
// 00581fd9: LEA EAX,[EBP + 0xfffffb52]
// 00581fdf: PUSH EAX
// 00581fe0: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581fe5: ADD ESP,0x8
// 00581fe8: PUSH 0x648a30
//   XREF to: 00648a30 (DATA)
// 00581fed: LEA EAX,[EBP + 0xfffffb52]
// 00581ff3: PUSH EAX
// 00581ff4: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00581ff9: ADD ESP,0x8
// 00581ffc: PUSH 0x0
// 00581ffe: MOV ESI,dword ptr [0x03365cbc]
//   XREF to: 03365cbc (READ)
// 00582004: PUSH ESI
// 00582005: PUSH 0x648b8c
//   XREF to: 00648b8c (DATA)
// 0058200a: LEA EAX,[EBP + 0xfffffb52]
// 00582010: PUSH EAX
// 00582011: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00582016: ADD ESP,0x10
// 00582019: TEST EAX,EAX
// 0058201b: JL 0x005828ab
//   XREF to: 005828ab (CONDITIONAL_JUMP)
// 00582021: PUSH 0x0
// 00582023: MOV [0x03365cbc],EAX
//   XREF to: 03365cbc (WRITE)
// 00582028: LEA EAX,[EBP + 0xfffffb52]
// 0058202e: PUSH EAX
// 0058202f: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00582034: MOV EAX,dword ptr [EBP + 0x92]
// 0058203a: MOV EAX,dword ptr [EAX + 0x15aebc]
// 00582040: MOV dword ptr [EBP + 0x72],EAX
// 00582043: IMUL EAX,EAX,0x44
// 00582046: MOV EDX,dword ptr [EBP + 0x6e]
// 00582049: ADD ESP,0x8
// 0058204c: ADD EDX,EAX
// 0058204e: LEA EAX,[EBP + -0x7a]
// 00582051: MOV dword ptr [EBP + 0x76],EDX
// 00582054: CMP EAX,EDX
// 00582056: JZ 0x00582069
//   XREF to: 00582069 (CONDITIONAL_JUMP)
// 00582058: MOV EAX,dword ptr [EBP + -0x7a]
// 0058205b: MOV dword ptr [EDX],EAX
// 0058205d: MOV EAX,dword ptr [EBP + -0x76]
// 00582060: MOV dword ptr [EDX + 0x4],EAX
// 00582063: MOV EAX,dword ptr [EBP + -0x72]
// 00582066: MOV dword ptr [EDX + 0x8],EAX
// 00582069: MOV EAX,dword ptr [EBP + -0x6e]
//   Label: LAB_00582069
// 0058206c: MOV dword ptr [EBP + -0x2a],EAX
// 0058206f: MOV EAX,dword ptr [EBP + -0x6a]
// 00582072: MOV dword ptr [EBP + -0x26],EAX
// 00582075: MOV EAX,dword ptr [EBP + -0x66]
// 00582078: MOV dword ptr [EBP + -0x22],EAX
// 0058207b: LEA EAX,[EBP + -0x2a]
// 0058207e: PUSH EAX
// 0058207f: MOV EAX,dword ptr [EBP + 0x76]
// 00582082: ADD EAX,0x18
// 00582085: XOR ECX,ECX
// 00582087: PUSH EAX
// 00582088: MOV dword ptr [EBP + -0x2a],ECX
// 0058208b: MOV dword ptr [EBP + -0x22],ECX
// 0058208e: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00582093: MOV EAX,dword ptr [EBP + 0x76]
// 00582096: MOV dword ptr [EAX + 0xc],0x41200000
// 0058209d: MOV dword ptr [EAX + 0x10],0x41200000
// 005820a4: MOV dword ptr [EAX + 0x14],0x41200000
// 005820ab: MOV EDX,dword ptr [EBP + 0x76]
// 005820ae: MOV EAX,[0x03365cbc]
//   XREF to: 03365cbc (READ)
// 005820b3: MOV dword ptr [EDX + 0x40],EAX
// 005820b6: MOV EAX,dword ptr [EBP + 0x92]
// 005820bc: MOV ESI,dword ptr [EAX + 0x15aebc]
// 005820c2: INC ESI
// 005820c3: ADD ESP,0x8
// 005820c6: MOV dword ptr [EAX + 0x15aebc],ESI
// 005820cc: PUSH 0x20
//   Label: LAB_005820cc
// 005820ce: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005820d3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005820d4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005820d6: CALL dword ptr [EDX + 0x4]
// 005820d9: ADD ESP,0x8
// 005820dc: TEST EAX,EAX
// 005820de: JZ 0x00582164
//   XREF to: 00582164 (CONDITIONAL_JUMP)
// 005820e4: MOV EDI,dword ptr [EBP + 0x72]
// 005820e7: TEST EDI,EDI
// 005820e9: JL 0x00582164
//   XREF to: 00582164 (CONDITIONAL_JUMP)
// 005820ef: MOV EDX,dword ptr [EBP + 0x92]
// 005820f5: CMP EDI,dword ptr [EDX + 0x15aebc]
// 005820fb: JGE 0x00582164
//   XREF to: 00582164 (CONDITIONAL_JUMP)
// 005820fd: PUSH 0x648bdc
//   XREF to: 00648bdc (DATA)
// 00582102: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00582108: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00582109: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 0058210e: ADD ESP,0x8
// 00582111: TEST EAX,EAX
// 00582113: JZ 0x00582164
//   XREF to: 00582164 (CONDITIONAL_JUMP)
// 00582115: MOV EAX,dword ptr [EBP + 0x92]
// 0058211b: MOV ESI,dword ptr [EAX + 0x15aebc]
// 00582121: DEC ESI
// 00582122: MOV dword ptr [EAX + 0x15aebc],ESI
// 00582128: MOV EAX,ESI
// 0058212a: SUB EAX,EDI
// 0058212c: IMUL EAX,EAX,0x44
// 0058212f: PUSH EAX
// 00582130: LEA EAX,[EDI + 0x1]
// 00582133: IMUL EAX,EAX,0x44
// 00582136: MOV EDX,dword ptr [EBP + 0x6e]
// 00582139: ADD EAX,EDX
// 0058213b: PUSH EAX
// 0058213c: IMUL EAX,EDI,0x44
// 0058213f: ADD EAX,EDX
// 00582141: PUSH EAX
// 00582142: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00582147: MOV EDX,dword ptr [EBP + 0x92]
// 0058214d: MOV ESI,dword ptr [EDX + 0x15aebc]
// 00582153: ADD ESP,0xc
// 00582156: CMP EDI,ESI
// 00582158: JL 0x0058215f
//   XREF to: 0058215f (CONDITIONAL_JUMP)
// 0058215a: XOR EDI,EDI
// 0058215c: MOV dword ptr [EBP + 0x72],EDI
// 0058215f: XOR EAX,EAX
//   Label: LAB_0058215f
// 00582161: MOV dword ptr [EBP + 0x76],EAX
// 00582164: PUSH 0x31
//   Label: LAB_00582164
// 00582166: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058216b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058216c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0058216e: CALL dword ptr [EDX + 0x4]
// 00582171: ADD ESP,0x8
// 00582174: TEST EAX,EAX
// 00582176: JZ 0x00582185
//   XREF to: 00582185 (CONDITIONAL_JUMP)
// 00582178: XOR ECX,ECX
// 0058217a: MOV EDX,0xffffffff
// 0058217f: MOV dword ptr [EBP + 0x76],ECX
// 00582182: MOV dword ptr [EBP + 0x72],EDX
// 00582185: PUSH 0x1c
//   Label: LAB_00582185
// 00582187: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058218c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058218d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0058218f: CALL dword ptr [EDX + 0x4]
// 00582192: ADD ESP,0x8
// 00582195: TEST EAX,EAX
// 00582197: JZ 0x00582253
//   XREF to: 00582253 (CONDITIONAL_JUMP)
// 0058219d: MOV EBX,dword ptr [EBP + 0x76]
// 005821a0: TEST EBX,EBX
// 005821a2: JZ 0x00582253
//   XREF to: 00582253 (CONDITIONAL_JUMP)
// 005821a8: LEA EAX,[EBP + 0xfffff402]
// 005821ae: PUSH EAX
// 005821af: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 005821b4: ADD ESP,0x4
// 005821b7: PUSH 0x6489f3
//   XREF to: 006489f3 (DATA)
// 005821bc: LEA EAX,[EBP + 0xfffff402]
// 005821c2: PUSH EAX
// 005821c3: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005821c8: ADD ESP,0x8
// 005821cb: PUSH 0x6489fb
//   XREF to: 006489fb (DATA)
// 005821d0: LEA EAX,[EBP + 0xfffff402]
// 005821d6: PUSH EAX
// 005821d7: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005821dc: ADD ESP,0x8
// 005821df: PUSH 0x648a01
//   XREF to: 00648a01 (DATA)
// 005821e4: LEA EAX,[EBP + 0xfffff402]
// 005821ea: PUSH EAX
// 005821eb: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005821f0: ADD ESP,0x8
// 005821f3: PUSH 0x648a19
//   XREF to: 00648a19 (DATA)
// 005821f8: LEA EAX,[EBP + 0xfffff402]
// 005821fe: PUSH EAX
// 005821ff: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00582204: ADD ESP,0x8
// 00582207: PUSH 0x648a30
//   XREF to: 00648a30 (DATA)
// 0058220c: LEA EAX,[EBP + 0xfffff402]
// 00582212: PUSH EAX
// 00582213: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00582218: ADD ESP,0x8
// 0058221b: PUSH 0x0
// 0058221d: MOV ESI,dword ptr [EBX + 0x40]
// 00582220: PUSH ESI
// 00582221: PUSH 0x648bf6
//   XREF to: 00648bf6 (DATA)
// 00582226: LEA EAX,[EBP + 0xfffff402]
// 0058222c: PUSH EAX
// 0058222d: ADD EBX,0x40
// 00582230: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00582235: ADD ESP,0x10
// 00582238: TEST EAX,EAX
// 0058223a: JL 0x005828da
//   XREF to: 005828da (CONDITIONAL_JUMP)
// 00582240: PUSH 0x0
// 00582242: MOV dword ptr [EBX],EAX
// 00582244: LEA EAX,[EBP + 0xfffff402]
//   Label: LAB_00582244
// 0058224a: PUSH EAX
// 0058224b: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00582250: ADD ESP,0x8
// 00582253: PUSH 0x3b
//   Label: LAB_00582253
// 00582255: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058225a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058225b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0058225d: CALL dword ptr [EDX + 0x4]
// 00582260: ADD ESP,0x8
// 00582263: TEST EAX,EAX
// 00582265: JZ 0x00581b57
//   XREF to: 00581b57 (CONDITIONAL_JUMP)
// 0058226b: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00582270: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00582276: IMUL EDX,EDI,0x0
// 00582279: MOV EAX,EDX
// 0058227b: SAR EDX,0x1f
// 0058227e: SUB EAX,EDX
// 00582280: SAR EAX,0x1
// 00582282: PUSH 0x0
// 00582284: PUSH EAX
// 00582285: PUSH 0x648a50
//   XREF to: 00648a50 (DATA)
// 0058228a: MOV EBX,EAX
// 0058228c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582291: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00582296: MOV EDX,EAX
// 00582298: MOV ESI,0xa
// 0058229d: SAR EDX,0x1f
// 005822a0: IDIV ESI
// 005822a2: ADD ESP,0xc
// 005822a5: PUSH 0x0
// 005822a7: ADD EAX,EBX
// 005822a9: PUSH EAX
// 005822aa: PUSH 0x648a3a
//   XREF to: 00648a3a (DATA)
// 005822af: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005822b4: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005822b9: IMUL EDX,EAX,0x0
// 005822bc: MOV EAX,EDX
// 005822be: SAR EDX,0x1f
// 005822c1: SUB EAX,EDX
// 005822c3: SAR EAX,0x1
// 005822c5: ADD ESP,0xc
// 005822c8: PUSH 0xb
// 005822ca: PUSH EAX
// 005822cb: PUSH 0x648a71
//   XREF to: 00648a71 (DATA)
// 005822d0: MOV EBX,EAX
// 005822d2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005822d7: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005822dc: MOV EDX,EAX
// 005822de: SAR EDX,0x1f
// 005822e1: IDIV ESI
// 005822e3: ADD ESP,0xc
// 005822e6: PUSH 0xb
// 005822e8: ADD EAX,EBX
// 005822ea: PUSH EAX
// 005822eb: PUSH 0x648a53
//   XREF to: 00648a53 (DATA)
// 005822f0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005822f5: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005822fb: IMUL EDX,ECX,0x0
// 005822fe: MOV EAX,EDX
// 00582300: SAR EDX,0x1f
// 00582303: SUB EAX,EDX
// 00582305: SAR EAX,0x1
// 00582307: ADD ESP,0xc
// 0058230a: PUSH 0x16
// 0058230c: PUSH EAX
// 0058230d: PUSH 0x648a7d
//   XREF to: 00648a7d (DATA)
// 00582312: MOV EBX,EAX
// 00582314: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582319: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0058231e: MOV EDX,EAX
// 00582320: SAR EDX,0x1f
// 00582323: IDIV ESI
// 00582325: ADD ESP,0xc
// 00582328: PUSH 0x16
// 0058232a: ADD EAX,EBX
// 0058232c: PUSH EAX
// 0058232d: PUSH 0x648a73
//   XREF to: 00648a73 (DATA)
// 00582332: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582337: ADD ESP,0xc
// 0058233a: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00582340: IMUL EDX,EBX,0x0
// 00582343: MOV EAX,EDX
// 00582345: SAR EDX,0x1f
// 00582348: SUB EAX,EDX
// 0058234a: SAR EAX,0x1
// 0058234c: PUSH 0x21
// 0058234e: PUSH EAX
// 0058234f: PUSH 0x648a8f
//   XREF to: 00648a8f (DATA)
// 00582354: MOV EBX,EAX
// 00582356: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058235b: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00582360: MOV EDX,EAX
// 00582362: SAR EDX,0x1f
// 00582365: IDIV ESI
// 00582367: ADD ESP,0xc
// 0058236a: PUSH 0x21
// 0058236c: ADD EAX,EBX
// 0058236e: PUSH EAX
// 0058236f: PUSH 0x648a81
//   XREF to: 00648a81 (DATA)
// 00582374: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582379: MOV ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0058237f: IMUL EDX,ESI,0x0
// 00582382: MOV EAX,EDX
// 00582384: SAR EDX,0x1f
// 00582387: SUB EAX,EDX
// 00582389: SAR EAX,0x1
// 0058238b: ADD ESP,0xc
// 0058238e: PUSH 0x2c
// 00582390: PUSH EAX
// 00582391: PUSH 0x648aa5
//   XREF to: 00648aa5 (DATA)
// 00582396: MOV EBX,EAX
// 00582398: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0058239d: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005823a2: MOV EDX,EAX
// 005823a4: MOV ESI,0xa
// 005823a9: SAR EDX,0x1f
// 005823ac: IDIV ESI
// 005823ae: ADD ESP,0xc
// 005823b1: PUSH 0x2c
// 005823b3: ADD EAX,EBX
// 005823b5: PUSH EAX
// 005823b6: PUSH 0x648a99
//   XREF to: 00648a99 (DATA)
// 005823bb: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005823c0: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005823c6: IMUL EDX,EDI,0x0
// 005823c9: MOV EAX,EDX
// 005823cb: SAR EDX,0x1f
// 005823ce: SUB EAX,EDX
// 005823d0: SAR EAX,0x1
// 005823d2: ADD ESP,0xc
// 005823d5: PUSH 0x37
// 005823d7: PUSH EAX
// 005823d8: PUSH 0x648ab3
//   XREF to: 00648ab3 (DATA)
// 005823dd: MOV EBX,EAX
// 005823df: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005823e4: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005823e9: MOV EDX,EAX
// 005823eb: SAR EDX,0x1f
// 005823ee: IDIV ESI
// 005823f0: ADD ESP,0xc
// 005823f3: PUSH 0x37
// 005823f5: ADD EAX,EBX
// 005823f7: PUSH EAX
// 005823f8: PUSH 0x648aa7
//   XREF to: 00648aa7 (DATA)
// 005823fd: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582402: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00582407: IMUL EDX,EAX,0x0
// 0058240a: MOV EAX,EDX
// 0058240c: SAR EDX,0x1f
// 0058240f: SUB EAX,EDX
// 00582411: SAR EAX,0x1
// 00582413: ADD ESP,0xc
// 00582416: PUSH 0x42
// 00582418: PUSH EAX
// 00582419: PUSH 0x648ac3
//   XREF to: 00648ac3 (DATA)
// 0058241e: MOV EBX,EAX
// 00582420: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582425: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0058242a: MOV EDX,EAX
// 0058242c: SAR EDX,0x1f
// 0058242f: IDIV ESI
// 00582431: ADD ESP,0xc
// 00582434: PUSH 0x42
// 00582436: ADD EAX,EBX
// 00582438: PUSH EAX
// 00582439: PUSH 0x648ab5
//   XREF to: 00648ab5 (DATA)
// 0058243e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582443: ADD ESP,0xc
// 00582446: PUSH 0x58
// 00582448: PUSH 0x0
// 0058244a: PUSH 0x648ac5
//   XREF to: 00648ac5 (DATA)
// 0058244f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582454: ADD ESP,0xc
// 00582457: PUSH 0x63
// 00582459: PUSH 0x0
// 0058245b: PUSH 0x648afd
//   XREF to: 00648afd (DATA)
// 00582460: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00582465: ADD ESP,0xc
// 00582468: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0058246d: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00582472: MOV EDX,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00582478: PUSH EDX
//   XREF to: 02dcd7d4 (DATA)
// 00582479: CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   XREF to: 00502460 (UNCONDITIONAL_CALL)
// 0058247e: ADD ESP,0x4
// 00582481: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00582486: JMP 0x00581b57
//   XREF to: 00581b57 (UNCONDITIONAL_JUMP)
// 0058248b: FLD float ptr [ESI]
//   Label: LAB_0058248b
// 0058248d: PUSH 0xff
// 00582492: LEA EAX,[EBP + -0x36]
// 00582495: FCHS
// 00582497: FSTP float ptr [EBP + -0x36]
// 0058249a: PUSH 0x0
// 0058249c: FLD float ptr [ESI + 0x4]
// 0058249f: FCHS
// 005824a1: PUSH 0x0
// 005824a3: FSTP float ptr [EBP + -0x32]
// 005824a6: PUSH 0x3e4ccccd
// 005824ab: FLD float ptr [ESI + 0x8]
// 005824ae: PUSH ESI
// 005824af: FCHS
// 005824b1: PUSH EAX
// 005824b2: FSTP float ptr [EBP + -0x2e]
// 005824b5: CALL core_setedit.cpp_FUN_005817d0
//   XREF to: 005817d0 (UNCONDITIONAL_CALL)
// 005824ba: ADD ESP,0x18
// 005824bd: JMP 0x00581dad
//   XREF to: 00581dad (UNCONDITIONAL_JUMP)
// 005824c2: MOV ESI,0x648b62
//   Label: LAB_005824c2
//   XREF to: 00648b62 (DATA)
// 005824c7: LEA EDI,[EBP + 0xfffffefa]
// 005824cd: PUSH EDI
// 005824ce: MOV AL,byte ptr [ESI]
//   Label: LAB_005824ce
//   XREF to: 00648b62 (READ)
//   XREF to: 00648b64 (READ)
// 005824d0: MOV byte ptr [EDI],AL
// 005824d2: CMP AL,0x0
// 005824d4: JZ 0x005824e6
//   XREF to: 005824e6 (CONDITIONAL_JUMP)
// 005824d6: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00648b63 (READ)
//   XREF to: 00648b65 (READ)
// 005824d9: ADD ESI,0x2
// 005824dc: MOV byte ptr [EDI + 0x1],AL
// 005824df: ADD EDI,0x2
// 005824e2: CMP AL,0x0
// 005824e4: JNZ 0x005824ce
//   XREF to: 005824ce (CONDITIONAL_JUMP)
// 005824e6: POP EDI
//   Label: LAB_005824e6
// 005824e7: JMP 0x00581dfb
//   XREF to: 00581dfb (UNCONDITIONAL_JUMP)
// 005824ec: MOV EAX,[0x0067b654]
//   Label: LAB_005824ec
//   XREF to: 0067b654 (READ)
// 005824f1: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005824f7: PUSH 0x38
// 005824f9: MOV dword ptr [EBP + 0x56],EAX
// 005824fc: MOV dword ptr [EBP + 0x5a],EAX
// 005824ff: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00582504: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00582505: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00582507: CALL dword ptr [EDX]
// 00582509: ADD ESP,0x8
// 0058250c: TEST EAX,EAX
// 0058250e: JZ 0x005827b0
//   XREF to: 005827b0 (CONDITIONAL_JUMP)
// 00582514: FLD float ptr [EBP + 0x56]
// 00582517: FMUL double ptr [0x00648c15]
//   XREF to: 00648c15 (READ)
// 0058251d: FSTP float ptr [EBP + 0x5a]
//   Label: LAB_0058251d
// 00582520: FLD float ptr [EBP + 0x66]
//   Label: LAB_00582520
// 00582523: FMUL double ptr [0x00648c25]
//   XREF to: 00648c25 (READ)
// 00582529: FLD float ptr [EBP + 0x5a]
// 0058252c: FLD ST0
// 0058252e: FMUL double ptr [0x00648c1d]
//   XREF to: 00648c1d (READ)
// 00582534: PUSH 0x4a
// 00582536: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058253b: FXCH ST2
// 0058253d: FMULP
// 0058253f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00582540: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00582542: FXCH
// 00582544: FSTP float ptr [EBP + 0x5e]
// 00582547: FSTP float ptr [EBP + 0x52]
// 0058254a: CALL dword ptr [EDX]
// 0058254c: ADD ESP,0x8
// 0058254f: TEST EAX,EAX
// 00582551: JZ 0x0058255c
//   XREF to: 0058255c (CONDITIONAL_JUMP)
// 00582553: FLD float ptr [EBP + -0x12]
// 00582556: FADD float ptr [EBP + 0x5e]
// 00582559: FSTP float ptr [EBP + -0x12]
// 0058255c: PUSH 0x4e
//   Label: LAB_0058255c
// 0058255e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00582563: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00582564: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00582566: CALL dword ptr [EDX]
// 00582568: ADD ESP,0x8
// 0058256b: TEST EAX,EAX
// 0058256d: JZ 0x00582578
//   XREF to: 00582578 (CONDITIONAL_JUMP)
// 0058256f: FLD float ptr [EBP + -0x12]
// 00582572: FSUB float ptr [EBP + 0x5e]
// 00582575: FSTP float ptr [EBP + -0x12]
// 00582578: PUSH 0x52
//   Label: LAB_00582578
// 0058257a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058257f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00582580: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00582582: CALL dword ptr [EDX]
// 00582584: ADD ESP,0x8
// 00582587: TEST EAX,EAX
// 00582589: JZ 0x00582594
//   XREF to: 00582594 (CONDITIONAL_JUMP)
// 0058258b: FLD float ptr [EBP + -0xe]
// 0058258e: FADD float ptr [EBP + 0x5e]
// 00582591: FSTP float ptr [EBP + -0xe]
// 00582594: PUSH 0x53
//   Label: LAB_00582594
// 00582596: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058259b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058259c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0058259e: CALL dword ptr [EDX]
// 005825a0: ADD ESP,0x8
// 005825a3: TEST EAX,EAX
// 005825a5: JZ 0x005825b0
//   XREF to: 005825b0 (CONDITIONAL_JUMP)
// 005825a7: FLD float ptr [EBP + -0xe]
// 005825aa: FSUB float ptr [EBP + 0x5e]
// 005825ad: FSTP float ptr [EBP + -0xe]
// 005825b0: PUSH 0xd
//   Label: LAB_005825b0
// 005825b2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005825b7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005825b8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005825ba: CALL dword ptr [EDX + 0x4]
// 005825bd: ADD ESP,0x8
// 005825c0: TEST EAX,EAX
// 005825c2: JZ 0x005825cd
//   XREF to: 005825cd (CONDITIONAL_JUMP)
// 005825c4: FLD float ptr [EBP + 0x66]
// 005825c7: FSUB float ptr [EBP + 0x52]
// 005825ca: FSTP float ptr [EBP + 0x66]
// 005825cd: PUSH 0xc
//   Label: LAB_005825cd
// 005825cf: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005825d4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005825d5: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005825d7: CALL dword ptr [EDX + 0x4]
// 005825da: ADD ESP,0x8
// 005825dd: TEST EAX,EAX
// 005825df: JZ 0x005825ea
//   XREF to: 005825ea (CONDITIONAL_JUMP)
// 005825e1: FLD float ptr [EBP + 0x66]
// 005825e4: FADD float ptr [EBP + 0x52]
// 005825e7: FSTP float ptr [EBP + 0x66]
// 005825ea: FLD float ptr [EBP + -0x12]
//   Label: LAB_005825ea
// 005825ed: FCOMP double ptr [0x00648c3d]
//   XREF to: 00648c3d (READ)
// 005825f3: FNSTSW AX
// 005825f5: SAHF
// 005825f6: JNC 0x005825ff
//   XREF to: 005825ff (CONDITIONAL_JUMP)
// 005825f8: MOV dword ptr [EBP + -0x12],0xbfc90fdb
// 005825ff: FLD float ptr [EBP + -0x12]
//   Label: LAB_005825ff
// 00582602: FCOMP double ptr [0x00648c1d]
//   XREF to: 00648c1d (READ)
// 00582608: FNSTSW AX
// 0058260a: SAHF
// 0058260b: JBE 0x00582614
//   XREF to: 00582614 (CONDITIONAL_JUMP)
// 0058260d: MOV dword ptr [EBP + -0x12],0x3fc90fdb
// 00582614: FLD float ptr [EBP + -0xe]
//   Label: LAB_00582614
// 00582617: FCOMP double ptr [0x00648c3d]
//   XREF to: 00648c3d (READ)
// 0058261d: FNSTSW AX
// 0058261f: SAHF
// 00582620: JNC 0x0058262e
//   XREF to: 0058262e (CONDITIONAL_JUMP)
// 00582622: FLD float ptr [EBP + -0xe]
// 00582625: FADD float ptr [0x00648c45]
//   XREF to: 00648c45 (READ)
// 0058262b: FSTP float ptr [EBP + -0xe]
// 0058262e: FLD float ptr [EBP + -0xe]
//   Label: LAB_0058262e
// 00582631: FCOMP double ptr [0x00648c1d]
//   XREF to: 00648c1d (READ)
// 00582637: FNSTSW AX
// 00582639: SAHF
// 0058263a: JBE 0x00582648
//   XREF to: 00582648 (CONDITIONAL_JUMP)
// 0058263c: FLD float ptr [EBP + -0xe]
// 0058263f: FADD float ptr [0x00648c49]
//   XREF to: 00648c49 (READ)
// 00582645: FSTP float ptr [EBP + -0xe]
// 00582648: FLD float ptr [EBP + 0x66]
//   Label: LAB_00582648
// 0058264b: FCOMP double ptr [0x00648c25]
//   XREF to: 00648c25 (READ)
// 00582651: FNSTSW AX
// 00582653: SAHF
// 00582654: JNC 0x0058265d
//   XREF to: 0058265d (CONDITIONAL_JUMP)
// 00582656: MOV dword ptr [EBP + 0x66],0x3f000000
// 0058265d: PUSH 0x1d
//   Label: LAB_0058265d
// 0058265f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00582664: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00582665: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00582667: CALL dword ptr [EDX]
// 00582669: ADD ESP,0x8
// 0058266c: TEST EAX,EAX
// 0058266e: JZ 0x005827d9
//   XREF to: 005827d9 (CONDITIONAL_JUMP)
// 00582674: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00582679: PUSH 0x38
// 0058267b: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00582681: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00582686: FMUL double ptr [0x00648c2d]
//   XREF to: 00648c2d (READ)
// 0058268c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058268d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0058268f: FSTP float ptr [EBP + 0x6a]
// 00582692: CALL dword ptr [EDX]
// 00582694: ADD ESP,0x8
// 00582697: TEST EAX,EAX
// 00582699: JZ 0x005826a7
//   XREF to: 005826a7 (CONDITIONAL_JUMP)
// 0058269b: FLD float ptr [EBP + 0x6a]
// 0058269e: FMUL double ptr [0x00648c35]
//   XREF to: 00648c35 (READ)
// 005826a4: FSTP float ptr [EBP + 0x6a]
// 005826a7: PUSH 0x4b
//   Label: LAB_005826a7
// 005826a9: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005826ae: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005826af: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005826b1: CALL dword ptr [EDX]
// 005826b3: ADD ESP,0x8
// 005826b6: TEST EAX,EAX
// 005826b8: JZ 0x005826c6
//   XREF to: 005826c6 (CONDITIONAL_JUMP)
// 005826ba: MOV EAX,dword ptr [EBP + 0x76]
// 005826bd: FLD float ptr [EAX + 0xc]
// 005826c0: FSUB float ptr [EBP + 0x6a]
// 005826c3: FSTP float ptr [EAX + 0xc]
// 005826c6: PUSH 0x4d
//   Label: LAB_005826c6
// 005826c8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005826cd: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005826ce: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005826d0: CALL dword ptr [EDX]
// 005826d2: ADD ESP,0x8
// 005826d5: TEST EAX,EAX
// 005826d7: JZ 0x005826e5
//   XREF to: 005826e5 (CONDITIONAL_JUMP)
// 005826d9: MOV EAX,dword ptr [EBP + 0x76]
// 005826dc: FLD float ptr [EAX + 0xc]
// 005826df: FADD float ptr [EBP + 0x6a]
// 005826e2: FSTP float ptr [EAX + 0xc]
// 005826e5: PUSH 0x1e
//   Label: LAB_005826e5
// 005826e7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005826ec: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005826ed: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005826ef: CALL dword ptr [EDX]
// 005826f1: ADD ESP,0x8
// 005826f4: TEST EAX,EAX
// 005826f6: JZ 0x00582704
//   XREF to: 00582704 (CONDITIONAL_JUMP)
// 005826f8: MOV EAX,dword ptr [EBP + 0x76]
// 005826fb: FLD float ptr [EAX + 0x10]
// 005826fe: FSUB float ptr [EBP + 0x6a]
// 00582701: FSTP float ptr [EAX + 0x10]
// 00582704: PUSH 0x10
//   Label: LAB_00582704
// 00582706: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058270b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058270c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0058270e: CALL dword ptr [EDX]
// 00582710: ADD ESP,0x8
// 00582713: TEST EAX,EAX
// 00582715: JZ 0x00582723
//   XREF to: 00582723 (CONDITIONAL_JUMP)
// 00582717: MOV EAX,dword ptr [EBP + 0x76]
// 0058271a: FLD float ptr [EAX + 0x10]
// 0058271d: FADD float ptr [EBP + 0x6a]
// 00582720: FSTP float ptr [EAX + 0x10]
// 00582723: PUSH 0x50
//   Label: LAB_00582723
// 00582725: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058272a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058272b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0058272d: CALL dword ptr [EDX]
// 0058272f: ADD ESP,0x8
// 00582732: TEST EAX,EAX
// 00582734: JZ 0x00582742
//   XREF to: 00582742 (CONDITIONAL_JUMP)
// 00582736: MOV EAX,dword ptr [EBP + 0x76]
// 00582739: FLD float ptr [EAX + 0x14]
// 0058273c: FSUB float ptr [EBP + 0x6a]
// 0058273f: FSTP float ptr [EAX + 0x14]
// 00582742: PUSH 0x48
//   Label: LAB_00582742
// 00582744: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00582749: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058274a: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0058274c: CALL dword ptr [EDX]
// 0058274e: ADD ESP,0x8
// 00582751: TEST EAX,EAX
// 00582753: JZ 0x00582761
//   XREF to: 00582761 (CONDITIONAL_JUMP)
// 00582755: MOV EAX,dword ptr [EBP + 0x76]
// 00582758: FLD float ptr [EAX + 0x14]
// 0058275b: FADD float ptr [EBP + 0x6a]
// 0058275e: FSTP float ptr [EAX + 0x14]
// 00582761: MOV EAX,dword ptr [EBP + 0x76]
//   Label: LAB_00582761
// 00582764: MOV EDI,0x3f800000
// 00582769: MOV EDX,dword ptr [EAX + 0xc]
// 0058276c: MOV dword ptr [EBP + 0x62],EDI
// 0058276f: CMP EDX,EDI
// 00582771: JGE 0x00582779
//   XREF to: 00582779 (CONDITIONAL_JUMP)
// 00582773: MOV EAX,dword ptr [EBP + 0x76]
// 00582776: MOV dword ptr [EAX + 0xc],EDI
// 00582779: MOV EAX,dword ptr [EBP + 0x76]
//   Label: LAB_00582779
// 0058277c: FLD float ptr [EAX + 0x10]
// 0058277f: FCOMP float ptr [EBP + 0x62]
// 00582782: FNSTSW AX
// 00582784: SAHF
// 00582785: JNC 0x00582790
//   XREF to: 00582790 (CONDITIONAL_JUMP)
// 00582787: MOV EDX,dword ptr [EBP + 0x76]
// 0058278a: MOV EAX,dword ptr [EBP + 0x62]
// 0058278d: MOV dword ptr [EDX + 0x10],EAX
// 00582790: MOV EAX,dword ptr [EBP + 0x76]
//   Label: LAB_00582790
// 00582793: FLD float ptr [EAX + 0x14]
// 00582796: FCOMP float ptr [EBP + 0x62]
// 00582799: FNSTSW AX
// 0058279b: SAHF
// 0058279c: JNC 0x00581e5f
//   XREF to: 00581e5f (CONDITIONAL_JUMP)
// 005827a2: MOV EDX,dword ptr [EBP + 0x76]
// 005827a5: MOV EAX,dword ptr [EBP + 0x62]
// 005827a8: MOV dword ptr [EDX + 0x14],EAX
// 005827ab: JMP 0x00581e5f
//   XREF to: 00581e5f (UNCONDITIONAL_JUMP)
// 005827b0: PUSH 0x2a
//   Label: LAB_005827b0
// 005827b2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005827b7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005827b8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005827ba: CALL dword ptr [EDX]
// 005827bc: ADD ESP,0x8
// 005827bf: TEST EAX,EAX
// 005827c1: JZ 0x00582520
//   XREF to: 00582520 (CONDITIONAL_JUMP)
// 005827c7: FLD float ptr [EBP + 0x56]
// 005827ca: FLD ST0
// 005827cc: FMUL double ptr [0x00648c0d]
//   XREF to: 00648c0d (READ)
// 005827d2: FSTP ST1
// 005827d4: JMP 0x0058251d
//   XREF to: 0058251d (UNCONDITIONAL_JUMP)
// 005827d9: LEA EAX,[EBP + -0x5e]
//   Label: LAB_005827d9
// 005827dc: PUSH EAX
// 005827dd: MOV EBX,dword ptr [EBP + 0x76]
// 005827e0: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 005827e5: LEA EAX,[EBP + -0x5e]
// 005827e8: ADD ESP,0x4
// 005827eb: CMP EAX,EBX
// 005827ed: JZ 0x00582800
//   XREF to: 00582800 (CONDITIONAL_JUMP)
// 005827ef: MOV EAX,dword ptr [EBX]
// 005827f1: MOV dword ptr [EBP + -0x5e],EAX
// 005827f4: MOV EAX,dword ptr [EBX + 0x4]
// 005827f7: MOV dword ptr [EBP + -0x5a],EAX
// 005827fa: MOV EAX,dword ptr [EBX + 0x8]
// 005827fd: MOV dword ptr [EBP + -0x56],EAX
// 00582800: LEA EAX,[EBP + 0x1e]
//   Label: LAB_00582800
// 00582803: PUSH EAX
// 00582804: MOV EAX,dword ptr [EBP + 0x76]
// 00582807: ADD EAX,0x18
// 0058280a: PUSH EAX
// 0058280b: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 00582810: MOV EBX,EAX
// 00582812: LEA EAX,[EBP + -0x52]
// 00582815: ADD ESP,0x8
// 00582818: CMP EAX,EBX
// 0058281a: JZ 0x0058282d
//   XREF to: 0058282d (CONDITIONAL_JUMP)
// 0058281c: MOV EAX,dword ptr [EBX]
// 0058281e: MOV dword ptr [EBP + -0x52],EAX
// 00582821: MOV EAX,dword ptr [EBX + 0x4]
// 00582824: MOV dword ptr [EBP + -0x4e],EAX
// 00582827: MOV EAX,dword ptr [EBX + 0x8]
// 0058282a: MOV dword ptr [EBP + -0x4a],EAX
// 0058282d: LEA EAX,[EBP + -0x5e]
//   Label: LAB_0058282d
// 00582830: PUSH EAX
// 00582831: MOV ESI,dword ptr [EBP + 0x76]
// 00582834: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 00582839: LEA EAX,[EBP + -0x5e]
// 0058283c: ADD ESP,0x4
// 0058283f: CMP EAX,ESI
// 00582841: JZ 0x00582854
//   XREF to: 00582854 (CONDITIONAL_JUMP)
// 00582843: MOV EAX,dword ptr [EBP + -0x5e]
// 00582846: MOV dword ptr [ESI],EAX
// 00582848: MOV EAX,dword ptr [EBP + -0x5a]
// 0058284b: MOV dword ptr [ESI + 0x4],EAX
// 0058284e: MOV EAX,dword ptr [EBP + -0x56]
// 00582851: MOV dword ptr [ESI + 0x8],EAX
// 00582854: LEA EAX,[EBP + -0x52]
//   Label: LAB_00582854
// 00582857: PUSH EAX
// 00582858: MOV EAX,dword ptr [EBP + 0x76]
// 0058285b: ADD EAX,0x18
// 0058285e: PUSH EAX
// 0058285f: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00582864: ADD ESP,0x8
// 00582867: JMP 0x00581e5f
//   XREF to: 00581e5f (UNCONDITIONAL_JUMP)
// 0058286c: PUSH 0x0
//   Label: LAB_0058286c
// 0058286e: JMP 0x00581f15
//   XREF to: 00581f15 (UNCONDITIONAL_JUMP)
// 00582873: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00582873
// 00582879: MOV EAX,dword ptr [EAX + 0x15aebc]
// 0058287f: DEC EAX
// 00582880: MOV dword ptr [EBP + 0x72],EAX
// 00582883: JMP 0x00581f5e
//   XREF to: 00581f5e (UNCONDITIONAL_JUMP)
// 00582888: MOV EBX,dword ptr [EBP + 0x72]
//   Label: LAB_00582888
// 0058288b: MOV EDX,dword ptr [EBP + 0x92]
// 00582891: INC EBX
// 00582892: MOV ESI,dword ptr [EDX + 0x15aebc]
// 00582898: MOV dword ptr [EBP + 0x72],EBX
// 0058289b: CMP EBX,ESI
// 0058289d: JL 0x00581f5e
//   XREF to: 00581f5e (CONDITIONAL_JUMP)
// 005828a3: MOV dword ptr [EBP + 0x72],EAX
// 005828a6: JMP 0x00581f5e
//   XREF to: 00581f5e (UNCONDITIONAL_JUMP)
// 005828ab: PUSH 0x0
//   Label: LAB_005828ab
// 005828ad: LEA EAX,[EBP + 0xfffffb52]
// 005828b3: PUSH EAX
// 005828b4: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005828b9: ADD ESP,0x8
// 005828bc: JMP 0x005820cc
//   XREF to: 005820cc (UNCONDITIONAL_JUMP)
// 005828c1: PUSH 0x648b9c
//   Label: LAB_005828c1
//   XREF to: 00648b9c (DATA)
// 005828c6: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005828cc: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 005828cd: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 005828d2: ADD ESP,0x8
// 005828d5: JMP 0x005820cc
//   XREF to: 005820cc (UNCONDITIONAL_JUMP)
// 005828da: PUSH 0x0
//   Label: LAB_005828da
// 005828dc: JMP 0x00582244
//   XREF to: 00582244 (UNCONDITIONAL_JUMP)
// 005828e1: MOV ECX,dword ptr [EBP + 0x92]
//   Label: LAB_005828e1
// 005828e7: PUSH ECX
// 005828e8: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 005828ed: ADD ESP,0x4
// 005828f0: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005828f5: MOV EAX,dword ptr [EBP + 0x92]
// 005828fb: MOV dword ptr [EAX + 0x15ac8c],0x0
// 00582905: MOV dword ptr [EAX + 0x15ac90],0x0
// 0058290f: MOV dword ptr [EAX + 0x15ac84],0x0
// 00582919: LEA ESP,[EBP + 0x7e]
// 0058291c: POP EBP
// 0058291d: POP EDI
// 0058291e: POP ESI
// 0058291f: POP EBX
// 00582920: RET
