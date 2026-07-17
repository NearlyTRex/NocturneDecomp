// Name: core_menu.cpp_configureGraphicsOptions_FUN_00510c80
// Address: 00510c80
// MANUAL RECONSTRUCTION
// Address Range: [[00510c80, 00511839]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_00510c80(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_00510c80(void)

{
  uint uVar3;
  CGame *pCVar4;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char (*pacVar6) [256];
  uint uVar7;
  bool bVar12;
  char *pcVar14;
  char local_140 [256];
  char local_40 [32];
  int local_20;
  int local_1c [3];
  CGame *pCVar2;
  int iVar3;

  local_20 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  pacVar6 = g_GraphicsMenuTextBuffers;
  iVar4 = 0;
  do {
    g_GraphicsMenuTextPointers[iVar4 / 4] = (char *)pacVar6;
    iVar4 = iVar4 + 4;
    pacVar6 = pacVar6 + 1;
  } while (iVar4 != 0x24);
  wincore_windll_cpp_buildCardList_FUN_005b7db0
            (&g_GraphicsCardCount,g_GraphicsCardDriverNames,g_GraphicsCardNames,
             g_GraphicsCardVendorIDs,g_GraphicsCardDeviceIDs);
  if (g_GraphicsCardCount <= g_CurrentGraphicsBoard) {
    g_CurrentGraphicsBoard = 0;
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  wincore_windll_cpp_getVideoMemory_FUN_005b7d60(local_1c,local_1c + 1,local_1c + 2);
#if !NOCTURNE_AUTHENTIC_D3D_OPTIONS
  local_1c[0] = 0x10000000;
#endif
  do {
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    pCVar2 = g_CGamePtr;
    if ((0 < g_GraphicsCardCount) && (g_UseDirect3D != 0)) {
      if ((g_GraphicsCardVendorIDs[g_CurrentGraphicsBoard] == 0x121a) &&
         (g_GraphicsCardDeviceIDs[g_CurrentGraphicsBoard] < 6)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
        iVar5 = _stricmp(g_RendererDllPath,"tri3dfx.dll");
        iVar7 = g_GraphicsCardCount;
        if (iVar5 != 0) {
          strcpy(g_RendererDllPath,"tri3dfx.dll");
          wincore_windll_cpp_kill_FUN_005b71e0();
          wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(0);
          iVar7 = g_UseDirect3D;
          if (g_UseDirect3D != 0) {
LAB_00510e1f:
            wincore_windll_cpp_buildCardList_FUN_005b7db0
                      (&g_GraphicsCardCount,g_GraphicsCardDriverNames,g_GraphicsCardNames,
                       g_GraphicsCardVendorIDs,g_GraphicsCardDeviceIDs);
            wincore_windll_cpp_getVideoMemory_FUN_005b7d60(local_1c,local_1c + 1,local_1c + 2);
            iVar7 = g_GraphicsCardCount;
          }
        }
      }
      else {
        iVar6 = _stricmp(g_RendererDllPath,"tri3dfx.dll");
        iVar7 = g_GraphicsCardCount;
        if (iVar6 == 0) {
          strcpy(g_RendererDllPath,"tridx6.dll");
          wincore_windll_cpp_kill_FUN_005b71e0();
          wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(0);
          if (g_UseDirect3D != 0) goto LAB_00510e1f;
          g_GraphicsCardCount = g_UseDirect3D;
          iVar7 = g_GraphicsCardCount;
        }
      }
      g_GraphicsCardCount = iVar7;
      pCVar4 = g_CGamePtr;
      if ((g_GraphicsCardVendorIDs[g_CurrentGraphicsBoard] == 0x8086) &&
         (g_GraphicsCardDeviceIDs[g_CurrentGraphicsBoard] == 0x7800)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar4->game_pixx = 0x280;
        pCVar4->game_pixy = 0x1e0;
      }
      pCVar4 = g_CGamePtr;
      if ((g_GraphicsCardVendorIDs[g_CurrentGraphicsBoard] == 0x12d2) &&
         (g_GraphicsCardDeviceIDs[g_CurrentGraphicsBoard] == 0x18)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar4->game_pixx = 0x280;
        pCVar4->game_pixy = 0x1e0;
      }
      pCVar4 = g_CGamePtr;
      if ((g_GraphicsCardVendorIDs[g_CurrentGraphicsBoard] == 0x12d2) &&
         (g_GraphicsCardDeviceIDs[g_CurrentGraphicsBoard] == 0x19)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar4->game_pixx = 0x280;
        pCVar4->game_pixy = 0x1e0;
      }
    }
    pCVar4 = g_CGamePtr;
#if NOCTURNE_AUTHENTIC_D3D_OPTIONS
    if ((g_UseDirect3D == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
      g_CGamePtr->game_pixy = 0x1e0;
      pCVar4->game_pixx = 0x280;
    }
#endif
    iVar7 = g_CGamePtr->game_pixy;
    if (iVar7 == 0xf0) {
      pcVar14 = "Resolution : 320x240";
    }
    else if (iVar7 == 300) {
      pcVar14 = "Resolution : 400x300";
    }
    else if (iVar7 == 0x180) {
      pcVar14 = "Resolution : 512x384";
    }
    else if (iVar7 == 0x1e0) {
      pcVar14 = "Resolution : 640x480";
    }
    else if (iVar7 == 600) {
      pcVar14 = "Resolution : 800x600";
    }
    else if (iVar7 == 0x300) {
      pcVar14 = "Resolution : 1024x768";
    }
    else if (iVar7 == 0x400) {
      pcVar14 = "Resolution : 1280x1024";
    }
    else {
      pcVar14 = "Resolution : 320x240";
    }
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar14);
    _sprintf(g_GraphicsMenuTextBuffers[0],pcVar14);
    uVar3 = g_CGamePtr->halo_mode;
    if (uVar3 == 0) {
      pcVar14 = "Flashlight halo : Off";
LAB_00510f71:
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar14);
      _sprintf(g_GraphicsMenuTextBuffers[1],pcVar14);
    }
    else {
      if (uVar3 < 2) {
        pcVar14 = "Flashlight halo : Simple";
        goto LAB_00510f71;
      }
      if (uVar3 == 2) {
        pcVar14 = "Flashlight halo : Complex";
        goto LAB_00510f71;
      }
    }
#if NOCTURNE_AUTHENTIC_D3D_OPTIONS
    g_UseDirect3D = 0;
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                        ("Acceleration disabled in editor");
#else
    if (g_UseDirect3D == 0) {
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Acceleration : Off");
    }
    else {
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Acceleration : On");
    }
#endif
    _sprintf(g_GraphicsMenuTextBuffers[2],pcVar14);
    if (g_RendererDllPath[0] == '\0') {
      pcVar14 = "3D API : None";
    }
    else {
      iVar7 = _stricmp(g_RendererDllPath,"trid3d.dll");
      if (iVar7 == 0) {
        pcVar14 = "3D API : DirectX 5";
      }
      else {
        iVar7 = _stricmp(g_RendererDllPath,"tridx6.dll");
        if (iVar7 == 0) {
          pcVar14 = "3D API : DirectX 6";
        }
        else {
          iVar7 = _stricmp(g_RendererDllPath,"tridx7.dll");
          if (iVar7 == 0) {
            pcVar14 = "3D API : DirectX 7";
          }
          else {
            iVar7 = _stricmp(g_RendererDllPath,"tri3dfx.dll");
            if (iVar7 == 0) {
              pcVar14 = "3D API : Voodoo Blit Emulation";
            }
            else {
              pcVar14 = "3D API : Custom";
            }
          }
        }
      }
    }
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar14);
    _sprintf(g_GraphicsMenuTextBuffers[3],pcVar14);
    if (g_GraphicsCardCount == 0) {
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                          ("No 3D Hardware detected");
      _sprintf(g_GraphicsMenuTextBuffers[4],pcVar14);
    }
    else {
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("3D Card : ");
      strcpy(g_GraphicsMenuTextBuffers[4],pcVar14);
      strcat(g_GraphicsMenuTextBuffers[4],g_GraphicsCardNames[g_CurrentGraphicsBoard]);
      _sprintf(local_40," (%d)",g_CurrentGraphicsBoard);
      strcat(g_GraphicsMenuTextBuffers[4],local_40);
    }
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Bits per pixel : ");
    strcpy(g_GraphicsMenuTextBuffers[5],pcVar14);
    _sprintf(local_140,"%d",g_CGamePtr->game_bpp);
    strcat(g_GraphicsMenuTextBuffers[5],local_140);
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Monitor calibration");
    _sprintf(g_GraphicsMenuTextBuffers[6],pcVar14);
    if (g_CGamePtr->subtitle_mode == 0) {
      pcVar14 = "Subtitles : Off";
    }
    else {
      pcVar14 = "Subtitles : On";
    }
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar14);
    strcpy(g_GraphicsMenuTextBuffers[7],pcVar14);
    if (g_CGamePtr->quimby_flag == 0) {
      if (g_CGamePtr->nudity_flag == 0) {
        pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Rating: Teen");
        strcpy(g_GraphicsMenuTextBuffers[8],pcVar14);
      }
      else {
        pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Rating: Mature");
        strcpy(g_GraphicsMenuTextBuffers[8],pcVar14);
      }
    }
    iVar7 = 9;
    if (g_CGamePtr->quimby_flag != 0) {
      iVar7 = 8;
    }
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Graphic Options");
    iVar7 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_GraphicsMenuTextPointers,iVar7,&local_20,0xfa,pcVar14);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar6 = _stricmp(g_RendererDllPath,"trid3d.dll");
    pCVar4 = g_CGamePtr;
    bVar12 = iVar6 != 0;
    if ((!bVar12) && (0x1e0 < g_CGamePtr->game_pixy)) {
      g_CGamePtr->game_pixy = 0x1e0;
      pCVar4->game_pixx = 0x280;
    }
    pCVar4 = g_CGamePtr;
    iVar6 = g_CurrentGraphicsBoard;
    iVar3 = g_GraphicsCardCount;
    switch(iVar7) {
    case 0:
      if (g_MenuLeftRightPressed == 1) {
        if (((g_CGamePtr->game_pixy == 0xf0) && (24000000 < local_1c[0])) && (bVar12)) {
          g_CGamePtr->game_pixx = 0x500;
          pCVar4->game_pixy = 0x400;
          iVar6 = g_CurrentGraphicsBoard;
          iVar3 = g_GraphicsCardCount;
        }
        else if (((g_CGamePtr->game_pixy == 0xf0) && (12000000 < local_1c[0])) && (bVar12)) {
LAB_005114a9:
          g_CGamePtr->game_pixy = 0x300;
          pCVar4->game_pixx = 0x400;
          iVar6 = g_CurrentGraphicsBoard;
          iVar3 = g_GraphicsCardCount;
        }
        else {
          iVar7 = g_CGamePtr->game_pixy;
          if (iVar7 == 0xf0) {
LAB_005111c6:
            g_CGamePtr->game_pixy = 0x1e0;
            pCVar4->game_pixx = 0x280;
            iVar6 = g_CurrentGraphicsBoard;
            iVar3 = g_GraphicsCardCount;
          }
          else if (iVar7 == 300) {
            g_CGamePtr->game_pixy = 0xf0;
            pCVar4->game_pixx = 0x140;
            iVar6 = g_CurrentGraphicsBoard;
            iVar3 = g_GraphicsCardCount;
          }
          else if (iVar7 == 0x180) {
LAB_005114dd:
            g_CGamePtr->game_pixy = 0xf0;
            pCVar4->game_pixx = 0x140;
            iVar6 = g_CurrentGraphicsBoard;
            iVar3 = g_GraphicsCardCount;
          }
          else if (iVar7 == 0x1e0) {
            g_CGamePtr->game_pixy = 0x180;
            pCVar4->game_pixx = 0x200;
            iVar6 = g_CurrentGraphicsBoard;
            iVar3 = g_GraphicsCardCount;
          }
          else {
            if (iVar7 == 600) goto LAB_005111c6;
            if (iVar7 != 0x300) goto LAB_005114dd;
            g_CGamePtr->game_pixy = 600;
            pCVar4->game_pixx = 800;
            iVar6 = g_CurrentGraphicsBoard;
            iVar3 = g_GraphicsCardCount;
          }
        }
      }
      else {
        iVar7 = g_CGamePtr->game_pixy;
        if (iVar7 == 0xf0) {
          g_CGamePtr->game_pixx = 0x200;
          pCVar4->game_pixy = 0x180;
          iVar6 = g_CurrentGraphicsBoard;
          iVar3 = g_GraphicsCardCount;
        }
        else if (iVar7 == 300) {
          g_CGamePtr->game_pixx = 0x200;
          pCVar4->game_pixy = 0x180;
          iVar6 = g_CurrentGraphicsBoard;
          iVar3 = g_GraphicsCardCount;
        }
        else if (iVar7 == 0x180) {
          g_CGamePtr->game_pixx = 0x280;
          pCVar4->game_pixy = 0x1e0;
          iVar6 = g_CurrentGraphicsBoard;
          iVar3 = g_GraphicsCardCount;
        }
        else if (((local_1c[0] < 12000001) || (g_CGamePtr->game_pixy != 0x1e0)) || (!bVar12)) {
          if (((12000000 < local_1c[0]) && (g_CGamePtr->game_pixy == 600)) && (bVar12))
          goto LAB_005114a9;
          if (((local_1c[0] < 24000001) || (g_CGamePtr->game_pixy != 0x300)) || (!bVar12)) {
            g_CGamePtr->game_pixx = 0x140;
            pCVar4->game_pixy = 0xf0;
            iVar6 = g_CurrentGraphicsBoard;
            iVar3 = g_GraphicsCardCount;
          }
          else {
            g_CGamePtr->game_pixy = 0x400;
            pCVar4->game_pixx = 0x500;
            iVar6 = g_CurrentGraphicsBoard;
            iVar3 = g_GraphicsCardCount;
          }
        }
        else {
          g_CGamePtr->game_pixx = 800;
          pCVar4->game_pixy = 600;
          iVar6 = g_CurrentGraphicsBoard;
          iVar3 = g_GraphicsCardCount;
        }
      }
      break;
    case 1:
      if (g_MenuLeftRightPressed == 1) {
        if (g_CGamePtr->halo_mode == 0) {
          g_CGamePtr->halo_mode = 2;
          iVar6 = g_CurrentGraphicsBoard;
          iVar3 = g_GraphicsCardCount;
        }
        else if (g_CGamePtr->halo_mode == 1) {
LAB_0051164c:
          g_CGamePtr->halo_mode = 0;
          iVar6 = g_CurrentGraphicsBoard;
          iVar3 = g_GraphicsCardCount;
        }
        else {
          g_CGamePtr->halo_mode = 1;
          iVar6 = g_CurrentGraphicsBoard;
          iVar3 = g_GraphicsCardCount;
        }
      }
      else if (g_CGamePtr->halo_mode == 0) {
        g_CGamePtr->halo_mode = 1;
        iVar6 = g_CurrentGraphicsBoard;
        iVar3 = g_GraphicsCardCount;
      }
      else {
        if (g_CGamePtr->halo_mode != 1) goto LAB_0051164c;
        g_CGamePtr->halo_mode = 2;
        iVar6 = g_CurrentGraphicsBoard;
        iVar3 = g_GraphicsCardCount;
      }
      break;
    case 2:
      g_GraphicsCardCount = 0;
      g_UseDirect3D = 0;
      iVar3 = g_GraphicsCardCount;
      break;
    case 3:
      if (g_GraphicsCardVendorIDs[g_CurrentGraphicsBoard] != 0x121a) {
        iVar7 = _stricmp(g_RendererDllPath,"trid3d.dll");
        if (iVar7 == 0) {
          pcVar14 = "tridx6.dll";
LAB_005116c3:
          strcpy(g_RendererDllPath,pcVar14);
        }
        else {
          iVar7 = _stricmp(g_RendererDllPath,"tridx6.dll");
          if (iVar7 == 0) {
            pcVar14 = "tridx7.dll";
            goto LAB_005116c3;
          }
          iVar7 = _stricmp(g_RendererDllPath,"tridx7.dll");
          if (iVar7 == 0) {
            pcVar14 = "trid3d.dll";
            goto LAB_005116c3;
          }
          iVar7 = _stricmp(g_RendererDllPath,"tri3dfx.dll");
          if (iVar7 == 0) {
            pcVar14 = "trid3d.dll";
            goto LAB_005116c3;
          }
        }
        wincore_windll_cpp_kill_FUN_005b71e0();
        wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(0);
        iVar6 = g_CurrentGraphicsBoard;
        iVar3 = g_UseDirect3D;
        if (g_UseDirect3D != 0) {
          wincore_windll_cpp_buildCardList_FUN_005b7db0
                    (&g_GraphicsCardCount,g_GraphicsCardDriverNames,g_GraphicsCardNames,
                     g_GraphicsCardVendorIDs,g_GraphicsCardDeviceIDs);
          wincore_windll_cpp_getVideoMemory_FUN_005b7d60(local_1c,local_1c + 1,local_1c + 2);
          iVar6 = g_CurrentGraphicsBoard;
          iVar3 = g_GraphicsCardCount;
        }
      }
      break;
    case 4:
      iVar6 = g_GraphicsCardCount;
      if (g_GraphicsCardCount != 0) {
        g_CurrentGraphicsBoard = g_CurrentGraphicsBoard + 1;
        if (g_GraphicsCardCount <= g_CurrentGraphicsBoard) {
          g_CurrentGraphicsBoard = 0;
        }
        wincore_windll_cpp_selectCard_FUN_005b7d90(g_CurrentGraphicsBoard);
        iVar6 = g_CurrentGraphicsBoard;
        iVar3 = g_GraphicsCardCount;
      }
      break;
    case 5:
      if (g_CGamePtr->game_bpp == 0x10) {
        g_CGamePtr->game_bpp = 0x20;
        iVar6 = g_CurrentGraphicsBoard;
        iVar3 = g_GraphicsCardCount;
      }
      else {
        g_CGamePtr->game_bpp = 0x10;
        iVar6 = g_CurrentGraphicsBoard;
        iVar3 = g_GraphicsCardCount;
      }
      break;
    case 6:
      core_menu_cpp_showCalibrationTest_FUN_00510ba0();
      iVar6 = g_CurrentGraphicsBoard;
      iVar3 = g_GraphicsCardCount;
      break;
    case 7:
      g_CGamePtr->subtitle_mode = (uint)(g_CGamePtr->subtitle_mode == 0);
      iVar6 = g_CurrentGraphicsBoard;
      iVar3 = g_GraphicsCardCount;
      break;
    case 8:
      uVar7 = (uint)(g_CGamePtr->nudity_flag == 0);
      g_CGamePtr->nudity_flag = uVar7;
      pCVar4->blood_flag = uVar7;
      pCVar4->foul_language_flag = uVar7;
      iVar6 = g_CurrentGraphicsBoard;
      iVar3 = g_GraphicsCardCount;
    }
    g_GraphicsCardCount = iVar3;
    g_CurrentGraphicsBoard = iVar6;
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar7 != 0) {
      return;
    }
  } while( true );
}
