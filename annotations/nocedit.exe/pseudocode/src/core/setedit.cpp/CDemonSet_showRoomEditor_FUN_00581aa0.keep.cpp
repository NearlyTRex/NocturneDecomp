// Name: core_setedit.cpp_CDemonSet_showRoomEditor_FUN_00581aa0
// Address: 00581aa0
// MANUAL RECONSTRUCTION
// Address Range: [[00581aa0, 00582920]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_showRoomEditor_FUN_00581aa0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_showRoomEditor_FUN_00581aa0(CDemonSet *this_ptr)

{
  SRoom *pSVar3;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  uint text_color;
  int iVar5;
  int iVar4;
  int iVar7;
  CVector3f *world_position;
  int iVar6;
  CPickList local_c8c;
  CPickList local_8e4;
  CPickList local_53c;
  char local_194 [100];
  CMatrix3x3f local_130;
  CSlew local_108;
  CSlew local_ec;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  float local_58;
  float local_54;
  float local_50;
  int *local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  SRoom *local_20;
  int local_1c;
  SRoom *local_18;
  CMatrix3x3f *local_14;
  SRoom *pSVar2;
  float local_44;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr->actor_count = 0;
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_slew_cpp_CSlew_init_FUN_005a2060(&local_108);
  local_a0 = 0.0;
  local_9c = 0.0;
  local_98 = 0.0;
  local_28 = 40.0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  local_20 = this_ptr->rooms;
  this_ptr->disable_water_rendering = 1;
  this_ptr->disable_sky_rendering = 1;
  this_ptr->disable_spotlight_shadows = 1;
  local_1c = 0;
  local_40 = &this_ptr->default_room_size;
  do {
    local_18 = (SRoom *)0x0;
    if ((-1 < local_1c) && (local_1c < this_ptr->room_count)) {
      local_18 = local_20 + local_1c;
    }
    wincore_winrun_cpp_doNothing1_FUN_005f2f80();
    engine_special_cpp_clearScreen_FUN_005b3e70();
    engine_special_cpp_clearZBufferNative_FUN_005b3ed4();
    if (local_18 != (SRoom *)0x0) {
      if (&local_108.orientation.vec.x != &local_a0) {
        local_108.orientation.vec.x = local_a0;
        local_108.orientation.vec.y = local_9c;
        local_108.orientation.vec.z = local_98;
      }
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                         (&local_18->rotation_matrix,&local_94);
      local_108.orientation.vec.y = local_108.orientation.vec.y + pCVar3->y;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                (&local_130,&local_108.orientation.vec);
      local_88.z = -local_28;
      local_88.x = 0.0;
      local_88.y = 0.0;
      local_44 = local_88.z;
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&local_130,&local_d0,&local_88);
      local_58 = pCVar4->x + (local_18->position).x;
      local_54 = pCVar4->y + (local_18->position).y;
      local_50 = pCVar4->z + (local_18->position).z;
      if (&local_108 != (CSlew *)&local_58) {
        local_108.position.x = local_58;
        local_108.position.y = local_54;
        local_108.position.z = local_50;
      }
    }
    local_108.slew_rate = 28.0;
    g_CDemonCameraInstance.base.position.f = local_108.position;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&g_CDemonCameraInstance.base.rotation_matrix,&local_108.orientation.vec);
    g_CDemonCameraInstance.base.focal_length = local_108.slew_rate;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,150.0,0);
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
    iVar6 = 0;
    if (0 < this_ptr->room_count) {
      do {
        local_14 = &local_20[iVar6].rotation_matrix;
        pCVar4 = &local_20[iVar6].extents;
        world_position = &local_20[iVar6].position;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_14,&local_7c);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,world_position);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,&local_7c,(CVector3f *)0x0);
        if (iVar6 == local_1c) {
          local_64.x = -pCVar4->x;
          local_64.y = -pCVar4->y;
          local_64.z = -pCVar4->z;
          core_setedit_cpp_renderColoredBox_FUN_005817d0(&local_64,pCVar4,0.5,0,0xff,0);
          text_color = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                                 (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                    (g_CEditorToolsPtr,2.0,text_color);
          local_ac.x = -pCVar4->x;
          local_ac.y = -pCVar4->y;
          local_ac.z = -pCVar4->z;
          shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                    (g_CEditorToolsPtr,&local_ac,pCVar4,text_color);
        }
        else {
          local_c4.x = -pCVar4->x;
          local_c4.y = -pCVar4->y;
          local_c4.z = -pCVar4->z;
          core_setedit_cpp_renderColoredBox_FUN_005817d0(&local_c4,pCVar4,0.2,0,0,0xff);
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < this_ptr->room_count);
    }
    if (local_18 == (SRoom *)0x0) {
      strcpy(local_194,"No room selected");
    }
    else {
      _sprintf(local_194,"Room size: %d",local_18->reverb_size);
    }
    engine_2d_c_drawText_FUN_00401fd0(local_194,0,0);
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar5 != 0) {
      core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      this_ptr->disable_water_rendering = 0;
      this_ptr->disable_sky_rendering = 0;
      this_ptr->disable_spotlight_shadows = 0;
      return;
    }
    if (local_18 == (SRoom *)0x0) {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_108);
    }
    else {
      local_38 = g_CGamePtr->delta_time_float;
      local_34 = local_38;
      iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
      if (iVar5 == 0) {
        iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar5 != 0) {
          local_34 = local_38 * (float)10;
        }
      }
      else {
        local_34 = local_38 * (float)0.050000000000000003;
      }
      local_30 = local_34 * (float)1.57079632675;
      local_3c = local_28 * (float)0.5 * local_34;
      iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SUBTRACT);
      if (iVar5 != 0) {
        local_a0 = local_a0 + local_30;
      }
      iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ADD);
      if (iVar5 != 0) {
        local_a0 = local_a0 - local_30;
      }
      iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD0);
      if (iVar5 != 0) {
        local_9c = local_9c + local_30;
      }
      iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_DECIMAL);
      if (iVar5 != 0) {
        local_9c = local_9c - local_30;
      }
      iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_EQUALS);
      if (iVar5 != 0) {
        local_28 = local_28 - local_3c;
      }
      iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_MINUS);
      if (iVar5 != 0) {
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
      iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
      pSVar3 = local_18;
      if (iVar5 == 0) {
        core_slew_cpp_CSlew_init_FUN_005a2060(&local_ec);
        if ((SRoom *)&local_ec != pSVar3) {
          local_ec.position = pSVar3->position;
        }
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                           (&local_18->rotation_matrix,&local_70);
        pSVar3 = local_18;
        if (&local_ec.orientation.vec != pCVar4) {
          local_ec.orientation.vec = *pCVar4;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_ec);
        if ((SRoom *)&local_ec != pSVar3) {
          pSVar3->position = local_ec.position;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&local_18->rotation_matrix,&local_ec.orientation.vec);
      }
      else {
        local_24 = g_CGamePtr->delta_time_float * (float)4;
        iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
        if (iVar5 != 0) {
          local_24 = local_24 * (float)0.10000000000000001;
        }
        iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
        if (iVar5 != 0) {
          (local_18->extents).x = (local_18->extents).x - local_24;
        }
        iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
        if (iVar5 != 0) {
          (local_18->extents).x = (local_18->extents).x + local_24;
        }
        iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
        if (iVar5 != 0) {
          (local_18->extents).y = (local_18->extents).y - local_24;
        }
        iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
        if (iVar5 != 0) {
          (local_18->extents).y = (local_18->extents).y + local_24;
        }
        iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
        if (iVar5 != 0) {
          (local_18->extents).z = (local_18->extents).z - local_24;
        }
        iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
        if (iVar5 != 0) {
          (local_18->extents).z = (local_18->extents).z + local_24;
        }
        if ((local_18->extents).x < 1.0) {
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
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_S);
    if (iVar5 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_8e4);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8e4.base,"Outside");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8e4.base,"Small");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8e4.base,"Medium (e.g. Mausoleum)");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8e4.base,"Large (e.g. Warehouse)");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8e4.base,"Humongous");
      iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_8e4,"Select default room size",*local_40,0);
      if (-1 < iVar5) {
        *local_40 = iVar5;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_8e4,0);
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
    if (iVar5 != 0) {
      iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar5 == 0) {
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
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_I);
    if (iVar5 != 0) {
      if (this_ptr->room_count < 0x14) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_53c);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_53c.base,"Outside");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_53c.base,"Small");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_53c.base,"Medium (e.g. Mausoleum)");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_53c.base,"Large (e.g. Warehouse)")
        ;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_53c.base,"Humongous");
        iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_53c,"Create new room",INT_03365cbc,0);
        if (iVar5 < 0) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_53c,0);
        }
        else {
          INT_03365cbc = iVar5;
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_53c,0);
          local_1c = this_ptr->room_count;
          local_18 = local_20 + local_1c;
          if ((SRoom *)&local_108 != local_18) {
            local_18->position = local_108.position;
          }
          local_b8.y = local_108.orientation.vec.y;
          local_b8.x = 0.0;
          local_b8.z = 0.0;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                    (&local_18->rotation_matrix,&local_b8);
          (local_18->extents).x = 10.0;
          (local_18->extents).y = 10.0;
          (local_18->extents).z = 10.0;
          local_18->reverb_size = INT_03365cbc;
          this_ptr->room_count = this_ptr->room_count + 1;
        }
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Max number of rooms has been reached, can't add any more rooms.");
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
    iVar5 = local_1c;
    if ((((iVar4 != 0) && (-1 < local_1c)) && (local_1c < this_ptr->room_count)) &&
       (iVar7 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Delete the selected room?"), iVar7 != 0)) {
      iVar7 = this_ptr->room_count + -1;
      this_ptr->room_count = iVar7;
      memmove
                (local_20 + iVar5,local_20 + iVar5 + 1,(iVar7 - iVar5) * sizeof(*local_20));
      if (this_ptr->room_count <= iVar5) {
        local_1c = 0;
      }
      local_18 = (SRoom *)0x0;
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_N);
    if (iVar5 != 0) {
      local_18 = (SRoom *)0x0;
      local_1c = -1;
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_RETURN);
    pSVar2 = local_18;
    if ((iVar5 != 0) && (local_18 != (SRoom *)0x0)) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_c8c);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_c8c.base,"Outside");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_c8c.base,"Small");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_c8c.base,"Medium (e.g. Mausoleum)");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_c8c.base,"Large (e.g. Warehouse)");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_c8c.base,"Humongous");
      iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_c8c,"Choose room size",pSVar2->reverb_size,0);
      if (-1 < iVar5) {
        pSVar2->reverb_size = iVar5;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_c8c,0);
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
    if (iVar5 != 0) {
      engine_special_cpp_clearScreen_FUN_005b3e70();
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
      engine_2d_c_drawText_FUN_00401fd0("To size the selected box, use arrow keys and Q/A with CTRL.",0,99);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
  } while( true );
}
