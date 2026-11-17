// Name: core_menu.cpp_configureGraphicsOptions_FUN_0050aa90
// Address: 0050aa90
// Address Range: [[0050aa90, 0050b40c]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_0050aa90(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0050ad1d) */
/* WARNING: Removing unreachable block (ram,0x0050af8b) */
/* WARNING: Removing unreachable block (ram,0x0050ad33) */

void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_0050aa90(void)

{
  char cVar1;
  CGame *pCVar2;
  CDemonSet *this_ptr;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  byte bVar9;
  char local_140 [256];
  char local_40 [32];
  int local_20;
  int local_1c [3];
  
  bVar9 = 0;
  local_20 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004cbf10(g_CGamePtr);
  pcVar4 = g_CHAR_ARRAY_01d1eeb8;
  iVar3 = 0;
  do {
    *(char **)((int)g_CHAR_PTR_ARRAY_01d1f5b8 + iVar3) = pcVar4;
    iVar3 = iVar3 + 4;
    pcVar4 = pcVar4 + 0x100;
  } while (iVar3 != 0x1c);
  engine_special_cpp_buildCardList_FUN_00582b30
            ((int *)(g_CHAR_PTR_ARRAY_01d1f5b8 + 8),g_CHAR_PTR_ARRAY_01d1f5dc,
             g_CHAR_PTR_ARRAY_01d1f61c,g_INT_ARRAY_01d1f65c,g_INT_ARRAY_01d1f69c);
  if ((int)g_CHAR_PTR_ARRAY_01d1f5b8[8] <= (int)g_CHAR_PTR_ARRAY_01d1f5b8[7]) {
    g_CHAR_PTR_ARRAY_01d1f5b8[7] = (char *)0x0;
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  engine_special_cpp_getVideoMemory_FUN_00582ae0(local_1c,local_1c + 1,local_1c + 2);
  do {
    pcVar4 = local_140;
    core_game_cpp_CGame_updateDT_FUN_004cbf20(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(this_ptr,50000,50000,0x10000);
    pcVar5 = "tridx7.dll";
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_render_FUN_00521e40(&g_CMoonInstance);
    pcVar6 = g_CHAR_ARRAY_006257d0;
    g_CDemonSetPtr->rendering_mode = 0;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pCVar2 = g_CGamePtr;
    if ((0 < (int)g_CHAR_PTR_ARRAY_01d1f5b8[8]) && (g_INT_02c83370 != 0)) {
      if ((g_INT_ARRAY_01d1f65c[(int)g_CHAR_PTR_ARRAY_01d1f5b8[7]] == 0x121a) &&
         (g_INT_ARRAY_01d1f69c[(int)g_CHAR_PTR_ARRAY_01d1f5b8[7]] < 6)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((g_INT_ARRAY_01d1f65c[(int)g_CHAR_PTR_ARRAY_01d1f5b8[7]] == 0x8086) &&
         (g_INT_ARRAY_01d1f69c[(int)g_CHAR_PTR_ARRAY_01d1f5b8[7]] == 0x7800)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((g_INT_ARRAY_01d1f65c[(int)g_CHAR_PTR_ARRAY_01d1f5b8[7]] == 0x12d2) &&
         (g_INT_ARRAY_01d1f69c[(int)g_CHAR_PTR_ARRAY_01d1f5b8[7]] == 0x18)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((g_INT_ARRAY_01d1f65c[(int)g_CHAR_PTR_ARRAY_01d1f5b8[7]] == 0x12d2) &&
         (g_INT_ARRAY_01d1f69c[(int)g_CHAR_PTR_ARRAY_01d1f5b8[7]] == 0x19)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
    }
    pCVar2 = g_CGamePtr;
    if ((g_INT_02c83370 == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
      g_CGamePtr->game_pixy = 0x1e0;
      pCVar2->game_pixx = 0x280;
    }
    iVar3 = g_CGamePtr->game_pixy;
    if (iVar3 == 0xf0) {
      pcVar5 = "Resolution : 320x240";
    }
    else if (iVar3 == 300) {
      pcVar5 = "Resolution : 400x300";
    }
    else if (iVar3 == 0x180) {
      pcVar5 = "Resolution : 512x384";
    }
    else if (iVar3 == 0x1e0) {
      pcVar5 = "Resolution : 640x480";
    }
    else if (iVar3 == 600) {
      pcVar5 = "Resolution : 800x600";
    }
    else if (iVar3 == 0x300) {
      pcVar5 = "Resolution : 1024x768";
    }
    else if (iVar3 == 0x3c0) {
      pcVar5 = "Resolution : 1280x960";
    }
    else {
      pcVar5 = "Resolution : 320x240";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar5);
    _sprintf(g_CHAR_ARRAY_01d1eeb8,pcVar5);
    g_CGamePtr->halo_mode = 0;
    if (g_INT_02c83370 == 0) {
      pcVar5 = "3D Hardware : Off";
    }
    else {
      pcVar5 = "3D Hardware : On";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar5);
    _sprintf(g_CHAR_ARRAY_01d1efb8,pcVar5);
    if (g_CHAR_ARRAY_006257d0[0] == '\0') {
      pcVar5 = "3D API : None";
    }
    else {
      iVar3 = _stricmp(g_CHAR_ARRAY_006257d0,"trid3d.dll");
      if (iVar3 == 0) {
        pcVar5 = "3D API : DirectX 5";
      }
      else {
        iVar3 = _stricmp(g_CHAR_ARRAY_006257d0,"tridx6.dll");
        if (iVar3 == 0) {
          pcVar5 = "3D API : DirectX 6";
        }
        else {
          iVar3 = _stricmp(g_CHAR_ARRAY_006257d0,"tridx7.dll");
          if (iVar3 == 0) {
            pcVar5 = "3D API : DirectX 7";
          }
          else {
            iVar3 = _stricmp(g_CHAR_ARRAY_006257d0,"tri3dfx.dll")
            ;
            if (iVar3 == 0) {
              pcVar5 = "3D API : Voodoo Blit Emulation";
            }
            else {
              pcVar5 = "3D API : Custom";
            }
          }
        }
      }
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar5);
    _sprintf(g_CHAR_ARRAY_01d1f0b8,pcVar5);
    if (g_CHAR_PTR_ARRAY_01d1f5b8[8] == (char *)0x0) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("No 3D Hardware detected");
      _sprintf(g_CHAR_ARRAY_01d1f1b8,pcVar5);
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("3D Card : ");
      pcVar6 = g_CHAR_ARRAY_01d1f1b8;
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar5 = g_CHAR_PTR_ARRAY_01d1f61c[(int)g_CHAR_PTR_ARRAY_01d1f5b8[7]];
      iVar3 = -1;
      pcVar6 = g_CHAR_ARRAY_01d1f1b8;
      do {
        pcVar7 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar6 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      _sprintf(local_40," (%d)");
      pcVar5 = local_40;
      iVar3 = -1;
      pcVar6 = g_CHAR_ARRAY_01d1f1b8;
      do {
        pcVar7 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar6 + (uint)bVar9 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Bits per pixel : ");
    pcVar6 = &DAT_01d1f2b8;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_140,"%d");
    iVar3 = -1;
    pcVar5 = &DAT_01d1f2b8;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Monitor calibration");
    _sprintf(g_CHAR_ARRAY_01d1f3b8,pcVar4);
    if (g_CGamePtr->subtitle_mode == 0) {
      pcVar4 = "Subtitles : Off";
    }
    else {
      pcVar4 = "Subtitles : On";
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar4);
    pcVar5 = &DAT_01d1f4b8;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar3 = 7;
    if (g_CGamePtr->quimby_flag != 0) {
      iVar3 = 6;
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Graphic Options");
    iVar3 = core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20
                      (g_CHAR_PTR_ARRAY_01d1f5b8,iVar3,&local_20,0x32,pcVar4);
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    pCVar2 = g_CGamePtr;
    switch(iVar3) {
    case 0:
      if (g_INT_01d1ee8c == 1) {
        if ((g_CGamePtr->game_pixy == 0xf0) && (24000000 < local_1c[0])) {
LAB_0050aee5:
          g_CGamePtr->game_pixy = 0x3c0;
          pCVar2->game_pixx = 0x500;
        }
        else if ((g_CGamePtr->game_pixy == 0xf0) && (12000000 < local_1c[0])) {
LAB_0050b12d:
          g_CGamePtr->game_pixy = 0x300;
          pCVar2->game_pixx = 0x400;
        }
        else {
          iVar3 = g_CGamePtr->game_pixy;
          if (iVar3 == 0xf0) {
            g_CGamePtr->game_pixy = 0x1e0;
            pCVar2->game_pixx = 0x280;
          }
          else if (iVar3 == 300) {
            g_CGamePtr->game_pixy = 0xf0;
            pCVar2->game_pixx = 0x140;
          }
          else if (iVar3 == 0x180) {
LAB_0050b161:
            g_CGamePtr->game_pixy = 0xf0;
            pCVar2->game_pixx = 0x140;
          }
          else if (iVar3 == 0x1e0) {
            g_CGamePtr->game_pixy = 0x180;
            pCVar2->game_pixx = 0x200;
          }
          else if (iVar3 == 600) {
            g_CGamePtr->game_pixy = 0x1e0;
            pCVar2->game_pixx = 0x280;
          }
          else {
            if (iVar3 != 0x300) goto LAB_0050b161;
            g_CGamePtr->game_pixy = 600;
            pCVar2->game_pixx = 800;
          }
        }
      }
      else {
        iVar3 = g_CGamePtr->game_pixy;
        if (iVar3 == 0xf0) {
          g_CGamePtr->game_pixy = 0x180;
          pCVar2->game_pixx = 0x200;
        }
        else if (iVar3 == 300) {
          g_CGamePtr->game_pixy = 0x180;
          pCVar2->game_pixx = 0x200;
        }
        else if (iVar3 == 0x180) {
          g_CGamePtr->game_pixy = 0x1e0;
          pCVar2->game_pixx = 0x280;
        }
        else if ((local_1c[0] < 0xb71b01) || (iVar3 != 0x1e0)) {
          if ((12000000 < local_1c[0]) && (g_CGamePtr->game_pixy == 600)) goto LAB_0050b12d;
          if ((24000000 < local_1c[0]) && (g_CGamePtr->game_pixy == 0x300)) goto LAB_0050aee5;
          g_CGamePtr->game_pixx = 0x140;
          pCVar2->game_pixy = 0xf0;
        }
        else {
          g_CGamePtr->game_pixy = 600;
          pCVar2->game_pixx = 800;
        }
      }
      break;
    case 1:
      bVar8 = g_INT_02c83370 == 0;
      g_INT_02c83370 = (int)bVar8;
      if (bVar8) {
        engine_special_cpp_kill_FUN_00581f20();
        engine_special_cpp_loadExternalRenderer_FUN_00581310((HWND)0x0);
        pcVar4 = (char *)g_INT_02c83370;
        if (g_INT_02c83370 != 0) {
          engine_special_cpp_buildCardList_FUN_00582b30
                    ((int *)(g_CHAR_PTR_ARRAY_01d1f5b8 + 8),g_CHAR_PTR_ARRAY_01d1f5dc,
                     g_CHAR_PTR_ARRAY_01d1f61c,g_INT_ARRAY_01d1f65c,g_INT_ARRAY_01d1f69c);
          engine_special_cpp_getVideoMemory_FUN_00582ae0(local_1c,local_1c + 1,local_1c + 2);
          pcVar4 = g_CHAR_PTR_ARRAY_01d1f5b8[8];
        }
        g_CHAR_PTR_ARRAY_01d1f5b8[8] = pcVar4;
        pCVar2 = g_CGamePtr;
        if (g_INT_ARRAY_01d1f65c[(int)g_CHAR_PTR_ARRAY_01d1f5b8[7]] == 0x121a) {
          g_CGamePtr->game_bpp = 0x10;
          pCVar2->game_pixx = 0x280;
          pCVar2->game_pixy = 0x1e0;
        }
      }
      else {
        g_CHAR_PTR_ARRAY_01d1f5b8[8] = (char *)0x0;
      }
      break;
    case 3:
      if (g_CHAR_PTR_ARRAY_01d1f5b8[8] == (char *)0x0) {
        g_CHAR_PTR_ARRAY_01d1f5b8[7] = (char *)0x0;
      }
      else {
        g_CHAR_PTR_ARRAY_01d1f5b8[7] = g_CHAR_PTR_ARRAY_01d1f5b8[7] + 1;
        if ((int)g_CHAR_PTR_ARRAY_01d1f5b8[8] <= (int)g_CHAR_PTR_ARRAY_01d1f5b8[7]) {
          g_CHAR_PTR_ARRAY_01d1f5b8[7] = (char *)0x0;
        }
        engine_special_cpp_selectCard_FUN_00582b10((int)g_CHAR_PTR_ARRAY_01d1f5b8[7]);
        pCVar2 = g_CGamePtr;
        if (g_INT_ARRAY_01d1f65c[(int)g_CHAR_PTR_ARRAY_01d1f5b8[7]] == 0x121a) {
          g_CGamePtr->game_bpp = 0x10;
          pCVar2->game_pixx = 0x280;
          pCVar2->game_pixy = 0x1e0;
        }
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
      core_menu_cpp_showCalibrationTest_FUN_0050a9c0();
      break;
    case 6:
      g_CGamePtr->subtitle_mode = (uint)(g_CGamePtr->subtitle_mode == 0);
    }
    iVar3 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_ESCAPE);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
