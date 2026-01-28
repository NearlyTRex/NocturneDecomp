// Name: core_menu.cpp_configureGraphicsOptions_FUN_00510c80
// Address: 00510c80
// Address Range: [[00510c80, 00511839]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_00510c80(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_00510c80(void)

{
  char cVar1;
  CGame *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char (*pacVar6) [256];
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char (*pacVar11) [256];
  bool bVar12;
  byte bVar13;
  CGame *in_stack_fffffec0;
  char local_40 [32];
  int local_20;
  int local_1c [3];
  
  bVar13 = 0;
  local_20 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffec0);
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
    pcVar9 = &stack0xfffffec0;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    pCVar2 = g_CGamePtr;
    if ((0 < g_GraphicsCardCount) && (g_FullscreenMode != 0)) {
      if ((g_GraphicsCardVendorIDs[g_GraphicsCardHandle] == 0x121a) &&
         (g_GraphicsCardDeviceIDs[g_GraphicsCardHandle] < 6)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
        iVar5 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tri3dfx.dll");
        iVar4 = g_GraphicsCardCount;
        if (iVar5 != 0) {
          pcVar8 = "tri3dfx.dll";
          pcVar10 = g_RendererDllName;
          do {
            cVar1 = *pcVar8;
            *pcVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar10[1] = cVar1;
            pcVar10 = pcVar10 + 2;
          } while (cVar1 != '\0');
          wincore_windll_cpp_kill_FUN_005b71e0();
          wincore_windll_cpp_loadExternalRenderer_FUN_005b6750((HWND)0x0);
          iVar4 = g_FullscreenMode;
          if (g_FullscreenMode != 0) {
LAB_00510e1f:
            wincore_windll_cpp_buildCardList_FUN_005b7db0
                      (&g_GraphicsCardCount,g_GraphicsCardDriverData,g_GraphicsCardNames,
                       g_GraphicsCardVendorIDs,g_GraphicsCardDeviceIDs);
            wincore_windll_cpp_getVideoMemory_FUN_005b7d60(local_1c,local_1c + 1,local_1c + 2);
            iVar4 = g_GraphicsCardCount;
          }
        }
      }
      else {
        iVar5 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tri3dfx.dll");
        iVar4 = g_GraphicsCardCount;
        if (iVar5 == 0) {
          pcVar8 = "tridx6.dll";
          pcVar10 = g_RendererDllName;
          do {
            cVar1 = *pcVar8;
            *pcVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar10[1] = cVar1;
            pcVar10 = pcVar10 + 2;
          } while (cVar1 != '\0');
          wincore_windll_cpp_kill_FUN_005b71e0();
          wincore_windll_cpp_loadExternalRenderer_FUN_005b6750((HWND)0x0);
          if (g_FullscreenMode != 0) goto LAB_00510e1f;
          g_GraphicsCardCount = g_FullscreenMode;
          iVar4 = g_GraphicsCardCount;
        }
      }
      g_GraphicsCardCount = iVar4;
      pCVar2 = g_CGamePtr;
      if ((g_GraphicsCardVendorIDs[g_GraphicsCardHandle] == 0x8086) &&
         (g_GraphicsCardDeviceIDs[g_GraphicsCardHandle] == 0x7800)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((g_GraphicsCardVendorIDs[g_GraphicsCardHandle] == 0x12d2) &&
         (g_GraphicsCardDeviceIDs[g_GraphicsCardHandle] == 0x18)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((g_GraphicsCardVendorIDs[g_GraphicsCardHandle] == 0x12d2) &&
         (g_GraphicsCardDeviceIDs[g_GraphicsCardHandle] == 0x19)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
    }
    pCVar2 = g_CGamePtr;
    if ((g_FullscreenMode == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
      g_CGamePtr->game_pixy = 0x1e0;
      pCVar2->game_pixx = 0x280;
    }
    iVar4 = g_CGamePtr->game_pixy;
    if (iVar4 == 0xf0) {
      pcVar8 = "Resolution : 320x240";
    }
    else if (iVar4 == 300) {
      pcVar8 = "Resolution : 400x300";
    }
    else if (iVar4 == 0x180) {
      pcVar8 = "Resolution : 512x384";
    }
    else if (iVar4 == 0x1e0) {
      pcVar8 = "Resolution : 640x480";
    }
    else if (iVar4 == 600) {
      pcVar8 = "Resolution : 800x600";
    }
    else if (iVar4 == 0x300) {
      pcVar8 = "Resolution : 1024x768";
    }
    else if (iVar4 == 0x400) {
      pcVar8 = "Resolution : 1280x1024";
    }
    else {
      pcVar8 = "Resolution : 320x240";
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar8);
    crt_stdio_c_sprintf_FUN_005fdbd0(g_GraphicsMenuTextBuffers[0],pcVar8);
    uVar7 = g_CGamePtr->halo_mode;
    if (uVar7 == 0) {
      pcVar8 = "Flashlight halo : Off";
LAB_00510f71:
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar8);
      crt_stdio_c_sprintf_FUN_005fdbd0(g_GraphicsMenuTextBuffers[1],pcVar8);
    }
    else {
      if (uVar7 < 2) {
        pcVar8 = "Flashlight halo : Simple";
        goto LAB_00510f71;
      }
      if (uVar7 == 2) {
        pcVar8 = "Flashlight halo : Complex";
        goto LAB_00510f71;
      }
    }
    g_FullscreenMode = 0;
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Acceleration disabled in editor")
    ;
    crt_stdio_c_sprintf_FUN_005fdbd0(g_GraphicsMenuTextBuffers[2],pcVar8);
    if (g_RendererDllName[0] == '\0') {
      pcVar8 = "3D API : None";
    }
    else {
      iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"trid3d.dll");
      if (iVar4 == 0) {
        pcVar8 = "3D API : DirectX 5";
      }
      else {
        iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tridx6.dll");
        if (iVar4 == 0) {
          pcVar8 = "3D API : DirectX 6";
        }
        else {
          iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tridx7.dll");
          if (iVar4 == 0) {
            pcVar8 = "3D API : DirectX 7";
          }
          else {
            iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tri3dfx.dll");
            if (iVar4 == 0) {
              pcVar8 = "3D API : Voodoo Blit Emulation";
            }
            else {
              pcVar8 = "3D API : Custom";
            }
          }
        }
      }
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar8);
    crt_stdio_c_sprintf_FUN_005fdbd0(g_GraphicsMenuTextBuffers[3],pcVar8);
    if (g_GraphicsCardCount == 0) {
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("No 3D Hardware detected");
      crt_stdio_c_sprintf_FUN_005fdbd0(g_GraphicsMenuTextBuffers[4],pcVar8);
    }
    else {
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("3D Card : ");
      pcVar10 = g_GraphicsMenuTextBuffers[4];
      do {
        cVar1 = *pcVar8;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar8 = g_GraphicsCardNames[g_GraphicsCardHandle];
      iVar4 = -1;
      pacVar6 = g_GraphicsMenuTextBuffers + 4;
      do {
        pacVar11 = pacVar6;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pacVar11 = (char (*) [256])((int)pacVar6 + (uint)bVar13 * -2 + 1);
        pcVar10 = *pacVar6;
        pacVar6 = pacVar11;
      } while (*pcVar10 != '\0');
      pcVar10 = pacVar11[-1] + 0xff;
      do {
        cVar1 = *pcVar8;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      crt_stdio_c_sprintf_FUN_005fdbd0(local_40," (%d)",g_GraphicsCardHandle);
      pcVar8 = local_40;
      iVar4 = -1;
      pacVar6 = g_GraphicsMenuTextBuffers + 4;
      do {
        pacVar11 = pacVar6;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pacVar11 = (char (*) [256])((int)pacVar6 + (uint)bVar13 * -2 + 1);
        pcVar10 = *pacVar6;
        pacVar6 = pacVar11;
      } while (*pcVar10 != '\0');
      pcVar10 = pacVar11[-1] + 0xff;
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
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Bits per pixel : ");
    pcVar10 = g_GraphicsMenuTextBuffers[5];
    do {
      cVar1 = *pcVar8;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffec0,"%d",g_CGamePtr->game_bpp);
    iVar4 = -1;
    pacVar6 = g_GraphicsMenuTextBuffers + 5;
    do {
      pacVar11 = pacVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pacVar11 = (char (*) [256])((int)pacVar6 + (uint)bVar13 * -2 + 1);
      pcVar8 = *pacVar6;
      pacVar6 = pacVar11;
    } while (*pcVar8 != '\0');
    pcVar8 = pacVar11[-1] + 0xff;
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Monitor calibration");
    crt_stdio_c_sprintf_FUN_005fdbd0(g_GraphicsMenuTextBuffers[6],pcVar9);
    if (g_CGamePtr->subtitle_mode == 0) {
      pcVar9 = "Subtitles : Off";
    }
    else {
      pcVar9 = "Subtitles : On";
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar9);
    pcVar8 = g_GraphicsMenuTextBuffers[7];
    do {
      cVar1 = *pcVar9;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    if (g_CGamePtr->quimby_flag == 0) {
      if (g_CGamePtr->nudity_flag == 0) {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Rating: Teen");
        pcVar8 = g_GraphicsMenuTextBuffers[8];
        do {
          cVar1 = *pcVar9;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      else {
        pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Rating: Mature");
        pcVar8 = g_GraphicsMenuTextBuffers[8];
        do {
          cVar1 = *pcVar9;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar9[1];
          pcVar9 = pcVar9 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
    }
    iVar4 = 9;
    if (g_CGamePtr->quimby_flag != 0) {
      iVar4 = 8;
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Graphic Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_GraphicsMenuTextPointers,iVar4,&local_20,0xfa,(int)pcVar9);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar5 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"trid3d.dll");
    pCVar2 = g_CGamePtr;
    bVar12 = iVar5 != 0;
    if ((!bVar12) && (0x1e0 < g_CGamePtr->game_pixy)) {
      g_CGamePtr->game_pixy = 0x1e0;
      pCVar2->game_pixx = 0x280;
    }
    pCVar2 = g_CGamePtr;
    iVar5 = g_GraphicsCardHandle;
    iVar3 = g_GraphicsCardCount;
    switch(iVar4) {
    case 0:
      if (g_MenuLeftRightPressed == 1) {
        if (((g_CGamePtr->game_pixy == 0xf0) && (24000000 < local_1c[0])) && (bVar12)) {
          g_CGamePtr->game_pixx = 0x500;
          pCVar2->game_pixy = 0x400;
          iVar5 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else if (((g_CGamePtr->game_pixy == 0xf0) && (12000000 < local_1c[0])) && (bVar12)) {
LAB_005114a9:
          g_CGamePtr->game_pixy = 0x300;
          pCVar2->game_pixx = 0x400;
          iVar5 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else {
          iVar4 = g_CGamePtr->game_pixy;
          if (iVar4 == 0xf0) {
LAB_005111c6:
            g_CGamePtr->game_pixy = 0x1e0;
            pCVar2->game_pixx = 0x280;
            iVar5 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
          else if (iVar4 == 300) {
            g_CGamePtr->game_pixy = 0xf0;
            pCVar2->game_pixx = 0x140;
            iVar5 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
          else if (iVar4 == 0x180) {
LAB_005114dd:
            g_CGamePtr->game_pixy = 0xf0;
            pCVar2->game_pixx = 0x140;
            iVar5 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
          else if (iVar4 == 0x1e0) {
            g_CGamePtr->game_pixy = 0x180;
            pCVar2->game_pixx = 0x200;
            iVar5 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
          else {
            if (iVar4 == 600) goto LAB_005111c6;
            if (iVar4 != 0x300) goto LAB_005114dd;
            g_CGamePtr->game_pixy = 600;
            pCVar2->game_pixx = 800;
            iVar5 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
        }
      }
      else {
        iVar4 = g_CGamePtr->game_pixy;
        if (iVar4 == 0xf0) {
          g_CGamePtr->game_pixx = 0x200;
          pCVar2->game_pixy = 0x180;
          iVar5 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else if (iVar4 == 300) {
          g_CGamePtr->game_pixx = 0x200;
          pCVar2->game_pixy = 0x180;
          iVar5 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else if (iVar4 == 0x180) {
          g_CGamePtr->game_pixx = 0x280;
          pCVar2->game_pixy = 0x1e0;
          iVar5 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else if (((local_1c[0] < 0xb71b01) || (g_CGamePtr->game_pixy != 0x1e0)) || (!bVar12)) {
          if (((12000000 < local_1c[0]) && (g_CGamePtr->game_pixy == 600)) && (bVar12))
          goto LAB_005114a9;
          if (((local_1c[0] < 0x16e3601) || (g_CGamePtr->game_pixy != 0x300)) || (!bVar12)) {
            g_CGamePtr->game_pixx = 0x140;
            pCVar2->game_pixy = 0xf0;
            iVar5 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
          else {
            g_CGamePtr->game_pixy = 0x400;
            pCVar2->game_pixx = 0x500;
            iVar5 = g_GraphicsCardHandle;
            iVar3 = g_GraphicsCardCount;
          }
        }
        else {
          g_CGamePtr->game_pixx = 800;
          pCVar2->game_pixy = 600;
          iVar5 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
      }
      break;
    case 1:
      if (g_MenuLeftRightPressed == 1) {
        if (g_CGamePtr->halo_mode == 0) {
          g_CGamePtr->halo_mode = 2;
          iVar5 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else if (g_CGamePtr->halo_mode == 1) {
LAB_0051164c:
          g_CGamePtr->halo_mode = 0;
          iVar5 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else {
          g_CGamePtr->halo_mode = 1;
          iVar5 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
      }
      else if (g_CGamePtr->halo_mode == 0) {
        g_CGamePtr->halo_mode = 1;
        iVar5 = g_GraphicsCardHandle;
        iVar3 = g_GraphicsCardCount;
      }
      else {
        if (g_CGamePtr->halo_mode != 1) goto LAB_0051164c;
        g_CGamePtr->halo_mode = 2;
        iVar5 = g_GraphicsCardHandle;
        iVar3 = g_GraphicsCardCount;
      }
      break;
    case 2:
      g_GraphicsCardCount = 0;
      g_FullscreenMode = 0;
      iVar3 = g_GraphicsCardCount;
      break;
    case 3:
      if (g_GraphicsCardVendorIDs[g_GraphicsCardHandle] != 0x121a) {
        iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"trid3d.dll");
        if (iVar4 == 0) {
          pcVar9 = "tridx6.dll";
LAB_005116c3:
          pcVar8 = g_RendererDllName;
          do {
            cVar1 = *pcVar9;
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar8[1] = cVar1;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != '\0');
        }
        else {
          iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tridx6.dll");
          if (iVar4 == 0) {
            pcVar9 = "tridx7.dll";
            goto LAB_005116c3;
          }
          iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tridx7.dll");
          if (iVar4 == 0) {
            pcVar9 = "trid3d.dll";
            goto LAB_005116c3;
          }
          iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tri3dfx.dll");
          if (iVar4 == 0) {
            pcVar9 = "trid3d.dll";
            goto LAB_005116c3;
          }
        }
        wincore_windll_cpp_kill_FUN_005b71e0();
        wincore_windll_cpp_loadExternalRenderer_FUN_005b6750((HWND)0x0);
        iVar5 = g_GraphicsCardHandle;
        iVar3 = g_FullscreenMode;
        if (g_FullscreenMode != 0) {
          wincore_windll_cpp_buildCardList_FUN_005b7db0
                    (&g_GraphicsCardCount,g_GraphicsCardDriverData,g_GraphicsCardNames,
                     g_GraphicsCardVendorIDs,g_GraphicsCardDeviceIDs);
          wincore_windll_cpp_getVideoMemory_FUN_005b7d60(local_1c,local_1c + 1,local_1c + 2);
          iVar5 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
      }
      break;
    case 4:
      iVar5 = g_GraphicsCardCount;
      if (g_GraphicsCardCount != 0) {
        g_GraphicsCardHandle = g_GraphicsCardHandle + 1;
        if (g_GraphicsCardCount <= g_GraphicsCardHandle) {
          g_GraphicsCardHandle = 0;
        }
        wincore_windll_cpp_selectCard_FUN_005b7d90(g_GraphicsCardHandle);
        iVar5 = g_GraphicsCardHandle;
        iVar3 = g_GraphicsCardCount;
      }
      break;
    case 5:
      if (g_CGamePtr->game_bpp == 0x10) {
        g_CGamePtr->game_bpp = 0x20;
        iVar5 = g_GraphicsCardHandle;
        iVar3 = g_GraphicsCardCount;
      }
      else {
        g_CGamePtr->game_bpp = 0x10;
        iVar5 = g_GraphicsCardHandle;
        iVar3 = g_GraphicsCardCount;
      }
      break;
    case 6:
      core_menu_cpp_showCalibrationTest_FUN_00510ba0();
      iVar5 = g_GraphicsCardHandle;
      iVar3 = g_GraphicsCardCount;
      break;
    case 7:
      g_CGamePtr->subtitle_mode = (uint)(g_CGamePtr->subtitle_mode == 0);
      iVar5 = g_GraphicsCardHandle;
      iVar3 = g_GraphicsCardCount;
      break;
    case 8:
      uVar7 = (uint)(g_CGamePtr->nudity_flag == 0);
      g_CGamePtr->nudity_flag = uVar7;
      pCVar2->blood_flag = uVar7;
      pCVar2->foul_language_flag = uVar7;
      iVar5 = g_GraphicsCardHandle;
      iVar3 = g_GraphicsCardCount;
    }
    g_GraphicsCardCount = iVar3;
    g_GraphicsCardHandle = iVar5;
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar4 != 0) {
      return;
    }
  } while( true );
}
