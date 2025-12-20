// Name: core_menu.cpp_configureGraphicsOptions_FUN_00510c80
// Address: 00510c80
// Address Range: [[00510c80, 00511839]]
// Convention: __cdecl
// Signature: void core_menu.cpp_configureGraphicsOptions_FUN_00510c80(void)

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
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  char *pcVar9;
  char (*pacVar10) [256];
  bool bVar11;
  byte bVar12;
  int in_stack_00000068;
  CGame *in_stack_fffffec0;
  char *in_stack_ffffff08;
  int local_14;
  
  bVar12 = 0;
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
  local_14 = 0;
  wincore_windll_cpp_getVideoMemory_FUN_005b7d60
            (&local_14,(int *)&stack0xfffffff0,(int *)&stack0xfffffff4);
  do {
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
          pcVar9 = g_RendererDllName;
          do {
            cVar1 = *pcVar8;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
          wincore_windll_cpp_kill_FUN_005b71e0();
          wincore_windll_cpp_loadExternalRenderer_FUN_005b6750((HWND)0x0);
          iVar4 = g_FullscreenMode;
          if (g_FullscreenMode != 0) {
LAB_00510e1f:
            wincore_windll_cpp_buildCardList_FUN_005b7db0
                      (&g_GraphicsCardCount,g_GraphicsCardDriverData,g_GraphicsCardNames,
                       g_GraphicsCardVendorIDs,g_GraphicsCardDeviceIDs);
            wincore_windll_cpp_getVideoMemory_FUN_005b7d60
                      ((int *)&stack0x00000004,(int *)&stack0x00000008,(int *)&stack0x0000000c);
            iVar4 = g_GraphicsCardCount;
          }
        }
      }
      else {
        iVar5 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tri3dfx.dll");
        iVar4 = g_GraphicsCardCount;
        if (iVar5 == 0) {
          pcVar8 = "tridx6.dll";
          pcVar9 = g_RendererDllName;
          do {
            cVar1 = *pcVar8;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
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
    if ((((g_RendererDllName[0] != '\0') &&
         (iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"trid3d.dll"),
         iVar4 != 0)) &&
        (iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tridx6.dll"),
        iVar4 != 0)) &&
       (iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tridx7.dll"),
       iVar4 != 0)) {
      iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tri3dfx.dll");
      if (iVar4 == 0) {
        in_stack_ffffff08 = "3D API : Voodoo Blit Emulation";
      }
      else {
        in_stack_ffffff08 = "3D API : Custom";
      }
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(in_stack_ffffff08);
    in_stack_ffffff08 = g_GraphicsMenuTextBuffers[3];
    crt_stdio_c_sprintf_FUN_005fdbd0(g_GraphicsMenuTextBuffers[3],pcVar8);
    if (g_GraphicsCardCount == 0) {
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                         ("No 3D Hardware detected");
      crt_stdio_c_sprintf_FUN_005fdbd0(g_GraphicsMenuTextBuffers[4],pcVar8);
    }
    else {
      pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("3D Card : ");
      pcVar9 = g_GraphicsMenuTextBuffers[4];
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      pcVar8 = g_GraphicsCardNames[g_GraphicsCardHandle];
      iVar4 = -1;
      pacVar6 = g_GraphicsMenuTextBuffers + 4;
      do {
        pacVar10 = pacVar6;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pacVar10 = (char (*) [256])((int)pacVar6 + (uint)bVar12 * -2 + 1);
        pcVar9 = *pacVar6;
        pacVar6 = pacVar10;
      } while (*pcVar9 != '\0');
      pcVar9 = pacVar10[-1] + 0xff;
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      in_stack_ffffff08 = (char *)0x5113ec;
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0x00000018," (%d)",g_GraphicsCardHandle);
      pcVar8 = &stack0x0000001c;
      iVar4 = -1;
      pacVar6 = g_GraphicsMenuTextBuffers + 4;
      do {
        pacVar10 = pacVar6;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pacVar10 = (char (*) [256])((int)pacVar6 + (uint)bVar12 * -2 + 1);
        pcVar9 = *pacVar6;
        pacVar6 = pacVar10;
      } while (*pcVar9 != '\0');
      pcVar9 = pacVar10[-1] + 0xff;
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Bits per pixel : ");
    pcVar9 = g_GraphicsMenuTextBuffers[5];
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff20,"%d",g_CGamePtr->game_bpp);
    pcVar8 = &stack0xffffff24;
    iVar4 = -1;
    pacVar6 = g_GraphicsMenuTextBuffers + 5;
    do {
      pacVar10 = pacVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pacVar10 = (char (*) [256])((int)pacVar6 + (uint)bVar12 * -2 + 1);
      pcVar9 = *pacVar6;
      pacVar6 = pacVar10;
    } while (*pcVar9 != '\0');
    pcVar9 = pacVar10[-1] + 0xff;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Monitor calibration");
    crt_stdio_c_sprintf_FUN_005fdbd0(g_GraphicsMenuTextBuffers[6],pcVar8);
    if (g_CGamePtr->subtitle_mode == 0) {
      pcVar8 = "Subtitles : Off";
    }
    else {
      pcVar8 = "Subtitles : On";
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar8);
    pcVar9 = g_GraphicsMenuTextBuffers[7];
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    if (g_CGamePtr->quimby_flag == 0) {
      if (g_CGamePtr->nudity_flag == 0) {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Rating: Teen");
        pcVar9 = g_GraphicsMenuTextBuffers[8];
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
      else {
        pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Rating: Mature");
        pcVar9 = g_GraphicsMenuTextBuffers[8];
        do {
          cVar1 = *pcVar8;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
    }
    iVar4 = 9;
    if (g_CGamePtr->quimby_flag != 0) {
      iVar4 = 8;
    }
    pcVar8 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Graphic Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_GraphicsMenuTextPointers,iVar4,(int *)&stack0x00000058,0xfa,(int)pcVar8);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar5 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"trid3d.dll");
    pCVar2 = g_CGamePtr;
    bVar11 = iVar5 != 0;
    if ((!bVar11) && (0x1e0 < g_CGamePtr->game_pixy)) {
      g_CGamePtr->game_pixy = 0x1e0;
      pCVar2->game_pixx = 0x280;
    }
    pCVar2 = g_CGamePtr;
    iVar5 = g_GraphicsCardHandle;
    iVar3 = g_GraphicsCardCount;
    switch(iVar4) {
    case 0:
      if (g_MenuLeftRightPressed == 1) {
        if (((g_CGamePtr->game_pixy == 0xf0) && (24000000 < in_stack_00000068)) && (bVar11)) {
          g_CGamePtr->game_pixx = 0x500;
          pCVar2->game_pixy = 0x400;
          iVar5 = g_GraphicsCardHandle;
          iVar3 = g_GraphicsCardCount;
        }
        else if (((g_CGamePtr->game_pixy == 0xf0) && (12000000 < in_stack_00000068)) && (bVar11)) {
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
        else if (((in_stack_00000068 < 0xb71b01) || (g_CGamePtr->game_pixy != 0x1e0)) || (!bVar11))
        {
          if (((12000000 < in_stack_00000068) && (g_CGamePtr->game_pixy == 600)) && (bVar11))
          goto LAB_005114a9;
          if (((in_stack_00000068 < 0x16e3601) || (g_CGamePtr->game_pixy != 0x300)) || (!bVar11)) {
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
          pcVar8 = "tridx6.dll";
LAB_005116c3:
          pcVar9 = g_RendererDllName;
          do {
            cVar1 = *pcVar8;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
        }
        else {
          iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tridx6.dll");
          if (iVar4 == 0) {
            pcVar8 = "tridx7.dll";
            goto LAB_005116c3;
          }
          iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tridx7.dll");
          if (iVar4 == 0) {
            pcVar8 = "trid3d.dll";
            goto LAB_005116c3;
          }
          iVar4 = crt_string_c_stricmp_FUN_005fe7f0(g_RendererDllName,"tri3dfx.dll");
          if (iVar4 == 0) {
            pcVar8 = "trid3d.dll";
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
          wincore_windll_cpp_getVideoMemory_FUN_005b7d60
                    (&stack0x00000068,(int *)&stack0x0000006c,(int *)&stack0x00000070);
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
