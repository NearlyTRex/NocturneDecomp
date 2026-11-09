// Name: core_menu.cpp_FUN_0050aa90
// Address: 0050aa90
// Address Range: [[0050aa90, 0050b40c]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_0050aa90(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0050ad1d) */
/* WARNING: Removing unreachable block (ram,0x0050af8b) */
/* WARNING: Removing unreachable block (ram,0x0050ad33) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_FUN_0050aa90(void)

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
  core_game_cpp_CGame_saveClockTime_FUN_004cbf10(g_CGamePtr);
  iVar5 = 0x1d1eeb8;
  iVar4 = 0;
  do {
    *(int *)(iVar4 + 0x1d1f5b8) = iVar5;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 0x100;
  } while (iVar4 != 0x1c);
  engine_special_cpp_FUN_00582b30(&DAT_01d1f5d8,0x1d1f5dc,&DAT_01d1f61c,&DAT_01d1f65c,0x1d1f69c);
  if ((int)_DAT_01d1f5d8 <= _DAT_01d1f5d4) {
    _DAT_01d1f5d4 = 0;
  }
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  engine_special_cpp_FUN_00582ae0(local_1c,local_1c + 1,local_1c + 2);
  do {
    pcVar7 = local_140;
    core_game_cpp_FUN_004cbf20(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_00555770(this_ptr,50000,50000,0x10000);
    pcVar6 = "tridx7.dll";
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_00521e40(&g_CMoonInstance);
    pcVar8 = &DAT_006257d0;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
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
    if ((0 < (int)_DAT_01d1f5d8) && (_DAT_02c83370 != 0)) {
      if ((*(int *)(&DAT_01d1f65c + _DAT_01d1f5d4 * 4) == 0x121a) &&
         (*(int *)(_DAT_01d1f5d4 * 4 + 0x1d1f69c) < 6)) {
        *(uint *)&g_CGamePtr->field_0x8 = 0x10;
        *(uint *)pCVar2 = 0x280;
        *(uint *)&pCVar2->field_0x4 = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((*(int *)(&DAT_01d1f65c + _DAT_01d1f5d4 * 4) == 0x8086) &&
         (*(int *)(_DAT_01d1f5d4 * 4 + 0x1d1f69c) == 0x7800)) {
        *(uint *)&g_CGamePtr->field_0x8 = 0x10;
        *(uint *)pCVar2 = 0x280;
        *(uint *)&pCVar2->field_0x4 = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((*(int *)(&DAT_01d1f65c + _DAT_01d1f5d4 * 4) == 0x12d2) &&
         (*(int *)(_DAT_01d1f5d4 * 4 + 0x1d1f69c) == 0x18)) {
        *(uint *)&g_CGamePtr->field_0x8 = 0x10;
        *(uint *)pCVar2 = 0x280;
        *(uint *)&pCVar2->field_0x4 = 0x1e0;
      }
      pCVar2 = g_CGamePtr;
      if ((*(int *)(&DAT_01d1f65c + _DAT_01d1f5d4 * 4) == 0x12d2) &&
         (*(int *)(_DAT_01d1f5d4 * 4 + 0x1d1f69c) == 0x19)) {
        *(uint *)&g_CGamePtr->field_0x8 = 0x10;
        *(uint *)pCVar2 = 0x280;
        *(uint *)&pCVar2->field_0x4 = 0x1e0;
      }
    }
    pCVar2 = g_CGamePtr;
    if ((_DAT_02c83370 == 0) && (0x1e0 < *(int *)&g_CGamePtr->field_0x4)) {
      *(uint *)&g_CGamePtr->field_0x4 = 0x1e0;
      *(uint *)pCVar2 = 0x280;
    }
    iVar4 = *(int *)&g_CGamePtr->field_0x4;
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
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar6);
    FUN_005bfb40(0x1d1eeb8,pcVar6);
    *(uint *)&g_CGamePtr->field_0xc = 0;
    if (_DAT_02c83370 == 0) {
      pcVar6 = "3D Hardware : Off";
    }
    else {
      pcVar6 = "3D Hardware : On";
    }
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar6);
    FUN_005bfb40(0x1d1efb8,pcVar6);
    if (DAT_006257d0 == '\0') {
      pcVar6 = "3D API : None";
    }
    else {
      iVar4 = _stricmp(&DAT_006257d0,"trid3d.dll");
      if (iVar4 == 0) {
        pcVar6 = "3D API : DirectX 5";
      }
      else {
        iVar4 = _stricmp(&DAT_006257d0,"tridx6.dll");
        if (iVar4 == 0) {
          pcVar6 = "3D API : DirectX 6";
        }
        else {
          iVar4 = _stricmp(&DAT_006257d0,"tridx7.dll");
          if (iVar4 == 0) {
            pcVar6 = "3D API : DirectX 7";
          }
          else {
            iVar4 = _stricmp(&DAT_006257d0,"tri3dfx.dll");
            if (iVar4 == 0) {
              pcVar6 = "3D API : Voodoo Blit Emulation";
            }
            else {
              pcVar6 = "3D API : Custom";
            }
          }
        }
      }
    }
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar6);
    FUN_005bfb40(0x1d1f0b8,pcVar6);
    if (_DAT_01d1f5d8 == 0) {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                         ("No 3D Hardware detected");
      FUN_005bfb40(&DAT_01d1f1b8,pcVar6);
    }
    else {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("3D Card : ");
      pcVar8 = &DAT_01d1f1b8;
      do {
        cVar1 = *pcVar6;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      pcVar6 = *(char **)(&DAT_01d1f61c + _DAT_01d1f5d4 * 4);
      iVar4 = -1;
      pcVar8 = &DAT_01d1f1b8;
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
      FUN_005bfb40(local_40," (%d)",_DAT_01d1f5d4);
      pcVar6 = local_40;
      iVar4 = -1;
      pcVar8 = &DAT_01d1f1b8;
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
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Bits per pixel : ");
    pcVar8 = &DAT_01d1f2b8;
    do {
      cVar1 = *pcVar6;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    FUN_005bfb40(local_140,&DAT_005e7e43,*(uint *)&g_CGamePtr->field_0x8);
    iVar4 = -1;
    pcVar6 = &DAT_01d1f2b8;
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
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Monitor calibration");
    FUN_005bfb40(0x1d1f3b8,pcVar7);
    if (*(int *)&g_CGamePtr->field_0x10 == 0) {
      pcVar7 = "Subtitles : Off";
    }
    else {
      pcVar7 = "Subtitles : On";
    }
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar7);
    pcVar6 = &DAT_01d1f4b8;
    do {
      cVar1 = *pcVar7;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    iVar4 = 7;
    if (*(int *)&g_CGamePtr->field_0x20 != 0) {
      iVar4 = 6;
    }
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Graphic Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20
                      ((char **)0x1d1f5b8,iVar4,&local_20,0x32,pcVar7);
    wincore_wddvmem_cpp_FUN_005acff0();
    pCVar2 = g_CGamePtr;
    switch(iVar4) {
    case 0:
      if (_DAT_01d1ee8c == 1) {
        if ((*(int *)&g_CGamePtr->field_0x4 == 0xf0) && (24000000 < local_1c[0])) {
LAB_0050aee5:
          *(uint *)&g_CGamePtr->field_0x4 = 0x3c0;
          *(uint *)pCVar2 = 0x500;
        }
        else if ((*(int *)&g_CGamePtr->field_0x4 == 0xf0) && (12000000 < local_1c[0])) {
LAB_0050b12d:
          *(uint *)&g_CGamePtr->field_0x4 = 0x300;
          *(uint *)pCVar2 = 0x400;
        }
        else {
          iVar4 = *(int *)&g_CGamePtr->field_0x4;
          if (iVar4 == 0xf0) {
            *(uint *)&g_CGamePtr->field_0x4 = 0x1e0;
            *(uint *)pCVar2 = 0x280;
          }
          else if (iVar4 == 300) {
            *(uint *)&g_CGamePtr->field_0x4 = 0xf0;
            *(uint *)pCVar2 = 0x140;
          }
          else if (iVar4 == 0x180) {
LAB_0050b161:
            *(uint *)&g_CGamePtr->field_0x4 = 0xf0;
            *(uint *)pCVar2 = 0x140;
          }
          else if (iVar4 == 0x1e0) {
            *(uint *)&g_CGamePtr->field_0x4 = 0x180;
            *(uint *)pCVar2 = 0x200;
          }
          else if (iVar4 == 600) {
            *(uint *)&g_CGamePtr->field_0x4 = 0x1e0;
            *(uint *)pCVar2 = 0x280;
          }
          else {
            if (iVar4 != 0x300) goto LAB_0050b161;
            *(uint *)&g_CGamePtr->field_0x4 = 600;
            *(uint *)pCVar2 = 800;
          }
        }
      }
      else {
        iVar4 = *(int *)&g_CGamePtr->field_0x4;
        if (iVar4 == 0xf0) {
          *(uint *)&g_CGamePtr->field_0x4 = 0x180;
          *(uint *)pCVar2 = 0x200;
        }
        else if (iVar4 == 300) {
          *(uint *)&g_CGamePtr->field_0x4 = 0x180;
          *(uint *)pCVar2 = 0x200;
        }
        else if (iVar4 == 0x180) {
          *(uint *)&g_CGamePtr->field_0x4 = 0x1e0;
          *(uint *)pCVar2 = 0x280;
        }
        else if ((local_1c[0] < 0xb71b01) || (iVar4 != 0x1e0)) {
          if ((12000000 < local_1c[0]) && (*(int *)&g_CGamePtr->field_0x4 == 600))
          goto LAB_0050b12d;
          if ((24000000 < local_1c[0]) && (*(int *)&g_CGamePtr->field_0x4 == 0x300))
          goto LAB_0050aee5;
          *(uint *)g_CGamePtr = 0x140;
          *(uint *)&pCVar2->field_0x4 = 0xf0;
        }
        else {
          *(uint *)&g_CGamePtr->field_0x4 = 600;
          *(uint *)pCVar2 = 800;
        }
      }
      break;
    case 1:
      bVar10 = _DAT_02c83370 == 0;
      _DAT_02c83370 = (uint)bVar10;
      if (bVar10) {
        engine_special_cpp_kill_FUN_00581f20();
        engine_special_cpp_FUN_00581310((HWND)0x0);
        uVar3 = _DAT_02c83370;
        if (_DAT_02c83370 != 0) {
          engine_special_cpp_FUN_00582b30
                    (&DAT_01d1f5d8,0x1d1f5dc,&DAT_01d1f61c,&DAT_01d1f65c,0x1d1f69c);
          engine_special_cpp_FUN_00582ae0(local_1c,local_1c + 1,local_1c + 2);
          uVar3 = _DAT_01d1f5d8;
        }
        _DAT_01d1f5d8 = uVar3;
        pCVar2 = g_CGamePtr;
        if (*(int *)(&DAT_01d1f65c + _DAT_01d1f5d4 * 4) == 0x121a) {
          *(uint *)&g_CGamePtr->field_0x8 = 0x10;
          *(uint *)pCVar2 = 0x280;
          *(uint *)&pCVar2->field_0x4 = 0x1e0;
        }
      }
      else {
        _DAT_01d1f5d8 = 0;
      }
      break;
    case 3:
      if (_DAT_01d1f5d8 == 0) {
        _DAT_01d1f5d4 = 0;
      }
      else {
        _DAT_01d1f5d4 = _DAT_01d1f5d4 + 1;
        if ((int)_DAT_01d1f5d8 <= _DAT_01d1f5d4) {
          _DAT_01d1f5d4 = 0;
        }
        engine_special_cpp_FUN_00582b10(_DAT_01d1f5d4);
        pCVar2 = g_CGamePtr;
        if (*(int *)(&DAT_01d1f65c + _DAT_01d1f5d4 * 4) == 0x121a) {
          *(uint *)&g_CGamePtr->field_0x8 = 0x10;
          *(uint *)pCVar2 = 0x280;
          *(uint *)&pCVar2->field_0x4 = 0x1e0;
        }
      }
      break;
    case 4:
      if (*(int *)&g_CGamePtr->field_0x8 == 0x10) {
        *(uint *)&g_CGamePtr->field_0x8 = 0x20;
      }
      else {
        *(uint *)&g_CGamePtr->field_0x8 = 0x10;
      }
      break;
    case 5:
      core_menu_cpp_showCalibrationTest_FUN_0050a9c0();
      break;
    case 6:
      *(uint *)&g_CGamePtr->field_0x10 = (uint)(*(int *)&g_CGamePtr->field_0x10 == 0);
    }
    iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
    if (iVar4 != 0) {
      return;
    }
  } while( true );
}
