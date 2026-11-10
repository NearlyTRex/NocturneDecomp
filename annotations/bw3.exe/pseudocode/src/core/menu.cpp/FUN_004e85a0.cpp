// Name: core_menu.cpp_FUN_004e85a0
// Address: 004e85a0
// Address Range: [[004e85a0, 004e8f2a]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_004e85a0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004e882d) */
/* WARNING: Removing unreachable block (ram,0x004e8ae1) */
/* WARNING: Removing unreachable block (ram,0x004e8843) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_FUN_004e85a0(void)

{
  char cVar1;
  CGame *pCVar2;
  CDemonSet *this_ptr;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  byte bVar11;
  char local_140 [256];
  char local_40 [32];
  int local_20;
  int local_1c [3];
  
  bVar11 = 0;
  local_20 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004b4430(g_CGamePtr);
  iVar5 = 0x1d73800;
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1d74000) = iVar5;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 0x100;
  } while (iVar4 != 0x20);
  engine_special_cpp_buildCardList_FUN_00566400
            ((int *)&DAT_01d74024,(char **)0x1d74028,(char **)&DAT_01d74068,(int *)&DAT_01d740a8,
             (int *)0x1d740e8);
  if ((int)_DAT_01d74024 <= _DAT_01d74020) {
    _DAT_01d74020 = 0;
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  engine_special_cpp_getVideoMemory_FUN_005663b0(local_1c,local_1c + 1,local_1c + 2);
  do {
    pcVar7 = local_140;
    core_game_cpp_FUN_004b4440(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(this_ptr,50000,50000,0x10000);
    pcVar6 = &DAT_005c73f6;
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_FUN_004f9670(&g_CMoonInstance);
    pcVar8 = &DAT_00606730;
    g_CDemonSetPtr->rendering_mode = 0;
    do {
      cVar1 = *pcVar6;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pCVar2 = g_CGamePtr;
    if ((0 < (int)_DAT_01d74024) && (_DAT_02cf5fcc != 0)) {
      if ((*(int *)(&DAT_01d740a8 + _DAT_01d74020 * 4) == 0x121a) &&
         (*(int *)(_DAT_01d74020 * 4 + 0x1d740e8) < 6)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((*(int *)(&DAT_01d740a8 + _DAT_01d74020 * 4) == 0x8086) &&
         (*(int *)(_DAT_01d74020 * 4 + 0x1d740e8) == 0x7800)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((*(int *)(&DAT_01d740a8 + _DAT_01d74020 * 4) == 0x12d2) &&
         (*(int *)(_DAT_01d74020 * 4 + 0x1d740e8) == 0x18)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((*(int *)(&DAT_01d740a8 + _DAT_01d74020 * 4) == 0x12d2) &&
         (*(int *)(_DAT_01d74020 * 4 + 0x1d740e8) == 0x19)) {
        g_CGamePtr->game_bpp = 0x10;
        pCVar2->game_pixx = 0x280;
        pCVar2->game_pixy = 0x1e0;
      }
    }
    pCVar2 = g_CGamePtr;
    if ((_DAT_02cf5fcc == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
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
    _sprintf((char *)0x1d73800,pcVar6);
    *(uint *)&g_CGamePtr->field_0xc = 0;
    if (_DAT_02cf5fcc == 0) {
      pcVar6 = "3D Hardware : Off";
    }
    else {
      pcVar6 = "3D Hardware : On";
    }
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar6);
    _sprintf((char *)0x1d73900,pcVar6);
    if (_DAT_01d74024 == 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("No 3D Hardware detected");
      _sprintf(&DAT_01d73a00,pcVar6);
    }
    else {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("3D Card : ");
      pcVar8 = &DAT_01d73a00;
      do {
        cVar1 = *pcVar6;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar6 = *(char **)(&DAT_01d74068 + _DAT_01d74020 * 4);
      iVar4 = -1;
      pcVar8 = &DAT_01d73a00;
      do {
        pcVar9 = pcVar8;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      _sprintf(local_40," (%d)");
      pcVar6 = local_40;
      iVar4 = -1;
      pcVar8 = &DAT_01d73a00;
      do {
        pcVar9 = pcVar8;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar9 = pcVar8 + (uint)bVar11 * -2 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
    }
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Bits Per Pixel : ");
    pcVar8 = &DAT_01d73b00;
    do {
      cVar1 = *pcVar6;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    _sprintf(local_140,&DAT_005c753c);
    iVar4 = -1;
    pcVar6 = &DAT_01d73b00;
    do {
      pcVar8 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar8 = pcVar6 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar1 = *pcVar7;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Monitor Calibration");
    _sprintf((char *)0x1d73c00,pcVar7);
    if (*(int *)&g_CGamePtr->field_0x10 == 0) {
      pcVar7 = "Subtitles : Off";
    }
    else {
      pcVar7 = "Subtitles : On";
    }
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar7);
    pcVar6 = &DAT_01d73d00;
    do {
      cVar1 = *pcVar7;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    if (*(int *)&g_CGamePtr->field_0xe0 == 0) {
      pcVar7 = "Health/Mana Numbers : Off";
    }
    else {
      pcVar7 = "Health/Mana Numbers : On";
    }
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar7);
    pcVar6 = &DAT_01d73e00;
    do {
      cVar1 = *pcVar7;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    if (*(int *)&g_CGamePtr->field_0xe4 == 0) {
      pcVar7 = "Display Crosshair : Off";
    }
    else {
      pcVar7 = "Display Crosshair : On";
    }
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960(pcVar7);
    pcVar6 = &DAT_01d73f00;
    do {
      cVar1 = *pcVar7;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Graphic Options");
    iVar4 = core_menu_cpp_FUN_004e7860((char **)0x1d74000,8,&local_20,200,pcVar7);
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    pCVar2 = g_CGamePtr;
    uVar3 = _DAT_01d74024;
    switch(iVar4) {
    case 0:
      if (_DAT_01d737d4 == 1) {
        if ((g_CGamePtr->game_pixy == 0xf0) && (24000000 < local_1c[0])) {
LAB_004e8a3b:
          g_CGamePtr->game_pixy = 0x3c0;
          pCVar2->game_pixx = 0x500;
          uVar3 = _DAT_01d74024;
        }
        else if ((g_CGamePtr->game_pixy == 0xf0) && (12000000 < local_1c[0])) {
LAB_004e8c0d:
          g_CGamePtr->game_pixy = 0x300;
          pCVar2->game_pixx = 0x400;
          uVar3 = _DAT_01d74024;
        }
        else {
          iVar4 = g_CGamePtr->game_pixy;
          if (iVar4 == 0xf0) {
            g_CGamePtr->game_pixy = 0x1e0;
            pCVar2->game_pixx = 0x280;
            uVar3 = _DAT_01d74024;
          }
          else if (iVar4 == 300) {
            g_CGamePtr->game_pixy = 0xf0;
            pCVar2->game_pixx = 0x140;
            uVar3 = _DAT_01d74024;
          }
          else if (iVar4 == 0x180) {
LAB_004e8c41:
            g_CGamePtr->game_pixy = 0xf0;
            pCVar2->game_pixx = 0x140;
            uVar3 = _DAT_01d74024;
          }
          else if (iVar4 == 0x1e0) {
            g_CGamePtr->game_pixy = 0x180;
            pCVar2->game_pixx = 0x200;
            uVar3 = _DAT_01d74024;
          }
          else if (iVar4 == 600) {
            g_CGamePtr->game_pixy = 0x1e0;
            pCVar2->game_pixx = 0x280;
            uVar3 = _DAT_01d74024;
          }
          else {
            if (iVar4 != 0x300) goto LAB_004e8c41;
            g_CGamePtr->game_pixy = 600;
            pCVar2->game_pixx = 800;
            uVar3 = _DAT_01d74024;
          }
        }
      }
      else {
        iVar4 = g_CGamePtr->game_pixy;
        if (iVar4 == 0xf0) {
          g_CGamePtr->game_pixy = 0x180;
          pCVar2->game_pixx = 0x200;
          uVar3 = _DAT_01d74024;
        }
        else if (iVar4 == 300) {
          g_CGamePtr->game_pixy = 0x180;
          pCVar2->game_pixx = 0x200;
          uVar3 = _DAT_01d74024;
        }
        else if (iVar4 == 0x180) {
          g_CGamePtr->game_pixy = 0x1e0;
          pCVar2->game_pixx = 0x280;
          uVar3 = _DAT_01d74024;
        }
        else if ((local_1c[0] < 0xb71b01) || (iVar4 != 0x1e0)) {
          if ((12000000 < local_1c[0]) && (g_CGamePtr->game_pixy == 600)) goto LAB_004e8c0d;
          if ((24000000 < local_1c[0]) && (g_CGamePtr->game_pixy == 0x300)) goto LAB_004e8a3b;
          g_CGamePtr->game_pixx = 0x140;
          pCVar2->game_pixy = 0xf0;
          uVar3 = _DAT_01d74024;
        }
        else {
          g_CGamePtr->game_pixy = 600;
          pCVar2->game_pixx = 800;
          uVar3 = _DAT_01d74024;
        }
      }
      break;
    case 1:
      bVar10 = _DAT_02cf5fcc == 0;
      _DAT_02cf5fcc = (uint)bVar10;
      uVar3 = _DAT_02cf5fcc;
      if (bVar10) {
        engine_special_cpp_kill_FUN_005657f0();
        engine_special_cpp_loadExternalRenderer_FUN_00564be0((HWND)0x0);
        uVar3 = _DAT_02cf5fcc;
        if (_DAT_02cf5fcc != 0) {
          engine_special_cpp_buildCardList_FUN_00566400
                    ((int *)&DAT_01d74024,(char **)0x1d74028,(char **)&DAT_01d74068,
                     (int *)&DAT_01d740a8,(int *)0x1d740e8);
          engine_special_cpp_getVideoMemory_FUN_005663b0(local_1c,local_1c + 1,local_1c + 2);
          uVar3 = _DAT_01d74024;
        }
        _DAT_01d74024 = uVar3;
        pCVar2 = g_CGamePtr;
        uVar3 = _DAT_01d74024;
        if (*(int *)(&DAT_01d740a8 + _DAT_01d74020 * 4) == 0x121a) {
          g_CGamePtr->game_bpp = 0x10;
          pCVar2->game_pixx = 0x280;
          pCVar2->game_pixy = 0x1e0;
          uVar3 = _DAT_01d74024;
        }
      }
      break;
    case 2:
      if (_DAT_01d74024 == 0) {
        _DAT_01d74020 = 0;
      }
      else {
        _DAT_01d74020 = _DAT_01d74020 + 1;
        if ((int)_DAT_01d74024 <= _DAT_01d74020) {
          _DAT_01d74020 = 0;
        }
        engine_special_cpp_selectCard_FUN_005663e0(_DAT_01d74020);
        pCVar2 = g_CGamePtr;
        uVar3 = _DAT_01d74024;
        if (*(int *)(&DAT_01d740a8 + _DAT_01d74020 * 4) == 0x121a) {
          g_CGamePtr->game_bpp = 0x10;
          pCVar2->game_pixx = 0x280;
          pCVar2->game_pixy = 0x1e0;
          uVar3 = _DAT_01d74024;
        }
      }
      break;
    case 3:
      if (g_CGamePtr->game_bpp == 0x10) {
        g_CGamePtr->game_bpp = 0x20;
        uVar3 = _DAT_01d74024;
      }
      else {
        g_CGamePtr->game_bpp = 0x10;
        uVar3 = _DAT_01d74024;
      }
      break;
    case 4:
      core_menu_cpp_showCalibrationTest_FUN_004e84d0();
      uVar3 = _DAT_01d74024;
      break;
    case 5:
      *(uint *)&g_CGamePtr->field_0x10 = (uint)(*(int *)&g_CGamePtr->field_0x10 == 0);
      uVar3 = _DAT_01d74024;
      break;
    case 6:
      *(uint *)&g_CGamePtr->field_0xe0 = (uint)(*(int *)&g_CGamePtr->field_0xe0 == 0);
      uVar3 = _DAT_01d74024;
      break;
    case 7:
      *(uint *)&g_CGamePtr->field_0xe4 = (uint)(*(int *)&g_CGamePtr->field_0xe4 == 0);
      uVar3 = _DAT_01d74024;
    }
    _DAT_01d74024 = uVar3;
    iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
    if (iVar4 != 0) {
      return;
    }
  } while( true );
}
