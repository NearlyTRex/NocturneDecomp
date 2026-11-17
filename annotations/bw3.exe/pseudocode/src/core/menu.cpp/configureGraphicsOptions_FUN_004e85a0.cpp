// Name: core_menu.cpp_configureGraphicsOptions_FUN_004e85a0
// Address: 004e85a0
// Address Range: [[004e85a0, 004e8f2a]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_004e85a0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004e882d) */
/* WARNING: Removing unreachable block (ram,0x004e8ae1) */
/* WARNING: Removing unreachable block (ram,0x004e8843) */

void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_004e85a0(void)

{
  char cVar1;
  CGame *pCVar2;
  CDemonSet *this_ptr;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  byte bVar10;
  char local_140 [256];
  char local_40 [32];
  int local_20;
  int local_1c [3];
  
  bVar10 = 0;
  local_20 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004b4430(g_CGamePtr);
  pcVar5 = g_CHAR_ARRAY_01d73800;
  iVar4 = 0;
  do {
    *(char **)((int)&g_CHAR_PTR_01d74000 + iVar4) = pcVar5;
    iVar4 = iVar4 + 4;
    pcVar5 = pcVar5 + 0x100;
  } while (iVar4 != 0x20);
  engine_special_cpp_buildCardList_FUN_00566400
            (&g_INT_01d74024,&g_CHAR_PTR_01d74028,&g_CHAR_PTR_01d74068,&g_INT_01d740a8,
             &g_INT_01d740e8);
  if (g_INT_01d74024 <= g_INT_01d74020) {
    g_INT_01d74020 = 0;
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  engine_special_cpp_getVideoMemory_FUN_005663b0(local_1c,local_1c + 1,local_1c + 2);
  do {
    pcVar5 = local_140;
    core_game_cpp_CGame_updateDT_FUN_004b4440(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(this_ptr,50000,50000,0x10000);
    pcVar6 = "tridx7.dll";
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_render_FUN_004f9670(&g_CMoonInstance);
    pcVar7 = g_RendererDllPath;
    g_CDemonSetPtr->rendering_mode = 0;
    do {
      cVar1 = *pcVar6;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pCVar2 = g_CGamePtr;
    if ((0 < g_INT_01d74024) && (g_INT_02cf5fcc != 0)) {
      if (((&g_INT_01d740a8)[g_INT_01d74020] == 0x121a) && ((&g_INT_01d740e8)[g_INT_01d74020] < 6))
      {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if (((&g_INT_01d740a8)[g_INT_01d74020] == 0x8086) &&
         ((&g_INT_01d740e8)[g_INT_01d74020] == 0x7800)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if (((&g_INT_01d740a8)[g_INT_01d74020] == 0x12d2) &&
         ((&g_INT_01d740e8)[g_INT_01d74020] == 0x18)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if (((&g_INT_01d740a8)[g_INT_01d74020] == 0x12d2) &&
         ((&g_INT_01d740e8)[g_INT_01d74020] == 0x19)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
    }
    pCVar2 = g_CGamePtr;
    if ((g_INT_02cf5fcc == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
      g_CGamePtr->game_pixy = 0x1e0;
      pCVar2->game_pixx = 0x280;
    }
    iVar4 = g_CGamePtr->game_pixy;
    if (iVar4 == 0xf0) {
      pcVar6 = "Resolution : 320x240";
    }
    else if (iVar4 == 300) {
      pcVar6 = "Resolution : 400x300";
    }
    else if (iVar4 == 0x180) {
      pcVar6 = "Resolution : 512x384";
    }
    else if (iVar4 == 0x1e0) {
      pcVar6 = "Resolution : 640x480";
    }
    else if (iVar4 == 600) {
      pcVar6 = "Resolution : 800x600";
    }
    else if (iVar4 == 0x300) {
      pcVar6 = "Resolution : 1024x768";
    }
    else if (iVar4 == 0x3c0) {
      pcVar6 = "Resolution : 1280x960";
    }
    else {
      pcVar6 = "Resolution : 320x240";
    }
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar6);
    _sprintf(g_CHAR_ARRAY_01d73800,pcVar6);
    g_CGamePtr->halo_mode = 0;
    if (g_INT_02cf5fcc == 0) {
      pcVar6 = "3D Hardware : Off";
    }
    else {
      pcVar6 = "3D Hardware : On";
    }
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar6);
    _sprintf(g_CHAR_ARRAY_01d73900,pcVar6);
    if (g_INT_01d74024 == 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("No 3D Hardware detected");
      _sprintf(g_CHAR_ARRAY_01d73a00,pcVar6);
    }
    else {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("3D Card : ");
      pcVar7 = g_CHAR_ARRAY_01d73a00;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      pcVar6 = (&g_CHAR_PTR_01d74068)[g_INT_01d74020];
      iVar4 = -1;
      pcVar7 = g_CHAR_ARRAY_01d73a00;
      do {
        pcVar8 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar8 = pcVar7 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      _sprintf(local_40," (%d)");
      pcVar6 = local_40;
      iVar4 = -1;
      pcVar7 = g_CHAR_ARRAY_01d73a00;
      do {
        pcVar8 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar8 = pcVar7 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + -1;
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
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Bits Per Pixel : ");
    pcVar7 = &DAT_01d73b00;
    do {
      cVar1 = *pcVar6;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_140,"%d");
    iVar4 = -1;
    pcVar6 = &DAT_01d73b00;
    do {
      pcVar7 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar6 + (uint)bVar10 * -2 + 1;
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
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Monitor Calibration");
    _sprintf(g_CHAR_ARRAY_01d73c00,pcVar5);
    if (g_CGamePtr->subtitle_mode == 0) {
      pcVar5 = "Subtitles : Off";
    }
    else {
      pcVar5 = "Subtitles : On";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar5);
    pcVar6 = &DAT_01d73d00;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    if (g_CGamePtr->show_hero_numbers == 0) {
      pcVar5 = "Health/Mana Numbers : Off";
    }
    else {
      pcVar5 = "Health/Mana Numbers : On";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar5);
    pcVar6 = &DAT_01d73e00;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    if (g_CGamePtr->show_crosshair == 0) {
      pcVar5 = "Display Crosshair : Off";
    }
    else {
      pcVar5 = "Display Crosshair : On";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar5);
    pcVar6 = &DAT_01d73f00;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Graphic Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_004e7860
                      (&g_CHAR_PTR_01d74000,8,&local_20,200,pcVar5);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    pCVar2 = g_CGamePtr;
    uVar3 = g_INT_01d74024;
    switch(iVar4) {
    case 0:
      if (g_INT_01d737d4 == 1) {
        if ((g_CGamePtr->game_pixy == 0xf0) && (24000000 < local_1c[0])) {
LAB_004e8a3b:
          g_CGamePtr->game_pixy = 0x3c0;
          pCVar2->game_pixx = 0x500;
          uVar3 = g_INT_01d74024;
        }
        else if ((g_CGamePtr->game_pixy == 0xf0) && (12000000 < local_1c[0])) {
LAB_004e8c0d:
          g_CGamePtr->game_pixy = 0x300;
          pCVar2->game_pixx = 0x400;
          uVar3 = g_INT_01d74024;
        }
        else {
          iVar4 = g_CGamePtr->game_pixy;
          if (iVar4 == 0xf0) {
            g_CGamePtr->game_pixy = 0x1e0;
            pCVar2->game_pixx = 0x280;
            uVar3 = g_INT_01d74024;
          }
          else if (iVar4 == 300) {
            g_CGamePtr->game_pixy = 0xf0;
            pCVar2->game_pixx = 0x140;
            uVar3 = g_INT_01d74024;
          }
          else if (iVar4 == 0x180) {
LAB_004e8c41:
            g_CGamePtr->game_pixy = 0xf0;
            pCVar2->game_pixx = 0x140;
            uVar3 = g_INT_01d74024;
          }
          else if (iVar4 == 0x1e0) {
            g_CGamePtr->game_pixy = 0x180;
            pCVar2->game_pixx = 0x200;
            uVar3 = g_INT_01d74024;
          }
          else if (iVar4 == 600) {
            g_CGamePtr->game_pixy = 0x1e0;
            pCVar2->game_pixx = 0x280;
            uVar3 = g_INT_01d74024;
          }
          else {
            if (iVar4 != 0x300) goto LAB_004e8c41;
            g_CGamePtr->game_pixy = 600;
            pCVar2->game_pixx = 800;
            uVar3 = g_INT_01d74024;
          }
        }
      }
      else {
        iVar4 = g_CGamePtr->game_pixy;
        if (iVar4 == 0xf0) {
          g_CGamePtr->game_pixy = 0x180;
          pCVar2->game_pixx = 0x200;
          uVar3 = g_INT_01d74024;
        }
        else if (iVar4 == 300) {
          g_CGamePtr->game_pixy = 0x180;
          pCVar2->game_pixx = 0x200;
          uVar3 = g_INT_01d74024;
        }
        else if (iVar4 == 0x180) {
          g_CGamePtr->game_pixy = 0x1e0;
          pCVar2->game_pixx = 0x280;
          uVar3 = g_INT_01d74024;
        }
        else if ((local_1c[0] < 0xb71b01) || (iVar4 != 0x1e0)) {
          if ((12000000 < local_1c[0]) && (g_CGamePtr->game_pixy == 600)) goto LAB_004e8c0d;
          if ((24000000 < local_1c[0]) && (g_CGamePtr->game_pixy == 0x300)) goto LAB_004e8a3b;
          g_CGamePtr->game_pixx = 0x140;
          pCVar2->game_pixy = 0xf0;
          uVar3 = g_INT_01d74024;
        }
        else {
          g_CGamePtr->game_pixy = 600;
          pCVar2->game_pixx = 800;
          uVar3 = g_INT_01d74024;
        }
      }
      break;
    case 1:
      bVar9 = g_INT_02cf5fcc == 0;
      g_INT_02cf5fcc = (int)bVar9;
      uVar3 = g_INT_02cf5fcc;
      if (bVar9) {
        engine_special_cpp_kill_FUN_005657f0();
        engine_special_cpp_loadExternalRenderer_FUN_00564be0((HWND)0x0);
        iVar4 = g_INT_02cf5fcc;
        if (g_INT_02cf5fcc != 0) {
          engine_special_cpp_buildCardList_FUN_00566400
                    (&g_INT_01d74024,&g_CHAR_PTR_01d74028,&g_CHAR_PTR_01d74068,&g_INT_01d740a8,
                     &g_INT_01d740e8);
          engine_special_cpp_getVideoMemory_FUN_005663b0(local_1c,local_1c + 1,local_1c + 2);
          iVar4 = g_INT_01d74024;
        }
        g_INT_01d74024 = iVar4;
        pCVar2 = g_CGamePtr;
        uVar3 = g_INT_01d74024;
        if ((&g_INT_01d740a8)[g_INT_01d74020] == 0x121a) {
          g_CGamePtr->game_bpp = 0x10;
          pCVar2->game_pixx = 0x280;
          pCVar2->game_pixy = 0x1e0;
          uVar3 = g_INT_01d74024;
        }
      }
      break;
    case 2:
      if (g_INT_01d74024 == 0) {
        g_INT_01d74020 = 0;
      }
      else {
        g_INT_01d74020 = g_INT_01d74020 + 1;
        if (g_INT_01d74024 <= g_INT_01d74020) {
          g_INT_01d74020 = 0;
        }
        engine_special_cpp_selectCard_FUN_005663e0(g_INT_01d74020);
        pCVar2 = g_CGamePtr;
        uVar3 = g_INT_01d74024;
        if ((&g_INT_01d740a8)[g_INT_01d74020] == 0x121a) {
          g_CGamePtr->game_bpp = 0x10;
          pCVar2->game_pixx = 0x280;
          pCVar2->game_pixy = 0x1e0;
          uVar3 = g_INT_01d74024;
        }
      }
      break;
    case 3:
      if (g_CGamePtr->game_bpp == 0x10) {
        g_CGamePtr->game_bpp = 0x20;
        uVar3 = g_INT_01d74024;
      }
      else {
        g_CGamePtr->game_bpp = 0x10;
        uVar3 = g_INT_01d74024;
      }
      break;
    case 4:
      core_menu_cpp_showCalibrationTest_FUN_004e84d0();
      uVar3 = g_INT_01d74024;
      break;
    case 5:
      g_CGamePtr->subtitle_mode = (uint)(g_CGamePtr->subtitle_mode == 0);
      uVar3 = g_INT_01d74024;
      break;
    case 6:
      g_CGamePtr->show_hero_numbers = (uint)(g_CGamePtr->show_hero_numbers == 0);
      uVar3 = g_INT_01d74024;
      break;
    case 7:
      g_CGamePtr->show_crosshair = (uint)(g_CGamePtr->show_crosshair == 0);
      uVar3 = g_INT_01d74024;
    }
    g_INT_01d74024 = uVar3;
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar4 != 0) {
      return;
    }
  } while( true );
}
