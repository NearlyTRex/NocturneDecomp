// Name: core_setedit.cpp_CDemonSet_FUN_00581aa0
// Address: 00581aa0
// Address Range: [[00581aa0, 00581db8] [00581dd8, 00582920]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_FUN_00581aa0(CDemonSet * this_ptr)

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
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  CGame *in_stack_fffff378;
  CKeys *in_stack_fffff3d4;
  CKeys *in_stack_fffff3d8;
  CPickList *in_stack_fffff3dc;
  CKeys *in_stack_fffff3e0;
  CKeys *in_stack_fffff3e4;
  CKeys *in_stack_fffff3ec;
  CKeys *in_stack_fffff3f0;
  CPickList *in_stack_fffff3f4;
  uint in_stack_fffff3f8;
  CKeys *in_stack_fffff3fc;
  uint in_stack_fffff404;
  uint in_stack_fffff408;
  uint in_stack_fffff40c;
  uint in_stack_fffff410;
  uint in_stack_fffff414;
  CPickList local_8e4;
  CPickList local_53c;
  char local_194 [100];
  CMatrix3x3f local_130;
  byte local_108 [16];
  float local_f8;
  float local_f4;
  float local_f0;
  byte local_ec [16];
  float local_dc;
  float local_d8;
  CVector3f local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
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
  uint local_2c;
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
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_108);
  local_a0 = 0.0;
  local_9c = 0.0;
  local_98 = 0.0;
  local_28 = 40.0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff378);
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
      if ((float *)(local_108 + 0xc) != &local_a0) {
        local_108._12_4_ = local_a0;
        local_f8 = local_9c;
        local_f4 = local_98;
      }
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                         (&local_18->rotation_matrix,&local_94);
      local_f8 = local_f8 + pCVar4->y;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                (&local_130,(CVector3f *)(local_108 + 0xc));
      local_88.z = -local_28;
      local_88.x = 0.0;
      local_88.y = 0.0;
      local_44 = local_88.z;
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&local_130,&local_d0,&local_88);
      local_58 = pCVar4->x + (local_18->position).x;
      local_54 = pCVar4->y + (local_18->position).y;
      local_50 = pCVar4->z + (local_18->position).z;
      if ((float *)local_108 != &local_58) {
        local_108._0_4_ = local_58;
        local_108._4_4_ = local_54;
        local_108._8_4_ = local_50;
      }
    }
    local_f0 = 28.0;
    if (&stack0x00000000 != g_CDemonCameraInstance.camera_name + 0xcc) {
      g_CDemonCameraInstance.base.position.x = local_108._0_4_;
      g_CDemonCameraInstance.base.position.y = local_108._4_4_;
      g_CDemonCameraInstance.base.position.z = local_108._8_4_;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
               (CVector3f *)(local_108 + 0xc));
    g_CDemonCameraInstance.base.projection_scale = local_f0;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,150.0,0);
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
    iVar7 = 0;
    if (0 < this_ptr->room_count) {
      local_14 = &local_20->rotation_matrix;
      pCVar4 = &local_20->extents;
      do {
        world_position = &local_20[iVar7].position;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_14,&local_7c);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,world_position);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,(CVector3i *)&local_7c,(CVector3i *)0x0);
        if (iVar7 == local_1c) {
          local_64 = -pCVar4->x;
          local_60 = -pCVar4->y;
          local_5c = -pCVar4->z;
          core_setedit_cpp_FUN_005817d0(&local_64);
          uVar3 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                    (g_CEditorToolsPtr,2.0,CONCAT31 /* combine 2-byte values */(extraout_var,uVar3));
          local_ac.x = -pCVar4->x;
          local_ac.y = -pCVar4->y;
          local_ac.z = -pCVar4->z;
          shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                    (g_CEditorToolsPtr,&local_ac,pCVar4,CONCAT31 /* combine 2-byte values */(extraout_var,uVar3));
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
      crt_stdio_c_sprintf_FUN_005fdbd0(local_194,"Room size: %d");
    }
    engine_2d_c_drawText_FUN_00401fd0(local_194,0,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar7 != 0) {
      core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      this_ptr->unk_lighting_param3 = 0;
      this_ptr->unk_lighting_param4 = 0;
      this_ptr->unk_lighting_param1 = 0;
      return;
    }
    if (local_18 == (SRoom *)0x0) {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_108);
    }
    else {
      local_38 = g_CGamePtr->delta_time_float;
      local_34 = local_38;
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
      if (iVar7 == 0) {
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar7 != 0) {
          local_34 = local_38 * (float)10;
        }
      }
      else {
        local_34 = local_38 * (float)0.050000000000000003;
      }
      local_30 = local_34 * (float)1.57079632675;
      local_3c = local_28 * (float)0.5 * local_34;
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4a);
      if (iVar7 != 0) {
        local_a0 = local_a0 + local_30;
      }
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4e);
      if (iVar7 != 0) {
        local_a0 = local_a0 - local_30;
      }
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x52);
      if (iVar7 != 0) {
        local_9c = local_9c + local_30;
      }
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x53);
      if (iVar7 != 0) {
        local_9c = local_9c - local_30;
      }
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xd);
      if (iVar7 != 0) {
        local_28 = local_28 - local_3c;
      }
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xc);
      if (iVar7 != 0) {
        local_28 = local_28 + local_3c;
      }
      if (local_a0 < (float)-1.57079632675) {
        local_a0 = -1.5707964;
      }
      if ((float)1.57079632675 < local_a0) {
        local_a0 = 1.5707964;
      }
      if (local_9c < (float)-1.57079632675) {
        local_9c = local_9c + 6.283185f;
      }
      if ((float)1.57079632675 < local_9c) {
        local_9c = local_9c + -6.283185f;
      }
      if (local_28 < (float)0.5) {
        local_28 = 0.5;
      }
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      pSVar2 = local_18;
      if (iVar7 == 0) {
        core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_ec);
        if ((SRoom *)local_ec != pSVar2) {
          local_ec._0_4_ = (pSVar2->position).x;
          local_ec._4_4_ = (pSVar2->position).y;
          local_ec._8_4_ = (pSVar2->position).z;
        }
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                           (&local_18->rotation_matrix,&local_70);
        pSVar2 = local_18;
        if ((CVector3f *)(local_ec + 0xc) != pCVar4) {
          local_ec._12_4_ = pCVar4->x;
          local_dc = pCVar4->y;
          local_d8 = pCVar4->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_ec);
        if ((SRoom *)local_ec != pSVar2) {
          (pSVar2->position).x = (float)local_ec._0_4_;
          (pSVar2->position).y = (float)local_ec._4_4_;
          (pSVar2->position).z = (float)local_ec._8_4_;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&local_18->rotation_matrix,(CVector3f *)(local_ec + 0xc));
      }
      else {
        local_24 = g_CGamePtr->delta_time_float * (float)4;
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
        if (iVar7 != 0) {
          local_24 = local_24 * (float)0.10000000000000001;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
        if (iVar7 != 0) {
          (local_18->extents).x = (local_18->extents).x - local_24;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
        if (iVar7 != 0) {
          (local_18->extents).x = (local_18->extents).x + local_24;
        }
        in_stack_fffff3d4 = (CKeys *)0x5826f1;
        in_stack_fffff3d8 = g_CKeysPtr;
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
        if (iVar7 != 0) {
          (local_18->extents).y = (local_18->extents).y - local_24;
        }
        in_stack_fffff3dc = (CPickList *)0x582710;
        in_stack_fffff3e0 = g_CKeysPtr;
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
        if (iVar7 != 0) {
          (local_18->extents).y = (local_18->extents).y + local_24;
        }
        in_stack_fffff3e4 = (CKeys *)0x58272f;
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
        if (iVar7 != 0) {
          (local_18->extents).z = (local_18->extents).z - local_24;
        }
        in_stack_fffff3f4 = (CPickList *)&DAT_00000048;
        in_stack_fffff3ec = (CKeys *)0x58274e;
        in_stack_fffff3f0 = g_CKeysPtr;
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
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
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1f);
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
                (&local_8e4,0,(uint)in_stack_fffff3d4,(uint)in_stack_fffff3d8,
                 (uint)in_stack_fffff3dc,(uint)in_stack_fffff3e0,(uint)in_stack_fffff3e4);
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    if (iVar7 != 0) {
      in_stack_fffff3d4 = g_CKeysPtr;
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
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
    in_stack_fffff3d8 = (CKeys *)0x581f6b;
    in_stack_fffff3dc = (CPickList *)g_CKeysPtr;
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x17);
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
        in_stack_fffff3dc = &local_53c;
        in_stack_fffff3d8 = (CKeys *)0x582016;
        iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (in_stack_fffff3dc,"Create new room",DAT_03365cbc,0);
        if (iVar7 < 0) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_53c,0,(uint)in_stack_fffff3ec,(uint)in_stack_fffff3f0,
                     (uint)in_stack_fffff3f4,in_stack_fffff3f8,(uint)in_stack_fffff3fc);
        }
        else {
          DAT_03365cbc = iVar7;
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_53c,0,(uint)in_stack_fffff3ec,(uint)in_stack_fffff3f0,
                     (uint)in_stack_fffff3f4,in_stack_fffff3f8,(uint)in_stack_fffff3fc);
          local_1c = this_ptr->room_count;
          local_18 = local_20 + local_1c;
          if ((SRoom *)local_108 != local_18) {
            (local_18->position).x = (float)local_108._0_4_;
            (local_18->position).y = (float)local_108._4_4_;
            (local_18->position).z = (float)local_108._8_4_;
          }
          local_b8.y = local_f8;
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
    in_stack_fffff3e0 = (CKeys *)0x5820d9;
    in_stack_fffff3e4 = g_CKeysPtr;
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
    iVar7 = local_1c;
    if ((((iVar5 != 0) && (-1 < local_1c)) && (local_1c < this_ptr->room_count)) &&
       (iVar5 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Delete the selected room?"), iVar5 != 0)) {
      iVar5 = this_ptr->room_count + -1;
      this_ptr->room_count = iVar5;
      in_stack_fffff3e4 = (CKeys *)0x582147;
      crt_string_c_memmove_FUN_005fe5e0
                (local_20 + iVar7,local_20 + iVar7 + 1,(iVar5 - iVar7) * 0x44);
      if (this_ptr->room_count <= iVar7) {
        local_1c = 0;
      }
      local_18 = (SRoom *)0x0;
    }
    in_stack_fffff3ec = g_CKeysPtr;
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
    if (iVar7 != 0) {
      local_18 = (SRoom *)0x0;
      local_1c = -1;
    }
    in_stack_fffff3f0 = (CKeys *)0x582192;
    in_stack_fffff3f4 = (CPickList *)g_CKeysPtr;
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1c);
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
      in_stack_fffff3f4 = (CPickList *)&stack0xfffff374;
      in_stack_fffff3f0 = (CKeys *)0x582235;
      iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (in_stack_fffff3f4,"Choose room size",pSVar2->field4_0x40,0);
      if (-1 < iVar7) {
        pSVar2->field4_0x40 = iVar7;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff374,0,in_stack_fffff404,in_stack_fffff408,
                 in_stack_fffff40c,in_stack_fffff410,in_stack_fffff414);
    }
    in_stack_fffff3f8 = 0x582260;
    in_stack_fffff3fc = g_CKeysPtr;
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
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
      in_stack_fffff3fc = (CKeys *)0x582465;
      engine_2d_c_drawText_FUN_00401fd0("To size the selected box, use arrow keys and Q/A with CTRL.",0,99);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      in_stack_fffff404 = 0x58247e;
      engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
      in_stack_fffff408 = 0x582486;
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
  } while( true );
}
