// Name: core_main.c_showDeveloperToolsMenu_FUN_005073a0
// Address: 005073a0
// Address Range: [[005073a0, 00507a46]]
// Convention: __cdecl
// Signature: void core_main.c_showDeveloperToolsMenu_FUN_005073a0(void)
// Cross-references:
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 005132c8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Editor_0063169a
//   TerminatedCString s_system_nocturne_ini_006316a1
//   TerminatedCString s_AcceptedLicenseAgreement_006316b7
//   SEncryptedMessage g_LicenseAgreement
//   TerminatedCString s_I_accept_the_terms_of_th_00634fe8
//   TerminatedCString s_I_DO_NOT_accept_the_term_00635014
//   TerminatedCString s_AcceptedLicenseAgreement_00635047
//   TerminatedCString s_Nocturne_R_Debug_editor__00635060
//   TerminatedCString s_s_1_Play_a_mission_0063507e
//   TerminatedCString s_s_2_Enter_the_Demented_R_00635090
//   TerminatedCString s_s_4_Enter_the_Demon_Set__006350ba
//   TerminatedCString s_s_5_Enter_the_Demon_Keyf_006350d8
//   TerminatedCString s_s_6_Procedural_texture_s_00635102
//   TerminatedCString s_s_7_Enter_the_Demon_cour_0063511f
//   TerminatedCString s_A_File_Manager_00635140
//   TerminatedCString s_B_Enter_the_Demon_Morph__00635150
//   TerminatedCString s_M_Enter_the_Demon_Missio_00635170
//   TerminatedCString s_S_Enter_the_Demon_Skelet_00635192
//   TerminatedCString s_Z_Display_memory_usage_i_006351b5
//   TerminatedCString s_core_main_c_006351d2
//   TerminatedCString s_core_main_c_006351e1
//   TerminatedCString s_Out_of_memory_006351f0
//   TerminatedCString s_core_main_c_006351fe
//   TerminatedCString s_core_main_c_0063520d
//   TerminatedCString s_core_main_c_0063521c
//   TerminatedCString s_core_main_c_0063522b
//   TerminatedCString s_wt_0063523a
//   TerminatedCString s_core_main_c_0063523d
//   TerminatedCString s_Can_t_createpen_s_0063524c
//   TerminatedCString s_core_main_c_0063525f
//   TerminatedCString s_s_Also_dumped_memory_usa_0063526e
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   TerminatedCString s_memdump_txt_0067d060
//   undefined4 s_txt_0067d068
//   char* g_CurrentDebugFilename = 0067d200
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   void* PTR_DAT_00680cf8 = 030e5b50
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_00747874
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   CGame g_CGameInstance
//   void* g_CKeysPtr
//   CDemonFileManager g_CDemonFileManagerInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_030e5b50
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_course.cpp_CCourse_ctor_FUN_004424c0
//   core_course.cpp_CCourse_dtor_FUN_004424e0
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040
//   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_morph.cpp_CMorphModel_FUN_0052b330
//   core_morph.cpp_FUN_0052b310
//   core_morph.cpp_FUN_0052bcb0
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0
//   core_procedur.cpp_ProceduralTextureMenuPrompt_FUN_00554880
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940
//   core_skeledit.cpp_viewModel_FUN_00598fc0
//   crt_ctype.c_toupper_FUN_005ff9e0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   engine_ini.cpp_CIniFile_ctor_FUN_004fba70
//   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   shape_design.c_showShapeEditorMenu_FUN_0046f290
//   shape_edittool.cpp_calculateGridWidth_FUN_004a6490
//   shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
//   shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
//   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_memdbg.cpp_debugMemdump_FUN_0050f6c0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   support_newmsg.cpp_decryptMessage_FUN_00544270
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

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
  undefined1 uStack0000007c;
  undefined1 uStack0000007d;
  undefined1 uStack0000007e;
  undefined1 uStack0000007f;
  undefined4 auStackY_f6c [655];
  int right_pos;
  int in_stack_fffffaf0;
  char *directory;
  char *mode;
  char *source_file;
  char acStack_290 [136];
  undefined1 auStack_208 [28];
  undefined1 auStack_1ec [16];
  undefined1 auStack_1dc [208];
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [180];
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
          *(undefined4 *)(&stack0x00000080 + (uint)bVar7 * -8) =
               *(undefined4 *)("memdump.txt" + (uint)bVar7 * -8 + 4);
          *(undefined4 *)(&stack0x00000084 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(undefined4 *)("memdump.txt" + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
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
  pcVar3 = support_newmsg_cpp_decryptMessage_FUN_00544270(&g_LicenseAgreement);
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


// Assembly code:
// 005073a0: PUSH EBX
//   Label: core_main.c_showDeveloperToolsMenu_FUN_005073a0
// 005073a1: PUSH ESI
// 005073a2: PUSH EDI
// 005073a3: PUSH EBP
// 005073a4: SUB ESP,0x518
// 005073aa: PUSH 0x2dd4130
//   XREF to: 02dd4130 (DATA)
// 005073af: CALL engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
//   XREF to: 004bccf0 (UNCONDITIONAL_CALL)
// 005073b4: ADD ESP,0x4
// 005073b7: TEST EAX,EAX
// 005073b9: JNZ 0x005073c6
//   XREF to: 005073c6 (CONDITIONAL_JUMP)
// 005073bb: ADD ESP,0x518
// 005073c1: POP EBP
// 005073c2: POP EDI
// 005073c3: POP ESI
// 005073c4: POP EBX
// 005073c5: RET
// 005073c6: PUSH 0x63169a
//   Label: LAB_005073c6
//   XREF to: 0063169a (DATA)
// 005073cb: PUSH 0x6316a1
//   XREF to: 006316a1 (DATA)
// 005073d0: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x528] (DATA)
// 005073d4: PUSH EAX
// 005073d5: CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70
//   XREF to: 004fba70 (UNCONDITIONAL_CALL)
// 005073da: ADD ESP,0xc
// 005073dd: LEA EAX,[ESP + 0x514]
//   XREF to: Stack[-0x14] (DATA)
// 005073e4: PUSH EAX
// 005073e5: PUSH 0x6316b7
//   XREF to: 006316b7 (DATA)
// 005073ea: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x528] (DATA)
// 005073ee: XOR EDX,EDX
// 005073f0: PUSH EAX
// 005073f1: MOV dword ptr [ESP + 0x520],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005073f8: CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
//   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
// 005073fd: ADD ESP,0xc
// 00507400: CMP dword ptr [ESP + 0x514],0x0
//   XREF to: Stack[-0x14] (READ)
// 00507408: JZ 0x0050753b
//   XREF to: 0050753b (CONDITIONAL_JUMP)
// 0050740e: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0050740e
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00507413: PUSH 0x0
// 00507415: PUSH 0x0
// 00507417: PUSH 0x635060
//   XREF to: 00635060 (DATA)
// 0050741c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00507421: ADD ESP,0xc
// 00507424: PUSH 0x16
// 00507426: PUSH 0x0
// 00507428: PUSH 0x63507e
//   XREF to: 0063507e (DATA)
// 0050742d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00507432: ADD ESP,0xc
// 00507435: PUSH 0x21
// 00507437: PUSH 0x0
// 00507439: PUSH 0x635090
//   XREF to: 00635090 (DATA)
// 0050743e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00507443: ADD ESP,0xc
// 00507446: PUSH 0x37
// 00507448: PUSH 0x0
// 0050744a: PUSH 0x6350ba
//   XREF to: 006350ba (DATA)
// 0050744f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00507454: ADD ESP,0xc
// 00507457: PUSH 0x42
// 00507459: PUSH 0x0
// 0050745b: PUSH 0x6350d8
//   XREF to: 006350d8 (DATA)
// 00507460: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00507465: ADD ESP,0xc
// 00507468: PUSH 0x4d
// 0050746a: PUSH 0x0
// 0050746c: PUSH 0x635102
//   XREF to: 00635102 (DATA)
// 00507471: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00507476: ADD ESP,0xc
// 00507479: PUSH 0x58
// 0050747b: PUSH 0x0
// 0050747d: PUSH 0x63511f
//   XREF to: 0063511f (DATA)
// 00507482: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00507487: ADD ESP,0xc
// 0050748a: PUSH 0x6e
// 0050748c: PUSH 0x0
// 0050748e: PUSH 0x635140
//   XREF to: 00635140 (DATA)
// 00507493: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00507498: ADD ESP,0xc
// 0050749b: PUSH 0x79
// 0050749d: PUSH 0x0
// 0050749f: PUSH 0x635150
//   XREF to: 00635150 (DATA)
// 005074a4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005074a9: ADD ESP,0xc
// 005074ac: PUSH 0x84
// 005074b1: PUSH 0x0
// 005074b3: PUSH 0x635170
//   XREF to: 00635170 (DATA)
// 005074b8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005074bd: ADD ESP,0xc
// 005074c0: PUSH 0x8f
// 005074c5: PUSH 0x0
// 005074c7: PUSH 0x635192
//   XREF to: 00635192 (DATA)
// 005074cc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005074d1: ADD ESP,0xc
// 005074d4: PUSH 0xbb
// 005074d9: PUSH 0x0
// 005074db: PUSH 0x6351b5
//   XREF to: 006351b5 (DATA)
// 005074e0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005074e5: ADD ESP,0xc
// 005074e8: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005074ed: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005074f2: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 005074f7: AND EAX,0xff
// 005074fc: PUSH EAX
// 005074fd: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 00507502: ADD ESP,0x4
// 00507505: MOV EBP,EAX
// 00507507: CMP EAX,0x37
// 0050750a: JNC 0x005079c5
//   XREF to: 005079c5 (CONDITIONAL_JUMP)
// 00507510: CMP EAX,0x34
// 00507513: JNC 0x00507a10
//   XREF to: 00507a10 (CONDITIONAL_JUMP)
// 00507519: CMP EAX,0x31
// 0050751c: JNC 0x00507a33
//   XREF to: 00507a33 (CONDITIONAL_JUMP)
// 00507522: CMP EBP,0x1b
//   Label: LAB_00507522
// 00507525: JNZ 0x0050740e
//   XREF to: 0050740e (CONDITIONAL_JUMP)
// 0050752b: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00507530: ADD ESP,0x518
// 00507536: POP EBP
// 00507537: POP EDI
// 00507538: POP ESI
// 00507539: POP EBX
// 0050753a: RET
// 0050753b: PUSH 0x6316d0
//   Label: LAB_0050753b
//   XREF to: 006316d0 (DATA)
// 00507540: CALL support_newmsg.cpp_decryptMessage_FUN_00544270
//   XREF to: 00544270 (UNCONDITIONAL_CALL)
// 00507545: ADD ESP,0x4
// 00507548: PUSH EAX
// 00507549: MOV EBX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0050754f: PUSH EBX
// 00507550: MOV EBP,EAX
// 00507552: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   XREF to: 004cff40 (UNCONDITIONAL_CALL)
// 00507557: MOV EBX,EAX
// 00507559: ADD ESP,0x8
// 0050755c: MOV ESI,EAX
// 0050755e: LEA EAX,[ESP + 0x4c8]
//   XREF to: Stack[-0x60] (DATA)
// 00507565: PUSH EAX
// 00507566: CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)
// 0050756b: ADD ESP,0x4
// 0050756e: MOV EDI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00507574: PUSH EDI
// 00507575: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 0050757a: PUSH EAX
// 0050757b: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00507581: PUSH EDX
// 00507582: CALL shape_edittool.cpp_calculateGridWidth_FUN_004a6490
//   XREF to: 004a6490 (UNCONDITIONAL_CALL)
// 00507587: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0050758d: SUB EDI,EAX
// 0050758f: PUSH EDI
// 00507590: LEA EAX,[ESP + 0x4d8]
//   XREF to: Stack[-0x60] (DATA)
// 00507597: PUSH EAX
// 00507598: CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   XREF to: 004a5b60 (UNCONDITIONAL_CALL)
// 0050759d: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 005075a2: ADD ESP,0x14
// 005075a5: MOV dword ptr [ESP + 0x4d0],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005075ac: LEA EAX,[ESP + 0x300]
//   XREF to: Stack[-0x228] (DATA)
// 005075b3: ADD EBX,0x64
// 005075b6: PUSH EAX
// 005075b7: MOV dword ptr [ESP + 0x4d0],EBX
//   XREF to: Stack[-0x5c] (WRITE)
// 005075be: CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   XREF to: 004a64e0 (UNCONDITIONAL_CALL)
// 005075c3: ADD ESP,0x4
// 005075c6: LEA EAX,[ESP + 0x3e4]
//   XREF to: Stack[-0x144] (DATA)
// 005075cd: PUSH EAX
// 005075ce: CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
//   XREF to: 004a64e0 (UNCONDITIONAL_CALL)
// 005075d3: ADD ESP,0x4
// 005075d6: XOR EDI,EDI
// 005075d8: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_005075d8
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005075dd: LEA EAX,[ESP + 0x4c8]
//   XREF to: Stack[-0x60] (DATA)
// 005075e4: PUSH EAX
// 005075e5: CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
// 005075ea: ADD ESP,0x4
// 005075ed: LEA EAX,[ESP + 0x4c8]
//   XREF to: Stack[-0x60] (DATA)
// 005075f4: PUSH EAX
// 005075f5: CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   XREF to: 004a5c10 (UNCONDITIONAL_CALL)
// 005075fa: ADD ESP,0x4
// 005075fd: MOV EAX,ESI
// 005075ff: SUB EAX,dword ptr [ESP + 0x4c8]
//   XREF to: Stack[-0x60] (READ)
// 00507606: PUSH 0x634fe8
//   XREF to: 00634fe8 (DATA)
// 0050760b: ADD EAX,0xa
// 0050760e: PUSH EAX
// 0050760f: PUSH 0x1e
// 00507611: LEA EAX,[ESP + 0x30c]
//   XREF to: Stack[-0x228] (DATA)
// 00507618: PUSH EAX
// 00507619: CALL shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
//   XREF to: 004a6550 (UNCONDITIONAL_CALL)
// 0050761e: ADD ESP,0x10
// 00507621: MOV EAX,ESI
// 00507623: SUB EAX,dword ptr [ESP + 0x4c8]
//   XREF to: Stack[-0x60] (READ)
// 0050762a: PUSH 0x635014
//   XREF to: 00635014 (DATA)
// 0050762f: ADD EAX,0x28
// 00507632: PUSH EAX
// 00507633: PUSH 0x1e
// 00507635: LEA EAX,[ESP + 0x3f0]
//   XREF to: Stack[-0x144] (DATA)
// 0050763c: PUSH EAX
// 0050763d: CALL shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
//   XREF to: 004a6550 (UNCONDITIONAL_CALL)
// 00507642: ADD ESP,0x10
// 00507645: LEA EAX,[ESP + 0x300]
//   XREF to: Stack[-0x228] (DATA)
// 0050764c: PUSH EAX
// 0050764d: CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   XREF to: 004a6830 (UNCONDITIONAL_CALL)
// 00507652: ADD ESP,0x4
// 00507655: TEST EAX,EAX
// 00507657: JZ 0x005076ad
//   XREF to: 005076ad (CONDITIONAL_JUMP)
// 00507659: PUSH 0x1
// 0050765b: PUSH 0x635047
//   XREF to: 00635047 (DATA)
// 00507660: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x528] (DATA)
// 00507664: PUSH EAX
// 00507665: CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
//   XREF to: 004fbc90 (UNCONDITIONAL_CALL)
// 0050766a: ADD ESP,0xc
// 0050766d: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00507672: PUSH 0x0
// 00507674: LEA EAX,[ESP + 0x3e8]
//   XREF to: Stack[-0x144] (DATA)
// 0050767b: PUSH EAX
// 0050767c: CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   XREF to: 004a6510 (UNCONDITIONAL_CALL)
// 00507681: ADD ESP,0x8
// 00507684: PUSH 0x0
// 00507686: LEA EAX,[ESP + 0x304]
//   XREF to: Stack[-0x228] (DATA)
// 0050768d: PUSH EAX
// 0050768e: CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   XREF to: 004a6510 (UNCONDITIONAL_CALL)
// 00507693: ADD ESP,0x8
// 00507696: PUSH 0x0
// 00507698: LEA EAX,[ESP + 0x4cc]
//   XREF to: Stack[-0x60] (DATA)
// 0050769f: PUSH EAX
// 005076a0: CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
//   XREF to: 004a5b20 (UNCONDITIONAL_CALL)
// 005076a5: ADD ESP,0x8
// 005076a8: JMP 0x0050740e
//   XREF to: 0050740e (UNCONDITIONAL_JUMP)
// 005076ad: LEA EAX,[ESP + 0x3e4]
//   Label: LAB_005076ad
//   XREF to: Stack[-0x144] (DATA)
// 005076b4: PUSH EAX
// 005076b5: CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   XREF to: 004a6830 (UNCONDITIONAL_CALL)
// 005076ba: ADD ESP,0x4
// 005076bd: TEST EAX,EAX
// 005076bf: JNZ 0x00507732
//   XREF to: 00507732 (CONDITIONAL_JUMP)
// 005076c1: PUSH -0x1
// 005076c3: MOV EAX,dword ptr [ESP + 0x4cc]
//   XREF to: Stack[-0x60] (READ)
// 005076ca: PUSH 0xff
// 005076cf: NEG EAX
// 005076d1: PUSH EAX
// 005076d2: PUSH 0x1e
// 005076d4: PUSH EBP
// 005076d5: MOV EAX,[0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 005076da: PUSH EAX
// 005076db: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 005076e0: ADD ESP,0x18
// 005076e3: PUSH EDI
// 005076e4: LEA EAX,[ESP + 0x304]
//   XREF to: Stack[-0x228] (DATA)
// 005076eb: PUSH EAX
// 005076ec: CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   XREF to: 004a65e0 (UNCONDITIONAL_CALL)
// 005076f1: ADD ESP,0x8
// 005076f4: PUSH EDI
// 005076f5: LEA EAX,[ESP + 0x3e8]
//   XREF to: Stack[-0x144] (DATA)
// 005076fc: PUSH EAX
// 005076fd: CALL shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
//   XREF to: 004a65e0 (UNCONDITIONAL_CALL)
// 00507702: ADD ESP,0x8
// 00507705: PUSH EDI
// 00507706: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0050770c: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0050770d: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 00507712: ADD ESP,0x8
// 00507715: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0050771a: PUSH 0x1
// 0050771c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00507721: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00507722: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00507724: CALL dword ptr [EBX + 0x4]
// 00507727: ADD ESP,0x8
// 0050772a: TEST EAX,EAX
// 0050772c: JZ 0x005075d8
//   XREF to: 005075d8 (CONDITIONAL_JUMP)
// 00507732: PUSH 0x0
//   Label: LAB_00507732
// 00507734: LEA EAX,[ESP + 0x3e8]
//   XREF to: Stack[-0x144] (DATA)
// 0050773b: PUSH EAX
// 0050773c: CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   XREF to: 004a6510 (UNCONDITIONAL_CALL)
// 00507741: ADD ESP,0x8
// 00507744: PUSH 0x0
// 00507746: LEA EAX,[ESP + 0x304]
// 0050774d: PUSH EAX
// 0050774e: CALL shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
//   XREF to: 004a6510 (UNCONDITIONAL_CALL)
// 00507753: ADD ESP,0x8
// 00507756: PUSH 0x0
// 00507758: LEA EAX,[ESP + 0x4cc]
// 0050775f: PUSH EAX
// 00507760: CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
//   XREF to: 004a5b20 (UNCONDITIONAL_CALL)
// 00507765: ADD ESP,0x8
// 00507768: ADD ESP,0x518
// 0050776e: POP EBP
// 0050776f: POP EDI
// 00507770: POP ESI
// 00507771: POP EBX
// 00507772: RET
// 00507773: PUSH 0x0
//   Label: LAB_00507773
// 00507775: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0050777a: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 0050777b: CALL core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0
//   XREF to: 004e1cb0 (UNCONDITIONAL_CALL)
// 00507780: ADD ESP,0x8
// 00507783: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 00507788: CALL shape_design.c_showShapeEditorMenu_FUN_0046f290
//   Label: LAB_00507788
//   XREF to: 0046f290 (UNCONDITIONAL_CALL)
// 0050778d: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 00507792: MOV EDI,dword ptr [0x006810c8]
//   Label: LAB_00507792
//   XREF to: 006810c8 (READ)
// 00507798: PUSH EDI
//   XREF to: 03114278 (DATA)
// 00507799: CALL core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940
//   XREF to: 00584940 (UNCONDITIONAL_CALL)
// 0050779e: ADD ESP,0x4
// 005077a1: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 005077a6: PUSH 0x274
//   Label: LAB_005077a6
// 005077ab: PUSH 0x6351d2
//   XREF to: 006351d2 (DATA)
// 005077b0: PUSH 0x56d8
// 005077b5: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005077ba: ADD ESP,0xc
// 005077bd: TEST EAX,EAX
// 005077bf: JZ 0x005077ca
//   XREF to: 005077ca (CONDITIONAL_JUMP)
// 005077c1: PUSH EAX
// 005077c2: CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   XREF to: 00476cf0 (UNCONDITIONAL_CALL)
// 005077c7: ADD ESP,0x4
// 005077ca: MOV EBX,EAX
//   Label: LAB_005077ca
// 005077cc: TEST EAX,EAX
// 005077ce: JNZ 0x005077f2
//   XREF to: 005077f2 (CONDITIONAL_JUMP)
// 005077d0: MOV EAX,0x6351e1
//   XREF to: 006351e1 (PARAM)
// 005077d5: MOV EDX,0x275
// 005077da: PUSH 0x6351f0
//   XREF to: 006351f0 (DATA)
// 005077df: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005077e4: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005077ea: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005077ef: ADD ESP,0x4
// 005077f2: PUSH EBX
//   Label: LAB_005077f2
// 005077f3: MOV ESI,0x277
// 005077f8: CALL core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0
//   XREF to: 0047cbc0 (UNCONDITIONAL_CALL)
// 005077fd: MOV ECX,0x6351fe
//   XREF to: 006351fe (PARAM)
// 00507802: ADD ESP,0x4
// 00507805: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 0050780b: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 00507811: TEST EBX,EBX
// 00507813: JZ 0x00507522
//   XREF to: 00507522 (CONDITIONAL_JUMP)
// 00507819: PUSH 0x0
// 0050781b: PUSH EBX
// 0050781c: CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
//   XREF to: 00476d90 (UNCONDITIONAL_CALL)
// 00507821: ADD ESP,0x8
// 00507824: PUSH EAX
// 00507825: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0050782a: ADD ESP,0x4
// 0050782d: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 00507832: LEA EAX,[ESP + 0x4fc]
//   Label: LAB_00507832
//   XREF to: Stack[-0x2c] (DATA)
// 00507839: PUSH EAX
// 0050783a: CALL core_course.cpp_CCourse_ctor_FUN_004424c0
//   XREF to: 004424c0 (UNCONDITIONAL_CALL)
// 0050783f: ADD ESP,0x4
// 00507842: LEA EAX,[ESP + 0x4fc]
//   XREF to: Stack[-0x2c] (DATA)
// 00507849: PUSH EAX
// 0050784a: CALL core_course.cpp_CCourse_showEditorMenu_FUN_00443040
//   XREF to: 00443040 (UNCONDITIONAL_CALL)
// 0050784f: ADD ESP,0x4
// 00507852: PUSH 0x0
// 00507854: LEA EAX,[ESP + 0x500]
//   XREF to: Stack[-0x2c] (DATA)
// 0050785b: PUSH EAX
// 0050785c: CALL core_course.cpp_CCourse_dtor_FUN_004424e0
//   XREF to: 004424e0 (UNCONDITIONAL_CALL)
// 00507861: ADD ESP,0x8
// 00507864: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 00507869: PUSH 0x2dd4130
//   Label: LAB_00507869
//   XREF to: 02dd4130 (DATA)
// 0050786e: CALL core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270
//   XREF to: 004be270 (UNCONDITIONAL_CALL)
// 00507873: ADD ESP,0x4
// 00507876: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 0050787b: PUSH 0x292
//   Label: LAB_0050787b
// 00507880: PUSH 0x63520d
//   XREF to: 0063520d (DATA)
// 00507885: PUSH 0xc2c
// 0050788a: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0050788f: ADD ESP,0xc
// 00507892: TEST EAX,EAX
// 00507894: JNZ 0x005078e0
//   XREF to: 005078e0 (CONDITIONAL_JUMP)
// 00507896: MOV EBX,EAX
//   Label: LAB_00507896
// 00507898: TEST EBX,EBX
// 0050789a: JZ 0x00507522
//   XREF to: 00507522 (CONDITIONAL_JUMP)
// 005078a0: PUSH EBX
// 005078a1: MOV ESI,0x295
// 005078a6: CALL core_morph.cpp_FUN_0052bcb0
//   XREF to: 0052bcb0 (UNCONDITIONAL_CALL)
// 005078ab: MOV ECX,0x63521c
//   XREF to: 0063521c (PARAM)
// 005078b0: ADD ESP,0x4
// 005078b3: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 005078b9: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 005078bf: TEST EBX,EBX
// 005078c1: JZ 0x00507522
//   XREF to: 00507522 (CONDITIONAL_JUMP)
// 005078c7: PUSH 0x0
// 005078c9: PUSH EBX
// 005078ca: CALL core_morph.cpp_CMorphModel_FUN_0052b330
//   XREF to: 0052b330 (UNCONDITIONAL_CALL)
// 005078cf: ADD ESP,0x8
// 005078d2: PUSH EAX
// 005078d3: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005078d8: ADD ESP,0x4
// 005078db: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 005078e0: PUSH EAX
//   Label: LAB_005078e0
// 005078e1: CALL core_morph.cpp_FUN_0052b310
//   XREF to: 0052b310 (UNCONDITIONAL_CALL)
// 005078e6: ADD ESP,0x4
// 005078e9: JMP 0x00507896
//   XREF to: 00507896 (UNCONDITIONAL_JUMP)
// 005078eb: MOV EDX,dword ptr [0x0067d550]
//   Label: LAB_005078eb
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005078f1: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 005078f2: CALL core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0
//   XREF to: 005381e0 (UNCONDITIONAL_CALL)
// 005078f7: ADD ESP,0x4
// 005078fa: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 005078ff: CALL core_skeledit.cpp_viewModel_FUN_00598fc0
//   Label: LAB_005078ff
//   XREF to: 00598fc0 (UNCONDITIONAL_CALL)
// 00507904: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 00507909: LEA EAX,[ESP + 0x200]
//   Label: LAB_00507909
//   XREF to: Stack[-0x328] (DATA)
// 00507910: PUSH EAX
// 00507911: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00507917: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00507918: CALL shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
//   XREF to: 004a2590 (UNCONDITIONAL_CALL)
// 0050791d: ADD ESP,0x8
// 00507920: PUSH 0x2c0
// 00507925: PUSH 0x63522b
//   XREF to: 0063522b (DATA)
// 0050792a: PUSH 0x63523a
//   XREF to: 0063523a (DATA)
// 0050792f: LEA EDI,[ESP + 0x514]
//   XREF to: Stack[-0x20] (DATA)
// 00507936: PUSH 0x0
// 00507938: LEA EAX,[ESP + 0x518]
//   XREF to: Stack[-0x20] (DATA)
// 0050793f: MOV ESI,0x67d060
//   XREF to: 0067d060 (DATA)
// 00507944: PUSH EAX
// 00507945: MOVSD ES:EDI,ESI
//   XREF to: 0067d060 (READ)
// 00507946: MOVSD ES:EDI,ESI
//   XREF to: 0067d064 (READ)
// 00507947: MOVSD ES:EDI,ESI
//   XREF to: 0067d068 (READ)
//   XREF to: 00747874 (DATA)
// 00507948: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0050794d: ADD ESP,0x14
// 00507950: MOV EBX,EAX
// 00507952: TEST EAX,EAX
// 00507954: JNZ 0x00507981
//   XREF to: 00507981 (CONDITIONAL_JUMP)
// 00507956: LEA EAX,[ESP + 0x508]
//   XREF to: Stack[-0x20] (DATA)
// 0050795d: PUSH EAX
// 0050795e: MOV ESI,0x63523d
//   XREF to: 0063523d (DATA)
// 00507963: MOV EDI,0x2c1
// 00507968: PUSH 0x63524c
//   XREF to: 0063524c (DATA)
// 0050796d: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00507973: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00507979: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050797e: ADD ESP,0x8
// 00507981: PUSH EBX
//   Label: LAB_00507981
// 00507982: CALL shape_memdbg.cpp_debugMemdump_FUN_0050f6c0
//   XREF to: 0050f6c0 (UNCONDITIONAL_CALL)
// 00507987: ADD ESP,0x4
// 0050798a: PUSH 0x2c3
// 0050798f: PUSH 0x63525f
//   XREF to: 0063525f (DATA)
// 00507994: PUSH EBX
// 00507995: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0050799a: ADD ESP,0xc
// 0050799d: LEA EAX,[ESP + 0x508]
//   XREF to: Stack[-0x20] (DATA)
// 005079a4: PUSH EAX
// 005079a5: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x328] (DATA)
// 005079ac: PUSH EAX
// 005079ad: PUSH 0x63526e
//   XREF to: 0063526e (DATA)
// 005079b2: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005079b7: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005079b8: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 005079bd: ADD ESP,0x10
// 005079c0: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 005079c5: JBE 0x00507832
//   Label: LAB_005079c5
//   XREF to: 00507832 (CONDITIONAL_JUMP)
// 005079cb: CMP EAX,0x4d
// 005079ce: JNC 0x005079ed
//   XREF to: 005079ed (CONDITIONAL_JUMP)
// 005079d0: CMP EAX,0x41
// 005079d3: JC 0x00507522
//   XREF to: 00507522 (CONDITIONAL_JUMP)
// 005079d9: JBE 0x00507869
//   XREF to: 00507869 (CONDITIONAL_JUMP)
// 005079df: CMP EAX,0x42
// 005079e2: JZ 0x0050787b
//   XREF to: 0050787b (CONDITIONAL_JUMP)
// 005079e8: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 005079ed: JBE 0x005078eb
//   Label: LAB_005079ed
//   XREF to: 005078eb (CONDITIONAL_JUMP)
// 005079f3: CMP EAX,0x53
// 005079f6: JC 0x00507522
//   XREF to: 00507522 (CONDITIONAL_JUMP)
// 005079fc: JBE 0x005078ff
//   XREF to: 005078ff (CONDITIONAL_JUMP)
// 00507a02: CMP EAX,0x5a
// 00507a05: JZ 0x00507909
//   XREF to: 00507909 (CONDITIONAL_JUMP)
// 00507a0b: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 00507a10: JBE 0x00507792
//   Label: LAB_00507a10
//   XREF to: 00507792 (CONDITIONAL_JUMP)
// 00507a16: CMP EAX,0x35
// 00507a19: JBE 0x005077a6
//   XREF to: 005077a6 (CONDITIONAL_JUMP)
// 00507a1f: MOV EDI,dword ptr [0x00680cf8]
//   XREF to: 00680cf8 (READ)
// 00507a25: PUSH EDI
//   XREF to: 030e5b50 (DATA)
// 00507a26: CALL core_procedur.cpp_ProceduralTextureMenuPrompt_FUN_00554880
//   XREF to: 00554880 (UNCONDITIONAL_CALL)
// 00507a2b: ADD ESP,0x4
// 00507a2e: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
// 00507a33: JBE 0x00507773
//   Label: LAB_00507a33
//   XREF to: 00507773 (CONDITIONAL_JUMP)
// 00507a39: CMP EAX,0x32
// 00507a3c: JZ 0x00507788
//   XREF to: 00507788 (CONDITIONAL_JUMP)
// 00507a42: JMP 0x00507522
//   XREF to: 00507522 (UNCONDITIONAL_JUMP)
