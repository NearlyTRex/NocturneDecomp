// Name: core_menu.cpp_configureGraphicsOptions_FUN_004ebf10
// Address: 004ebf10
// Address Range: [[004ebf10, 004ecc0d]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_004ebf10(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_004ebf10(void)

{
  char cVar1;
  CGame *pCVar2;
  CDemonSet *this_ptr;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  byte bVar13;
  int color_value;
  char local_158 [256];
  char local_58 [32];
  int local_38;
  int local_34 [6];
  int local_1c;
  int iStack_14;
  
  bVar13 = 0;
  local_38 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004b3000(g_CGamePtr);
  pcVar5 = g_CHAR_ARRAY_01d06150;
  iVar3 = 0;
  do {
    *(char **)((int)&g_CHAR_PTR_01d06a50 + iVar3) = pcVar5;
    iVar3 = iVar3 + 4;
    pcVar5 = pcVar5 + 0x100;
  } while (iVar3 != 0x24);
  local_1c = 0;
  engine_special_cpp_buildCardList_FUN_005600e0
            (&g_INT_01d06a78,&g_CHAR_PTR_01d06a7c,&g_CHAR_PTR_01d06abc,&g_INT_01d06afc,
             &g_INT_01d06b3c);
  if (g_INT_01d06a78 <= g_INT_01d06a74) {
    g_INT_01d06a74 = 0;
  }
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  engine_special_cpp_getVideoMemory_FUN_00560090(local_34,local_34 + 1,local_34 + 2);
  do {
    pcVar5 = &stack0xfffffda8;
    core_game_cpp_CGame_updateDT_FUN_004b3010(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_update_FUN_005024a0(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    pcVar8 = &DAT_005dcc8d;
    core_moon_cpp_CMoon_render_FUN_00502510(&g_CMoonInstance);
    pcVar9 = g_CHAR_ARRAY_0061e180;
    g_CDemonSetPtr->rendering_mode = 0;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pCVar2 = g_CGamePtr;
    if ((0 < g_INT_01d06a78) && (g_INT_0264bba0 != 0)) {
      if (((&g_INT_01d06afc)[g_INT_01d06a74] == 0x121a) && ((&g_INT_01d06b3c)[g_INT_01d06a74] < 6))
      {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if (((&g_INT_01d06afc)[g_INT_01d06a74] == 0x8086) &&
         ((&g_INT_01d06b3c)[g_INT_01d06a74] == 0x7800)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if (((&g_INT_01d06afc)[g_INT_01d06a74] == 0x12d2) &&
         ((&g_INT_01d06b3c)[g_INT_01d06a74] == 0x18)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if (((&g_INT_01d06afc)[g_INT_01d06a74] == 0x12d2) &&
         ((&g_INT_01d06b3c)[g_INT_01d06a74] == 0x19)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
    }
    pCVar2 = g_CGamePtr;
    if ((g_INT_0264bba0 == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
      g_CGamePtr->game_pixy = 0x1e0;
      pCVar2->game_pixx = 0x280;
    }
    iVar3 = g_CGamePtr->game_pixy;
    if (iVar3 == 0xf0) {
      pcVar8 = "Resolution : 320x240";
    }
    else if (iVar3 == 300) {
      pcVar8 = "Resolution : 400x300";
    }
    else if (iVar3 == 0x180) {
      pcVar8 = "Resolution : 512x384";
    }
    else if (iVar3 == 0x1e0) {
      pcVar8 = "Resolution : 640x480";
    }
    else if (iVar3 == 600) {
      pcVar8 = "Resolution : 800x600";
    }
    else if (iVar3 == 0x300) {
      pcVar8 = "Resolution : 1024x768";
    }
    else if (iVar3 == 0x3c0) {
      pcVar8 = "Resolution : 1280x960";
    }
    else {
      pcVar8 = "Resolution : 320x240";
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar8);
    _sprintf(g_CHAR_ARRAY_01d06150,pcVar8);
    g_CGamePtr->halo_mode = 0;
    if (local_1c == 0) {
      if (g_INT_0264bba0 == 0) {
        pcVar8 = "3D Hardware : Off";
      }
      else {
        pcVar8 = "3D Hardware : On";
      }
    }
    else {
      g_INT_0264bba0 = 0;
      if (g_INT_01d06a78 == 0) {
        pcVar8 = "No 3D Hardware";
      }
      else {
        pcVar8 = "Not enough video memory for 3D card";
      }
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar8);
    _sprintf(g_CHAR_ARRAY_01d06250,pcVar8);
    if (g_CHAR_ARRAY_0061e180[0] == '\0') {
      pcVar8 = "3D API : None";
    }
    else {
      iVar3 = _stricmp(g_CHAR_ARRAY_0061e180,"trid3d.dll");
      if (iVar3 == 0) {
        pcVar8 = "3D API : DirectX 5";
      }
      else {
        iVar3 = _stricmp(g_CHAR_ARRAY_0061e180,"tridx6.dll");
        if (iVar3 == 0) {
          pcVar8 = "3D API : DirectX 6";
        }
        else {
          iVar3 = _stricmp(g_CHAR_ARRAY_0061e180,"tridx7.dll");
          if (iVar3 == 0) {
            pcVar8 = "3D API : DirectX 7";
          }
          else {
            iVar3 = _stricmp(g_CHAR_ARRAY_0061e180,"tri3dfx.dll")
            ;
            if (iVar3 == 0) {
              pcVar8 = "3D API : Voodoo Blit Emulation";
            }
            else {
              pcVar8 = "3D API : Custom";
            }
          }
        }
      }
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar8);
    _sprintf(g_CHAR_ARRAY_01d06350,pcVar8);
    if (g_INT_01d06a78 == 0) {
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                         ("No 3D Hardware detected");
      _sprintf(g_CHAR_ARRAY_01d06450,pcVar8);
    }
    else {
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("3D Card : ");
      pcVar9 = g_CHAR_ARRAY_01d06450;
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar8 = (&g_CHAR_PTR_01d06abc)[g_INT_01d06a74];
      iVar3 = -1;
      pcVar9 = g_CHAR_ARRAY_01d06450;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar8;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      _sprintf(local_58," (%d)");
      pcVar8 = local_58;
      iVar3 = -1;
      pcVar9 = g_CHAR_ARRAY_01d06450;
      do {
        pcVar10 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar9 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar8;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Bits per pixel : ");
    pcVar9 = &DAT_01d06550;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    _sprintf(&stack0xfffffda8,"%d");
    iVar3 = -1;
    pcVar8 = &DAT_01d06550;
    do {
      pcVar9 = pcVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Monitor calibration");
    _sprintf(g_CHAR_ARRAY_01d06650,pcVar5);
    if (g_CGamePtr->subtitle_mode == 0) {
      pcVar5 = "Subtitles : Off";
    }
    else {
      pcVar5 = "Subtitles : On";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(pcVar5);
    pcVar8 = &DAT_01d06750;
    do {
      cVar1 = *pcVar5;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    if (g_CGamePtr->quimby_flag == 0) {
      if (g_CGamePtr->nudity_flag == 0) {
        pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Rating: Teen");
        pcVar8 = &DAT_01d06850;
        do {
          cVar1 = *pcVar5;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      else {
        pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Rating: Mature");
        pcVar8 = &DAT_01d06850;
        do {
          cVar1 = *pcVar5;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Particle Density : ");
    pcVar8 = &DAT_01d06950;
    do {
      cVar1 = *pcVar5;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_158,"%5.2f");
    pcVar5 = local_158;
    iVar3 = -1;
    pcVar8 = &DAT_01d06950;
    do {
      pcVar9 = pcVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar8 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    iVar3 = 9;
    if (g_CGamePtr->quimby_flag != 0) {
      iVar3 = 8;
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Graphic Options");
    iVar3 = core_menu_cpp_renderMenuAndGetChoice_FUN_004eb0e0
                      (&g_CHAR_PTR_01d06a50,iVar3,&local_38,0x122,pcVar5);
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    pCVar2 = g_CGamePtr;
    switch(iVar3) {
    case 0:
      if (g_INT_01d0612c == 1) {
        if ((g_CGamePtr->game_pixy == 0xf0) && (24000000 < local_34[0])) {
          g_CGamePtr->game_pixx = 0x500;
          pCVar2->game_pixy = 0x3c0;
        }
        else if ((g_CGamePtr->game_pixy == 0xf0) && (12000000 < local_34[0])) {
LAB_004ec6e7:
          g_CGamePtr->game_pixy = 0x300;
          pCVar2->game_pixx = 0x400;
        }
        else {
          iVar3 = g_CGamePtr->game_pixy;
          if (iVar3 == 0xf0) {
LAB_004ec460:
            g_CGamePtr->game_pixy = 0x1e0;
            pCVar2->game_pixx = 0x280;
          }
          else if (iVar3 == 300) {
            g_CGamePtr->game_pixy = 0xf0;
            pCVar2->game_pixx = 0x140;
          }
          else {
            if (iVar3 != 0x180) {
              if (iVar3 == 0x1e0) {
                g_CGamePtr->game_pixy = 0x180;
                pCVar2->game_pixx = 0x200;
                break;
              }
              if (iVar3 == 600) goto LAB_004ec460;
              if (iVar3 == 0x300) goto LAB_004ec75b;
            }
            g_CGamePtr->game_pixy = 0xf0;
            pCVar2->game_pixx = 0x140;
          }
        }
      }
      else {
        iVar3 = g_CGamePtr->game_pixy;
        if (iVar3 == 0xf0) {
          g_CGamePtr->game_pixx = 0x200;
          pCVar2->game_pixy = 0x180;
        }
        else if (iVar3 == 300) {
          g_CGamePtr->game_pixx = 0x200;
          pCVar2->game_pixy = 0x180;
        }
        else {
          if (iVar3 == 0x180) goto LAB_004ec460;
          if ((local_34[0] < 0xb71b01) || (iVar3 != 0x1e0)) {
            if ((12000000 < local_34[0]) && (g_CGamePtr->game_pixy == 600)) goto LAB_004ec6e7;
            if ((local_34[0] < 0x16e3601) || (g_CGamePtr->game_pixy != 0x300)) {
              g_CGamePtr->game_pixx = 0x140;
              pCVar2->game_pixy = 0xf0;
            }
            else {
              g_CGamePtr->game_pixy = 0x3c0;
              pCVar2->game_pixx = 0x500;
            }
          }
          else {
LAB_004ec75b:
            g_CGamePtr->game_pixy = 600;
            pCVar2->game_pixx = 800;
          }
        }
      }
      break;
    case 1:
      bVar12 = g_INT_0264bba0 == 0;
      g_INT_0264bba0 = (int)bVar12;
      if (bVar12) {
        engine_special_cpp_kill_FUN_0055f4d0();
        engine_special_cpp_loadExternalRenderer_FUN_0055e8c0((HWND)0x0);
        if (g_INT_0264bba0 != 0) {
          engine_special_cpp_buildCardList_FUN_005600e0
                    (&g_INT_01d06a78,&g_CHAR_PTR_01d06a7c,&g_CHAR_PTR_01d06abc,&g_INT_01d06afc,
                     &g_INT_01d06b3c);
          engine_special_cpp_getVideoMemory_FUN_00560090(local_34,local_34 + 1,local_34 + 2);
          break;
        }
      }
      g_INT_01d06a78 = 0;
      break;
    case 3:
      if (g_INT_01d06a78 == 0) {
        g_INT_01d06a74 = 0;
      }
      else {
        g_INT_01d06a74 = g_INT_01d06a74 + 1;
        if (g_INT_01d06a78 <= g_INT_01d06a74) {
          g_INT_01d06a74 = 0;
        }
        engine_special_cpp_selectCard_FUN_005600c0(g_INT_01d06a74);
      }
      break;
    case 4:
      if (g_CGamePtr->game_bpp == 0x10) {
        g_CGamePtr->game_bpp = 0x20;
      }
      else {
        g_CGamePtr->game_bpp = 0x10;
      }
      break;
    case 5:
      core_menu_cpp_showCalibrationTest_FUN_004ebe30();
      break;
    case 6:
      g_CGamePtr->subtitle_mode = (uint)(g_CGamePtr->subtitle_mode == 0);
      break;
    case 7:
      uVar6 = (uint)(g_CGamePtr->nudity_flag == 0);
      g_CGamePtr->nudity_flag = uVar6;
      pCVar2->blood_flag = uVar6;
      pCVar2->foul_language_flag = uVar6;
      break;
    case 8:
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80
                         ("Adjust Particle Density");
      iVar3 = g_INT_006141b8 * 3 >> 0x1f;
      shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_0047e1d0
                (g_CEditorToolsPtr,
                 (int)((g_INT_006141b8 * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2,0x2c,pcVar5,
                 0);
      if (g_INT_0061ec60 < 0x3fff) {
LAB_004ec9a8:
        g_INT_0061ec60 = 0x3fff;
      }
      else if (g_INT_0061ec60 < 0x10000) {
        if (g_INT_0061ec60 < 0x3fff) goto LAB_004ec9a8;
        if (0xffff < g_INT_0061ec60) {
          g_INT_0061ec60 = 0xffff;
        }
      }
      else {
        g_INT_0061ec60 = 0xffff;
      }
      iVar3 = g_INT_0061ec60;
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      wincore_winrun_cpp_setCursorPosition_FUN_0058ed10
                ((int)(((longlong)(g_INT_006141b8 + -1) * (longlong)(iVar3 + -0x3fff)) / 0xc000),
                 g_INT_01c2a380);
      local_34[3] = 0;
      do {
        shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_0047e870(g_CEditorToolsPtr);
        if (g_INT_01c2a37c != local_34[3]) {
          iVar3 = (int)(((longlong)g_INT_01c2a37c * 0xc000) / (longlong)(g_INT_006141b8 + -1)) +
                  0x3fff;
          local_34[3] = g_INT_01c2a37c;
        }
        iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)
                          (g_CKeys_PTR_00617dd4,DIK_NUMPAD4);
        if (iVar4 != 0) {
          iVar3 = iVar3 + -700;
        }
        iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)
                          (g_CKeys_PTR_00617dd4,DIK_NUMPAD6);
        if (iVar4 != 0) {
          iVar3 = iVar3 + 700;
        }
        if (iVar3 < 0x3fff) {
          iVar3 = 0x3fff;
        }
        else if (0xffff < iVar3) {
          iVar3 = 0xffff;
        }
        iStack_14 = g_INT_01c35e4c + 1;
        iVar4 = g_INT_01c35e54 + -1;
        iVar7 = g_INT_01c35e50 + -1;
        iVar11 = g_INT_01c35e48 + 1;
        engine_2d_c_fillRectWithBorder_FUN_00403250(iVar11,iStack_14,iVar7,iVar4,0,0xff);
        engine_2d_c_fillRectColor_FUN_004031c0
                  (iVar11,iStack_14,
                   (int)(((longlong)(iVar7 - iVar11) * (longlong)(iVar3 + -0x3fff)) / 0xc000) +
                   iVar11,iVar4,4);
        pcVar5 = "%4.2f";
        color_value = 0;
        iVar11 = 0xff;
        iVar7 = g_INT_01c35e54 + g_INT_01c35e4c;
        iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(g_CBitFont_PTR_01c25590,0x41);
        engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0
                  (g_CBitFont_PTR_01c25590,g_INT_01c35e48,g_INT_01c35e50,(iVar7 - iVar4) / 2,iVar11,
                   color_value,pcVar5);
        wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
        iVar7 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)
                          (g_CKeys_PTR_00617dd4,DIK_ESCAPE);
        iVar4 = g_INT_0061ec60;
      } while (((iVar7 == 0) &&
               (iVar7 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)
                                  (g_CKeys_PTR_00617dd4,DIK_RETURN), iVar4 = iVar3, iVar7 == 0)) &&
              (iVar7 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)
                                 (g_CKeys_PTR_00617dd4,DIM_LBUTTON), iVar7 == 0));
      g_INT_0061ec60 = iVar4;
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_0047e760(g_CEditorToolsPtr);
    }
    iVar3 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)(g_CKeys_PTR_00617dd4,DIK_ESCAPE);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
