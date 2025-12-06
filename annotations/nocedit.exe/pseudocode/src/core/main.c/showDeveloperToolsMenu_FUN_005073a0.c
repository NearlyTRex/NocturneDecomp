// Name: core_main.c_showDeveloperToolsMenu_FUN_005073a0
// Address: 005073a0
// Address Range: [[005073a0, 00507a46]]
// Convention: __cdecl
// Signature: void core_main.c_showDeveloperToolsMenu_FUN_005073a0(void)

#include "nocturne.h"

void __cdecl core_main_c_showDeveloperToolsMenu_FUN_005073a0(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  CKeyFramedModel *pCVar6;
  CMorphModel *this_ptr;
  void *ptr;
  FILE *output_file;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  byte bVar7;
  byte uStack0000007c;
  byte uStack0000007d;
  byte uStack0000007e;
  byte uStack0000007f;
  uint auStackY_f6c [655];
  int right_pos;
  int in_stack_fffffaf0;
  char *directory;
  char *mode;
  char *source_file;
  char acStack_290 [136];
  byte auStack_208 [28];
  byte auStack_1ec [16];
  byte auStack_1dc [208];
  byte auStack_10c [12];
  byte auStack_100 [8];
  byte auStack_f8 [180];
  CEdScrollBar CStack_44;
  
  bVar7 = 0;
  iVar1 = engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
                    (&g_CDemonFileManagerInstance.base_filemanager);
  if (iVar1 == 0) {
    return;
  }
  engine_ini_cpp_CIniFile_ctor_FUN_004fba70
            ((CIniFile *)&stack0xfffffadc,".\\system\\nocturne.ini",0x63169a);
  engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30
            ((CIniFile *)&stack0xfffffae0,"AcceptedLicenseAgreement",
             (int *)&stack0xfffffff4);
  if (unaff_ESI != 0) {
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
      uVar2 = crt_ctype_c_toupper_FUN_005ff9e0(uVar2 & 0xff);
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
          pCVar6 = (CKeyFramedModel *)
                   shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x56d8,"..\\core\\main.c",0x274);
          if (pCVar6 != (CKeyFramedModel *)0x0) {
            pCVar6 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(pCVar6);
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
        core_course_cpp_CCourse_ctor_FUN_004424c0((CCourse *)&stack0x0000006c);
        core_course_cpp_CCourse_showEditorMenu_FUN_00443040((CCourse *)&stack0x00000070);
        core_course_cpp_CCourse_dtor_FUN_004424e0((CCourse *)&stack0x00000074);
      }
      else if (uVar2 < 0x4d) {
        if (0x40 < uVar2) {
          if (uVar2 < 0x42) {
            core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270
                      (&g_CDemonFileManagerInstance);
          }
          else if (uVar2 == 0x42) {
            this_ptr = (CMorphModel *)
                       shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xc2c,"..\\core\\main.c",0x292);
            if (this_ptr != (CMorphModel *)0x0) {
              this_ptr = (CMorphModel *)core_morph_cpp_FUN_0052b310();
            }
            if (this_ptr != (CMorphModel *)0x0) {
              core_morph_cpp_FUN_0052bcb0();
              g_CurrentDebugLine = 0x295;
              g_CurrentDebugFilename = "..\\core\\main.c";
              if (this_ptr != (CMorphModel *)0x0) {
                core_morph_cpp_CMorphModel_FUN_0052b330(this_ptr);
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
                    (g_CEditorToolsPtr,acStack_290);
          iVar1 = 0x2c0;
          source_file = "..\\core\\main.c";
          mode = "wt";
          directory = (char *)0x0;
          pcVar3 = &stack0x0000007c;
          uStack0000007c = "memdump.txt"[0];
          uStack0000007d = "memdump.txt"[1];
          uStack0000007e = "memdump.txt"[2];
          uStack0000007f = "memdump.txt"[3];
          *(uint *)(&stack0x00000080 + (uint)bVar7 * -8) =
               *(uint *)("memdump.txt" + (uint)bVar7 * -8 + 4);
          *(uint *)(&stack0x00000084 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(uint *)("memdump.txt" + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          output_file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                  (pcVar3,directory,mode,source_file,iVar1);
          if (output_file == (FILE *)0x0) {
            g_CurrentFilename = "..\\core\\main.c";
            g_CurrentLineNumber = 0x2c1;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Can't createpen %s");
          }
          shape_memdbg_cpp_debugMemdump_FUN_0050f6c0(output_file);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(output_file,"..\\core\\main.c",0x2c3);
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"%s\nAlso dumped memory usage to %s");
        }
      }
    } while (uVar2 != 0x1b);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    return;
  }
  pcVar3 = support_newmsg_cpp_decryptMessage_FUN_00544270((SEncryptedMessage *)g_LicenseAgreement);
  iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,pcVar3);
  shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0((CEdScrollBar *)(auStack_f8 + 0xac));
  iVar1 = g_ClipRight;
  right_pos = g_ClipBottom;
  iVar5 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
            (&CStack_44,g_WindowWidth - iVar5,iVar1,right_pos,in_stack_fffffaf0);
  CStack_44.scroll_increment = g_WindowHeight;
  CStack_44.max_value = iVar4 + 100;
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0((CEdButton *)auStack_208);
  shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0((CEdButton *)(auStack_1dc + 0xbc));
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0((CEdScrollBar *)&CStack_44.orientation)
    ;
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)&CStack_44.bounds_left);
    shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
              ((CEdButton *)(auStack_208 + 0x14),0x1e,(iVar4 - CStack_44.bounds_top) + 10,
               "I accept the terms of the license agreement");
    shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
              ((CEdButton *)auStack_10c,0x1e,(iVar4 - CStack_44.bounds_right) + 0x28,
               "I DO NOT accept the terms of the license agreement");
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830((CEdButton *)auStack_1ec);
    if (iVar1 != 0) {
      engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90
                ((CIniFile *)&stack0xfffffb18,"AcceptedLicenseAgreement",1);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      shape_edittool_cpp_CEdButton_dtor_FUN_004a6510((CEdButton *)(auStack_100 + 4));
      shape_edittool_cpp_CEdButton_dtor_FUN_004a6510((CEdButton *)auStack_1dc);
      shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20((CEdScrollBar *)&stack0xfffffff0);
      goto LAB_0050740e;
    }
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830((CEdButton *)(auStack_10c + 8));
    if (iVar1 != 0) break;
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (g_EditorFont,pcVar3,0x1e,-CStack_44.track_end,0xff,-1);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0((CEdButton *)(auStack_1ec + 0xc),0);
    shape_edittool_cpp_CEdButton_paint_FUN_004a65e0((CEdButton *)auStack_f8,0);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
  } while (iVar1 == 0);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510((CEdButton *)auStack_100);
  shape_edittool_cpp_CEdButton_dtor_FUN_004a6510((CEdButton *)(auStack_1ec + 0xc));
  shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20((CEdScrollBar *)&CStack_44.thumb_end);
  return;
}
