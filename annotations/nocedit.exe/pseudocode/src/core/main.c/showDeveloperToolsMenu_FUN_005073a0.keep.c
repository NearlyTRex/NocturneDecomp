// Name: core_main.c_showDeveloperToolsMenu_FUN_005073a0
// Address: 005073a0
// MANUAL RECONSTRUCTION
// Address Range: [[005073a0, 00507a46] [0060c476, 0060c496]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_showDeveloperToolsMenu_FUN_005073a0(void)

#include "nocturne.h"

void __cdecl core_main_c_showDeveloperToolsMenu_FUN_005073a0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar1;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar2;
  CKeyFramedModel *this_ptr;
  CKeyFramedModel *pCVar6;
  CKeyFramedModel *ptr;
  CMorph *this_ptr_00;
  CMorph *pCVar7;
  CMorph *morph;
  _FILE *output_file;
  CIniFile local_528;
  char local_328 [256];
  CEdButton local_228;
  CEdButton local_144;
  CEdScrollBar local_60;
  CCourse local_2c;
  char local_20 [16];
  int local_license;
  int right_pos;
  int bottom_pos;
  
  iVar1 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
                    (&g_CDemonFileManagerInstance.base);
  if (iVar1 == 0) {
    return;
  }
  engine_ini_cpp_CIniFile_ctor_FUN_004fba70(&local_528,".\\system\\nocturne.ini","Editor");
  local_license = 0;
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            (&local_528,"AcceptedLicenseAgreement",&local_license);
  if (local_license != 0) {
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
      uVar1 = toupper(uVar2 & 0xff);
      if (uVar1 < 0x37) {
        if (uVar1 < 0x34) {
          if (0x30 < uVar1) {
            if (uVar1 < 0x32) {
              core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(g_CGamePtr,0);
            }
            else if (uVar1 == 0x32) {
              shape_design_c_showShapeEditorMenu_FUN_0046f290();
            }
          }
        }
        else if (uVar1 < 0x35) {
          core_setedit_cpp_CDemonSet_showEditorMenu_FUN_00584940(g_CDemonSetPtr);
        }
        else if (uVar1 < 0x36) {
          this_ptr = (CKeyFramedModel *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                               (0x56d8,"..\\core\\main.c",0x274);
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
            ptr = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(pCVar6,0);
            shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
          }
        }
        else {
          core_procedur_cpp_CProceduralTexture_showMenu_FUN_00554880(g_CProceduralTexturePtr);
        }
      }
      else if (uVar1 < 0x38) {
        core_course_cpp_CCourse_ctor_FUN_004424c0(&local_2c);
        core_course_cpp_CCourse_showEditorMenu_FUN_00443040(&local_2c);
        core_course_cpp_CCourse_dtor_FUN_004424e0(&local_2c,0);
      }
      else if (uVar1 < 0x4d) {
        if (0x40 < uVar1) {
          if (uVar1 < 0x42) {
            core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270
                      (&g_CDemonFileManagerInstance);
          }
          else if (uVar1 == 0x42) {
            this_ptr_00 = (CMorph *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                                    (0xc2c,"..\\core\\main.c",0x292);
            morph = (CMorph *)0x0;
            if (this_ptr_00 != (CMorph *)0x0) {
              morph = core_morph_cpp_CMorph_ctor_FUN_0052b310(this_ptr_00);
            }
            if (morph != (CMorph *)0x0) {
              core_morph_cpp_CMorph_editMorph_FUN_0052bcb0(morph);
              g_CurrentDebugLine = 0x295;
              g_CurrentDebugFilename = "..\\core\\main.c";
              if (morph != (CMorph *)0x0) {
                pCVar7 = core_morph_cpp_CMorph_dtor_FUN_0052b330(morph,0);
                shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pCVar7);
              }
            }
          }
        }
      }
      else if (uVar1 < 0x4e) {
        core_msnedit_cpp_CDemonMission_showEditorMenu_FUN_005381e0(g_CDemonMissionPtr);
      }
      else if (0x52 < uVar1) {
        if (uVar1 < 0x54) {
          core_skeledit_cpp_viewModel_FUN_00598fc0();
        }
        else if (uVar1 == 0x5a) {
          shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
                    (g_CEditorToolsPtr,local_328);
          strcpy(local_20, "memdump.txt");
          output_file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                  (local_20,(char *)0x0,"wt","..\\core\\main.c",0x2c0);
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
    } while (uVar1 != 0x1b);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    return;
  }
  pcVar3 = support_newmsg_cpp_decryptMessage_FUN_00544270(g_LicenseAgreement);
  iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40(g_EditorFont,pcVar3);
  shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(&local_60);
  iVar2 = g_ClipTop;
  right_pos = g_ClipRight;
  bottom_pos = g_ClipBottom;
  iVar5 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            (&local_60,g_WindowWidth - iVar5,iVar2,right_pos,bottom_pos);
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
    iVar2 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&local_228);
    if (iVar2 != 0) {
      engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
                (&local_528,"AcceptedLicenseAgreement",1);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_144,0);
      shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_228,0);
      shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20(&local_60,0);
      goto LAB_0050740e;
    }
    iVar2 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&local_144);
    if (iVar2 != 0) break;
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_EditorFont,pcVar3,0x1e,-local_60.scroll_position,0xff,-1);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(&local_228,0);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(&local_144,0);
    shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
  } while (iVar2 == 0);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_144,0);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(&local_228,0);
  shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20(&local_60,0);
  return;
}
