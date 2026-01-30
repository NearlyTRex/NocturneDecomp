// Name: core_main.c_showDeveloperToolsMenu_FUN_005073a0
// Address: 005073a0
// Address Range: [[005073a0, 00507a46]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_showDeveloperToolsMenu_FUN_005073a0(void)

#include "nocturne.h"

void __cdecl core_main_c_showDeveloperToolsMenu_FUN_005073a0(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  CKeyFramedModel *this_ptr;
  CKeyFramedModel *pCVar6;
  void *pvVar7;
  CMorphModel *this_ptr_00;
  void *ptr;
  CMorphModel *extraout_EAX;
  _FILE *output_file;
  byte bVar8;
  int aiStackY_1008 [690];
  char *directory;
  char *mode;
  int right_pos;
  char *source_file;
  int bottom_pos;
  CIniFile local_528;
  char local_328 [256];
  CEdButton local_228;
  CEdButton local_144;
  CEdScrollBar local_60;
  CCourse local_2c;
  char local_20 [4];
  int aiStack_1c [3];
  
  bVar8 = 0;
  iVar1 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
                    (&g_CDemonFileManagerInstance.base);
  if (iVar1 == 0) {
    return;
  }
  engine_ini_cpp_CIniFile_ctor_FUN_004fba70(&local_528,".\\system\\nocturne.ini",0x63169a);
  aiStack_1c[2] = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_528,"AcceptedLicenseAgreement",aiStack_1c + 2);
  if (aiStack_1c[2] != 0) {
LAB_0050740e:
    do {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Nocturne(R) Debug/editor Menu",0,0);
      engine_2d_c_drawText_FUN_00401fd0("1. Play a mission",0,0x16);
      engine_2d_c_drawText_FUN_00401fd0("2. Enter the Demented(R) Shape Editor(TM)",0,0x21);
      engine_2d_c_drawText_FUN_00401fd0("4. Enter the Demon Set System",0,0x37);
      engine_2d_c_drawText_FUN_00401fd0("5. Enter the Demon Keyframed Model System",0,0x42);
      engine_2d_c_drawText_FUN_00401fd0("6. Procedural texture system",0,0x4d);
      engine_2d_c_drawText_FUN_00401fd0("7. Enter the Demon course system",0,0x58);
      engine_2d_c_drawText_FUN_00401fd0("A. File Manager",0,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("B. Enter the Demon Morph System",0,0x79);
      engine_2d_c_drawText_FUN_00401fd0("M. Enter the Demon Mission System",0,0x84);
      engine_2d_c_drawText_FUN_00401fd0("S. Enter the Demon Skeletal System",0,0x8f);
      engine_2d_c_drawText_FUN_00401fd0("Z. Display memory usage info",0,0xbb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      uVar2 = toupper(uVar2 & 0xff);
      if (uVar2 < 0x37) {
        if (uVar2 < 0x34) {
          if (0x30 < uVar2) {
            if (uVar2 < 0x32) {
              core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(g_CGamePtr,0);
            }
            else if (uVar2 == 0x32) {
              shape_design_c_showShapeEditorMenu_FUN_0046f290();
            }
          }
        }
        else if (uVar2 < 0x35) {
          core_setedit_cpp_CDemonSet_showEditorMenu_FUN_00584940(g_CDemonSetPtr);
        }
        else if (uVar2 < 0x36) {
          this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x56d8,"..\\core\\main.c",0x274);
          pCVar6 = (CKeyFramedModel *)0x0;
          if (this_ptr != (CKeyFramedModel *)0x0) {
            pCVar6 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(this_ptr);
          }
          if (pCVar6 == (CKeyFramedModel *)0x0) {
            g_CurrentFilename = "..\\core\\main.c";
            g_CurrentLineNumber = 0x275;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
          }
          core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(pCVar6);
          g_CurrentDebugLine = 0x277;
          g_CurrentDebugFilename = "..\\core\\main.c";
          if (pCVar6 != (CKeyFramedModel *)0x0) {
            pCVar6 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(pCVar6);
            shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar6);
          }
        }
        else {
          core_procedur_cpp_ProceduralTextureMenuPrompt_FUN_00554880();
        }
      }
      else if (uVar2 < 0x38) {
        core_course_cpp_CCourse_ctor_FUN_004424c0(&local_2c);
        core_course_cpp_CCourse_showEditorMenu_FUN_00443040(&local_2c);
        core_course_cpp_CCourse_dtor_FUN_004424e0(&local_2c);
      }
      else if (uVar2 < 0x4d) {
        if (0x40 < uVar2) {
          if (uVar2 < 0x42) {
            core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270
                      (&g_CDemonFileManagerInstance);
          }
          else if (uVar2 == 0x42) {
            pvVar7 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xc2c,"..\\core\\main.c",0x292);
            this_ptr_00 = (CMorphModel *)0x0;
            if (pvVar7 != (void *)0x0) {
              core_morph_cpp_FUN_0052b310();
              this_ptr_00 = extraout_EAX;
            }
            if (this_ptr_00 != (CMorphModel *)0x0) {
              core_morph_cpp_FUN_0052bcb0();
              g_CurrentDebugLine = 0x295;
              g_CurrentDebugFilename = "..\\core\\main.c";
              if (this_ptr_00 != (CMorphModel *)0x0) {
                core_morph_cpp_CMorphModel_FUN_0052b330(this_ptr_00);
                shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
              }
            }
          }
        }
      }
      else if (uVar2 < 0x4e) {
        core_msnedit_cpp_CDemonMission_showEditorMenu_FUN_005381e0(g_CDemonMissionPtr);
      }
      else if (0x52 < uVar2) {
        if (uVar2 < 0x54) {
          core_skeledit_cpp_viewModel_FUN_00598fc0();
        }
        else if (uVar2 == 0x5a) {
          shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
                    (g_CEditorToolsPtr,local_328);
          iVar1 = 0x2c0;
          source_file = "..\\core\\main.c";
          mode = "wt";
          directory = (char *)0x0;
          pcVar3 = local_20;
          local_20[0] = "memdump.txt"[0];
          local_20[1] = "memdump.txt"[1];
          local_20[2] = "memdump.txt"[2];
          local_20[3] = "memdump.txt"[3];
          aiStack_1c[(uint)bVar8 * -2] = *(int *)("memdump.txt" + (uint)bVar8 * -8 + 4);
          aiStack_1c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(int *)("memdump.txt" + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          output_file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                  (pcVar3,directory,mode,source_file,iVar1);
          if (output_file == (_FILE *)0x0) {
            g_CurrentFilename = "..\\core\\main.c";
            g_CurrentLineNumber = 0x2c1;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Can't createpen %s",local_20);
          }
          shape_memdbg_cpp_debugMemdump_FUN_0050f6c0(output_file);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(output_file,"..\\core\\main.c",0x2c3);
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"%s\nAlso dumped memory usage to %s",local_328,local_20);
        }
      }
    } while (uVar2 != 0x1b);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    return;
  }
  pcVar3 = support_newmsg_cpp_decryptMessage_FUN_00544270((SEncryptedMessage *)g_LicenseAgreement);
  iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,pcVar3);
  shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(&local_60);
  iVar1 = g_ClipTop;
  right_pos = g_ClipRight;
  bottom_pos = g_ClipBottom;
  iVar5 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            (&local_60,g_WindowWidth - iVar5,iVar1,right_pos,bottom_pos);
  local_60.max_value = g_WindowHeight;
  local_60.current_value = iVar4 + 100;
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(&local_228);
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(&local_144);
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&local_60);
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(&local_60);
    shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
              (&local_228,0x1e,(iVar4 - local_60.scroll_position) + 10,
               "I accept the terms of the license agreement");
    shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
              (&local_144,0x1e,(iVar4 - local_60.scroll_position) + 0x28,
               "I DO NOT accept the terms of the license agreement");
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&local_228);
    if (iVar1 != 0) {
      engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
                (&local_528,"AcceptedLicenseAgreement",1);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_144);
      shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_228);
      shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20(&local_60);
      goto LAB_0050740e;
    }
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&local_144);
    if (iVar1 != 0) break;
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_EditorFont,pcVar3,0x1e,-local_60.scroll_position,0xff,-1);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(&local_228,0);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(&local_144,0);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
  } while (iVar1 == 0);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_144);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_228);
  shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20(&local_60);
  return;
}
