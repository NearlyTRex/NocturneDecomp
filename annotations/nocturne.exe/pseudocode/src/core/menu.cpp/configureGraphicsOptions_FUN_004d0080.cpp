// Name: core_menu.cpp_configureGraphicsOptions_FUN_004d0080
// Address: 004d0080
// Address Range: [[004d0080, 004d0cc5]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_004d0080(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004d03ba) */
/* WARNING: Removing unreachable block (ram,0x004d075e) */
/* WARNING: Removing unreachable block (ram,0x004d03d0) */

void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_004d0080(void)

{
  char cVar1;
  bool bVar2;
  CGame *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  byte bVar13;
  char local_120 [256];
  int local_20;
  int local_1c [3];
  
  bVar13 = 0;
  local_20 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(g_CGamePtr);
  pcVar7 = g_CHAR_ARRAY_01cc5b80;
  iVar5 = 0;
  do {
    *(char **)((int)&g_CHAR_PTR_01cc6480 + iVar5) = pcVar7;
    iVar5 = iVar5 + 4;
    pcVar7 = pcVar7 + 0x100;
  } while (iVar5 != 0x24);
  engine_special_cpp_buildCardList_FUN_00532d20
            (&g_INT_01cc64a8,&g_CHAR_PTR_01cc64ac,&g_CHAR_PTR_01cc64ec,&g_INT_01cc652c,
             &g_INT_01cc656c);
  if (g_INT_01cc64a8 <= g_CurrentGraphicsBoard) {
    g_CurrentGraphicsBoard = 0;
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  engine_special_cpp_getVideoMemory_FUN_00532cd0(local_1c,local_1c + 1,local_1c + 2);
  iVar5 = engine_dosio_cpp_getFileSize_FUN_004568c0(&CHAR_00h_0058869e,"tridx6.dll");
  bVar2 = false;
  iVar6 = engine_dosio_cpp_getFileSize_FUN_004568c0(&CHAR_00h_005886ab,"tri3dfx.dll");
  if (iVar5 == iVar6) {
    bVar2 = true;
  }
  do {
    pcVar7 = local_120;
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_004deae0(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_004dec50(&g_CMoonInstance);
    pCVar3 = g_CGamePtr;
    if ((0 < g_INT_01cc64a8) && (g_UseDirect3D != 0)) {
      if (((&g_INT_01cc652c)[g_CurrentGraphicsBoard] == 0x121a) &&
         ((&g_INT_01cc656c)[g_CurrentGraphicsBoard] < 6)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar3->game_pixx = 0x280;
        pCVar3->game_pixy = 0x1e0;
        iVar6 = _stricmp(g_RendererDllPath,"tri3dfx.dll");
        iVar5 = g_INT_01cc64a8;
        if (iVar6 != 0) {
          pcVar9 = "tri3dfx.dll";
          pcVar10 = g_RendererDllPath;
          do {
            cVar1 = *pcVar9;
            *pcVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar10[1] = cVar1;
            pcVar10 = pcVar10 + 2;
          } while (cVar1 != '\0');
          engine_special_cpp_kill_FUN_005322b0();
          engine_special_cpp_loadExternalRenderer_FUN_00531780(0);
          iVar5 = g_UseDirect3D;
          if (g_UseDirect3D != 0) {
LAB_004d0249:
            engine_special_cpp_buildCardList_FUN_00532d20
                      (&g_INT_01cc64a8,&g_CHAR_PTR_01cc64ac,&g_CHAR_PTR_01cc64ec,&g_INT_01cc652c,
                       &g_INT_01cc656c);
            engine_special_cpp_getVideoMemory_FUN_00532cd0(local_1c,local_1c + 1,local_1c + 2);
            iVar5 = g_INT_01cc64a8;
          }
        }
      }
      else {
        iVar6 = _stricmp(g_RendererDllPath,"tri3dfx.dll");
        iVar5 = g_INT_01cc64a8;
        if (iVar6 == 0) {
          pcVar9 = "tridx6.dll";
          pcVar10 = g_RendererDllPath;
          do {
            cVar1 = *pcVar9;
            *pcVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar10[1] = cVar1;
            pcVar10 = pcVar10 + 2;
          } while (cVar1 != '\0');
          engine_special_cpp_kill_FUN_005322b0();
          engine_special_cpp_loadExternalRenderer_FUN_00531780(0);
          if (g_UseDirect3D != 0) goto LAB_004d0249;
          g_INT_01cc64a8 = g_UseDirect3D;
          iVar5 = g_INT_01cc64a8;
        }
      }
      g_INT_01cc64a8 = iVar5;
      pCVar3 = g_CGamePtr;
      if (((&g_INT_01cc652c)[g_CurrentGraphicsBoard] == 0x8086) &&
         ((&g_INT_01cc656c)[g_CurrentGraphicsBoard] == 0x7800)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar3->game_pixx = 0x280;
        pCVar3->game_pixy = 0x1e0;
      }
      pCVar3 = g_CGamePtr;
      if (((&g_INT_01cc652c)[g_CurrentGraphicsBoard] == 0x12d2) &&
         ((&g_INT_01cc656c)[g_CurrentGraphicsBoard] == 0x18)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar3->game_pixx = 0x280;
        pCVar3->game_pixy = 0x1e0;
      }
      pCVar3 = g_CGamePtr;
      if (((&g_INT_01cc652c)[g_CurrentGraphicsBoard] == 0x12d2) &&
         ((&g_INT_01cc656c)[g_CurrentGraphicsBoard] == 0x19)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar3->game_pixx = 0x280;
        pCVar3->game_pixy = 0x1e0;
      }
    }
    pCVar3 = g_CGamePtr;
    if ((g_UseDirect3D == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
      g_CGamePtr->game_pixy = 0x1e0;
      pCVar3->game_pixx = 0x280;
    }
    iVar5 = g_CGamePtr->game_pixy;
    if (iVar5 == 0xf0) {
      pcVar9 = "Resolution : 320x240";
    }
    else if (iVar5 == 300) {
      pcVar9 = "Resolution : 400x300";
    }
    else if (iVar5 == 0x180) {
      pcVar9 = "Resolution : 512x384";
    }
    else if (iVar5 == 0x1e0) {
      pcVar9 = "Resolution : 640x480";
    }
    else if (iVar5 == 600) {
      pcVar9 = "Resolution : 800x600";
    }
    else if (iVar5 == 0x300) {
      pcVar9 = "Resolution : 1024x768";
    }
    else if (iVar5 == 0x400) {
      pcVar9 = "Resolution : 1280x1024";
    }
    else {
      pcVar9 = "Resolution : 320x240";
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
    _sprintf(g_CHAR_ARRAY_01cc5b80,pcVar9);
    uVar8 = g_CGamePtr->halo_mode;
    if (uVar8 == 0) {
      pcVar9 = "Flashlight halo : Off";
LAB_004d039c:
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
      _sprintf(g_CHAR_ARRAY_01cc5c80,pcVar9);
    }
    else {
      if (uVar8 < 2) {
        pcVar9 = "Flashlight halo : Simple";
        goto LAB_004d039c;
      }
      if (uVar8 == 2) {
        pcVar9 = "Flashlight halo : Complex";
        goto LAB_004d039c;
      }
    }
    if (g_UseDirect3D == 0) {
      pcVar9 = "3D Hardware : Off";
    }
    else {
      pcVar9 = "3D Hardware : On";
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
    _sprintf(g_CHAR_ARRAY_01cc5d80,pcVar9);
    iVar5 = _stricmp(g_RendererDllPath,"trid3d.dll");
    if (iVar5 == 0) {
      pcVar9 = "3D API : DirectX 5";
    }
    else {
      iVar5 = _stricmp(g_RendererDllPath,"tridx6.dll");
      if (iVar5 == 0) {
        pcVar9 = "3D API : DirectX 6";
      }
      else {
        iVar5 = _stricmp(g_RendererDllPath,"tridx7.dll");
        if (iVar5 == 0) {
          pcVar9 = "3D API : DirectX 7";
        }
        else {
          iVar5 = _stricmp(g_RendererDllPath,"tri3dfx.dll");
          if (iVar5 == 0) {
            if (bVar2) {
              pcVar9 = "3D API : DirectX 6";
            }
            else {
              pcVar9 = "3D API : Voodoo Blit Emulation";
            }
          }
          else {
            pcVar9 = "3D API : Custom";
          }
        }
      }
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar9);
    _sprintf(g_CHAR_ARRAY_01cc5e80,pcVar9);
    if (g_INT_01cc64a8 == 0) {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                         ("No 3D Hardware detected");
      _sprintf(g_CHAR_ARRAY_01cc5f80,pcVar9);
    }
    else {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("3D Card : ");
      pcVar10 = g_CHAR_ARRAY_01cc5f80;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      pcVar9 = (&g_CHAR_PTR_01cc64ec)[g_CurrentGraphicsBoard];
      iVar5 = -1;
      pcVar10 = g_CHAR_ARRAY_01cc5f80;
      do {
        pcVar11 = pcVar10;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Bits per pixel : ");
    pcVar10 = &DAT_01cc6080;
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_120,"%d",g_CGamePtr->game_bpp);
    iVar5 = -1;
    pcVar9 = &DAT_01cc6080;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar7;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Monitor calibration");
    _sprintf(g_CHAR_ARRAY_01cc6180,pcVar7);
    if (g_CGamePtr->subtitle_mode == 0) {
      pcVar7 = "Subtitles : Off";
    }
    else {
      pcVar7 = "Subtitles : On";
    }
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar7);
    pcVar9 = &DAT_01cc6280;
    do {
      cVar1 = *pcVar7;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    if (g_CGamePtr->quimby_flag == 0) {
      if (g_CGamePtr->nudity_flag == 0) {
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Rating: Teen");
        pcVar9 = &DAT_01cc6380;
        do {
          cVar1 = *pcVar7;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
      else {
        pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Rating: Mature");
        pcVar9 = &DAT_01cc6380;
        do {
          cVar1 = *pcVar7;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
    }
    iVar5 = 9;
    if (g_CGamePtr->quimby_flag != 0) {
      iVar5 = 8;
    }
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Graphic Options");
    iVar5 = core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440
                      (&g_CHAR_PTR_01cc6480,iVar5,&local_20,0xfa,pcVar7);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar6 = _stricmp(g_RendererDllPath,"trid3d.dll");
    pCVar3 = g_CGamePtr;
    bVar12 = iVar6 != 0;
    if ((!bVar12) && (0x1e0 < g_CGamePtr->game_pixy)) {
      g_CGamePtr->game_pixy = 0x1e0;
      pCVar3->game_pixx = 0x280;
    }
    pCVar3 = g_CGamePtr;
    iVar6 = g_CurrentGraphicsBoard;
    iVar4 = g_INT_01cc64a8;
    switch(iVar5) {
    case 0:
      if (g_MenuLeftRightPressed == 1) {
        if (((g_CGamePtr->game_pixy == 0xf0) && (24000000 < local_1c[0])) && (bVar12)) {
          g_CGamePtr->game_pixx = 0x500;
          pCVar3->game_pixy = 0x400;
          iVar6 = g_CurrentGraphicsBoard;
          iVar4 = g_INT_01cc64a8;
        }
        else if (((g_CGamePtr->game_pixy == 0xf0) && (12000000 < local_1c[0])) && (bVar12)) {
LAB_004d08e7:
          g_CGamePtr->game_pixy = 0x300;
          pCVar3->game_pixx = 0x400;
          iVar6 = g_CurrentGraphicsBoard;
          iVar4 = g_INT_01cc64a8;
        }
        else {
          iVar5 = g_CGamePtr->game_pixy;
          if (iVar5 == 0xf0) {
LAB_004d061e:
            g_CGamePtr->game_pixy = 0x1e0;
            pCVar3->game_pixx = 0x280;
            iVar6 = g_CurrentGraphicsBoard;
            iVar4 = g_INT_01cc64a8;
          }
          else if (iVar5 == 300) {
            g_CGamePtr->game_pixy = 0xf0;
            pCVar3->game_pixx = 0x140;
            iVar6 = g_CurrentGraphicsBoard;
            iVar4 = g_INT_01cc64a8;
          }
          else if (iVar5 == 0x180) {
LAB_004d091b:
            g_CGamePtr->game_pixy = 0xf0;
            pCVar3->game_pixx = 0x140;
            iVar6 = g_CurrentGraphicsBoard;
            iVar4 = g_INT_01cc64a8;
          }
          else if (iVar5 == 0x1e0) {
            g_CGamePtr->game_pixy = 0x180;
            pCVar3->game_pixx = 0x200;
            iVar6 = g_CurrentGraphicsBoard;
            iVar4 = g_INT_01cc64a8;
          }
          else {
            if (iVar5 == 600) goto LAB_004d061e;
            if (iVar5 != 0x300) goto LAB_004d091b;
            g_CGamePtr->game_pixy = 600;
            pCVar3->game_pixx = 800;
            iVar6 = g_CurrentGraphicsBoard;
            iVar4 = g_INT_01cc64a8;
          }
        }
      }
      else {
        iVar5 = g_CGamePtr->game_pixy;
        if (iVar5 == 0xf0) {
          g_CGamePtr->game_pixx = 0x200;
          pCVar3->game_pixy = 0x180;
          iVar6 = g_CurrentGraphicsBoard;
          iVar4 = g_INT_01cc64a8;
        }
        else if (iVar5 == 300) {
          g_CGamePtr->game_pixx = 0x200;
          pCVar3->game_pixy = 0x180;
          iVar6 = g_CurrentGraphicsBoard;
          iVar4 = g_INT_01cc64a8;
        }
        else if (iVar5 == 0x180) {
          g_CGamePtr->game_pixx = 0x280;
          pCVar3->game_pixy = 0x1e0;
          iVar6 = g_CurrentGraphicsBoard;
          iVar4 = g_INT_01cc64a8;
        }
        else if (((local_1c[0] < 0xb71b01) || (g_CGamePtr->game_pixy != 0x1e0)) || (!bVar12)) {
          if (((12000000 < local_1c[0]) && (g_CGamePtr->game_pixy == 600)) && (bVar12))
          goto LAB_004d08e7;
          if (((local_1c[0] < 0x16e3601) || (g_CGamePtr->game_pixy != 0x300)) || (!bVar12)) {
            g_CGamePtr->game_pixx = 0x140;
            pCVar3->game_pixy = 0xf0;
            iVar6 = g_CurrentGraphicsBoard;
            iVar4 = g_INT_01cc64a8;
          }
          else {
            g_CGamePtr->game_pixy = 0x400;
            pCVar3->game_pixx = 0x500;
            iVar6 = g_CurrentGraphicsBoard;
            iVar4 = g_INT_01cc64a8;
          }
        }
        else {
          g_CGamePtr->game_pixx = 800;
          pCVar3->game_pixy = 600;
          iVar6 = g_CurrentGraphicsBoard;
          iVar4 = g_INT_01cc64a8;
        }
      }
      break;
    case 1:
      if (g_MenuLeftRightPressed == 1) {
        if (g_CGamePtr->halo_mode == 0) {
          g_CGamePtr->halo_mode = 2;
          iVar6 = g_CurrentGraphicsBoard;
          iVar4 = g_INT_01cc64a8;
        }
        else if (g_CGamePtr->halo_mode == 1) {
LAB_004d0a84:
          g_CGamePtr->halo_mode = 0;
          iVar6 = g_CurrentGraphicsBoard;
          iVar4 = g_INT_01cc64a8;
        }
        else {
          g_CGamePtr->halo_mode = 1;
          iVar6 = g_CurrentGraphicsBoard;
          iVar4 = g_INT_01cc64a8;
        }
      }
      else if (g_CGamePtr->halo_mode == 0) {
        g_CGamePtr->halo_mode = 1;
        iVar6 = g_CurrentGraphicsBoard;
        iVar4 = g_INT_01cc64a8;
      }
      else {
        if (g_CGamePtr->halo_mode != 1) goto LAB_004d0a84;
        g_CGamePtr->halo_mode = 2;
        iVar6 = g_CurrentGraphicsBoard;
        iVar4 = g_INT_01cc64a8;
      }
      break;
    case 2:
      g_UseDirect3D = 1 - g_UseDirect3D;
      iVar4 = g_UseDirect3D;
      if (g_UseDirect3D != 0) {
        engine_special_cpp_kill_FUN_005322b0();
        engine_special_cpp_loadExternalRenderer_FUN_00531780(0);
        if (g_UseDirect3D == 0) {
          g_INT_01cc64a8 = g_UseDirect3D;
          iVar6 = g_CurrentGraphicsBoard;
          iVar4 = g_INT_01cc64a8;
        }
        else {
LAB_004d0af9:
          engine_special_cpp_buildCardList_FUN_00532d20
                    (&g_INT_01cc64a8,&g_CHAR_PTR_01cc64ac,&g_CHAR_PTR_01cc64ec,&g_INT_01cc652c,
                     &g_INT_01cc656c);
          engine_special_cpp_getVideoMemory_FUN_00532cd0(local_1c,local_1c + 1,local_1c + 2);
          iVar6 = g_CurrentGraphicsBoard;
          iVar4 = g_INT_01cc64a8;
        }
      }
      break;
    case 3:
      if ((&g_INT_01cc652c)[g_CurrentGraphicsBoard] != 0x121a) {
        iVar5 = _stricmp(g_RendererDllPath,"trid3d.dll");
        if (iVar5 == 0) {
          pcVar7 = "tridx6.dll";
LAB_004d0b7a:
          pcVar9 = g_RendererDllPath;
          do {
            cVar1 = *pcVar7;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar7[1];
            pcVar7 = pcVar7 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
        }
        else {
          iVar5 = _stricmp(g_RendererDllPath,"tridx6.dll");
          if (iVar5 == 0) {
            pcVar7 = "tridx7.dll";
            goto LAB_004d0b7a;
          }
          iVar5 = _stricmp(g_RendererDllPath,"tridx7.dll");
          if (iVar5 == 0) {
            pcVar7 = "trid3d.dll";
            goto LAB_004d0b7a;
          }
          iVar5 = _stricmp(g_RendererDllPath,"tri3dfx.dll");
          if (iVar5 == 0) {
            pcVar7 = "trid3d.dll";
            goto LAB_004d0b7a;
          }
        }
        engine_special_cpp_kill_FUN_005322b0();
        engine_special_cpp_loadExternalRenderer_FUN_00531780(0);
        iVar6 = g_CurrentGraphicsBoard;
        iVar4 = g_UseDirect3D;
        if (g_UseDirect3D != 0) goto LAB_004d0af9;
      }
      break;
    case 4:
      iVar6 = g_INT_01cc64a8;
      if (g_INT_01cc64a8 != 0) {
        g_CurrentGraphicsBoard = g_CurrentGraphicsBoard + 1;
        if (g_INT_01cc64a8 <= g_CurrentGraphicsBoard) {
          g_CurrentGraphicsBoard = 0;
        }
        engine_special_cpp_selectCard_FUN_00532d00(g_CurrentGraphicsBoard);
        iVar6 = g_CurrentGraphicsBoard;
        iVar4 = g_INT_01cc64a8;
      }
      break;
    case 5:
      if (g_CGamePtr->game_bpp == 0x10) {
        g_CGamePtr->game_bpp = 0x20;
        iVar6 = g_CurrentGraphicsBoard;
        iVar4 = g_INT_01cc64a8;
      }
      else {
        g_CGamePtr->game_bpp = 0x10;
        iVar6 = g_CurrentGraphicsBoard;
        iVar4 = g_INT_01cc64a8;
      }
      break;
    case 6:
      core_menu_cpp_showCalibrationTest_FUN_004cffa0();
      iVar6 = g_CurrentGraphicsBoard;
      iVar4 = g_INT_01cc64a8;
      break;
    case 7:
      g_CGamePtr->subtitle_mode = (uint)(g_CGamePtr->subtitle_mode == 0);
      iVar6 = g_CurrentGraphicsBoard;
      iVar4 = g_INT_01cc64a8;
      break;
    case 8:
      uVar8 = (uint)(g_CGamePtr->nudity_flag == 0);
      g_CGamePtr->nudity_flag = uVar8;
      pCVar3->blood_flag = uVar8;
      pCVar3->foul_language_flag = uVar8;
      iVar6 = g_CurrentGraphicsBoard;
      iVar4 = g_INT_01cc64a8;
    }
    g_INT_01cc64a8 = iVar4;
    g_CurrentGraphicsBoard = iVar6;
    iVar5 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
    if (iVar5 != 0) {
      return;
    }
  } while( true );
}
