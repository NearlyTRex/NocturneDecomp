// Name: core_menu.cpp_configureGraphicsOptions_FUN_00510c80
// Address: 00510c80
// Address Range: [[00510c80, 00511839]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_00510c80(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_00510c80(void)

{
  char cVar2;
  uint uVar3;
  CGame *pCVar4;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char (*pacVar6) [256];
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char (*pacVar11) [256];
  char (*pacVar12) [256];
  char (*pacVar13) [256];
  bool bVar12;
  byte bVar13;
  char *pcVar14;
  char local_140 [256];
  char local_40 [32];
  int local_20;
  int local_1c [3];
  char cVar1;
  CGame *pCVar2;
  int iVar3;
  
  bVar13 = 0;
  local_20 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  pacVar6 = g_GraphicsMenuTextBuffers;
  iVar4 = 0;
  do {
    *(char (**) [256])((int)g_GraphicsMenuTextPointers + iVar4) = pacVar6;
    iVar4 = iVar4 + 4;
    pacVar6 = pacVar6 + 1;
  } while (iVar4 != 0x24);
  wincore_windll_cpp_buildCardList_FUN_005b7db0
            (&g_GraphicsCardCount,g_GraphicsCardDriverData,g_GraphicsCardNames,
             g_GraphicsCardVendorIDs,g_GraphicsCardDeviceIDs);
  if (g_GraphicsCardCount <= g_GraphicsCardHandle) {
    g_GraphicsCardHandle = 0;
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  wincore_windll_cpp_getVideoMemory_FUN_005b7d60(local_1c,local_1c + 1,local_1c + 2);
  do {
    pcVar9 = local_140;
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    pCVar2 = g_CGamePtr;
    if ((0 < g_GraphicsCardCount) && (g_ExternalRendererActive != 0)) {
      if ((g_GraphicsCardVendorIDs[g_GraphicsCardHandle] == 0x121a) &&
         (g_GraphicsCardDeviceIDs[g_GraphicsCardHandle] < 6)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
        iVar5 = _stricmp(g_RendererDllName,"tri3dfx.dll");
        iVar7 = g_GraphicsCardCount;
        if (iVar5 != 0) {
          pcVar8 = "tri3dfx.dll";
          pcVar10 = g_RendererDllName;
          do {
            cVar1 = *pcVar8;
            *pcVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar2 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar10[1] = cVar2;
            pcVar10 = pcVar10 + 2;
          } while (cVar2 != '\0');
          wincore_windll_cpp_kill_FUN_005b71e0();
          wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(0);
          iVar7 = g_ExternalRendererActive;
          if (g_ExternalRendererActive != 0) {
LAB_00510e1f:
            wincore_windll_cpp_buildCardList_FUN_005b7db0
                      (&g_GraphicsCardCount,g_GraphicsCardDriverData,g_GraphicsCardNames,
                       g_GraphicsCardVendorIDs,g_GraphicsCardDeviceIDs);
            wincore_windll_cpp_getVideoMemory_FUN_005b7d60(local_1c,local_1c + 1,local_1c + 2);
            iVar7 = g_GraphicsCardCount;
          }
        }
      }
      else {
        iVar6 = _stricmp(g_RendererDllName,"tri3dfx.dll");
        iVar7 = g_GraphicsCardCount;
        if (iVar6 == 0) {
          pcVar14 = "tridx6.dll";
          pcVar11 = g_RendererDllName;
          do {
            cVar2 = *pcVar14;
            *pcVar11 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            pcVar11[1] = cVar2;
            pcVar11 = pcVar11 + 2;
          } while (cVar2 != '\0');
          wincore_windll_cpp_kill_FUN_005b71e0();
          wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(0);
          if (g_ExternalRendererActive != 0) goto LAB_00510e1f;
          g_GraphicsCardCount = g_ExternalRendererActive;
          iVar7 = g_GraphicsCardCount;
        }
      }
      g_GraphicsCardCount = iVar7;
      pCVar4 = g_CGamePtr;
      if ((g_GraphicsCardVendorIDs[g_GraphicsCardHandle] == 0x8086) &&
         (g_GraphicsCardDeviceIDs[g_GraphicsCardHandle] == 0x7800)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar4->game_pixx = 0x280;
        pCVar4->game_pixy = 0x1e0;
      }
      pCVar4 = g_CGamePtr;
      if ((g_GraphicsCardVendorIDs[g_GraphicsCardHandle] == 0x12d2) &&
         (g_GraphicsCardDeviceIDs[g_GraphicsCardHandle] == 0x18)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar4->game_pixx = 0x280;
        pCVar4->game_pixy = 0x1e0;
      }
      pCVar4 = g_CGamePtr;
      if ((g_GraphicsCardVendorIDs[g_GraphicsCardHandle] == 0x12d2) &&
         (g_GraphicsCardDeviceIDs[g_GraphicsCardHandle] == 0x19)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar4->game_pixx = 0x280;
        pCVar4->game_pixy = 0x1e0;
      }
    }
    pCVar4 = g_CGamePtr;
    if ((g_ExternalRendererActive == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
      g_CGamePtr->game_pixy = 0x1e0;
      pCVar4->game_pixx = 0x280;
    }
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
    g_ExternalRendererActive = 0;
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                        ("Acceleration disabled in editor");
    _sprintf(g_GraphicsMenuTextBuffers[2],pcVar14);
    if (g_RendererDllName[0] == '\0') {
      pcVar14 = "3D API : None";
    }
    else {
      iVar7 = _stricmp(g_RendererDllName,"trid3d.dll");
      if (iVar7 == 0) {
        pcVar14 = "3D API : DirectX 5";
      }
      else {
        iVar7 = _stricmp(g_RendererDllName,"tridx6.dll");
        if (iVar7 == 0) {
          pcVar14 = "3D API : DirectX 6";
        }
        else {
          iVar7 = _stricmp(g_RendererDllName,"tridx7.dll");
          if (iVar7 == 0) {
            pcVar14 = "3D API : DirectX 7";
          }
          else {
            iVar7 = _stricmp(g_RendererDllName,"tri3dfx.dll");
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
      pcVar11 = g_GraphicsMenuTextBuffers[4];
      do {
        cVar2 = *pcVar14;
        *pcVar11 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar11[1] = cVar2;
        pcVar11 = pcVar11 + 2;
      } while (cVar2 != '\0');
      pcVar14 = g_GraphicsCardNames[g_GraphicsCardHandle];
      iVar7 = -1;
      pacVar13 = g_GraphicsMenuTextBuffers + 4;
      do {
        pacVar12 = pacVar13;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pacVar12 = (char (*) [256])((int)pacVar13 + (uint)bVar13 * -2 + 1);
        pcVar11 = *pacVar13;
        pacVar13 = pacVar12;
      } while (*pcVar11 != '\0');
      pcVar11 = pacVar12[-1] + 0xff;
      do {
        cVar2 = *pcVar14;
        *pcVar11 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar11[1] = cVar2;
        pcVar11 = pcVar11 + 2;
      } while (cVar2 != '\0');
      _sprintf(local_40," (%d)",g_GraphicsCardHandle);
      pcVar14 = local_40;
      iVar7 = -1;
      pacVar13 = g_GraphicsMenuTextBuffers + 4;
      do {
        pacVar12 = pacVar13;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pacVar12 = (char (*) [256])((int)pacVar13 + (uint)bVar13 * -2 + 1);
        pcVar11 = *pacVar13;
        pacVar13 = pacVar12;
      } while (*pcVar11 != '\0');
      pcVar11 = pacVar12[-1] + 0xff;
      do {
        cVar2 = *pcVar14;
        *pcVar11 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar11[1] = cVar2;
        pcVar11 = pcVar11 + 2;
      } while (cVar2 != '\0');
    }
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Bits per pixel : ");
    pcVar11 = g_GraphicsMenuTextBuffers[5];
    do {
      cVar2 = *pcVar14;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    _sprintf(local_140,"%d",g_CGamePtr->game_bpp);
    iVar7 = -1;
    pacVar11 = g_GraphicsMenuTextBuffers + 5;
    do {
      pacVar11 = pacVar11;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pacVar11 = (char (*) [256])((int)pacVar11 + (uint)bVar13 * -2 + 1);
      pcVar14 = *pacVar11;
      pacVar11 = pacVar11;
    } while (*pcVar14 != '\0');
    pcVar14 = pacVar11[-1] + 0xff;
    do {
      cVar2 = *pcVar9;
      *pcVar14 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar14[1] = cVar2;
      pcVar14 = pcVar14 + 2;
    } while (cVar2 != '\0');
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Monitor calibration");
    _sprintf(g_GraphicsMenuTextBuffers[6],pcVar14);
    if (g_CGamePtr->subtitle_mode == 0) {
      pcVar14 = "Subtitles : Off";
    }
    else {
      pcVar14 = "Subtitles : On";
    }
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar14);
    pcVar11 = g_GraphicsMenuTextBuffers[7];
    do {
      cVar2 = *pcVar14;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    if (g_CGamePtr->quimby_flag == 0) {
      if (g_CGamePtr->nudity_flag == 0) {
        pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Rating: Teen");
        pcVar11 = g_GraphicsMenuTextBuffers[8];
        do {
          cVar2 = *pcVar14;
          *pcVar11 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar14[1];
          pcVar14 = pcVar14 + 2;
          pcVar11[1] = cVar2;
          pcVar11 = pcVar11 + 2;
        } while (cVar2 != '\0');
      }
      else {
        pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Rating: Mature");
        pcVar11 = g_GraphicsMenuTextBuffers[8];
        do {
          cVar2 = *pcVar14;
          *pcVar11 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar14[1];
          pcVar14 = pcVar14 + 2;
          pcVar11[1] = cVar2;
          pcVar11 = pcVar11 + 2;
        } while (cVar2 != '\0');
      }
    }
    iVar7 = 9;
    if (g_CGamePtr->quimby_flag != 0) {
      iVar7 = 8;
    }
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Graphic Options");
    iVar7 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_GraphicsMenuTextPointers,iVar7,&local_20,0xfa,(int)pcVar14);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar6 = _stricmp(g_RendererDllName,"trid3d.dll");
    pCVar4 = g_CGamePtr;
    bVar12 = iVar6 != 0;
    if ((!bVar12) && (0x1e0 < g_CGamePtr->game_pixy)) {
      g_CGamePtr->game_pixy = 0x1e0;
      pCVar4->game_pixx = 0x280;
    }
    pCVar4 = g_CGamePtr;
    iVar6 = g_GraphicsCardHandle;
    iVar3 = g_GraphicsCardCount;
    switch(iVar7) {
    case 0:
      if (g_MenuLeftRightPressed == 1) {
        if (((g_CGamePtr->game_pixy == 0xf0) && (24000000 < local_1c[0])) && (bVar12)) {
          g_CGamePtr->game_pixx = 0x500;
          pCVar4->game_pixy = 0x400;
          iVar6 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else if (((g_CGamePtr->game_pixy == 0xf0) && (12000000 < local_1c[0])) && (bVar12)) {
LAB_005114a9:
          g_CGamePtr->game_pixy = 0x300;
          pCVar4->game_pixx = 0x400;
          iVar6 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else {
          iVar7 = g_CGamePtr->game_pixy;
          if (iVar7 == 0xf0) {
LAB_005111c6:
            g_CGamePtr->game_pixy = 0x1e0;
            pCVar4->game_pixx = 0x280;
            iVar6 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
          else if (iVar7 == 300) {
            g_CGamePtr->game_pixy = 0xf0;
            pCVar4->game_pixx = 0x140;
            iVar6 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
          else if (iVar7 == 0x180) {
LAB_005114dd:
            g_CGamePtr->game_pixy = 0xf0;
            pCVar4->game_pixx = 0x140;
            iVar6 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
          else if (iVar7 == 0x1e0) {
            g_CGamePtr->game_pixy = 0x180;
            pCVar4->game_pixx = 0x200;
            iVar6 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
          else {
            if (iVar7 == 600) goto LAB_005111c6;
            if (iVar7 != 0x300) goto LAB_005114dd;
            g_CGamePtr->game_pixy = 600;
            pCVar4->game_pixx = 800;
            iVar6 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
        }
      }
      else {
        iVar7 = g_CGamePtr->game_pixy;
        if (iVar7 == 0xf0) {
          g_CGamePtr->game_pixx = 0x200;
          pCVar4->game_pixy = 0x180;
          iVar6 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else if (iVar7 == 300) {
          g_CGamePtr->game_pixx = 0x200;
          pCVar4->game_pixy = 0x180;
          iVar6 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else if (iVar7 == 0x180) {
          g_CGamePtr->game_pixx = 0x280;
          pCVar4->game_pixy = 0x1e0;
          iVar6 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else if (((local_1c[0] < 0xb71b01) || (g_CGamePtr->game_pixy != 0x1e0)) || (!bVar12)) {
          if (((12000000 < local_1c[0]) && (g_CGamePtr->game_pixy == 600)) && (bVar12))
          goto LAB_005114a9;
          if (((local_1c[0] < 0x16e3601) || (g_CGamePtr->game_pixy != 0x300)) || (!bVar12)) {
            g_CGamePtr->game_pixx = 0x140;
            pCVar4->game_pixy = 0xf0;
            iVar6 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
          else {
            g_CGamePtr->game_pixy = 0x400;
            pCVar4->game_pixx = 0x500;
            iVar6 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
        }
        else {
          g_CGamePtr->game_pixx = 800;
          pCVar4->game_pixy = 600;
          iVar6 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
      }
      break;
    case 1:
      if (g_MenuLeftRightPressed == 1) {
        if (g_CGamePtr->halo_mode == 0) {
          g_CGamePtr->halo_mode = 2;
          iVar6 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else if (g_CGamePtr->halo_mode == 1) {
LAB_0051164c:
          g_CGamePtr->halo_mode = 0;
          iVar6 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else {
          g_CGamePtr->halo_mode = 1;
          iVar6 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
      }
      else if (g_CGamePtr->halo_mode == 0) {
        g_CGamePtr->halo_mode = 1;
        iVar6 = g_GraphicsCardHandle;
        iVar3 = g_GraphicsCardCount;
      }
      else {
        if (g_CGamePtr->halo_mode != 1) goto LAB_0051164c;
        g_CGamePtr->halo_mode = 2;
        iVar6 = g_GraphicsCardHandle;
        iVar3 = g_GraphicsCardCount;
      }
      break;
    case 2:
      g_GraphicsCardCount = 0;
      g_ExternalRendererActive = 0;
      iVar3 = g_GraphicsCardCount;
      break;
    case 3:
      if (g_GraphicsCardVendorIDs[g_GraphicsCardHandle] != 0x121a) {
        iVar7 = _stricmp(g_RendererDllName,"trid3d.dll");
        if (iVar7 == 0) {
          pcVar14 = "tridx6.dll";
LAB_005116c3:
          pcVar11 = g_RendererDllName;
          do {
            cVar2 = *pcVar14;
            *pcVar11 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            pcVar11[1] = cVar2;
            pcVar11 = pcVar11 + 2;
          } while (cVar2 != '\0');
        }
        else {
          iVar7 = _stricmp(g_RendererDllName,"tridx6.dll");
          if (iVar7 == 0) {
            pcVar14 = "tridx7.dll";
            goto LAB_005116c3;
          }
          iVar7 = _stricmp(g_RendererDllName,"tridx7.dll");
          if (iVar7 == 0) {
            pcVar14 = "trid3d.dll";
            goto LAB_005116c3;
          }
          iVar7 = _stricmp(g_RendererDllName,"tri3dfx.dll");
          if (iVar7 == 0) {
            pcVar14 = "trid3d.dll";
            goto LAB_005116c3;
          }
        }
        wincore_windll_cpp_kill_FUN_005b71e0();
        wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(0);
        iVar6 = g_GraphicsCardHandle;
        iVar3 = g_ExternalRendererActive;
        if (g_ExternalRendererActive != 0) {
          wincore_windll_cpp_buildCardList_FUN_005b7db0
                    (&g_GraphicsCardCount,g_GraphicsCardDriverData,g_GraphicsCardNames,
                     g_GraphicsCardVendorIDs,g_GraphicsCardDeviceIDs);
          wincore_windll_cpp_getVideoMemory_FUN_005b7d60(local_1c,local_1c + 1,local_1c + 2);
          iVar6 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
      }
      break;
    case 4:
      iVar6 = g_GraphicsCardCount;
      if (g_GraphicsCardCount != 0) {
        g_GraphicsCardHandle = g_GraphicsCardHandle + 1;
        if (g_GraphicsCardCount <= g_GraphicsCardHandle) {
          g_GraphicsCardHandle = 0;
        }
        wincore_windll_cpp_selectCard_FUN_005b7d90(g_GraphicsCardHandle);
        iVar6 = g_GraphicsCardHandle;
        iVar3 = g_GraphicsCardCount;
      }
      break;
    case 5:
      if (g_CGamePtr->game_bpp == 0x10) {
        g_CGamePtr->game_bpp = 0x20;
        iVar6 = g_GraphicsCardHandle;
        iVar3 = g_GraphicsCardCount;
      }
      else {
        g_CGamePtr->game_bpp = 0x10;
        iVar6 = g_GraphicsCardHandle;
        iVar3 = g_GraphicsCardCount;
      }
      break;
    case 6:
      core_menu_cpp_showCalibrationTest_FUN_00510ba0();
      iVar6 = g_GraphicsCardHandle;
      iVar3 = g_GraphicsCardCount;
      break;
    case 7:
      g_CGamePtr->subtitle_mode = (uint)(g_CGamePtr->subtitle_mode == 0);
      iVar6 = g_GraphicsCardHandle;
      iVar3 = g_GraphicsCardCount;
      break;
    case 8:
      uVar7 = (uint)(g_CGamePtr->nudity_flag == 0);
      g_CGamePtr->nudity_flag = uVar7;
      pCVar4->blood_flag = uVar7;
      pCVar4->foul_language_flag = uVar7;
      iVar6 = g_GraphicsCardHandle;
      iVar3 = g_GraphicsCardCount;
    }
    g_GraphicsCardCount = iVar3;
    g_GraphicsCardHandle = iVar6;
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar7 != 0) {
      return;
    }
  } while( true );
}
